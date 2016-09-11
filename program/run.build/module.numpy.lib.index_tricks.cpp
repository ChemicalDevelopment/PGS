/* Generated code for Python source for module 'numpy.lib.index_tricks'
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

/* The _module_numpy$lib$index_tricks is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$index_tricks;
PyDictObject *moduledict_numpy$lib$index_tricks;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_tuple_int_0_false_int_pos_1_int_neg_1_tuple;
extern PyObject *const_str_plain_order;
static PyObject *const_str_digest_9fce22252d81f16af5f47d8c67e196f5;
static PyObject *const_str_plain__axis;
static PyObject *const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple;
static PyObject *const_str_plain_scalartypes;
extern PyObject *const_str_plain__nx;
static PyObject *const_list_fa22549eaa1a878119e86a628980cdb1_list;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_nd_grid;
static PyObject *const_str_plain_ix_;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain__t;
extern PyObject *const_str_plain_matrixlib;
static PyObject *const_str_plain__it;
extern PyObject *const_str_plain_wrap;
extern PyObject *const_str_plain__x;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_function_base;
static PyObject *const_str_digest_fc8926c182d686d26fd1d5b3b74287d6;
static PyObject *const_str_digest_3eb9b2ce1271918b85093c648f730487;
extern PyObject *const_str_plain_mgrid;
static PyObject *const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple;
extern PyObject *const_str_plain_step;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_multi_index;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_r_;
extern PyObject *const_str_plain_next;
extern PyObject *const_str_digest_f462c9dbdab6a6e18585dee27e01f422;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_length;
extern PyObject *const_str_plain_axis;
static PyObject *const_str_plain_c_;
extern PyObject *const_str_plain_newobj;
static PyObject *const_str_digest_a332407a4cd6cc926dbf54a127eff824;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_find_common_type;
static PyObject *const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple;
static PyObject *const_str_plain_fill_diagonal;
extern PyObject *const_float_1_0;
static PyObject *const_str_digest_e0b85dd40506d9fdc856d21937e604a5;
extern PyObject *const_str_plain_nn;
extern PyObject *const_str_plain_res;
static PyObject *const_str_plain_diag_indices_from;
extern PyObject *const_str_plain_transpose;
extern PyObject *const_str_plain_scalar;
static PyObject *const_str_plain_ndincr;
extern PyObject *const_str_plain_as_strided;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_diag_indices;
extern PyObject *const_str_plain_asarray;
static PyObject *const_str_plain_IndexExpression;
extern PyObject *const_str_plain_f_locals;
static PyObject *const_tuple_str_plain_self_str_plain_maketuple_tuple;
extern PyObject *const_str_plain_rc;
extern PyObject *const_str_plain___iter__;
static PyObject *const_tuple_str_plain_diff_tuple;
extern PyObject *const_str_plain_sum;
static PyObject *const_str_plain_CClass;
extern PyObject *const_str_plain_sparse;
extern PyObject *const_str_digest_67205772204d1e33862eb50e826ab1cb;
extern PyObject *const_str_plain_ndmin;
static PyObject *const_str_digest_0e72a689a82b574ba7397ec1f496ec9d;
extern PyObject *const_str_plain_end;
static PyObject *const_dict_0d87fdb65ac69f3e7f132f381a92030e;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_indices;
extern PyObject *const_tuple_str_plain_as_strided_tuple;
extern PyObject *const_str_plain___next__;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_alltrue;
static PyObject *const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple;
static PyObject *const_str_plain__matrix;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_cumprod;
extern PyObject *const_str_plain___getslice__;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_split;
extern PyObject *const_str_plain_ogrid;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_index_tricks;
extern PyObject *const_str_plain_scalars;
static PyObject *const_str_digest_dc389157f25a06c45c9e142fdf180587;
static PyObject *const_str_digest_d685a6f7f529aa109e07a7b645a1f27e;
static PyObject *const_str_plain_ndindex;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_out;
static PyObject *const_str_plain_k2;
extern PyObject *const_str_plain_args;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_defaxes;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___getitem__;
extern PyObject *const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
extern PyObject *const_str_plain_typ;
static PyObject *const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_arraytypes;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_plain_subok;
extern PyObject *const_str_plain_c;
static PyObject *const_str_digest_0db3e65f485c2a70345d144c49db3008;
static PyObject *const_str_plain_maketuple;
static PyObject *const_str_plain_RClass;
extern PyObject *const_str_plain_swapaxes;
extern PyObject *const_int_pos_3;
static PyObject *const_dict_c94aedb3aac0d244f6f14be59f80d888;
extern PyObject *const_dict_a00acf95180a0925f15877b623331589;
extern PyObject *const_str_plain_ravel_multi_index;
extern PyObject *const_str_chr_44;
extern PyObject *const_str_plain_astype;
static PyObject *const_str_digest_8505acbb1962a972bce7e4b8f68e8818;
extern PyObject *const_str_plain_new;
extern PyObject *const_str_plain__getframe;
extern PyObject *const_str_digest_9fcf64fa6d087ae015ed561b4aa4b510;
extern PyObject *const_str_plain_enumerate;
static PyObject *const_str_digest_eaafeca9e90e63e3a37490840913b827;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
extern PyObject *const_str_plain_matrix;
static PyObject *const_str_plain_makemat;
static PyObject *const_tuple_f57186059421a8f2f530b4210f3b6183_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_sparse_tuple;
extern PyObject *const_str_plain_slice;
extern PyObject *const_str_plain_unravel_index;
static PyObject *const_tuple_str_plain_self_str_plain_arr_tuple;
static PyObject *const_str_digest_ba86cdcd3e361316c8e20be24aceabc4;
extern PyObject *const_str_plain_AxisConcatenator;
static PyObject *const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple;
static PyObject *const_str_plain_mymat;
extern PyObject *const_tuple_str_plain_self_str_plain_i_str_plain_j_tuple;
extern PyObject *const_tuple_str_plain_arr_tuple;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain_ndarray;
static PyObject *const_tuple_d41b7300892721d5a465b890d461f3a0_tuple;
extern PyObject *const_tuple_empty;
static PyObject *const_dict_28ebf724697f63eaa96dcded742e9de0;
extern PyObject *const_str_plain_flat;
extern PyObject *const_str_plain_f_back;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57;
extern PyObject *const_tuple_str_plain_self_str_plain_item_tuple;
extern PyObject *const_str_plain_C;
static PyObject *const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple;
static PyObject *const_str_digest_51f9a5b9cf15d5579787ffb54199de0a;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_strides;
static PyObject *const_str_digest_100f78b1941f2d5f8f8676cb34ec95e6;
static PyObject *const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple;
extern PyObject *const_str_plain_vec;
extern PyObject *const_str_plain_f_globals;
extern PyObject *const_str_plain_slobj;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_flags;
static PyObject *const_str_plain_ndenumerate;
static PyObject *const_str_digest_f7ae5c6cb3e962c7e29d5d553b183af2;
extern PyObject *const_str_plain_nd;
extern PyObject *const_str_plain_x;
static PyObject *const_str_digest_64e7f7113a33cb08bdcf9c7fa75b9a20;
extern PyObject *const_str_plain_bool_;
extern PyObject *const_str_plain_col;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_objs;
static PyObject *const_str_plain_s_;
static PyObject *const_str_plain_index_exp;
static PyObject *const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
static PyObject *const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple;
static PyObject *const_str_plain_tempobj;
static PyObject *const_str_digest_1da710977e918243c44af0fa62049bd1;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_bmat;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain__retval;
static PyObject *const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253;
extern PyObject *const_str_plain_newaxis;
static PyObject *const_str_plain_key0;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain_ScalarType;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_dict_b4dcb48ac0b3434981963a3b0a181907;
static PyObject *const_str_digest_51fc40daf3e12e464f55b337ef0dd3f7;
static PyObject *const_tuple_13c448b617a735a40d5fd5aa2d99abf7_tuple;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain_complex;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain_arange;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_str_plain_k1;
extern PyObject *const_str_plain_intp;
extern PyObject *const_str_plain_idx;
extern PyObject *const_str_plain___len__;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain_trans1d;
static PyObject *const_str_digest_768284c408c3a084dbbd31908c895311;
static PyObject *const_dict_24180b9cdfcea30958fba9a165d5c6dd;
extern PyObject *const_str_plain_frame;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_stop;
static PyObject *const_str_plain_oldndim;
extern PyObject *const_str_plain_coords;
extern PyObject *const_str_plain_zerosize_ok;
extern PyObject *const_str_plain_issubdtype;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_tuple_int_pos_2_tuple;
extern PyObject *const_str_plain_nditer;
static PyObject *const_str_digest_4d27999bfd5f6bdb12905dae26741abe;
extern PyObject *const_str_plain_iter;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain_reshape;
extern PyObject *const_tuple_str_plain_function_base_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_final_dtype;
extern PyObject *const_str_plain_zeros_like;
static PyObject *const_list_str_plain_multi_index_str_plain_zerosize_ok_list;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_plain_num;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_int_0_false_int_pos_1_int_neg_1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 1, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 2, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    PyTuple_SET_ITEM( const_tuple_int_0_false_int_pos_1_int_neg_1_tuple, 3, const_int_neg_1 ); Py_INCREF( const_int_neg_1 );
    const_str_digest_9fce22252d81f16af5f47d8c67e196f5 = UNSTREAM_STRING( &constant_bin[ 1056439 ], 32, 0 );
    const_str_plain__axis = UNSTREAM_STRING( &constant_bin[ 363723 ], 5, 1 );
    const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, 0, const_str_plain_ravel_multi_index ); Py_INCREF( const_str_plain_ravel_multi_index );
    PyTuple_SET_ITEM( const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, 1, const_str_plain_unravel_index ); Py_INCREF( const_str_plain_unravel_index );
    const_str_plain_scalartypes = UNSTREAM_STRING( &constant_bin[ 1056471 ], 11, 1 );
    const_list_fa22549eaa1a878119e86a628980cdb1_list = PyList_New( 14 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 0, const_str_plain_ravel_multi_index ); Py_INCREF( const_str_plain_ravel_multi_index );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 1, const_str_plain_unravel_index ); Py_INCREF( const_str_plain_unravel_index );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 2, const_str_plain_mgrid ); Py_INCREF( const_str_plain_mgrid );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 3, const_str_plain_ogrid ); Py_INCREF( const_str_plain_ogrid );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 4, const_str_plain_r_ ); Py_INCREF( const_str_plain_r_ );
    const_str_plain_c_ = UNSTREAM_STRING( &constant_bin[ 558 ], 2, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 5, const_str_plain_c_ ); Py_INCREF( const_str_plain_c_ );
    const_str_plain_s_ = UNSTREAM_STRING( &constant_bin[ 682 ], 2, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 6, const_str_plain_s_ ); Py_INCREF( const_str_plain_s_ );
    const_str_plain_index_exp = UNSTREAM_STRING( &constant_bin[ 1056482 ], 9, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 7, const_str_plain_index_exp ); Py_INCREF( const_str_plain_index_exp );
    const_str_plain_ix_ = UNSTREAM_STRING( &constant_bin[ 1114 ], 3, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 8, const_str_plain_ix_ ); Py_INCREF( const_str_plain_ix_ );
    const_str_plain_ndenumerate = UNSTREAM_STRING( &constant_bin[ 926437 ], 11, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 9, const_str_plain_ndenumerate ); Py_INCREF( const_str_plain_ndenumerate );
    const_str_plain_ndindex = UNSTREAM_STRING( &constant_bin[ 669655 ], 7, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 10, const_str_plain_ndindex ); Py_INCREF( const_str_plain_ndindex );
    const_str_plain_fill_diagonal = UNSTREAM_STRING( &constant_bin[ 1056491 ], 13, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 11, const_str_plain_fill_diagonal ); Py_INCREF( const_str_plain_fill_diagonal );
    const_str_plain_diag_indices = UNSTREAM_STRING( &constant_bin[ 1056504 ], 12, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 12, const_str_plain_diag_indices ); Py_INCREF( const_str_plain_diag_indices );
    const_str_plain_diag_indices_from = UNSTREAM_STRING( &constant_bin[ 1056516 ], 17, 1 );
    PyList_SET_ITEM( const_list_fa22549eaa1a878119e86a628980cdb1_list, 13, const_str_plain_diag_indices_from ); Py_INCREF( const_str_plain_diag_indices_from );
    const_str_plain_nd_grid = UNSTREAM_STRING( &constant_bin[ 482750 ], 7, 1 );
    const_str_plain__it = UNSTREAM_STRING( &constant_bin[ 130113 ], 3, 1 );
    const_str_digest_fc8926c182d686d26fd1d5b3b74287d6 = UNSTREAM_STRING( &constant_bin[ 1056533 ], 1268, 0 );
    const_str_digest_3eb9b2ce1271918b85093c648f730487 = UNSTREAM_STRING( &constant_bin[ 1057801 ], 132, 0 );
    const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple, 1, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple, 2, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple, 3, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_digest_a332407a4cd6cc926dbf54a127eff824 = UNSTREAM_STRING( &constant_bin[ 1057933 ], 280, 0 );
    const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 2, const_str_plain_matrix ); Py_INCREF( const_str_plain_matrix );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 3, const_str_plain_ndmin ); Py_INCREF( const_str_plain_ndmin );
    const_str_plain_trans1d = UNSTREAM_STRING( &constant_bin[ 1058213 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 4, const_str_plain_trans1d ); Py_INCREF( const_str_plain_trans1d );
    const_str_digest_e0b85dd40506d9fdc856d21937e604a5 = UNSTREAM_STRING( &constant_bin[ 1058220 ], 3821, 0 );
    const_str_plain_ndincr = UNSTREAM_STRING( &constant_bin[ 1062041 ], 6, 1 );
    const_str_plain_IndexExpression = UNSTREAM_STRING( &constant_bin[ 1056704 ], 15, 1 );
    const_tuple_str_plain_self_str_plain_maketuple_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_maketuple_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_maketuple = UNSTREAM_STRING( &constant_bin[ 1057096 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_maketuple_tuple, 1, const_str_plain_maketuple ); Py_INCREF( const_str_plain_maketuple );
    const_tuple_str_plain_diff_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_diff_tuple, 0, const_str_plain_diff ); Py_INCREF( const_str_plain_diff );
    const_str_plain_CClass = UNSTREAM_STRING( &constant_bin[ 1062047 ], 6, 1 );
    const_str_digest_0e72a689a82b574ba7397ec1f496ec9d = UNSTREAM_STRING( &constant_bin[ 1062053 ], 43, 0 );
    const_dict_0d87fdb65ac69f3e7f132f381a92030e = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_0d87fdb65ac69f3e7f132f381a92030e, const_str_plain_maketuple, Py_True );
    assert( PyDict_Size( const_dict_0d87fdb65ac69f3e7f132f381a92030e ) == 1 );
    const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 1, const_str_plain_shape ); Py_INCREF( const_str_plain_shape );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 2, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_str_plain__matrix = UNSTREAM_STRING( &constant_bin[ 1062096 ], 7, 1 );
    const_str_digest_dc389157f25a06c45c9e142fdf180587 = UNSTREAM_STRING( &constant_bin[ 1062103 ], 33, 0 );
    const_str_digest_d685a6f7f529aa109e07a7b645a1f27e = UNSTREAM_STRING( &constant_bin[ 1056445 ], 26, 0 );
    const_str_plain_k2 = UNSTREAM_STRING( &constant_bin[ 83322 ], 2, 1 );
    const_str_plain_defaxes = UNSTREAM_STRING( &constant_bin[ 1062136 ], 7, 1 );
    const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 1, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 2, const_str_plain_nd ); Py_INCREF( const_str_plain_nd );
    PyTuple_SET_ITEM( const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 3, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 4, const_str_plain_new ); Py_INCREF( const_str_plain_new );
    const_str_plain_arraytypes = UNSTREAM_STRING( &constant_bin[ 1062143 ], 10, 1 );
    const_str_digest_0db3e65f485c2a70345d144c49db3008 = UNSTREAM_STRING( &constant_bin[ 1062153 ], 1816, 0 );
    const_str_plain_RClass = UNSTREAM_STRING( &constant_bin[ 1063969 ], 6, 1 );
    const_dict_c94aedb3aac0d244f6f14be59f80d888 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_c94aedb3aac0d244f6f14be59f80d888, const_str_plain_sparse, Py_False );
    assert( PyDict_Size( const_dict_c94aedb3aac0d244f6f14be59f80d888 ) == 1 );
    const_str_digest_8505acbb1962a972bce7e4b8f68e8818 = UNSTREAM_STRING( &constant_bin[ 1063975 ], 119, 0 );
    const_str_digest_eaafeca9e90e63e3a37490840913b827 = UNSTREAM_STRING( &constant_bin[ 1064094 ], 546, 0 );
    const_str_plain_makemat = UNSTREAM_STRING( &constant_bin[ 1064640 ], 7, 1 );
    const_tuple_f57186059421a8f2f530b4210f3b6183_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 2, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 3, const_str_plain_typ ); Py_INCREF( const_str_plain_typ );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 5, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 6, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 7, const_str_plain__x ); Py_INCREF( const_str_plain__x );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 8, const_str_plain__t ); Py_INCREF( const_str_plain__t );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 9, const_str_plain_nn ); Py_INCREF( const_str_plain_nn );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 10, const_str_plain_slobj ); Py_INCREF( const_str_plain_slobj );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 11, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 12, const_str_plain_length ); Py_INCREF( const_str_plain_length );
    const_tuple_str_plain_self_str_plain_sparse_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sparse_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_sparse_tuple, 1, const_str_plain_sparse ); Py_INCREF( const_str_plain_sparse );
    const_tuple_str_plain_self_str_plain_arr_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arr_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arr_tuple, 1, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    const_str_digest_ba86cdcd3e361316c8e20be24aceabc4 = UNSTREAM_STRING( &constant_bin[ 1064647 ], 1579, 0 );
    const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_plain_oldndim = UNSTREAM_STRING( &constant_bin[ 1066226 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple, 2, const_str_plain_oldndim ); Py_INCREF( const_str_plain_oldndim );
    const_str_plain_mymat = UNSTREAM_STRING( &constant_bin[ 1066233 ], 5, 1 );
    const_tuple_d41b7300892721d5a465b890d461f3a0_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 1, const_str_plain_ScalarType ); Py_INCREF( const_str_plain_ScalarType );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 2, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 3, const_str_plain_alltrue ); Py_INCREF( const_str_plain_alltrue );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 4, const_str_plain_cumprod ); Py_INCREF( const_str_plain_cumprod );
    PyTuple_SET_ITEM( const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, 5, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    const_dict_28ebf724697f63eaa96dcded742e9de0 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_28ebf724697f63eaa96dcded742e9de0, const_str_plain_sparse, Py_True );
    assert( PyDict_Size( const_dict_28ebf724697f63eaa96dcded742e9de0 ) == 1 );
    const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple, 0, const_str_plain_find_common_type ); Py_INCREF( const_str_plain_find_common_type );
    PyTuple_SET_ITEM( const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple, 1, const_str_plain_issubdtype ); Py_INCREF( const_str_plain_issubdtype );
    const_str_digest_51f9a5b9cf15d5579787ffb54199de0a = UNSTREAM_STRING( &constant_bin[ 1066238 ], 2303, 0 );
    const_str_digest_100f78b1941f2d5f8f8676cb34ec95e6 = UNSTREAM_STRING( &constant_bin[ 1068541 ], 597, 0 );
    const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 1, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 2, const_str_plain_idx ); Py_INCREF( const_str_plain_idx );
    const_str_digest_f7ae5c6cb3e962c7e29d5d553b183af2 = UNSTREAM_STRING( &constant_bin[ 1069138 ], 276, 0 );
    const_str_digest_64e7f7113a33cb08bdcf9c7fa75b9a20 = UNSTREAM_STRING( &constant_bin[ 1069414 ], 249, 0 );
    const_str_digest_ae18caca66ad511d55f1373e7c1a6603 = UNSTREAM_STRING( &constant_bin[ 1069663 ], 47, 0 );
    const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 2, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 3, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    PyTuple_SET_ITEM( const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 4, const_str_plain_step ); Py_INCREF( const_str_plain_step );
    const_str_plain_tempobj = UNSTREAM_STRING( &constant_bin[ 1069710 ], 7, 1 );
    const_str_digest_1da710977e918243c44af0fa62049bd1 = UNSTREAM_STRING( &constant_bin[ 1069717 ], 64, 0 );
    const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 = _PyDict_NewPresized( 2 );
    PyDict_SetItem( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253, const_str_plain_trans1d, const_int_0 );
    PyDict_SetItem( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253, const_str_plain_ndmin, const_int_pos_2 );
    assert( PyDict_Size( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 ) == 2 );
    const_str_plain_key0 = UNSTREAM_STRING( &constant_bin[ 1069781 ], 4, 1 );
    const_dict_b4dcb48ac0b3434981963a3b0a181907 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_b4dcb48ac0b3434981963a3b0a181907, const_str_plain_maketuple, Py_False );
    assert( PyDict_Size( const_dict_b4dcb48ac0b3434981963a3b0a181907 ) == 1 );
    const_str_digest_51fc40daf3e12e464f55b337ef0dd3f7 = UNSTREAM_STRING( &constant_bin[ 1069785 ], 1121, 0 );
    const_tuple_13c448b617a735a40d5fd5aa2d99abf7_tuple = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1070906 ], 275 );
    const_str_plain_k1 = UNSTREAM_STRING( &constant_bin[ 864 ], 2, 1 );
    const_str_digest_768284c408c3a084dbbd31908c895311 = UNSTREAM_STRING( &constant_bin[ 1071181 ], 25, 0 );
    const_dict_24180b9cdfcea30958fba9a165d5c6dd = _PyDict_NewPresized( 2 );
    const_list_str_plain_multi_index_str_plain_zerosize_ok_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_multi_index_str_plain_zerosize_ok_list, 0, const_str_plain_multi_index ); Py_INCREF( const_str_plain_multi_index );
    PyList_SET_ITEM( const_list_str_plain_multi_index_str_plain_zerosize_ok_list, 1, const_str_plain_zerosize_ok ); Py_INCREF( const_str_plain_zerosize_ok );
    PyDict_SetItem( const_dict_24180b9cdfcea30958fba9a165d5c6dd, const_str_plain_flags, const_list_str_plain_multi_index_str_plain_zerosize_ok_list );
    PyDict_SetItem( const_dict_24180b9cdfcea30958fba9a165d5c6dd, const_str_plain_order, const_str_plain_C );
    assert( PyDict_Size( const_dict_24180b9cdfcea30958fba9a165d5c6dd ) == 2 );
    const_str_digest_4d27999bfd5f6bdb12905dae26741abe = UNSTREAM_STRING( &constant_bin[ 1071206 ], 421, 0 );
    const_str_plain_final_dtype = UNSTREAM_STRING( &constant_bin[ 1071162 ], 11, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$index_tricks( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9cdbc186545d0a6456154ec41f7a48ac;
static PyCodeObject *codeobj_8aad1e9d6d469b3ba63804165aab0f49;
static PyCodeObject *codeobj_ad218688f70747964735ec89c7d51c1d;
static PyCodeObject *codeobj_87c548baf7fb0fa2b433d742954702e6;
static PyCodeObject *codeobj_775af500efba432e2ee5cc2851e3d696;
static PyCodeObject *codeobj_777ec82ca969f9e9500c4b052e5e31e6;
static PyCodeObject *codeobj_124aeb6780f46e3db38e5dccc332d25e;
static PyCodeObject *codeobj_a0c94dcc42be76aea0539f4dab9a40df;
static PyCodeObject *codeobj_1f9bca27c27a84739ff9cdcc7fede388;
static PyCodeObject *codeobj_2d0c9e01cbe718b6646f1c3bc1d8ffc7;
static PyCodeObject *codeobj_f069beb303f34f738525a2c9f1875fc3;
static PyCodeObject *codeobj_ac18646354f393e0200c58b410e25c00;
static PyCodeObject *codeobj_70ba033bfe2cd771616bba51beef473b;
static PyCodeObject *codeobj_5f44abcc3e302fda6c686ef97f749eb7;
static PyCodeObject *codeobj_381fcfc88e15b8caf1698a2ec1e9d368;
static PyCodeObject *codeobj_f707bd7dc0870e217e47005592ca0f1f;
static PyCodeObject *codeobj_fe9485c89743c78dfa64d7ba8d7cf079;
static PyCodeObject *codeobj_2563915bbaef482fdf26ed9c6ae027f8;
static PyCodeObject *codeobj_ef1377fe3d30215744b4ebf546073c61;
static PyCodeObject *codeobj_e48852ef4efcdc57916646f4fd2e3eec;
static PyCodeObject *codeobj_54d635da1ee843f01f130168f72636bd;
static PyCodeObject *codeobj_ae4f1761caaab32c7f8eb5d4ed68ed95;
static PyCodeObject *codeobj_f6447dd4e2205582b419dcf5877fc382;
static PyCodeObject *codeobj_ac8af52b0629b92971e6715c1f29cf81;
static PyCodeObject *codeobj_279397eff0a7aabc0b3c25ccff862670;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_1da710977e918243c44af0fa62049bd1;
    codeobj_9cdbc186545d0a6456154ec41f7a48ac = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 151, const_tuple_f57186059421a8f2f530b4210f3b6183_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8aad1e9d6d469b3ba63804165aab0f49 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 251, const_tuple_13c448b617a735a40d5fd5aa2d99abf7_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ad218688f70747964735ec89c7d51c1d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 650, const_tuple_str_plain_self_str_plain_item_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_87c548baf7fb0fa2b433d742954702e6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getslice__, 212, const_tuple_str_plain_self_str_plain_i_str_plain_j_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_775af500efba432e2ee5cc2851e3d696 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getslice__, 341, const_tuple_str_plain_self_str_plain_i_str_plain_j_str_plain_res_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_777ec82ca969f9e9500c4b052e5e31e6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 148, const_tuple_str_plain_self_str_plain_sparse_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_124aeb6780f46e3db38e5dccc332d25e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 242, const_tuple_a7877f0754be2d3bc15ed909925998cc_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a0c94dcc42be76aea0539f4dab9a40df = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 447, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f9bca27c27a84739ff9cdcc7fede388 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 470, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2d0c9e01cbe718b6646f1c3bc1d8ffc7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 502, const_tuple_str_plain_self_str_plain_arr_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f069beb303f34f738525a2c9f1875fc3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 555, const_tuple_str_plain_self_str_plain_shape_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ac18646354f393e0200c58b410e25c00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 647, const_tuple_str_plain_self_str_plain_maketuple_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_70ba033bfe2cd771616bba51beef473b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 519, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5f44abcc3e302fda6c686ef97f749eb7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 563, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_381fcfc88e15b8caf1698a2ec1e9d368 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 215, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f707bd7dc0870e217e47005592ca0f1f = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 345, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fe9485c89743c78dfa64d7ba8d7cf079 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___next__, 505, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2563915bbaef482fdf26ed9c6ae027f8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___next__, 574, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ef1377fe3d30215744b4ebf546073c61 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__retval, 231, const_tuple_str_plain_self_str_plain_res_str_plain_oldndim_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e48852ef4efcdc57916646f4fd2e3eec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diag_indices, 779, const_tuple_str_plain_n_str_plain_ndim_str_plain_idx_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_54d635da1ee843f01f130168f72636bd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_diag_indices_from, 847, const_tuple_str_plain_arr_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ae4f1761caaab32c7f8eb5d4ed68ed95 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fill_diagonal, 665, const_tuple_fb29a8918108efc8ced059d3e5a91acc_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f6447dd4e2205582b419dcf5877fc382 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_index_tricks, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ac8af52b0629b92971e6715c1f29cf81 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ix_, 28, const_tuple_376bccbbd9b06a8399a6d4c17081891d_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_279397eff0a7aabc0b3c25ccff862670 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ndincr, 566, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_1_nd_grid( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_3_RClass( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_4_CClass( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_5_ndenumerate( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_6_ndindex( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_7_IndexExpression( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_2___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_3___getslice__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_4___len__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_1__retval(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_2___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_3___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_4___getslice__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_5___len__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_3_RClass$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_4_CClass$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_2___next__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_3___iter__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_2___iter__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_3_ndincr(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_4___next__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_2___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_1_ix_(  );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_2_fill_diagonal( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_3_diag_indices( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_4_diag_indices_from(  );


// The module function definitions.
static PyObject *impl_numpy$lib$index_tricks$$$function_1_ix_( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *var_out = NULL;
    PyObject *var_nd = NULL;
    PyObject *var_k = NULL;
    PyObject *var_new = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
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
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_out == NULL );
    var_out = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ac8af52b0629b92971e6715c1f29cf81, module_numpy$lib$index_tricks );
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
    tmp_len_arg_1 = par_args;

    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    assert( var_nd == NULL );
    var_nd = tmp_assign_source_2;

    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = par_args;

    frame_function->f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
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
            frame_function->f_lineno = 74;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 74;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 74;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_8;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_new;
        var_new = tmp_assign_source_9;
        Py_INCREF( var_new );
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

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 75;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = var_new;

    frame_function->f_lineno = 75;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_new;
        assert( old != NULL );
        var_new = tmp_assign_source_10;
        Py_DECREF( old );
    }

    tmp_source_name_1 = var_new;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto try_except_handler_2;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 76;
        goto try_except_handler_2;
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
    tmp_make_exception_arg_1 = const_str_digest_dc389157f25a06c45c9e142fdf180587;
    frame_function->f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 77;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    branch_no_1:;
    tmp_source_name_2 = var_new;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto try_except_handler_2;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 78;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = var_new;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astype );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_2;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 80;
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_intp );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 80;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_new;
        assert( old != NULL );
        var_new = tmp_assign_source_11;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_issubdtype );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_issubdtype );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "issubdtype" );
        exception_tb = NULL;

        exception_lineno = 81;
        goto try_except_handler_2;
    }

    tmp_source_name_5 = var_new;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_2;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 81;
        goto try_except_handler_2;
    }

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_bool_ );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 81;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 81;
        goto try_except_handler_2;
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
    // Tried code:
    tmp_source_name_7 = var_new;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_nonzero );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_4;
    }
    frame_function->f_lineno = 82;
    tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_4;
    }
    tmp_assign_source_12 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_3, 0 );
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


        exception_lineno = 82;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_13;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
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

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    tmp_assign_source_14 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_new;
        assert( old != NULL );
        var_new = tmp_assign_source_14;
        Py_INCREF( var_new );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_1 );
    Py_DECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    branch_no_3:;
    tmp_source_name_8 = var_new;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "new" );
        exception_tb = NULL;

        exception_lineno = 83;
        goto try_except_handler_2;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_reshape );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_2;
    }
    tmp_left_name_3 = const_tuple_int_pos_1_tuple;
    tmp_right_name_1 = var_k;

    tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 83;
        goto try_except_handler_2;
    }
    tmp_right_name_2 = PyTuple_New( 1 );
    tmp_source_name_9 = var_new;

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "new" );
        exception_tb = NULL;

        exception_lineno = 83;
        goto try_except_handler_2;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_size );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_right_name_2 );

        exception_lineno = 83;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_2, 0, tmp_tuple_element_1 );
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 83;
        goto try_except_handler_2;
    }
    tmp_left_name_4 = const_tuple_int_pos_1_tuple;
    tmp_left_name_6 = var_nd;

    tmp_right_name_5 = var_k;

    tmp_left_name_5 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_5 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 83;
        goto try_except_handler_2;
    }
    tmp_right_name_6 = const_int_pos_1;
    tmp_right_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 83;
        goto try_except_handler_2;
    }
    tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 83;
        goto try_except_handler_2;
    }
    tmp_args_element_name_6 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 83;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_new;
        var_new = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_source_name_10 = var_out;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_append );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_new;

    frame_function->f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
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
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_tuple_arg_1 = var_out;

    tmp_return_value = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
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

            if ( var_out )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_out,
                    var_out
                );

                assert( res == 0 );
            }

            if ( var_nd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nd,
                    var_nd
                );

                assert( res == 0 );
            }

            if ( var_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    var_k
                );

                assert( res == 0 );
            }

            if ( var_new )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_new,
                    var_new
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_1_ix_ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_out );
    Py_DECREF( var_out );
    var_out = NULL;

    CHECK_OBJECT( (PyObject *)var_nd );
    Py_DECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_new );
    var_new = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)var_out );
    Py_DECREF( var_out );
    var_out = NULL;

    Py_XDECREF( var_nd );
    var_nd = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_new );
    var_new = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_1_ix_ );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_1_nd_grid( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___getitem__ = NULL;
    PyObject *var___getslice__ = NULL;
    PyObject *var___len__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_defaults_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_0db3e65f485c2a70345d144c49db3008;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_defaults_1 = const_tuple_false_tuple;
    tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_1___init__( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_2___getitem__(  );
    assert( var___getitem__ == NULL );
    var___getitem__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_3___getslice__(  );
    assert( var___getslice__ == NULL );
    var___getslice__ = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_4___len__(  );
    assert( var___len__ == NULL );
    var___len__ = tmp_assign_source_6;

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

    if ( var___getitem__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getitem__,
            var___getitem__
        );

        assert( res == 0 );
    }

    if ( var___getslice__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getslice__,
            var___getslice__
        );

        assert( res == 0 );
    }

    if ( var___len__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___len__,
            var___len__
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid );
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

    CHECK_OBJECT( (PyObject *)var___getitem__ );
    Py_DECREF( var___getitem__ );
    var___getitem__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getslice__ );
    Py_DECREF( var___getslice__ );
    var___getslice__ = NULL;

    CHECK_OBJECT( (PyObject *)var___len__ );
    Py_DECREF( var___len__ );
    var___len__ = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_sparse = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_777ec82ca969f9e9500c4b052e5e31e6, module_numpy$lib$index_tricks );
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
    tmp_assattr_name_1 = par_sparse;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_sparse, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
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

            if ( par_sparse )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sparse,
                    par_sparse
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

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

    CHECK_OBJECT( (PyObject *)par_sparse );
    Py_DECREF( par_sparse );
    par_sparse = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid$$$function_1___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_2___getitem__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *var_size = NULL;
    PyObject *var_typ = NULL;
    PyObject *var_k = NULL;
    PyObject *var_step = NULL;
    PyObject *var_start = NULL;
    PyObject *var__x = NULL;
    PyObject *var__t = NULL;
    PyObject *var_nn = NULL;
    PyObject *var_slobj = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_length = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
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
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
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
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
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
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_float_arg_1;
    PyObject *tmp_float_arg_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_int_arg_4;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    bool tmp_is_5;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_cls_6;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_isinstance_inst_6;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
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
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_left_name_16;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_range_arg_2;
    PyObject *tmp_range_arg_3;
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
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    PyObject *tmp_right_name_16;
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
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_size == NULL );
    var_size = tmp_assign_source_1;

    tmp_assign_source_2 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_assign_source_2 != NULL );
    assert( var_typ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_typ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9cdbc186545d0a6456154ec41f7a48ac, module_numpy$lib$index_tricks );
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
    tmp_len_arg_1 = par_key;

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_2;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
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
            frame_function->f_lineno = 155;
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
        PyObject *old = var_k;
        var_k = tmp_assign_source_5;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = par_key;

    tmp_subscript_name_1 = var_k;

    tmp_source_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto try_except_handler_3;
    }
    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_step );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_step;
        var_step = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = par_key;

    tmp_subscript_name_2 = var_k;

    tmp_source_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto try_except_handler_3;
    }
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_start );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_start;

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
    tmp_assign_source_8 = const_int_0;
    {
        PyObject *old = var_start;
        assert( old != NULL );
        var_start = tmp_assign_source_8;
        Py_INCREF( var_start );
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = var_step;

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
    tmp_assign_source_9 = const_int_pos_1;
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_9;
        Py_INCREF( var_step );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_isinstance_inst_1 = var_step;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_complex );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 162;
        goto try_except_handler_3;
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
    tmp_source_name_3 = var_size;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
        goto try_except_handler_3;
    }
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = var_step;

    frame_function->f_lineno = 163;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 163;
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 163;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 163;
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


        exception_lineno = 163;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_10 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_assign_source_10 != NULL );
    {
        PyObject *old = var_typ;
        var_typ = tmp_assign_source_10;
        Py_INCREF( var_typ );
        Py_XDECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_4 = var_size;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto try_except_handler_3;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_math );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_math );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "math" );
        exception_tb = NULL;

        exception_lineno = 167;
        goto try_except_handler_3;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ceil );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 167;
        goto try_except_handler_3;
    }
    tmp_subscribed_name_3 = par_key;

    tmp_subscript_name_3 = var_k;

    tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 167;
        goto try_except_handler_3;
    }
    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_stop );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 167;
        goto try_except_handler_3;
    }
    tmp_right_name_1 = var_start;

    tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 167;
        goto try_except_handler_3;
    }
    tmp_left_name_3 = var_step;

    tmp_right_name_3 = const_float_1_0;
    tmp_right_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 167;
        goto try_except_handler_3;
    }
    tmp_args_element_name_4 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 167;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 167;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_int_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 167;
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 167;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 167;
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


        exception_lineno = 167;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_end_3:;
    tmp_isinstance_inst_2 = var_step;

    tmp_isinstance_cls_2 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_isinstance_cls_2 != NULL );
    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_3;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_3;
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
    tmp_isinstance_inst_3 = var_start;

    tmp_isinstance_cls_3 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_isinstance_cls_3 != NULL );
    tmp_or_left_value_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_3;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_3;
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
    tmp_subscribed_name_4 = par_key;

    tmp_subscript_name_4 = var_k;

    tmp_source_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_3;
    }
    tmp_isinstance_inst_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_stop );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_isinstance_inst_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_3;
    }
    tmp_isinstance_cls_4 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_isinstance_cls_4 != NULL );
    tmp_or_right_value_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    Py_DECREF( tmp_isinstance_inst_4 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_3;
    }
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto try_except_handler_3;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_11 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_assign_source_11 != NULL );
    {
        PyObject *old = var_typ;
        var_typ = tmp_assign_source_11;
        Py_INCREF( var_typ );
        Py_XDECREF( old );
    }

    branch_no_4:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
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

    tmp_source_name_8 = par_self;

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_sparse );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 172;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    // Tried code:
    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_5 = var_size;

    tmp_left_name_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_typ;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typ" );
        exception_tb = NULL;

        exception_lineno = 174;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_left_name_4, 0, tmp_tuple_element_1 );
    tmp_len_arg_2 = var_size;

    tmp_right_name_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 174;
        goto try_except_handler_4;
    }
    tmp_args_element_name_6 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto try_except_handler_4;
    }
    PyThreadState_GET()->frame->f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto try_except_handler_4;
    }
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_4;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_13;

    tmp_assign_source_14 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_14;

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_1__$0;

    tmp_assign_source_15 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 173;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = tmp_list_contraction_1__iter_value_0;

    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__source_iter;
        tmp_list_contraction$tuple_unpack_1__source_iter = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_list_contraction$tuple_unpack_1__source_iter;

    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 173;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__element_1;
        tmp_list_contraction$tuple_unpack_1__element_1 = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_list_contraction$tuple_unpack_1__source_iter;

    tmp_assign_source_18 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 173;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_list_contraction$tuple_unpack_1__element_2;
        tmp_list_contraction$tuple_unpack_1__element_2 = tmp_assign_source_18;
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
    goto try_end_2;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    tmp_assign_source_19 = tmp_list_contraction$tuple_unpack_1__element_1;

    {
        PyObject *old = var__x;
        var__x = tmp_assign_source_19;
        Py_INCREF( var__x );
        Py_XDECREF( old );
    }

    tmp_assign_source_20 = tmp_list_contraction$tuple_unpack_1__element_2;

    {
        PyObject *old = var__t;
        var__t = tmp_assign_source_20;
        Py_INCREF( var__t );
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

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 173;
        goto try_except_handler_4;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_arange );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_4;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var__x;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var__t;

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    PyThreadState_GET()->frame->f_lineno = 173;
    tmp_append_value_1 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_4;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 173;
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid$$$function_2___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
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
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid$$$function_2___getitem__ );
    return NULL;
    outline_result_1:;
    tmp_assign_source_12 = tmp_outline_return_value_1;
    assert( var_nn == NULL );
    var_nn = tmp_assign_source_12;

    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 176;
        goto try_except_handler_2;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_indices );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto try_except_handler_2;
    }
    tmp_args_element_name_7 = var_size;

    tmp_args_element_name_8 = var_typ;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typ" );
        exception_tb = NULL;

        exception_lineno = 176;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 176;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto try_except_handler_2;
    }
    assert( var_nn == NULL );
    var_nn = tmp_assign_source_21;

    branch_end_5:;
    tmp_len_arg_3 = var_size;

    tmp_range_arg_2 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_range_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    tmp_iter_arg_4 = BUILTIN_RANGE( tmp_range_arg_2 );
    Py_DECREF( tmp_range_arg_2 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_22;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_23 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_23 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 177;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    tmp_assign_source_24 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_24;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_5 = par_key;

    tmp_subscript_name_5 = var_k;

    tmp_source_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_6;
    }
    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_step );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_6;
    }
    {
        PyObject *old = var_step;
        var_step = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_6 = par_key;

    tmp_subscript_name_6 = var_k;

    tmp_source_name_12 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_source_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto try_except_handler_6;
    }
    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_start );
    Py_DECREF( tmp_source_name_12 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 179;
        goto try_except_handler_6;
    }
    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = var_start;

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_3 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_27 = const_int_0;
    {
        PyObject *old = var_start;
        assert( old != NULL );
        var_start = tmp_assign_source_27;
        Py_INCREF( var_start );
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_compare_left_4 = var_step;

    tmp_compare_right_4 = Py_None;
    tmp_is_4 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_4 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_28 = const_int_pos_1;
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_28;
        Py_INCREF( var_step );
        Py_DECREF( old );
    }

    branch_no_7:;
    tmp_isinstance_inst_5 = var_step;

    tmp_isinstance_cls_5 = LOOKUP_BUILTIN( const_str_plain_complex );
    assert( tmp_isinstance_cls_5 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 184;
        goto try_except_handler_6;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_9 = var_step;

    frame_function->f_lineno = 185;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_int_arg_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto try_except_handler_6;
    }
    tmp_assign_source_29 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 185;
        goto try_except_handler_6;
    }
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_29;
        Py_DECREF( old );
    }

    tmp_compare_left_5 = var_step;

    tmp_compare_right_5 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 186;
        goto try_except_handler_6;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_subscribed_name_7 = par_key;

    tmp_subscript_name_7 = var_k;

    tmp_source_name_13 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto try_except_handler_6;
    }
    tmp_left_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_stop );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto try_except_handler_6;
    }
    tmp_right_name_5 = var_start;

    tmp_left_name_5 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto try_except_handler_6;
    }
    tmp_left_name_7 = var_step;

    tmp_right_name_7 = const_int_pos_1;
    tmp_float_arg_1 = BINARY_OPERATION_SUB( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_float_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 187;
        goto try_except_handler_6;
    }
    tmp_right_name_6 = TO_FLOAT( tmp_float_arg_1 );
    Py_DECREF( tmp_float_arg_1 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 187;
        goto try_except_handler_6;
    }
    tmp_assign_source_30 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_5, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 187;
        goto try_except_handler_6;
    }
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_30;
        Py_DECREF( old );
    }

    branch_no_9:;
    branch_no_8:;
    tmp_subscribed_name_8 = var_nn;

    tmp_subscript_name_8 = var_k;

    tmp_left_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_6;
    }
    tmp_right_name_8 = var_step;

    if ( tmp_right_name_8 == NULL )
    {
        Py_DECREF( tmp_left_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "step" );
        exception_tb = NULL;

        exception_lineno = 188;
        goto try_except_handler_6;
    }

    tmp_left_name_8 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_9 );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_6;
    }
    tmp_right_name_9 = var_start;

    tmp_ass_subvalue_1 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_8 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_6;
    }
    tmp_ass_subscribed_1 = var_nn;

    tmp_ass_subscript_1 = var_k;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
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

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_source_name_14 = par_self;

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_sparse );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto try_except_handler_2;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 189;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_10 = PyList_New( 1 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_left_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 190;
        goto try_except_handler_2;
    }

    tmp_list_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_newaxis );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_10 );

        exception_lineno = 190;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_left_name_10, 0, tmp_list_element_1 );
    tmp_len_arg_4 = var_size;

    tmp_right_name_10 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_right_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_10 );

        exception_lineno = 190;
        goto try_except_handler_2;
    }
    tmp_assign_source_31 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto try_except_handler_2;
    }
    assert( var_slobj == NULL );
    var_slobj = tmp_assign_source_31;

    tmp_len_arg_5 = var_size;

    tmp_range_arg_3 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_range_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_2;
    }
    tmp_iter_arg_5 = BUILTIN_RANGE( tmp_range_arg_3 );
    Py_DECREF( tmp_range_arg_3 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_2;
    }
    tmp_assign_source_32 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_2;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_32;

    // Tried code:
    loop_start_4:;
    tmp_next_source_4 = tmp_for_loop_3__for_iterator;

    tmp_assign_source_33 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_33 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 191;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_33;
        Py_XDECREF( old );
    }

    tmp_assign_source_34 = tmp_for_loop_3__iter_value;

    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_34;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_2 = const_slice_none_none_none;
    tmp_ass_subscribed_2 = var_slobj;

    tmp_ass_subscript_2 = var_k;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        goto try_except_handler_7;
    }
    tmp_subscribed_name_10 = var_nn;

    tmp_subscript_name_9 = var_k;

    tmp_subscribed_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_9 );
    if ( tmp_subscribed_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_7;
    }
    tmp_subscript_name_10 = var_slobj;

    tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_10 );
    Py_DECREF( tmp_subscribed_name_9 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_7;
    }
    tmp_ass_subscribed_3 = var_nn;

    tmp_ass_subscript_3 = var_k;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_7;
    }
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 194;
        goto try_except_handler_7;
    }

    tmp_ass_subvalue_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_newaxis );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto try_except_handler_7;
    }
    tmp_ass_subscribed_4 = var_slobj;

    tmp_ass_subscript_4 = var_k;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto try_except_handler_7;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    branch_no_10:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_6 == NULL )
    {
        exception_keeper_tb_6 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_6 );
    }
    else if ( exception_keeper_lineno_6 != -1 )
    {
        exception_keeper_tb_6 = ADD_TRACEBACK( exception_keeper_tb_6, frame_function, exception_keeper_lineno_6 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    PUBLISH_EXCEPTION( &exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6 );
    tmp_compare_left_6 = PyThreadState_GET()->exc_type;
    tmp_compare_right_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = PyExc_IndexError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_6, 1, tmp_tuple_element_3 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_6 );

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_17 = par_key;

    tmp_assign_source_35 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_step );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_step;
        var_step = tmp_assign_source_35;
        Py_XDECREF( old );
    }

    tmp_source_name_18 = par_key;

    tmp_assign_source_36 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_stop );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    assert( var_stop == NULL );
    var_stop = tmp_assign_source_36;

    tmp_source_name_19 = par_key;

    tmp_assign_source_37 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_start );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_37;
        Py_XDECREF( old );
    }

    tmp_compare_left_7 = var_start;

    tmp_compare_right_7 = Py_None;
    tmp_is_5 = ( tmp_compare_left_7 == tmp_compare_right_7 );
    if ( tmp_is_5 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assign_source_38 = const_int_0;
    {
        PyObject *old = var_start;
        assert( old != NULL );
        var_start = tmp_assign_source_38;
        Py_INCREF( var_start );
        Py_DECREF( old );
    }

    branch_no_12:;
    tmp_isinstance_inst_6 = var_step;

    tmp_isinstance_cls_6 = LOOKUP_BUILTIN( const_str_plain_complex );
    assert( tmp_isinstance_cls_6 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_9 != NULL );
    tmp_args_element_name_10 = var_step;

    frame_function->f_lineno = 203;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_39 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 203;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_39;
        Py_DECREF( old );
    }

    tmp_int_arg_4 = var_step;

    tmp_assign_source_40 = PyNumber_Int( tmp_int_arg_4 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 204;
        goto frame_exception_exit_1;
    }
    assert( var_length == NULL );
    var_length = tmp_assign_source_40;

    tmp_compare_left_8 = var_step;

    tmp_compare_right_8 = const_int_pos_1;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_20 = par_key;

    tmp_left_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_stop );
    if ( tmp_left_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = var_start;

    tmp_left_name_11 = BINARY_OPERATION_SUB( tmp_left_name_12, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_12 );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_left_name_13 = var_step;

    tmp_right_name_13 = const_int_pos_1;
    tmp_float_arg_2 = BINARY_OPERATION_SUB( tmp_left_name_13, tmp_right_name_13 );
    if ( tmp_float_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_right_name_12 = TO_FLOAT( tmp_float_arg_2 );
    Py_DECREF( tmp_float_arg_2 );
    if ( tmp_right_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_41 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_11, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_11 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 206;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_41;
        Py_DECREF( old );
    }

    branch_no_14:;
    tmp_source_name_21 = par_key;

    tmp_left_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_stop );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_right_name_14 = var_step;

    tmp_assign_source_42 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_14 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_stop;
        assert( old != NULL );
        var_stop = tmp_assign_source_42;
        Py_DECREF( old );
    }

    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 208;
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_arange );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = const_int_0;
    tmp_args_element_name_12 = var_length;

    tmp_args_element_name_13 = const_int_pos_1;
    tmp_args_element_name_14 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_args_element_name_14 != NULL );
    frame_function->f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_left_name_16 = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_left_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_right_name_15 = var_step;

    tmp_left_name_15 = BINARY_OPERATION_MUL( tmp_left_name_16, tmp_right_name_15 );
    Py_DECREF( tmp_left_name_16 );
    if ( tmp_left_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_right_name_16 = var_start;

    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_15, tmp_right_name_16 );
    Py_DECREF( tmp_left_name_15 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_13;
    branch_no_13:;
    tmp_source_name_23 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_23 == NULL ))
    {
        tmp_source_name_23 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_23 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 210;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_arange );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = var_start;

    tmp_args_element_name_16 = var_stop;

    tmp_args_element_name_17 = var_step;

    frame_function->f_lineno = 210;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_13:;
    goto branch_end_11;
    branch_no_11:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_11:;
    // End of try:
    try_end_5:;

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

            if ( par_key )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_key,
                    par_key
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

            if ( var_typ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typ,
                    var_typ
                );

                assert( res == 0 );
            }

            if ( var_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    var_k
                );

                assert( res == 0 );
            }

            if ( var_step )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_step,
                    var_step
                );

                assert( res == 0 );
            }

            if ( var_start )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_start,
                    var_start
                );

                assert( res == 0 );
            }

            if ( var__x )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__x,
                    var__x
                );

                assert( res == 0 );
            }

            if ( var__t )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__t,
                    var__t
                );

                assert( res == 0 );
            }

            if ( var_nn )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nn,
                    var_nn
                );

                assert( res == 0 );
            }

            if ( var_slobj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_slobj,
                    var_slobj
                );

                assert( res == 0 );
            }

            if ( var_stop )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_stop,
                    var_stop
                );

                assert( res == 0 );
            }

            if ( var_length )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_length,
                    var_length
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

    tmp_return_value = var_nn;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid$$$function_2___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)var_size );
    Py_DECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_typ );
    var_typ = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var__x );
    var__x = NULL;

    Py_XDECREF( var__t );
    var__t = NULL;

    Py_XDECREF( var_nn );
    var_nn = NULL;

    Py_XDECREF( var_slobj );
    var_slobj = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)var_size );
    Py_DECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_typ );
    var_typ = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var__x );
    var__x = NULL;

    Py_XDECREF( var__t );
    var__t = NULL;

    Py_XDECREF( var_nn );
    var_nn = NULL;

    Py_XDECREF( var_slobj );
    var_slobj = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_length );
    var_length = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid$$$function_2___getitem__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_3___getslice__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_i = python_pars[ 1 ];
    PyObject *par_j = python_pars[ 2 ];
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_87c548baf7fb0fa2b433d742954702e6, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_i;

    tmp_args_element_name_2 = par_j;

    frame_function->f_lineno = 213;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    par_i
                );

                assert( res == 0 );
            }

            if ( par_j )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_j,
                    par_j
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid$$$function_3___getslice__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)par_j );
    Py_DECREF( par_j );
    par_j = NULL;

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

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)par_j );
    Py_DECREF( par_j );
    par_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid$$$function_3___getslice__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_4___len__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid$$$function_4___len__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_1_nd_grid$$$function_4___len__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var__retval = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___getitem__ = NULL;
    PyObject *var___getslice__ = NULL;
    PyObject *var___len__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_defaults_1;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_8505acbb1962a972bce7e4b8f68e8818;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_1__retval(  );
    assert( var__retval == NULL );
    var__retval = tmp_assign_source_3;

    tmp_defaults_1 = const_tuple_int_0_false_int_pos_1_int_neg_1_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_2___init__( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_3___getitem__(  );
    assert( var___getitem__ == NULL );
    var___getitem__ = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_4___getslice__(  );
    assert( var___getslice__ == NULL );
    var___getslice__ = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_5___len__(  );
    assert( var___len__ == NULL );
    var___len__ = tmp_assign_source_7;

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

    if ( var__retval )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__retval,
            var__retval
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

    if ( var___getitem__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getitem__,
            var___getitem__
        );

        assert( res == 0 );
    }

    if ( var___getslice__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getslice__,
            var___getslice__
        );

        assert( res == 0 );
    }

    if ( var___len__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___len__,
            var___len__
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var__retval );
    Py_DECREF( var__retval );
    var__retval = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getitem__ );
    Py_DECREF( var___getitem__ );
    var___getitem__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getslice__ );
    Py_DECREF( var___getslice__ );
    var___getslice__ = NULL;

    CHECK_OBJECT( (PyObject *)var___len__ );
    Py_DECREF( var___len__ );
    var___len__ = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_1__retval( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_res = python_pars[ 1 ];
    PyObject *var_oldndim = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_result;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ef1377fe3d30215744b4ebf546073c61, module_numpy$lib$index_tricks );
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

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matrix );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 232;
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
    tmp_source_name_2 = par_res;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto frame_exception_exit_1;
    }
    assert( var_oldndim == NULL );
    var_oldndim = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_makemat );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_makemat );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "makemat" );
        exception_tb = NULL;

        exception_lineno = 234;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_res;

    frame_function->f_lineno = 234;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_res;
        assert( old != NULL );
        par_res = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_compexpr_left_1 = var_oldndim;

    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 235;
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
    tmp_source_name_3 = par_self;

    tmp_and_right_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_col );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 235;
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
    tmp_source_name_4 = par_res;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_T );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_res;
        assert( old != NULL );
        par_res = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_no_1:;
    tmp_source_name_5 = par_self;

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__axis );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_axis, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 237;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_source_name_6 = par_self;

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__matrix );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_matrix, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_assattr_name_3 = const_int_0;
    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_col, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_return_value = par_res;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;

        exception_lineno = 240;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_res )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_res,
                    par_res
                );

                assert( res == 0 );
            }

            if ( var_oldndim )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_oldndim,
                    var_oldndim
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_1__retval );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_res );
    par_res = NULL;

    Py_XDECREF( var_oldndim );
    var_oldndim = NULL;

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

    Py_XDECREF( par_res );
    par_res = NULL;

    Py_XDECREF( var_oldndim );
    var_oldndim = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_1__retval );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_2___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_matrix = python_pars[ 2 ];
    PyObject *par_ndmin = python_pars[ 3 ];
    PyObject *par_trans1d = python_pars[ 4 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_124aeb6780f46e3db38e5dccc332d25e, module_numpy$lib$index_tricks );
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
    tmp_assattr_name_1 = par_axis;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__axis, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = par_matrix;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain__matrix, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_3 = par_axis;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_axis, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_4 = par_matrix;

    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_matrix, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_5 = const_int_0;
    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_col, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_6 = par_trans1d;

    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_trans1d, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_7 = par_ndmin;

    tmp_assattr_target_7 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_ndmin, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
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

            if ( par_axis )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_axis,
                    par_axis
                );

                assert( res == 0 );
            }

            if ( par_matrix )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_matrix,
                    par_matrix
                );

                assert( res == 0 );
            }

            if ( par_ndmin )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ndmin,
                    par_ndmin
                );

                assert( res == 0 );
            }

            if ( par_trans1d )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_trans1d,
                    par_trans1d
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_2___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_ndmin );
    Py_DECREF( par_ndmin );
    par_ndmin = NULL;

    CHECK_OBJECT( (PyObject *)par_trans1d );
    Py_DECREF( par_trans1d );
    par_trans1d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_matrix );
    Py_DECREF( par_matrix );
    par_matrix = NULL;

    CHECK_OBJECT( (PyObject *)par_ndmin );
    Py_DECREF( par_ndmin );
    par_ndmin = NULL;

    CHECK_OBJECT( (PyObject *)par_trans1d );
    Py_DECREF( par_trans1d );
    par_trans1d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_2___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_3___getitem__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *var_trans1d = NULL;
    PyObject *var_ndmin = NULL;
    PyObject *var_frame = NULL;
    PyObject *var_mymat = NULL;
    PyObject *var_objs = NULL;
    PyObject *var_scalars = NULL;
    PyObject *var_arraytypes = NULL;
    PyObject *var_scalartypes = NULL;
    PyObject *var_k = NULL;
    PyObject *var_scalar = NULL;
    PyObject *var_step = NULL;
    PyObject *var_start = NULL;
    PyObject *var_stop = NULL;
    PyObject *var_size = NULL;
    PyObject *var_newobj = NULL;
    PyObject *var_key0 = NULL;
    PyObject *var_vec = NULL;
    PyObject *var_x = NULL;
    PyObject *var_tempobj = NULL;
    PyObject *var_k2 = NULL;
    PyObject *var_defaxes = NULL;
    PyObject *var_k1 = NULL;
    PyObject *var_axes = NULL;
    PyObject *var_final_dtype = NULL;
    PyObject *var_res = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
    PyObject *tmp_args_name_6;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_called_name_19;
    PyObject *tmp_called_name_20;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Gt_2;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
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
    PyObject *tmp_compare_left_12;
    PyObject *tmp_compare_left_13;
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
    PyObject *tmp_compare_right_12;
    PyObject *tmp_compare_right_13;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_int_arg_3;
    PyObject *tmp_int_arg_4;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_cls_3;
    PyObject *tmp_isinstance_cls_4;
    PyObject *tmp_isinstance_cls_5;
    PyObject *tmp_isinstance_cls_6;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_isinstance_inst_3;
    PyObject *tmp_isinstance_inst_4;
    PyObject *tmp_isinstance_inst_5;
    PyObject *tmp_isinstance_inst_6;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_kw_name_6;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_range_arg_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
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
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscribed_name_9;
    PyObject *tmp_subscribed_name_10;
    PyObject *tmp_subscribed_name_11;
    PyObject *tmp_subscribed_name_12;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_subscript_name_9;
    PyObject *tmp_subscript_name_10;
    PyObject *tmp_subscript_name_11;
    PyObject *tmp_subscript_name_12;
    PyObject *tmp_tuple_arg_1;
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
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8aad1e9d6d469b3ba63804165aab0f49, module_numpy$lib$index_tricks );
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

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_trans1d );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    assert( var_trans1d == NULL );
    var_trans1d = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndmin );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto frame_exception_exit_1;
    }
    assert( var_ndmin == NULL );
    var_ndmin = tmp_assign_source_2;

    tmp_isinstance_inst_1 = par_key;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 255;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__getframe );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 255;
    tmp_source_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f_back );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    assert( var_frame == NULL );
    var_frame = tmp_assign_source_3;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrix );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrix );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "matrix" );
        exception_tb = NULL;

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bmat );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_key;

    tmp_source_name_6 = var_frame;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_f_globals );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = var_frame;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_f_locals );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 256;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    assert( var_mymat == NULL );
    var_mymat = tmp_assign_source_4;

    tmp_return_value = var_mymat;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_2 = par_key;

    tmp_isinstance_cls_2 = LOOKUP_BUILTIN( const_str_plain_tuple );
    assert( tmp_isinstance_cls_2 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_assign_source_5 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_key;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_5, 0, tmp_tuple_element_1 );
    {
        PyObject *old = par_key;
        assert( old != NULL );
        par_key = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_assign_source_6 = PyList_New( 0 );
    assert( var_objs == NULL );
    var_objs = tmp_assign_source_6;

    tmp_assign_source_7 = PyList_New( 0 );
    assert( var_scalars == NULL );
    var_scalars = tmp_assign_source_7;

    tmp_assign_source_8 = PyList_New( 0 );
    assert( var_arraytypes == NULL );
    var_arraytypes = tmp_assign_source_8;

    tmp_assign_source_9 = PyList_New( 0 );
    assert( var_scalartypes == NULL );
    var_scalartypes = tmp_assign_source_9;

    tmp_len_arg_1 = par_key;

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_10;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            frame_function->f_lineno = 264;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_12;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = Py_False;
    {
        PyObject *old = var_scalar;
        var_scalar = tmp_assign_source_13;
        Py_INCREF( var_scalar );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = par_key;

    tmp_subscript_name_1 = var_k;

    tmp_isinstance_inst_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_isinstance_inst_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto try_except_handler_2;
    }
    tmp_isinstance_cls_3 = LOOKUP_BUILTIN( const_str_plain_slice );
    assert( tmp_isinstance_cls_3 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_3, tmp_isinstance_cls_3 );
    Py_DECREF( tmp_isinstance_inst_3 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
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
    tmp_subscribed_name_2 = par_key;

    tmp_subscript_name_2 = var_k;

    tmp_source_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto try_except_handler_2;
    }
    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_step );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_step;
        var_step = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_3 = par_key;

    tmp_subscript_name_3 = var_k;

    tmp_source_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        goto try_except_handler_2;
    }
    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_start );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_start;
        var_start = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_4 = par_key;

    tmp_subscript_name_4 = var_k;

    tmp_source_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        goto try_except_handler_2;
    }
    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_stop );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_stop;
        var_stop = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_start;

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
    tmp_assign_source_17 = const_int_0;
    {
        PyObject *old = var_start;
        assert( old != NULL );
        var_start = tmp_assign_source_17;
        Py_INCREF( var_start );
        Py_DECREF( old );
    }

    branch_no_4:;
    tmp_compare_left_2 = var_step;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_18 = const_int_pos_1;
    {
        PyObject *old = var_step;
        assert( old != NULL );
        var_step = tmp_assign_source_18;
        Py_INCREF( var_step );
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_isinstance_inst_4 = var_step;

    tmp_isinstance_cls_4 = LOOKUP_BUILTIN( const_str_plain_complex );
    assert( tmp_isinstance_cls_4 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_4, tmp_isinstance_cls_4 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
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
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_4 = var_step;

    frame_function->f_lineno = 275;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_int_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        goto try_except_handler_2;
    }
    tmp_assign_source_19 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_size;
        var_size = tmp_assign_source_19;
        Py_XDECREF( old );
    }

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_function_base );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "function_base" );
        exception_tb = NULL;

        exception_lineno = 276;
        goto try_except_handler_2;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_linspace );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_start;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_stop;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_size;

    tmp_dict_key_1 = const_str_plain_num;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 276;
    tmp_assign_source_20 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 276;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        var_newobj = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 278;
        goto try_except_handler_2;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_arange );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = var_start;

    tmp_args_element_name_6 = var_stop;

    tmp_args_element_name_7 = var_step;

    frame_function->f_lineno = 278;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        var_newobj = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    branch_end_6:;
    tmp_compare_left_3 = var_ndmin;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 279;
        goto try_except_handler_2;
    }

    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 280;
        goto try_except_handler_2;
    }

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_newobj;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_2 = Py_False;
    tmp_dict_key_2 = const_str_plain_copy;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = var_ndmin;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 280;
        goto try_except_handler_2;
    }

    tmp_dict_key_3 = const_str_plain_ndmin;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 280;
    tmp_assign_source_22 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        assert( old != NULL );
        var_newobj = tmp_assign_source_22;
        Py_DECREF( old );
    }

    tmp_compare_left_4 = var_trans1d;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 281;
        goto try_except_handler_2;
    }

    tmp_compare_right_4 = const_int_neg_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_13 = var_newobj;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_swapaxes );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto try_except_handler_2;
    }
    tmp_args_element_name_8 = const_int_neg_1;
    tmp_args_element_name_9 = var_trans1d;

    if ( tmp_args_element_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 282;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        assert( old != NULL );
        var_newobj = tmp_assign_source_23;
        Py_DECREF( old );
    }

    branch_no_8:;
    branch_no_7:;
    goto branch_end_3;
    branch_no_3:;
    tmp_subscribed_name_5 = par_key;

    tmp_subscript_name_5 = var_k;

    tmp_isinstance_inst_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_isinstance_inst_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        goto try_except_handler_2;
    }
    tmp_isinstance_cls_5 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_5 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_5, tmp_isinstance_cls_5 );
    Py_DECREF( tmp_isinstance_inst_5 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_compare_left_5 = var_k;

    tmp_compare_right_5 = const_int_0;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_make_exception_arg_1 = const_str_digest_0e72a689a82b574ba7397ec1f496ec9d;
    frame_function->f_lineno = 285;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 285;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    branch_no_10:;
    tmp_subscribed_name_6 = par_key;

    tmp_subscript_name_6 = const_int_0;
    tmp_assign_source_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_key0;
        var_key0 = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_compare_left_6 = var_key0;

    tmp_compare_right_6 = const_str_plain_rc;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
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
    tmp_assattr_name_1 = Py_True;
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_matrix, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        goto try_except_handler_2;
    }
    tmp_compexpr_left_1 = var_key0;

    tmp_compexpr_right_1 = const_str_plain_c;
    tmp_assattr_name_2 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto try_except_handler_2;
    }
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_col, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 290;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_assattr_name_2 );
    goto loop_start_1;
    branch_no_11:;
    tmp_compare_left_7 = const_str_chr_44;
    tmp_compare_right_7 = var_key0;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_14 = var_key0;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_split );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 293;
    tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_vec;
        var_vec = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    // Tried code:
    // Tried code:
    // Tried code:
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 2;
    tmp_slice_source_1 = var_vec;

    tmp_iter_arg_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto try_except_handler_5;
    }
    tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_list_contraction_1__$0;
        tmp_list_contraction_1__$0 = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    tmp_assign_source_28 = PyList_New( 0 );
    {
        PyObject *old = tmp_list_contraction_1__contraction_result;
        tmp_list_contraction_1__contraction_result = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    loop_start_2:;
    tmp_next_source_2 = tmp_list_contraction_1__$0;

    tmp_assign_source_29 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 296;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_29;
        Py_XDECREF( old );
    }

    tmp_assign_source_30 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_30;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_int_arg_2 = var_x;

    tmp_append_value_1 = PyNumber_Int( tmp_int_arg_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto try_except_handler_5;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto try_except_handler_5;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_3___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
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
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_3___getitem__ );
    return NULL;
    outline_result_1:;
    tmp_iter_arg_2 = tmp_outline_return_value_1;
    tmp_assign_source_26 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_31 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 295;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_31;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_32 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 295;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_32;
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
    tmp_assattr_name_3 = tmp_tuple_unpack_1__element_1;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_axis, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 295;
        goto try_except_handler_4;
    }
    goto try_end_1;
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
    try_end_1:;
    tmp_assign_source_33 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_ndmin;
        var_ndmin = tmp_assign_source_33;
        Py_INCREF( var_ndmin );
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

    tmp_len_arg_2 = var_vec;

    tmp_compare_left_8 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 297;
        goto try_except_handler_3;
    }
    tmp_compare_right_8 = const_int_pos_3;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 297;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_compare_left_8 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_subscribed_name_7 = var_vec;

    tmp_subscript_name_7 = const_int_pos_2;
    tmp_int_arg_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_int_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        goto try_except_handler_3;
    }
    tmp_assign_source_34 = PyNumber_Int( tmp_int_arg_3 );
    Py_DECREF( tmp_int_arg_3 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 298;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_trans1d;
        var_trans1d = tmp_assign_source_34;
        Py_XDECREF( old );
    }

    branch_no_13:;
    goto try_end_2;
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
    tmp_make_exception_arg_2 = const_str_digest_768284c408c3a084dbbd31908c895311;
    frame_function->f_lineno = 301;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 301;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    goto loop_start_1;
    branch_no_12:;
    // Tried code:
    tmp_subscribed_name_8 = par_key;

    tmp_subscript_name_8 = var_k;

    tmp_int_arg_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_int_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto try_except_handler_6;
    }
    tmp_assattr_name_4 = PyNumber_Int( tmp_int_arg_4 );
    Py_DECREF( tmp_int_arg_4 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto try_except_handler_6;
    }
    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_axis, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 303;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_assattr_name_4 );
    goto try_end_3;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_4 == NULL )
    {
        exception_keeper_tb_4 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_4 );
    }
    else if ( exception_keeper_lineno_4 != -1 )
    {
        exception_keeper_tb_4 = ADD_TRACEBACK( exception_keeper_tb_4, frame_function, exception_keeper_lineno_4 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    PUBLISH_EXCEPTION( &exception_keeper_type_4, &exception_keeper_value_4, &exception_keeper_tb_4 );
    tmp_compare_left_9 = PyThreadState_GET()->exc_type;
    tmp_compare_right_9 = PyTuple_New( 2 );
    tmp_tuple_element_4 = PyExc_ValueError;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_compare_right_9, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_compare_right_9, 1, tmp_tuple_element_4 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_9 );

        exception_lineno = 305;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_compare_right_9 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_make_exception_arg_3 = const_str_digest_768284c408c3a084dbbd31908c895311;
    frame_function->f_lineno = 306;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 306;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    goto branch_end_14;
    branch_no_14:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_14:;
    // End of try:
    try_end_3:;
    goto loop_start_1;
    goto branch_end_9;
    branch_no_9:;
    tmp_subscribed_name_9 = par_key;

    tmp_subscript_name_9 = var_k;

    tmp_type_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_9, tmp_subscript_name_9 );
    if ( tmp_type_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto try_except_handler_2;
    }
    tmp_compare_left_10 = BUILTIN_TYPE1( tmp_type_arg_1 );
    Py_DECREF( tmp_type_arg_1 );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto try_except_handler_2;
    }
    tmp_compare_right_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ScalarType );

    if (unlikely( tmp_compare_right_10 == NULL ))
    {
        tmp_compare_right_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ScalarType );
    }

    if ( tmp_compare_right_10 == NULL )
    {
        Py_DECREF( tmp_compare_left_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ScalarType" );
        exception_tb = NULL;

        exception_lineno = 307;
        goto try_except_handler_2;
    }

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_10, tmp_compare_left_10 );
    assert( !(tmp_cmp_In_3 == -1) );
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 308;
        goto try_except_handler_2;
    }

    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_subscribed_name_10 = par_key;

    tmp_subscript_name_10 = var_k;

    tmp_tuple_element_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_10, tmp_subscript_name_10 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 308;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_5 );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = var_ndmin;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 308;
        goto try_except_handler_2;
    }

    tmp_dict_key_4 = const_str_plain_ndmin;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 308;
    tmp_assign_source_35 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        var_newobj = tmp_assign_source_35;
        Py_XDECREF( old );
    }

    tmp_source_name_15 = var_scalars;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_append );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        goto try_except_handler_2;
    }
    tmp_args_element_name_10 = var_k;

    frame_function->f_lineno = 309;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_36 = Py_True;
    {
        PyObject *old = var_scalar;
        assert( old != NULL );
        var_scalar = tmp_assign_source_36;
        Py_INCREF( var_scalar );
        Py_DECREF( old );
    }

    tmp_source_name_16 = var_scalartypes;

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_append );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        goto try_except_handler_2;
    }
    tmp_source_name_17 = var_newobj;

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_dtype );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 311;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 311;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_15;
    branch_no_15:;
    tmp_subscribed_name_11 = par_key;

    tmp_subscript_name_11 = var_k;

    tmp_assign_source_37 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_11, tmp_subscript_name_11 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        var_newobj = tmp_assign_source_37;
        Py_XDECREF( old );
    }

    tmp_compare_left_11 = var_ndmin;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 314;
        goto try_except_handler_2;
    }

    tmp_compare_right_11 = const_int_pos_1;
    tmp_cmp_Gt_2 = RICH_COMPARE_BOOL_GT( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Gt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_2 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 315;
        goto try_except_handler_2;
    }

    tmp_args_name_4 = PyTuple_New( 1 );
    tmp_tuple_element_6 = var_newobj;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_6 );
    tmp_kw_name_4 = PyDict_Copy( const_dict_a00acf95180a0925f15877b623331589 );
    frame_function->f_lineno = 315;
    tmp_assign_source_38 = CALL_FUNCTION( tmp_called_name_12, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_tempobj;
        var_tempobj = tmp_assign_source_38;
        Py_XDECREF( old );
    }

    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 316;
        goto try_except_handler_2;
    }

    tmp_args_name_5 = PyTuple_New( 1 );
    tmp_tuple_element_7 = var_newobj;

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_7 );
    tmp_kw_name_5 = _PyDict_NewPresized( 3 );
    tmp_dict_value_5 = Py_False;
    tmp_dict_key_5 = const_str_plain_copy;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = Py_True;
    tmp_dict_key_6 = const_str_plain_subok;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = var_ndmin;

    if ( tmp_dict_value_7 == NULL )
    {
        Py_DECREF( tmp_args_name_5 );
        Py_DECREF( tmp_kw_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 317;
        goto try_except_handler_2;
    }

    tmp_dict_key_7 = const_str_plain_ndmin;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_7, tmp_dict_value_7 );
    frame_function->f_lineno = 317;
    tmp_assign_source_39 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_args_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        assert( old != NULL );
        var_newobj = tmp_assign_source_39;
        Py_DECREF( old );
    }

    tmp_compexpr_left_2 = var_trans1d;

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 318;
        goto try_except_handler_2;
    }

    tmp_compexpr_right_2 = const_int_neg_1;
    tmp_and_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 318;
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
    tmp_source_name_18 = var_tempobj;

    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ndim );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
        goto try_except_handler_2;
    }
    tmp_compexpr_right_3 = var_ndmin;

    if ( tmp_compexpr_right_3 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 318;
        goto try_except_handler_2;
    }

    tmp_and_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 318;
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

        exception_lineno = 318;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_17;
    }
    else
    {
        goto branch_no_17;
    }
    branch_yes_17:;
    tmp_left_name_1 = var_ndmin;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 319;
        goto try_except_handler_2;
    }

    tmp_source_name_19 = var_tempobj;

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_ndim );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        goto try_except_handler_2;
    }
    tmp_assign_source_40 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 319;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_k2;
        var_k2 = tmp_assign_source_40;
        Py_XDECREF( old );
    }

    tmp_compare_left_12 = var_trans1d;

    if ( tmp_compare_left_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 320;
        goto try_except_handler_2;
    }

    tmp_compare_right_12 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_12, tmp_compare_right_12 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_18;
    }
    else
    {
        goto branch_no_18;
    }
    branch_yes_18:;
    tmp_left_name_2 = var_trans1d;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 321;
        goto try_except_handler_2;
    }

    tmp_left_name_3 = var_k2;

    tmp_right_name_3 = const_int_pos_1;
    tmp_right_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_41 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto try_except_handler_2;
    }
    var_trans1d = tmp_assign_source_41;

    branch_no_18:;
    tmp_range_arg_2 = var_ndmin;

    if ( tmp_range_arg_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ndmin" );
        exception_tb = NULL;

        exception_lineno = 322;
        goto try_except_handler_2;
    }

    tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_2 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto try_except_handler_2;
    }
    tmp_assign_source_42 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_defaxes;
        var_defaxes = tmp_assign_source_42;
        Py_XDECREF( old );
    }

    tmp_assign_source_43 = var_trans1d;

    if ( tmp_assign_source_43 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "trans1d" );
        exception_tb = NULL;

        exception_lineno = 323;
        goto try_except_handler_2;
    }

    {
        PyObject *old = var_k1;
        var_k1 = tmp_assign_source_43;
        Py_INCREF( var_k1 );
        Py_XDECREF( old );
    }

    tmp_slice_source_2 = var_defaxes;

    tmp_slice_upper_1 = var_k1;

    tmp_left_name_5 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_1 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        goto try_except_handler_2;
    }
    tmp_slice_source_3 = var_defaxes;

    tmp_slice_lower_1 = var_k2;

    tmp_right_name_4 = LOOKUP_SLICE( tmp_slice_source_3, tmp_slice_lower_1, Py_None );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 324;
        goto try_except_handler_2;
    }
    tmp_left_name_4 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        goto try_except_handler_2;
    }
    tmp_slice_source_4 = var_defaxes;

    tmp_slice_lower_2 = var_k1;

    tmp_slice_upper_2 = var_k2;

    tmp_right_name_5 = LOOKUP_SLICE( tmp_slice_source_4, tmp_slice_lower_2, tmp_slice_upper_2 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 325;
        goto try_except_handler_2;
    }
    tmp_assign_source_44 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_axes;
        var_axes = tmp_assign_source_44;
        Py_XDECREF( old );
    }

    tmp_source_name_20 = var_newobj;

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_transpose );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto try_except_handler_2;
    }
    tmp_args_element_name_12 = var_axes;

    frame_function->f_lineno = 326;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_45 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newobj;
        assert( old != NULL );
        var_newobj = tmp_assign_source_45;
        Py_DECREF( old );
    }

    branch_no_17:;
    CHECK_OBJECT( var_tempobj );
    Py_DECREF( var_tempobj );
    var_tempobj = NULL;

    branch_no_16:;
    branch_end_15:;
    branch_end_9:;
    branch_end_3:;
    tmp_source_name_21 = var_objs;

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_append );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto try_except_handler_2;
    }
    tmp_args_element_name_13 = var_newobj;

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newobj" );
        exception_tb = NULL;

        exception_lineno = 328;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 328;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    tmp_operand_name_1 = var_scalar;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "scalar" );
        exception_tb = NULL;

        exception_lineno = 329;
        goto try_except_handler_2;
    }

    tmp_and_left_value_2 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto try_except_handler_2;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto try_except_handler_2;
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
    tmp_isinstance_inst_6 = var_newobj;

    if ( tmp_isinstance_inst_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newobj" );
        exception_tb = NULL;

        exception_lineno = 329;
        goto try_except_handler_2;
    }

    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 329;
        goto try_except_handler_2;
    }

    tmp_isinstance_cls_6 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_ndarray );
    if ( tmp_isinstance_cls_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto try_except_handler_2;
    }
    tmp_and_right_value_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_6, tmp_isinstance_cls_6 );
    Py_DECREF( tmp_isinstance_cls_6 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto try_except_handler_2;
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


        exception_lineno = 329;
        goto try_except_handler_2;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_19;
    }
    else
    {
        goto branch_no_19;
    }
    branch_yes_19:;
    tmp_source_name_23 = var_arraytypes;

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_append );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        goto try_except_handler_2;
    }
    tmp_source_name_24 = var_newobj;

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_called_name_16 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newobj" );
        exception_tb = NULL;

        exception_lineno = 330;
        goto try_except_handler_2;
    }

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_dtype );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_16 );

        exception_lineno = 330;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 330;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    branch_no_19:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
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
    try_end_4:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_called_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_find_common_type );

    if (unlikely( tmp_called_name_17 == NULL ))
    {
        tmp_called_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_find_common_type );
    }

    if ( tmp_called_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "find_common_type" );
        exception_tb = NULL;

        exception_lineno = 333;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = var_arraytypes;

    tmp_args_element_name_16 = var_scalartypes;

    frame_function->f_lineno = 333;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16 };
        tmp_assign_source_46 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_17, call_args );
    }

    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    assert( var_final_dtype == NULL );
    var_final_dtype = tmp_assign_source_46;

    tmp_compare_left_13 = var_final_dtype;

    tmp_compare_right_13 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_13 != tmp_compare_right_13 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_20;
    }
    else
    {
        goto branch_no_20;
    }
    branch_yes_20:;
    tmp_iter_arg_4 = var_scalars;

    tmp_assign_source_47 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_47;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_48 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_48 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 335;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_48;
        Py_XDECREF( old );
    }

    tmp_assign_source_49 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_49;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_12 = var_objs;

    tmp_subscript_name_12 = var_k;

    tmp_source_name_25 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_12, tmp_subscript_name_12 );
    if ( tmp_source_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        goto try_except_handler_7;
    }
    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_astype );
    Py_DECREF( tmp_source_name_25 );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        goto try_except_handler_7;
    }
    tmp_args_element_name_17 = var_final_dtype;

    frame_function->f_lineno = 336;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        goto try_except_handler_7;
    }
    tmp_ass_subscribed_1 = var_objs;

    tmp_ass_subscript_1 = var_k;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 336;
        goto try_except_handler_7;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_20:;
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_26 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 338;
        goto frame_exception_exit_1;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_concatenate );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    tmp_args_name_6 = PyTuple_New( 1 );
    tmp_tuple_arg_1 = var_objs;

    tmp_tuple_element_8 = PySequence_Tuple( tmp_tuple_arg_1 );
    if ( tmp_tuple_element_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_name_6 );

        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_6, 0, tmp_tuple_element_8 );
    tmp_kw_name_6 = _PyDict_NewPresized( 1 );
    tmp_source_name_27 = par_self;

    tmp_dict_value_8 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_axis );
    if ( tmp_dict_value_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_name_6 );
        Py_DECREF( tmp_kw_name_6 );

        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_8 = const_str_plain_axis;
    PyDict_SetItem( tmp_kw_name_6, tmp_dict_key_8, tmp_dict_value_8 );
    Py_DECREF( tmp_dict_value_8 );
    frame_function->f_lineno = 338;
    tmp_assign_source_50 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_6, tmp_kw_name_6 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_name_6 );
    Py_DECREF( tmp_kw_name_6 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 338;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_50;

    tmp_source_name_28 = par_self;

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain__retval );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_18 = var_res;

    frame_function->f_lineno = 339;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_called_name_20 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 339;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_key )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_key,
                    par_key
                );

                assert( res == 0 );
            }

            if ( var_trans1d )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_trans1d,
                    var_trans1d
                );

                assert( res == 0 );
            }

            if ( var_ndmin )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ndmin,
                    var_ndmin
                );

                assert( res == 0 );
            }

            if ( var_frame )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_frame,
                    var_frame
                );

                assert( res == 0 );
            }

            if ( var_mymat )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mymat,
                    var_mymat
                );

                assert( res == 0 );
            }

            if ( var_objs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_objs,
                    var_objs
                );

                assert( res == 0 );
            }

            if ( var_scalars )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scalars,
                    var_scalars
                );

                assert( res == 0 );
            }

            if ( var_arraytypes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arraytypes,
                    var_arraytypes
                );

                assert( res == 0 );
            }

            if ( var_scalartypes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scalartypes,
                    var_scalartypes
                );

                assert( res == 0 );
            }

            if ( var_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    var_k
                );

                assert( res == 0 );
            }

            if ( var_scalar )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scalar,
                    var_scalar
                );

                assert( res == 0 );
            }

            if ( var_step )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_step,
                    var_step
                );

                assert( res == 0 );
            }

            if ( var_start )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_start,
                    var_start
                );

                assert( res == 0 );
            }

            if ( var_stop )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_stop,
                    var_stop
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

            if ( var_newobj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_newobj,
                    var_newobj
                );

                assert( res == 0 );
            }

            if ( var_key0 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_key0,
                    var_key0
                );

                assert( res == 0 );
            }

            if ( var_vec )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vec,
                    var_vec
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

            if ( var_tempobj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tempobj,
                    var_tempobj
                );

                assert( res == 0 );
            }

            if ( var_k2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k2,
                    var_k2
                );

                assert( res == 0 );
            }

            if ( var_defaxes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defaxes,
                    var_defaxes
                );

                assert( res == 0 );
            }

            if ( var_k1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k1,
                    var_k1
                );

                assert( res == 0 );
            }

            if ( var_axes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_axes,
                    var_axes
                );

                assert( res == 0 );
            }

            if ( var_final_dtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_final_dtype,
                    var_final_dtype
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_3___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_trans1d );
    var_trans1d = NULL;

    Py_XDECREF( var_ndmin );
    var_ndmin = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_mymat );
    var_mymat = NULL;

    Py_XDECREF( var_objs );
    var_objs = NULL;

    Py_XDECREF( var_scalars );
    var_scalars = NULL;

    Py_XDECREF( var_arraytypes );
    var_arraytypes = NULL;

    Py_XDECREF( var_scalartypes );
    var_scalartypes = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_scalar );
    var_scalar = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_newobj );
    var_newobj = NULL;

    Py_XDECREF( var_key0 );
    var_key0 = NULL;

    Py_XDECREF( var_vec );
    var_vec = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_tempobj );
    var_tempobj = NULL;

    Py_XDECREF( var_k2 );
    var_k2 = NULL;

    Py_XDECREF( var_defaxes );
    var_defaxes = NULL;

    Py_XDECREF( var_k1 );
    var_k1 = NULL;

    Py_XDECREF( var_axes );
    var_axes = NULL;

    Py_XDECREF( var_final_dtype );
    var_final_dtype = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_key );
    par_key = NULL;

    Py_XDECREF( var_trans1d );
    var_trans1d = NULL;

    Py_XDECREF( var_ndmin );
    var_ndmin = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_objs );
    var_objs = NULL;

    Py_XDECREF( var_scalars );
    var_scalars = NULL;

    Py_XDECREF( var_arraytypes );
    var_arraytypes = NULL;

    Py_XDECREF( var_scalartypes );
    var_scalartypes = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_scalar );
    var_scalar = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    Py_XDECREF( var_start );
    var_start = NULL;

    Py_XDECREF( var_stop );
    var_stop = NULL;

    Py_XDECREF( var_size );
    var_size = NULL;

    Py_XDECREF( var_newobj );
    var_newobj = NULL;

    Py_XDECREF( var_key0 );
    var_key0 = NULL;

    Py_XDECREF( var_vec );
    var_vec = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_tempobj );
    var_tempobj = NULL;

    Py_XDECREF( var_k2 );
    var_k2 = NULL;

    Py_XDECREF( var_defaxes );
    var_defaxes = NULL;

    Py_XDECREF( var_k1 );
    var_k1 = NULL;

    Py_XDECREF( var_axes );
    var_axes = NULL;

    Py_XDECREF( var_final_dtype );
    var_final_dtype = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_3___getitem__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_4___getslice__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_i = python_pars[ 1 ];
    PyObject *par_j = python_pars[ 2 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_775af500efba432e2ee5cc2851e3d696, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 342;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_i;

    tmp_args_element_name_2 = par_j;

    frame_function->f_lineno = 342;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 342;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__retval );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_res;

    frame_function->f_lineno = 343;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
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

            if ( par_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    par_i
                );

                assert( res == 0 );
            }

            if ( par_j )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_j,
                    par_j
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_4___getslice__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)par_j );
    Py_DECREF( par_j );
    par_j = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_i );
    Py_DECREF( par_i );
    par_i = NULL;

    CHECK_OBJECT( (PyObject *)par_j );
    Py_DECREF( par_j );
    par_j = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_4___getslice__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_5___len__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_5___len__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_5___len__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_3_RClass( PyObject **python_pars )
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
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_e0b85dd40506d9fdc856d21937e604a5;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_3_RClass$$$function_1___init__(  );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_3_RClass );
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
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_3_RClass );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$class_3_RClass$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a0c94dcc42be76aea0539f4dab9a40df, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AxisConcatenator" );
        exception_tb = NULL;

        exception_lineno = 448;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    tmp_args_element_name_2 = const_int_0;
    frame_function->f_lineno = 448;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 448;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_3_RClass$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_3_RClass$$$function_1___init__ );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_4_CClass( PyObject **python_pars )
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
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_eaafeca9e90e63e3a37490840913b827;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_4_CClass$$$function_1___init__(  );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_4_CClass );
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
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_4_CClass );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$class_4_CClass$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1f9bca27c27a84739ff9cdcc7fede388, module_numpy$lib$index_tricks );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "AxisConcatenator" );
        exception_tb = NULL;

        exception_lineno = 471;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 471;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_self;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_neg_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_4e0f6bd0fa1bf86b2858b03e8f58c253 );
    frame_function->f_lineno = 471;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 471;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_4_CClass$$$function_1___init__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_4_CClass$$$function_1___init__ );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_5_ndenumerate( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___next__ = NULL;
    PyObject *var___iter__ = NULL;
    PyObject *var_next = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_4d27999bfd5f6bdb12905dae26741abe;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_1___init__(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_2___next__(  );
    assert( var___next__ == NULL );
    var___next__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_3___iter__(  );
    assert( var___iter__ == NULL );
    var___iter__ = tmp_assign_source_5;

    tmp_assign_source_6 = var___next__;

    assert( var_next == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_next = tmp_assign_source_6;

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

    if ( var___next__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___next__,
            var___next__
        );

        assert( res == 0 );
    }

    if ( var___iter__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___iter__,
            var___iter__
        );

        assert( res == 0 );
    }

    if ( var_next )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_next,
            var_next
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_5_ndenumerate );
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

    CHECK_OBJECT( (PyObject *)var___next__ );
    Py_DECREF( var___next__ );
    var___next__ = NULL;

    CHECK_OBJECT( (PyObject *)var___iter__ );
    Py_DECREF( var___iter__ );
    var___iter__ = NULL;

    CHECK_OBJECT( (PyObject *)var_next );
    Py_DECREF( var_next );
    var_next = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_5_ndenumerate );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_arr = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2d0c9e01cbe718b6646f1c3bc1d8ffc7, module_numpy$lib$index_tricks );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 503;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_arr;

    frame_function->f_lineno = 503;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 503;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_flat );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 503;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_iter, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 503;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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

            if ( par_arr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arr,
                    par_arr
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_1___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_2___next__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_value_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fe9485c89743c78dfa64d7ba8d7cf079, module_numpy$lib$index_tricks );
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
    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_2 = par_self;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_iter );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coords );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 517;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_source_name_3 = par_self;

    tmp_value_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_iter );
    if ( tmp_value_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 517;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = ITERATOR_NEXT( tmp_value_name_1 );
    Py_DECREF( tmp_value_name_1 );
    if ( tmp_tuple_element_1 == NULL )
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
        Py_DECREF( tmp_return_value );

        exception_lineno = 517;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_2___next__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_2___next__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_3___iter__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_self;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_3___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_3___iter__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_6_ndindex( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___iter__ = NULL;
    PyObject *var_ndincr = NULL;
    PyObject *var___next__ = NULL;
    PyObject *var_next = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_100f78b1941f2d5f8f8676cb34ec95e6;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_1___init__(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_2___iter__(  );
    assert( var___iter__ == NULL );
    var___iter__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_3_ndincr(  );
    assert( var_ndincr == NULL );
    var_ndincr = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_4___next__(  );
    assert( var___next__ == NULL );
    var___next__ = tmp_assign_source_6;

    tmp_assign_source_7 = var___next__;

    assert( var_next == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_next = tmp_assign_source_7;

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

    if ( var___iter__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___iter__,
            var___iter__
        );

        assert( res == 0 );
    }

    if ( var_ndincr )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_ndincr,
            var_ndincr
        );

        assert( res == 0 );
    }

    if ( var___next__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___next__,
            var___next__
        );

        assert( res == 0 );
    }

    if ( var_next )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_next,
            var_next
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_6_ndindex );
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

    CHECK_OBJECT( (PyObject *)var___iter__ );
    Py_DECREF( var___iter__ );
    var___iter__ = NULL;

    CHECK_OBJECT( (PyObject *)var_ndincr );
    Py_DECREF( var_ndincr );
    var_ndincr = NULL;

    CHECK_OBJECT( (PyObject *)var___next__ );
    Py_DECREF( var___next__ );
    var___next__ = NULL;

    CHECK_OBJECT( (PyObject *)var_next );
    Py_DECREF( var_next );
    var_next = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_6_ndindex );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$class_6_ndindex$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_shape = python_pars[ 1 ];
    PyObject *var_x = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_len_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f069beb303f34f738525a2c9f1875fc3, module_numpy$lib$index_tricks );
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
    tmp_len_arg_1 = par_shape;

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 556;
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
    tmp_subscribed_name_1 = par_shape;

    tmp_subscript_name_1 = const_int_0;
    tmp_isinstance_inst_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_isinstance_inst_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        goto frame_exception_exit_1;
    }
    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_and_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_inst_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
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

        exception_lineno = 556;
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
    tmp_subscribed_name_2 = par_shape;

    tmp_subscript_name_2 = const_int_0;
    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 557;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_shape;
        assert( old != NULL );
        par_shape = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_as_strided );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_as_strided );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "as_strided" );
        exception_tb = NULL;

        exception_lineno = 558;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_1 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 558;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 558;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 558;
    tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 558;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_shape;

    tmp_dict_key_1 = const_str_plain_shape;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__nx );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_nx" );
        exception_tb = NULL;

        exception_lineno = 559;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_zeros_like );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 559;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_shape;

    frame_function->f_lineno = 559;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_dict_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 559;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_strides;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 559;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 559;
        goto frame_exception_exit_1;
    }
    assert( var_x == NULL );
    var_x = tmp_assign_source_2;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 560;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_nditer );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_x;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = DEEP_COPY( const_dict_24180b9cdfcea30958fba9a165d5c6dd );
    frame_function->f_lineno = 561;
    tmp_assattr_name_1 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 561;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain__it, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 560;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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

            if ( par_shape )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_shape,
                    par_shape
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_6_ndindex$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_shape );
    Py_DECREF( par_shape );
    par_shape = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

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

    Py_XDECREF( par_shape );
    par_shape = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_6_ndindex$$$function_1___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_6_ndindex$$$function_2___iter__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = par_self;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_6_ndindex$$$function_2___iter__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_6_ndindex$$$function_2___iter__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$class_6_ndindex$$$function_3_ndincr( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_279397eff0a7aabc0b3c25ccff862670, module_numpy$lib$index_tricks );
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
    tmp_value_name_1 = par_self;

    tmp_unused = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_unused == NULL )
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


        exception_lineno = 572;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_6_ndindex$$$function_3_ndincr );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_6_ndindex$$$function_3_ndincr );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_6_ndindex$$$function_4___next__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2563915bbaef482fdf26ed9c6ae027f8, module_numpy$lib$index_tricks );
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

    tmp_value_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__it );
    if ( tmp_value_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        goto frame_exception_exit_1;
    }
    tmp_unused = ITERATOR_NEXT( tmp_value_name_1 );
    Py_DECREF( tmp_value_name_1 );
    if ( tmp_unused == NULL )
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


        exception_lineno = 586;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = par_self;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain__it );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_multi_index );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_6_ndindex$$$function_4___next__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_6_ndindex$$$function_4___next__ );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$index_tricks$$$class_7_IndexExpression( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___getitem__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_82d72071fc1da9db8c6dd31f1049410c;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_fc8926c182d686d26fd1d5b3b74287d6;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_1___init__(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_2___getitem__(  );
    assert( var___getitem__ == NULL );
    var___getitem__ = tmp_assign_source_4;

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

    if ( var___getitem__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getitem__,
            var___getitem__
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_7_IndexExpression );
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

    CHECK_OBJECT( (PyObject *)var___getitem__ );
    Py_DECREF( var___getitem__ );
    var___getitem__ = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getitem__ );
    Py_DECREF( var___getitem__ );
    var___getitem__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_7_IndexExpression );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_maketuple = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_frame_locals;
    bool tmp_result;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ac18646354f393e0200c58b410e25c00, module_numpy$lib$index_tricks );
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
    tmp_assattr_name_1 = par_maketuple;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_maketuple, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 648;
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

            if ( par_maketuple )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maketuple,
                    par_maketuple
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_maketuple );
    Py_DECREF( par_maketuple );
    par_maketuple = NULL;

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

    CHECK_OBJECT( (PyObject *)par_maketuple );
    Py_DECREF( par_maketuple );
    par_maketuple = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_1___init__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_2___getitem__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_item = python_pars[ 1 ];
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ad218688f70747964735ec89c7d51c1d, module_numpy$lib$index_tricks );
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

    tmp_and_left_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_maketuple );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 651;
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
    tmp_isinstance_inst_1 = par_item;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
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

        exception_lineno = 651;
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
    tmp_return_value = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_item;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = par_item;

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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_item )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_item,
                    par_item
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_2___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_item );
    Py_DECREF( par_item );
    par_item = NULL;

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

    CHECK_OBJECT( (PyObject *)par_item );
    Py_DECREF( par_item );
    par_item = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_2___getitem__ );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_2_fill_diagonal( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    PyObject *par_wrap = python_pars[ 2 ];
    PyObject *var_end = NULL;
    PyObject *var_step = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_start_name_1;
    PyObject *tmp_step_name_1;
    PyObject *tmp_stop_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ae4f1761caaab32c7f8eb5d4ed68ed95, module_numpy$lib$index_tricks );
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

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 758;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 758;
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
    tmp_make_exception_arg_1 = const_str_digest_d685a6f7f529aa109e07a7b645a1f27e;
    frame_function->f_lineno = 759;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 759;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = Py_None;
    assert( var_end == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_end = tmp_assign_source_1;

    tmp_source_name_2 = par_a;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ndim );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 761;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 761;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = par_a;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 764;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_pos_1;
    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 764;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 764;
        goto frame_exception_exit_1;
    }
    assert( var_step == NULL );
    var_step = tmp_assign_source_2;

    tmp_cond_value_1 = par_wrap;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 766;
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
    tmp_source_name_4 = par_a;

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 767;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_pos_1;
    tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 767;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_a;

    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 767;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_int_pos_1;
    tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 767;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 767;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_end;
        assert( old != NULL );
        var_end = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_alltrue );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "alltrue" );
        exception_tb = NULL;

        exception_lineno = 771;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "diff" );
        exception_tb = NULL;

        exception_lineno = 771;
        goto frame_exception_exit_1;
    }

    tmp_source_name_6 = par_a;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 771;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 771;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 771;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 771;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 771;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 771;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 771;
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
    tmp_make_exception_arg_2 = const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
    frame_function->f_lineno = 772;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 772;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_left_name_3 = const_int_pos_1;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_cumprod );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_cumprod );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "cumprod" );
        exception_tb = NULL;

        exception_lineno = 773;
        goto frame_exception_exit_1;
    }

    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_source_name_8 = par_a;

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 773;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_source_name_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_sum );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 773;
    tmp_right_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        goto frame_exception_exit_1;
    }
    assert( var_step == NULL );
    var_step = tmp_assign_source_4;

    branch_end_2:;
    tmp_ass_subvalue_1 = par_val;

    tmp_source_name_9 = par_a;

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_flat );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 776;
        goto frame_exception_exit_1;
    }
    tmp_start_name_1 = Py_None;
    tmp_stop_name_1 = var_end;

    if ( tmp_stop_name_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "end" );
        exception_tb = NULL;

        exception_lineno = 776;
        goto frame_exception_exit_1;
    }

    tmp_step_name_1 = var_step;

    tmp_ass_subscript_1 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    assert( tmp_ass_subscript_1 != NULL );
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 776;
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
            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
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

            if ( par_wrap )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wrap,
                    par_wrap
                );

                assert( res == 0 );
            }

            if ( var_end )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_end,
                    var_end
                );

                assert( res == 0 );
            }

            if ( var_step )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_step,
                    var_step
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_2_fill_diagonal );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    CHECK_OBJECT( (PyObject *)var_step );
    Py_DECREF( var_step );
    var_step = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_end );
    var_end = NULL;

    Py_XDECREF( var_step );
    var_step = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_2_fill_diagonal );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_3_diag_indices( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_ndim = python_pars[ 1 ];
    PyObject *var_idx = NULL;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e48852ef4efcdc57916646f4fd2e3eec, module_numpy$lib$index_tricks );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 843;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_n;

    frame_function->f_lineno = 843;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 843;
        goto frame_exception_exit_1;
    }
    assert( var_idx == NULL );
    var_idx = tmp_assign_source_1;

    tmp_left_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_idx;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_left_name_1, 0, tmp_tuple_element_1 );
    tmp_right_name_1 = par_ndim;

    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 844;
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

            if ( par_ndim )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ndim,
                    par_ndim
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_3_diag_indices );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

    CHECK_OBJECT( (PyObject *)var_idx );
    Py_DECREF( var_idx );
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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_ndim );
    Py_DECREF( par_ndim );
    par_ndim = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_3_diag_indices );
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


static PyObject *impl_numpy$lib$index_tricks$$$function_4_diag_indices_from( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_54d635da1ee843f01f130168f72636bd, module_numpy$lib$index_tricks );
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


        exception_lineno = 867;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 867;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_9fce22252d81f16af5f47d8c67e196f5;
    frame_function->f_lineno = 868;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 868;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_alltrue );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "alltrue" );
        exception_tb = NULL;

        exception_lineno = 871;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diff );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "diff" );
        exception_tb = NULL;

        exception_lineno = 871;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_arr;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 871;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 871;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_compexpr_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 871;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 871;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 871;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 871;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 871;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_ae18caca66ad511d55f1373e7c1a6603;
    frame_function->f_lineno = 872;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 872;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diag_indices );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "diag_indices" );
        exception_tb = NULL;

        exception_lineno = 874;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = par_arr;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 874;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 874;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_arr;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 874;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 874;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 874;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_4_diag_indices_from );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$index_tricks$$$function_4_diag_indices_from );
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



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_1___init__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_777ec82ca969f9e9500c4b052e5e31e6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_2___getitem__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_2___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9cdbc186545d0a6456154ec41f7a48ac,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_3___getslice__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_3___getslice__,
        const_str_plain___getslice__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_87c548baf7fb0fa2b433d742954702e6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_4___len__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_1_nd_grid$$$function_4___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_381fcfc88e15b8caf1698a2ec1e9d368,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_1__retval(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_1__retval,
        const_str_plain__retval,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ef1377fe3d30215744b4ebf546073c61,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_2___init__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_2___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_124aeb6780f46e3db38e5dccc332d25e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_3___getitem__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_3___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8aad1e9d6d469b3ba63804165aab0f49,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_4___getslice__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_4___getslice__,
        const_str_plain___getslice__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_775af500efba432e2ee5cc2851e3d696,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_5___len__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator$$$function_5___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f707bd7dc0870e217e47005592ca0f1f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_3_RClass$$$function_1___init__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_3_RClass$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a0c94dcc42be76aea0539f4dab9a40df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_4_CClass$$$function_1___init__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_4_CClass$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f9bca27c27a84739ff9cdcc7fede388,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_1___init__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2d0c9e01cbe718b6646f1c3bc1d8ffc7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_2___next__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_2___next__,
        const_str_plain___next__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fe9485c89743c78dfa64d7ba8d7cf079,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_f7ae5c6cb3e962c7e29d5d553b183af2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_3___iter__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_5_ndenumerate$$$function_3___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_70ba033bfe2cd771616bba51beef473b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_1___init__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_6_ndindex$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f069beb303f34f738525a2c9f1875fc3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_2___iter__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_6_ndindex$$$function_2___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5f44abcc3e302fda6c686ef97f749eb7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_3_ndincr(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_6_ndindex$$$function_3_ndincr,
        const_str_plain_ndincr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_279397eff0a7aabc0b3c25ccff862670,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_3eb9b2ce1271918b85093c648f730487
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_6_ndindex$$$function_4___next__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_6_ndindex$$$function_4___next__,
        const_str_plain___next__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2563915bbaef482fdf26ed9c6ae027f8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_64e7f7113a33cb08bdcf9c7fa75b9a20
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_1___init__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ac18646354f393e0200c58b410e25c00,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_2___getitem__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$class_7_IndexExpression$$$function_2___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ad218688f70747964735ec89c7d51c1d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_1_ix_(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_1_ix_,
        const_str_plain_ix_,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ac8af52b0629b92971e6715c1f29cf81,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_51fc40daf3e12e464f55b337ef0dd3f7
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_2_fill_diagonal( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_2_fill_diagonal,
        const_str_plain_fill_diagonal,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ae4f1761caaab32c7f8eb5d4ed68ed95,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_51f9a5b9cf15d5579787ffb54199de0a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_3_diag_indices( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_3_diag_indices,
        const_str_plain_diag_indices,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e48852ef4efcdc57916646f4fd2e3eec,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_ba86cdcd3e361316c8e20be24aceabc4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$index_tricks$$$function_4_diag_indices_from(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$index_tricks$$$function_4_diag_indices_from,
        const_str_plain_diag_indices_from,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_54d635da1ee843f01f130168f72636bd,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$index_tricks,
        const_str_digest_a332407a4cd6cc926dbf54a127eff824
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$index_tricks =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.index_tricks",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$index_tricks )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$index_tricks );
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

    // puts( "in initnumpy$lib$index_tricks" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$index_tricks = Py_InitModule4(
        "numpy.lib.index_tricks",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$index_tricks = PyModule_Create( &mdef_numpy$lib$index_tricks );
#endif

    moduledict_numpy$lib$index_tricks = (PyDictObject *)((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;

    CHECK_OBJECT( module_numpy$lib$index_tricks );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_82d72071fc1da9db8c6dd31f1049410c, module_numpy$lib$index_tricks );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib$index_tricks );

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
    PyObject *tmp_class_creation_7__bases = NULL;
    PyObject *tmp_class_creation_7__class_dict = NULL;
    PyObject *tmp_class_creation_7__metaclass = NULL;
    PyObject *tmp_class_creation_7__class = NULL;
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
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
    PyObject *tmp_args_element_name_21;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
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
    PyObject *tmp_assign_source_69;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_bases_name_4;
    PyObject *tmp_bases_name_5;
    PyObject *tmp_bases_name_6;
    PyObject *tmp_bases_name_7;
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
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    int tmp_cmp_In_4;
    int tmp_cmp_In_5;
    int tmp_cmp_In_6;
    int tmp_cmp_In_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_left_7;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compare_right_7;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    PyObject *tmp_dict_name_4;
    PyObject *tmp_dict_name_5;
    PyObject *tmp_dict_name_6;
    PyObject *tmp_dict_name_7;
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
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_key_name_4;
    PyObject *tmp_key_name_5;
    PyObject *tmp_key_name_6;
    PyObject *tmp_key_name_7;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_1da710977e918243c44af0fa62049bd1;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_f6447dd4e2205582b419dcf5877fc382, module_numpy$lib$index_tricks );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 3;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 4;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_math, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_math, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_import_name_from_1 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_core );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_4, tmp_import_globals_4, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_asarray );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_5, tmp_import_globals_5, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ScalarType );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ScalarType, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_6, tmp_import_globals_6, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_array );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_7, tmp_import_globals_7, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_alltrue );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_alltrue, tmp_assign_source_12 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_8, tmp_import_globals_8, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_cumprod );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_cumprod, tmp_assign_source_13 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_9, tmp_import_globals_9, const_tuple_d41b7300892721d5a465b890d461f3a0_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_arange );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_14 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_67205772204d1e33862eb50e826ab1cb, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_find_common_type );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_find_common_type, tmp_assign_source_15 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_67205772204d1e33862eb50e826ab1cb, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_plain_find_common_type_str_plain_issubdtype_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_issubdtype );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_issubdtype, tmp_assign_source_16 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_empty, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_function_base_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_function_base );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_function_base, tmp_assign_source_17 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_f462c9dbdab6a6e18585dee27e01f422, tmp_import_globals_13, tmp_import_globals_13, Py_None, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_matrixlib );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrix, tmp_assign_source_18 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_function_base, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_diff_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_diff );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diff, tmp_assign_source_19 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_ravel_multi_index );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ravel_multi_index, tmp_assign_source_20 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_f104ae7867dfcd3f38891fc4f1b7cd57, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_ravel_multi_index_str_plain_unravel_index_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_unravel_index );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_unravel_index, tmp_assign_source_21 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$lib$index_tricks)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_9fcf64fa6d087ae015ed561b4aa4b510, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_as_strided_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_as_strided );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_as_strided, tmp_assign_source_22 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_matrix );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_matrix );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "matrix" );
        exception_tb = NULL;

        exception_lineno = 18;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_matrix );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_makemat, tmp_assign_source_23 );
    tmp_assign_source_24 = LIST_COPY( const_list_fa22549eaa1a878119e86a628980cdb1_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_24 );
    tmp_assign_source_25 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_1_ix_(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ix_, tmp_assign_source_25 );
    tmp_assign_source_26 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_26, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_26;

    tmp_assign_source_27 = impl_numpy$lib$index_tricks$$$class_1_nd_grid( NULL );
    assert( tmp_assign_source_27 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_27;

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
    tmp_assign_source_28 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_28 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_28;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_nd_grid;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_29;

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
    tmp_assign_source_30 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid, tmp_assign_source_30 );
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

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nd_grid );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nd_grid" );
        exception_tb = NULL;

        exception_lineno = 218;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_c94aedb3aac0d244f6f14be59f80d888 );
    frame_module->f_lineno = 218;
    tmp_assign_source_31 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 218;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_mgrid, tmp_assign_source_31 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_nd_grid );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nd_grid );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nd_grid" );
        exception_tb = NULL;

        exception_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_2 = PyDict_Copy( const_dict_28ebf724697f63eaa96dcded742e9de0 );
    frame_module->f_lineno = 219;
    tmp_assign_source_32 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ogrid, tmp_assign_source_32 );
    tmp_assattr_name_1 = Py_None;
    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_mgrid );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mgrid );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "mgrid" );
        exception_tb = NULL;

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___doc__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    tmp_assattr_name_2 = Py_None;
    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ogrid );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ogrid );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ogrid" );
        exception_tb = NULL;

        exception_lineno = 221;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___doc__, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_33 = PyTuple_New( 1 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_33, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_33;

    tmp_assign_source_34 = impl_numpy$lib$index_tricks$$$class_2_AxisConcatenator( NULL );
    assert( tmp_assign_source_34 != NULL );
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_34;

    // Tried code:
    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_2__class_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
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
    tmp_assign_source_35 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    tmp_assign_source_35 = SELECT_METACLASS( tmp_bases_name_2, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_35;

    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    tmp_args_element_name_4 = const_str_plain_AxisConcatenator;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    frame_module->f_lineno = 223;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_36;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
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
    tmp_assign_source_37 = tmp_class_creation_2__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator, tmp_assign_source_37 );
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

    // Tried code:
    tmp_assign_source_38 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "AxisConcatenator" );
        exception_tb = NULL;

        exception_lineno = 352;
        goto try_except_handler_3;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_38, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_38;

    tmp_assign_source_39 = impl_numpy$lib$index_tricks$$$class_3_RClass( NULL );
    assert( tmp_assign_source_39 != NULL );
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_39;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_3__class_dict;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
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
    tmp_assign_source_40 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        goto try_except_handler_3;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    tmp_assign_source_40 = SELECT_METACLASS( tmp_bases_name_3, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_40;

    tmp_called_name_5 = tmp_class_creation_3__metaclass;

    tmp_args_element_name_7 = const_str_plain_RClass;
    tmp_args_element_name_8 = tmp_class_creation_3__bases;

    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    frame_module->f_lineno = 352;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 352;
        goto try_except_handler_3;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_41;

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

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
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
    tmp_assign_source_42 = tmp_class_creation_3__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_RClass, tmp_assign_source_42 );
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

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_RClass );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RClass );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RClass" );
        exception_tb = NULL;

        exception_lineno = 450;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 450;
    tmp_assign_source_43 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 450;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_r_, tmp_assign_source_43 );
    // Tried code:
    tmp_assign_source_44 = PyTuple_New( 1 );
    tmp_tuple_element_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );

    if (unlikely( tmp_tuple_element_4 == NULL ))
    {
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_AxisConcatenator );
    }

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_assign_source_44 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "AxisConcatenator" );
        exception_tb = NULL;

        exception_lineno = 452;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_assign_source_44, 0, tmp_tuple_element_4 );
    assert( tmp_class_creation_4__bases == NULL );
    tmp_class_creation_4__bases = tmp_assign_source_44;

    tmp_assign_source_45 = impl_numpy$lib$index_tricks$$$class_4_CClass( NULL );
    assert( tmp_assign_source_45 != NULL );
    assert( tmp_class_creation_4__class_dict == NULL );
    tmp_class_creation_4__class_dict = tmp_assign_source_45;

    tmp_compare_left_4 = const_str_plain___metaclass__;
    tmp_compare_right_4 = tmp_class_creation_4__class_dict;

    tmp_cmp_In_4 = PySequence_Contains( tmp_compare_right_4, tmp_compare_left_4 );
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
    tmp_assign_source_46 = DICT_GET_ITEM( tmp_dict_name_4, tmp_key_name_4 );
    if ( tmp_assign_source_46 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        goto try_except_handler_4;
    }
    goto condexpr_end_4;
    condexpr_false_4:;
    tmp_bases_name_4 = tmp_class_creation_4__bases;

    tmp_assign_source_46 = SELECT_METACLASS( tmp_bases_name_4, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_4:;
    assert( tmp_class_creation_4__metaclass == NULL );
    tmp_class_creation_4__metaclass = tmp_assign_source_46;

    tmp_called_name_7 = tmp_class_creation_4__metaclass;

    tmp_args_element_name_10 = const_str_plain_CClass;
    tmp_args_element_name_11 = tmp_class_creation_4__bases;

    tmp_args_element_name_12 = tmp_class_creation_4__class_dict;

    frame_module->f_lineno = 452;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_47 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_47 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 452;
        goto try_except_handler_4;
    }
    assert( tmp_class_creation_4__class == NULL );
    tmp_class_creation_4__class = tmp_assign_source_47;

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
    tmp_assign_source_48 = tmp_class_creation_4__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_CClass, tmp_assign_source_48 );
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

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_CClass );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_CClass );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "CClass" );
        exception_tb = NULL;

        exception_lineno = 473;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 473;
    tmp_assign_source_49 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_c_, tmp_assign_source_49 );
    tmp_assign_source_50 = PyTuple_New( 1 );
    tmp_tuple_element_5 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_5 != NULL );
    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_assign_source_50, 0, tmp_tuple_element_5 );
    assert( tmp_class_creation_5__bases == NULL );
    tmp_class_creation_5__bases = tmp_assign_source_50;

    tmp_assign_source_51 = impl_numpy$lib$index_tricks$$$class_5_ndenumerate( NULL );
    assert( tmp_assign_source_51 != NULL );
    assert( tmp_class_creation_5__class_dict == NULL );
    tmp_class_creation_5__class_dict = tmp_assign_source_51;

    // Tried code:
    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_5__class_dict;

    tmp_cmp_In_5 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
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
    tmp_assign_source_52 = DICT_GET_ITEM( tmp_dict_name_5, tmp_key_name_5 );
    if ( tmp_assign_source_52 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 475;
        goto try_except_handler_5;
    }
    goto condexpr_end_5;
    condexpr_false_5:;
    tmp_bases_name_5 = tmp_class_creation_5__bases;

    tmp_assign_source_52 = SELECT_METACLASS( tmp_bases_name_5, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_5:;
    assert( tmp_class_creation_5__metaclass == NULL );
    tmp_class_creation_5__metaclass = tmp_assign_source_52;

    tmp_called_name_9 = tmp_class_creation_5__metaclass;

    tmp_args_element_name_13 = const_str_plain_ndenumerate;
    tmp_args_element_name_14 = tmp_class_creation_5__bases;

    tmp_args_element_name_15 = tmp_class_creation_5__class_dict;

    frame_module->f_lineno = 475;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_assign_source_53 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_53 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 475;
        goto try_except_handler_5;
    }
    assert( tmp_class_creation_5__class == NULL );
    tmp_class_creation_5__class = tmp_assign_source_53;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__bases );
    Py_DECREF( tmp_class_creation_5__bases );
    tmp_class_creation_5__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_5__class_dict );
    Py_DECREF( tmp_class_creation_5__class_dict );
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
    tmp_assign_source_54 = tmp_class_creation_5__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ndenumerate, tmp_assign_source_54 );
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

    tmp_assign_source_55 = PyTuple_New( 1 );
    tmp_tuple_element_6 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_6 != NULL );
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_assign_source_55, 0, tmp_tuple_element_6 );
    assert( tmp_class_creation_6__bases == NULL );
    tmp_class_creation_6__bases = tmp_assign_source_55;

    tmp_assign_source_56 = impl_numpy$lib$index_tricks$$$class_6_ndindex( NULL );
    assert( tmp_assign_source_56 != NULL );
    assert( tmp_class_creation_6__class_dict == NULL );
    tmp_class_creation_6__class_dict = tmp_assign_source_56;

    // Tried code:
    tmp_compare_left_6 = const_str_plain___metaclass__;
    tmp_compare_right_6 = tmp_class_creation_6__class_dict;

    tmp_cmp_In_6 = PySequence_Contains( tmp_compare_right_6, tmp_compare_left_6 );
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
    tmp_assign_source_57 = DICT_GET_ITEM( tmp_dict_name_6, tmp_key_name_6 );
    if ( tmp_assign_source_57 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 525;
        goto try_except_handler_6;
    }
    goto condexpr_end_6;
    condexpr_false_6:;
    tmp_bases_name_6 = tmp_class_creation_6__bases;

    tmp_assign_source_57 = SELECT_METACLASS( tmp_bases_name_6, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_6:;
    assert( tmp_class_creation_6__metaclass == NULL );
    tmp_class_creation_6__metaclass = tmp_assign_source_57;

    tmp_called_name_10 = tmp_class_creation_6__metaclass;

    tmp_args_element_name_16 = const_str_plain_ndindex;
    tmp_args_element_name_17 = tmp_class_creation_6__bases;

    tmp_args_element_name_18 = tmp_class_creation_6__class_dict;

    frame_module->f_lineno = 525;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17, tmp_args_element_name_18 };
        tmp_assign_source_58 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_58 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 525;
        goto try_except_handler_6;
    }
    assert( tmp_class_creation_6__class == NULL );
    tmp_class_creation_6__class = tmp_assign_source_58;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__bases );
    Py_DECREF( tmp_class_creation_6__bases );
    tmp_class_creation_6__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_6__class_dict );
    Py_DECREF( tmp_class_creation_6__class_dict );
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
    tmp_assign_source_59 = tmp_class_creation_6__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_ndindex, tmp_assign_source_59 );
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

    tmp_assign_source_60 = PyTuple_New( 1 );
    tmp_tuple_element_7 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_7 != NULL );
    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_assign_source_60, 0, tmp_tuple_element_7 );
    assert( tmp_class_creation_7__bases == NULL );
    tmp_class_creation_7__bases = tmp_assign_source_60;

    tmp_assign_source_61 = impl_numpy$lib$index_tricks$$$class_7_IndexExpression( NULL );
    assert( tmp_assign_source_61 != NULL );
    assert( tmp_class_creation_7__class_dict == NULL );
    tmp_class_creation_7__class_dict = tmp_assign_source_61;

    // Tried code:
    tmp_compare_left_7 = const_str_plain___metaclass__;
    tmp_compare_right_7 = tmp_class_creation_7__class_dict;

    tmp_cmp_In_7 = PySequence_Contains( tmp_compare_right_7, tmp_compare_left_7 );
    assert( !(tmp_cmp_In_7 == -1) );
    if ( tmp_cmp_In_7 == 1 )
    {
        goto condexpr_true_7;
    }
    else
    {
        goto condexpr_false_7;
    }
    condexpr_true_7:;
    tmp_dict_name_7 = tmp_class_creation_7__class_dict;

    tmp_key_name_7 = const_str_plain___metaclass__;
    tmp_assign_source_62 = DICT_GET_ITEM( tmp_dict_name_7, tmp_key_name_7 );
    if ( tmp_assign_source_62 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 603;
        goto try_except_handler_7;
    }
    goto condexpr_end_7;
    condexpr_false_7:;
    tmp_bases_name_7 = tmp_class_creation_7__bases;

    tmp_assign_source_62 = SELECT_METACLASS( tmp_bases_name_7, GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_7:;
    assert( tmp_class_creation_7__metaclass == NULL );
    tmp_class_creation_7__metaclass = tmp_assign_source_62;

    tmp_called_name_11 = tmp_class_creation_7__metaclass;

    tmp_args_element_name_19 = const_str_plain_IndexExpression;
    tmp_args_element_name_20 = tmp_class_creation_7__bases;

    tmp_args_element_name_21 = tmp_class_creation_7__class_dict;

    frame_module->f_lineno = 603;
    {
        PyObject *call_args[] = { tmp_args_element_name_19, tmp_args_element_name_20, tmp_args_element_name_21 };
        tmp_assign_source_63 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_11, call_args );
    }

    if ( tmp_assign_source_63 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 603;
        goto try_except_handler_7;
    }
    assert( tmp_class_creation_7__class == NULL );
    tmp_class_creation_7__class = tmp_assign_source_63;

    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    tmp_assign_source_64 = tmp_class_creation_7__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression, tmp_assign_source_64 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class );
    Py_DECREF( tmp_class_creation_7__class );
    tmp_class_creation_7__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__bases );
    Py_DECREF( tmp_class_creation_7__bases );
    tmp_class_creation_7__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__class_dict );
    Py_DECREF( tmp_class_creation_7__class_dict );
    tmp_class_creation_7__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_7__metaclass );
    Py_DECREF( tmp_class_creation_7__metaclass );
    tmp_class_creation_7__metaclass = NULL;

    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IndexExpression );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "IndexExpression" );
        exception_tb = NULL;

        exception_lineno = 656;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_3 = PyDict_Copy( const_dict_0d87fdb65ac69f3e7f132f381a92030e );
    frame_module->f_lineno = 656;
    tmp_assign_source_65 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_12, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_65 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_index_exp, tmp_assign_source_65 );
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_IndexExpression );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_IndexExpression );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "IndexExpression" );
        exception_tb = NULL;

        exception_lineno = 657;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_4 = PyDict_Copy( const_dict_b4dcb48ac0b3434981963a3b0a181907 );
    frame_module->f_lineno = 657;
    tmp_assign_source_66 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_13, tmp_kw_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_66 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 657;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_s_, tmp_assign_source_66 );

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
    tmp_defaults_1 = const_tuple_false_tuple;
    tmp_assign_source_67 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_2_fill_diagonal( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_fill_diagonal, tmp_assign_source_67 );
    tmp_defaults_2 = const_tuple_int_pos_2_tuple;
    tmp_assign_source_68 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_3_diag_indices( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices, tmp_assign_source_68 );
    tmp_assign_source_69 = MAKE_FUNCTION_numpy$lib$index_tricks$$$function_4_diag_indices_from(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$index_tricks, (Nuitka_StringObject *)const_str_plain_diag_indices_from, tmp_assign_source_69 );

    return MOD_RETURN_VALUE( module_numpy$lib$index_tricks );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
