/* Generated code for Python source for module 'numpy.polynomial.polynomial'
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

/* The _module_numpy$polynomial$polynomial is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$polynomial;
PyDictObject *moduledict_numpy$polynomial$polynomial;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_T;
extern PyObject *const_str_plain_RankWarning;
static PyObject *const_str_digest_94aadee723134ad56a2dcd61143598ee;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain__der;
extern PyObject *const_str_plain_len2;
extern PyObject *const_str_plain_rhs;
static PyObject *const_str_plain_polyvander3d;
static PyObject *const_str_digest_cfa534087adaf22b87a703c066c9f588;
extern PyObject *const_list_int_0_list;
extern PyObject *const_tuple_slice_none_none_none_int_neg_1_tuple;
extern PyObject *const_str_plain_polydiv;
extern PyObject *const_str_plain_degx;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_polymulx;
extern PyObject *const_str_plain_d;
static PyObject *const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple;
extern PyObject *const_str_plain_as_series;
extern PyObject *const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b;
extern PyObject *const_str_plain_eps;
extern PyObject *const_str_plain_maxpower;
extern PyObject *const_str_plain_van;
static PyObject *const_str_digest_5065d3f2513342e412b98ed1a6163eed;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_trimcoef;
extern PyObject *const_str_plain_sort;
extern PyObject *const_str_plain__val;
extern PyObject *const_str_digest_3a21fa4bd62cdcaaa70f24e241b85885;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_plain_cdt;
static PyObject *const_str_digest_ded97805aeaaf447090d1b95fc5e6c9f;
extern PyObject *const_str_plain_domain;
extern PyObject *const_str_plain_ones;
static PyObject *const_str_plain_polyvander;
extern PyObject *const_str_plain__pow;
extern PyObject *const_dict_1eef64507cf3de8ea0ea857c5e7e1090;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_iterable;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain__polybase;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_digest_13227f847c5a19dd9cedee16debb959e;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_polynomial;
extern PyObject *const_str_plain__sub;
static PyObject *const_str_digest_98f661109b08acb2eefa2e7b2788d5fe;
extern PyObject *const_str_plain_ABCPolyBase;
extern PyObject *const_tuple_dd080dd474cbe22b968b7ac16c53de9b_tuple;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_s;
static PyObject *const_str_digest_cc8591968cda29e3a8682a63a179b351;
extern PyObject *const_str_plain_off;
extern PyObject *const_str_plain_bot;
extern PyObject *const_str_plain_iaxis;
static PyObject *const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_tuple_str_plain_off_str_plain_scl_tuple;
extern PyObject *const_tuple_f5c8b080884def366537140f936da3d2_tuple;
extern PyObject *const_dict_5c9928d3d4adf8d21e4940309b7f60ed;
extern PyObject *const_str_digest_6a43499de4143b7f2feff247d35ef074;
extern PyObject *const_str_plain_rcond;
extern PyObject *const_str_plain_type;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_tuple_05f59d889a6490a2f486361d44a11d7c_tuple;
extern PyObject *const_str_plain_staticmethod;
static PyObject *const_str_digest_c57defccf4d43c1a8042cd8196b97317;
extern PyObject *const_str_plain_rank;
extern PyObject *const_str_plain_sum;
static PyObject *const_str_digest_1fdc271ac77fb35cc7f4f19e9277dc69;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_lstsq;
extern PyObject *const_list_int_pos_1_list;
extern PyObject *const_str_plain_ndmin;
extern PyObject *const_str_digest_ea8c65b23281db7ee7660696e61ab360;
extern PyObject *const_tuple_3e11cb3b4ce200eeb96b7be63076d2de_tuple;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_b7c0d2aaa27d1742c61decdec182fa91;
extern PyObject *const_tuple_ellipsis_none_tuple;
extern PyObject *const_list_int_neg_1_int_pos_1_list;
extern PyObject *const_list_int_0_int_pos_1_list;
extern PyObject *const_str_plain_trim;
extern PyObject *const_str_plain_kind;
extern PyObject *const_str_digest_470eccc427becdbaa48f7e4c1af24ff5;
static PyObject *const_str_digest_07af7a256760190b1876f06607bb152f;
static PyObject *const_list_41dafed945a60b867871eb8418069288_list;
extern PyObject *const_str_digest_417a5d06d4d954b63a0b0e1634b358ab;
extern PyObject *const_str_plain_dims;
extern PyObject *const_slice_none_none_none;
extern PyObject *const_str_plain_reshape;
static PyObject *const_str_digest_71527afbe1ec4ef93b09b9c48b1745fe;
extern PyObject *const_str_digest_7776c2b4c0f21c76e792d8c463042f37;
extern PyObject *const_str_plain_is_valid;
extern PyObject *const_str_plain_mat;
extern PyObject *const_tuple_int_pos_1_int_pos_1_int_0_tuple;
extern PyObject *const_str_plain_polyint;
extern PyObject *const_dict_8c0923655000b74dc494a1a4f40853b5;
extern PyObject *const_str_digest_5075ddfb8c5b93b4cdb1b7871af68165;
extern PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple;
extern PyObject *const_dict_ee9b50b2ea01af7ea63a79da3e3468b3;
extern PyObject *const_str_digest_86bddf8ddd67e49da0bc28efd50b11b2;
extern PyObject *const_str_plain_tensor;
extern PyObject *const_str_plain_poly;
extern PyObject *const_str_plain__roots;
extern PyObject *const_list_empty;
extern PyObject *const_str_plain_window;
extern PyObject *const_str_plain___file__;
extern PyObject *const_tuple_7299dfc49f86d518d4db7d9847feb902_tuple;
extern PyObject *const_str_digest_616f6ee3ef74479987454a15fb3cc986;
extern PyObject *const_str_plain_nickname;
static PyObject *const_str_plain_polyvander2d;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_polyone;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain___module__;
extern PyObject *const_tuple_int_neg_1_tuple;
extern PyObject *const_str_plain_la;
static PyObject *const_str_digest_5313cb49e8cae4ea20876d69dd711abd;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_digest_38178dad4ac962606854d73542c6407a;
extern PyObject *const_str_plain__mul;
extern PyObject *const_str_plain_rollaxis;
extern PyObject *const_tuple_true_tuple;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain_cc;
extern PyObject *const_str_plain_iu;
extern PyObject *const_str_plain_array;
static PyObject *const_str_digest_f5b013da93a0fb87edae85c9b6bcf1c0;
extern PyObject *const_str_plain_polysub;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_ideg;
extern PyObject *const_str_plain_divmod;
static PyObject *const_str_digest_5e2905094d9b11f370553205dbf6f898;
extern PyObject *const_str_digest_644ceea54723b4814b2af8460d62b8a6;
extern PyObject *const_str_plain_id;
static PyObject *const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple;
extern PyObject *const_str_plain_len1;
extern PyObject *const_str_plain_polymul;
extern PyObject *const_str_digest_44e97c1c143647b689f32f77c9c8ec56;
extern PyObject *const_tuple_list_int_pos_1_list_tuple;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_plain_dtyp;
extern PyObject *const_str_plain_polyder;
extern PyObject *const_tuple_none_false_none_tuple;
static PyObject *const_str_digest_90b14d1474f1339f0b65e344134731b2;
extern PyObject *const_str_plain__div;
extern PyObject *const_str_plain_complexfloating;
static PyObject *const_str_digest_192b7eec86660f27083fb1cfb324492c;
extern PyObject *const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple;
extern PyObject *const_dict_d61f4d385fe121badbdc8e4bc7fe576f;
extern PyObject *const_str_digest_c58373a0fb3d7245efa1b5aed182e608;
static PyObject *const_str_plain_polyx;
extern PyObject *const_float_0_0;
static PyObject *const_str_plain_polycompanion;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_dlen;
static PyObject *const_str_plain_polygrid2d;
extern PyObject *const_str_digest_af327786ef70d70118fb639ec7c50f4e;
static PyObject *const_str_digest_273c81250a61a3faaf18d00c926f5dcf;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_der;
extern PyObject *const_str_plain_scl;
extern PyObject *const_str_digest_58b9c2de86cf9b3c187794eb33218cee;
extern PyObject *const_list_int_pos_1_int_pos_1_list;
extern PyObject *const_str_plain__int;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_trimseq;
extern PyObject *const_str_plain_order;
extern PyObject *const_str_plain_lhs;
extern PyObject *const_str_plain__fromroots;
extern PyObject *const_list_int_pos_1_int_pos_1_int_pos_1_list;
extern PyObject *const_str_plain_tuple;
extern PyObject *const_tuple_ellipsis_none_none_tuple;
extern PyObject *const_str_plain_ret;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_polyval;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_prd;
extern PyObject *const_str_plain_vz;
extern PyObject *const_str_plain_vy;
extern PyObject *const_str_plain_vx;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
static PyObject *const_str_plain_polygrid3d;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_z;
static PyObject *const_str_plain_polyroots;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_v;
static PyObject *const_str_digest_5ca3a23877ab4feed6274554bf5e0c55;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_lmax;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_polyfit;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_resids;
extern PyObject *const_str_plain_min;
extern PyObject *const_str_plain_degz;
extern PyObject *const_str_plain_degy;
extern PyObject *const_str_plain_convolve;
extern PyObject *const_str_plain__fit;
extern PyObject *const_tuple_5ac5563309656f6342973420ec643c7c_tuple;
static PyObject *const_str_plain_polyfromroots;
static PyObject *const_str_plain_polyval3d;
extern PyObject *const_str_plain__add;
static PyObject *const_str_plain_polytrim;
extern PyObject *const_str_plain_full;
extern PyObject *const_str_digest_3943f956186dfbaba7ee5555afa1df28;
extern PyObject *const_tuple_str_plain_ABCPolyBase_tuple;
extern PyObject *const_str_plain_linalg;
static PyObject *const_str_digest_df8726d6a9afc37a0d65a873963c8252;
extern PyObject *const_str_plain_deg;
extern PyObject *const_str_digest_bdb9c499ede16dacf39d6b78c1ed0d5e;
extern PyObject *const_str_plain_tmp;
extern PyObject *const_tuple_ellipsis_none_none_slice_none_none_none_tuple;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_310d6b932e67be8466cbd674cad8302f;
extern PyObject *const_str_plain_eigvals;
static PyObject *const_str_digest_f6b5fc5179d542b1203e0b166434aa39;
extern PyObject *const_tuple_list_empty_tuple;
static PyObject *const_str_digest_1d948760e3d41e061c64e66c1200a7a1;
extern PyObject *const_str_plain_Polynomial;
static PyObject *const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_polyadd;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_digest_2d1bfbe8c32cb9190bf6cbec9abdf62a;
extern PyObject *const_str_plain_power;
extern PyObject *const_tuple_ellipsis_none_slice_none_none_none_none_tuple;
static PyObject *const_tuple_str_plain_c_str_plain_prd_tuple;
extern PyObject *const_tuple_str_plain_polyutils_tuple;
extern PyObject *const_str_plain_lbnd;
extern PyObject *const_str_digest_b303cff154cb34d4708df3886d4b732e;
static PyObject *const_str_digest_fbc615e17ff80e5f3e2c22fc8da80ac2;
static PyObject *const_tuple_15e4ba3f9c0406b001e944914f813862_tuple;
static PyObject *const_str_plain_polydomain;
static PyObject *const_str_plain_polyval2d;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_04b3eb4a69367931852490c2b7667d29;
static PyObject *const_str_plain_polypow;
extern PyObject *const_str_digest_38ddb95e1ec5856024db3736b3b90fc6;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_c1;
extern PyObject *const_str_plain_c2;
extern PyObject *const_str_plain_cnt;
extern PyObject *const_str_plain_pow;
extern PyObject *const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple;
extern PyObject *const_str_digest_b3b20c6499548f5f690faa8d63dd85e8;
extern PyObject *const_str_plain_pu;
extern PyObject *const_str_plain_polyutils;
extern PyObject *const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
static PyObject *const_str_plain_polyzero;
extern PyObject *const_str_plain_imag;
extern PyObject *const_str_digest_88ea85868dacccabad48a8aef44c097b;
extern PyObject *const_str_plain__line;
extern PyObject *const_str_plain_roots;
extern PyObject *const_str_plain_square;
extern PyObject *const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple;
extern PyObject *const_tuple_ellipsis_none_slice_none_none_none_tuple;
extern PyObject *const_str_plain_c0;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_9b2925c50302e1857eb7a6df5d4ba81d;
static PyObject *const_str_plain_polyline;
extern PyObject *const_tuple_none_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_94aadee723134ad56a2dcd61143598ee = UNSTREAM_STRING( &constant_bin[ 1723817 ], 1610, 0 );
    const_str_plain_polyvander3d = UNSTREAM_STRING( &constant_bin[ 1725427 ], 12, 1 );
    const_str_digest_cfa534087adaf22b87a703c066c9f588 = UNSTREAM_STRING( &constant_bin[ 1725439 ], 756, 0 );
    const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple, 1, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple, 2, const_str_plain_tensor ); Py_INCREF( const_str_plain_tensor );
    PyTuple_SET_ITEM( const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple, 3, const_str_plain_c0 ); Py_INCREF( const_str_plain_c0 );
    PyTuple_SET_ITEM( const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple, 4, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_str_digest_5065d3f2513342e412b98ed1a6163eed = UNSTREAM_STRING( &constant_bin[ 1726195 ], 1804, 0 );
    const_str_plain_cdt = UNSTREAM_STRING( &constant_bin[ 1354941 ], 3, 1 );
    const_str_digest_ded97805aeaaf447090d1b95fc5e6c9f = UNSTREAM_STRING( &constant_bin[ 1727999 ], 1603, 0 );
    const_str_plain_polyvander = UNSTREAM_STRING( &constant_bin[ 1202288 ], 10, 1 );
    const_str_digest_98f661109b08acb2eefa2e7b2788d5fe = UNSTREAM_STRING( &constant_bin[ 1729602 ], 839, 0 );
    const_str_digest_cc8591968cda29e3a8682a63a179b351 = UNSTREAM_STRING( &constant_bin[ 1730441 ], 1856, 0 );
    const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 3, const_str_plain_lbnd ); Py_INCREF( const_str_plain_lbnd );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 4, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 5, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 6, const_str_plain_cdt ); Py_INCREF( const_str_plain_cdt );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 7, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 8, const_str_plain_cnt ); Py_INCREF( const_str_plain_cnt );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 9, const_str_plain_iaxis ); Py_INCREF( const_str_plain_iaxis );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 10, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 11, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 12, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    PyTuple_SET_ITEM( const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 13, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    const_str_digest_c57defccf4d43c1a8042cd8196b97317 = UNSTREAM_STRING( &constant_bin[ 1732297 ], 2905, 0 );
    const_str_digest_1fdc271ac77fb35cc7f4f19e9277dc69 = UNSTREAM_STRING( &constant_bin[ 1735202 ], 1679, 0 );
    const_str_digest_b7c0d2aaa27d1742c61decdec182fa91 = UNSTREAM_STRING( &constant_bin[ 1736881 ], 803, 0 );
    const_str_digest_07af7a256760190b1876f06607bb152f = UNSTREAM_STRING( &constant_bin[ 1737684 ], 1746, 0 );
    const_list_41dafed945a60b867871eb8418069288_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 1739430 ], 356 );
    const_str_digest_71527afbe1ec4ef93b09b9c48b1745fe = UNSTREAM_STRING( &constant_bin[ 1739786 ], 1365, 0 );
    const_str_plain_polyvander2d = UNSTREAM_STRING( &constant_bin[ 1728411 ], 12, 1 );
    const_str_plain_polyone = UNSTREAM_STRING( &constant_bin[ 1739453 ], 7, 1 );
    const_str_digest_5313cb49e8cae4ea20876d69dd711abd = UNSTREAM_STRING( &constant_bin[ 1741151 ], 1971, 0 );
    const_str_digest_f5b013da93a0fb87edae85c9b6bcf1c0 = UNSTREAM_STRING( &constant_bin[ 1743122 ], 1684, 0 );
    const_str_digest_5e2905094d9b11f370553205dbf6f898 = UNSTREAM_STRING( &constant_bin[ 1744806 ], 69, 0 );
    const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple, 2, const_str_plain_mat ); Py_INCREF( const_str_plain_mat );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple, 3, const_str_plain_bot ); Py_INCREF( const_str_plain_bot );
    const_str_digest_90b14d1474f1339f0b65e344134731b2 = UNSTREAM_STRING( &constant_bin[ 1744875 ], 804, 0 );
    const_str_digest_192b7eec86660f27083fb1cfb324492c = UNSTREAM_STRING( &constant_bin[ 1745679 ], 1757, 0 );
    const_str_plain_polyx = UNSTREAM_STRING( &constant_bin[ 1739465 ], 5, 1 );
    const_str_plain_polycompanion = UNSTREAM_STRING( &constant_bin[ 1742794 ], 13, 1 );
    const_str_plain_polygrid2d = UNSTREAM_STRING( &constant_bin[ 1725338 ], 10, 1 );
    const_str_digest_273c81250a61a3faaf18d00c926f5dcf = UNSTREAM_STRING( &constant_bin[ 1747436 ], 490, 0 );
    const_str_plain_polygrid3d = UNSTREAM_STRING( &constant_bin[ 1725361 ], 10, 1 );
    const_str_plain_polyroots = UNSTREAM_STRING( &constant_bin[ 1514494 ], 9, 1 );
    const_str_digest_5ca3a23877ab4feed6274554bf5e0c55 = UNSTREAM_STRING( &constant_bin[ 1747926 ], 775, 0 );
    const_str_plain_polyfromroots = UNSTREAM_STRING( &constant_bin[ 1522672 ], 13, 1 );
    const_str_plain_polyval3d = UNSTREAM_STRING( &constant_bin[ 1725350 ], 9, 1 );
    const_str_plain_polytrim = UNSTREAM_STRING( &constant_bin[ 1739657 ], 8, 1 );
    const_str_digest_df8726d6a9afc37a0d65a873963c8252 = UNSTREAM_STRING( &constant_bin[ 1748701 ], 534, 0 );
    const_str_digest_310d6b932e67be8466cbd674cad8302f = UNSTREAM_STRING( &constant_bin[ 1749235 ], 6255, 0 );
    const_str_digest_f6b5fc5179d542b1203e0b166434aa39 = UNSTREAM_STRING( &constant_bin[ 1755490 ], 2914, 0 );
    const_str_digest_1d948760e3d41e061c64e66c1200a7a1 = UNSTREAM_STRING( &constant_bin[ 1758404 ], 397, 0 );
    const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple, 0, const_str_plain_c1 ); Py_INCREF( const_str_plain_c1 );
    PyTuple_SET_ITEM( const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple, 1, const_str_plain_c2 ); Py_INCREF( const_str_plain_c2 );
    PyTuple_SET_ITEM( const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple, 2, const_str_plain_len1 ); Py_INCREF( const_str_plain_len1 );
    PyTuple_SET_ITEM( const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple, 3, const_str_plain_len2 ); Py_INCREF( const_str_plain_len2 );
    PyTuple_SET_ITEM( const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple, 4, const_str_plain_dlen ); Py_INCREF( const_str_plain_dlen );
    PyTuple_SET_ITEM( const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple, 5, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple, 6, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple, 7, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    const_tuple_str_plain_c_str_plain_prd_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_prd_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_str_plain_c_str_plain_prd_tuple, 1, const_str_plain_prd ); Py_INCREF( const_str_plain_prd );
    const_str_digest_fbc615e17ff80e5f3e2c22fc8da80ac2 = UNSTREAM_STRING( &constant_bin[ 1758801 ], 781, 0 );
    const_tuple_15e4ba3f9c0406b001e944914f813862_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 2, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 3, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 4, const_str_plain_cdt ); Py_INCREF( const_str_plain_cdt );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 5, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 6, const_str_plain_cnt ); Py_INCREF( const_str_plain_cnt );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 7, const_str_plain_iaxis ); Py_INCREF( const_str_plain_iaxis );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 8, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 9, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 10, const_str_plain_der ); Py_INCREF( const_str_plain_der );
    PyTuple_SET_ITEM( const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 11, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    const_str_plain_polydomain = UNSTREAM_STRING( &constant_bin[ 1739475 ], 10, 1 );
    const_str_plain_polyval2d = UNSTREAM_STRING( &constant_bin[ 1727923 ], 9, 1 );
    const_str_digest_04b3eb4a69367931852490c2b7667d29 = UNSTREAM_STRING( &constant_bin[ 1700265 ], 27, 0 );
    const_str_plain_polypow = UNSTREAM_STRING( &constant_bin[ 1730156 ], 7, 1 );
    const_str_plain_polyzero = UNSTREAM_STRING( &constant_bin[ 1739440 ], 8, 1 );
    const_str_digest_9b2925c50302e1857eb7a6df5d4ba81d = UNSTREAM_STRING( &constant_bin[ 1759582 ], 1266, 0 );
    const_str_plain_polyline = UNSTREAM_STRING( &constant_bin[ 1530299 ], 8, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$polynomial$polynomial( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ecc37a084d3395bb4faedf0593849173;
static PyCodeObject *codeobj_1af78ff3a009ea99d8c52e0c556c5275;
static PyCodeObject *codeobj_aae0134eac25a50e53d0aa97c9bd79c6;
static PyCodeObject *codeobj_2eb039c1353d14b89f214352aae35434;
static PyCodeObject *codeobj_4c032214a7a6a2446fef32555b1930ab;
static PyCodeObject *codeobj_9f6eecf0bcfad3656da3d9fe3566b0ab;
static PyCodeObject *codeobj_55d88a7d4d74db203afebc136f302572;
static PyCodeObject *codeobj_567497983e9e0ae182bf48c39366d69f;
static PyCodeObject *codeobj_5bfc5c3dc7f545ba7fba279e8fb0643e;
static PyCodeObject *codeobj_bd1b0dfc2668f8505acc79187009cf4e;
static PyCodeObject *codeobj_a63bb0b50881cb6bbf093185764a3b93;
static PyCodeObject *codeobj_e9e45dfc51ec84ab5a22060966bb2c0a;
static PyCodeObject *codeobj_41a3f5d1e281951de6fecffa31a96c2f;
static PyCodeObject *codeobj_fc0d5d686016267b1f40a558d6c521bf;
static PyCodeObject *codeobj_2db488333022da8b7e0a84ccf0cf862f;
static PyCodeObject *codeobj_a2d273b8a12a597908108f9c6900e39c;
static PyCodeObject *codeobj_1f8e5d4a89229aee321cf4b110179da2;
static PyCodeObject *codeobj_ee374e192687b88177b6ba99b538f8a6;
static PyCodeObject *codeobj_7251454ca7365b5bc118e9d75ae1c339;
static PyCodeObject *codeobj_2c1c5896e181b2ef6386157f945352c1;
static PyCodeObject *codeobj_af685d0621d649f9fa3d90c6cc5edbe7;
static PyCodeObject *codeobj_62128576ef00e03c45248fadee8681f3;
static PyCodeObject *codeobj_756caae9dbdf125362b14a095fa76728;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5e2905094d9b11f370553205dbf6f898;
    codeobj_ecc37a084d3395bb4faedf0593849173 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_Polynomial, 1517, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1af78ff3a009ea99d8c52e0c556c5275 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyadd, 205, const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aae0134eac25a50e53d0aa97c9bd79c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polycompanion, 1415, const_tuple_str_plain_c_str_plain_n_str_plain_mat_str_plain_bot_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2eb039c1353d14b89f214352aae35434 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyder, 477, const_tuple_15e4ba3f9c0406b001e944914f813862_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4c032214a7a6a2446fef32555b1930ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polydiv, 369, const_tuple_41c7c001766c7ebfa71f46866a2958f8_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9f6eecf0bcfad3656da3d9fe3566b0ab = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyfit, 1196, const_tuple_f5c8b080884def366537140f936da3d2_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_55d88a7d4d74db203afebc136f302572 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyfromroots, 130, const_tuple_7299dfc49f86d518d4db7d9847feb902_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_567497983e9e0ae182bf48c39366d69f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polygrid2d, 840, const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5bfc5c3dc7f545ba7fba279e8fb0643e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polygrid3d, 954, const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bd1b0dfc2668f8505acc79187009cf4e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyint, 566, const_tuple_b36a9400d2acfc2bda9a27ed29986136_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a63bb0b50881cb6bbf093185764a3b93 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyline, 96, const_tuple_str_plain_off_str_plain_scl_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e9e45dfc51ec84ab5a22060966bb2c0a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polymul, 331, const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_41a3f5d1e281951de6fecffa31a96c2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polymulx, 295, const_tuple_str_plain_c_str_plain_prd_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fc0d5d686016267b1f40a558d6c521bf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polynomial, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2db488333022da8b7e0a84ccf0cf862f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polypow, 426, const_tuple_05f59d889a6490a2f486361d44a11d7c_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a2d273b8a12a597908108f9c6900e39c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyroots, 1455, const_tuple_str_plain_c_str_plain_m_str_plain_r_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f8e5d4a89229aee321cf4b110179da2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polysub, 249, const_tuple_str_plain_c1_str_plain_c2_str_plain_ret_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ee374e192687b88177b6ba99b538f8a6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyval, 687, const_tuple_c1be5644ff8f8fe3060719eb09b47dc0_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7251454ca7365b5bc118e9d75ae1c339 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyval2d, 783, const_tuple_str_plain_x_str_plain_y_str_plain_c_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2c1c5896e181b2ef6386157f945352c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyval3d, 895, const_tuple_str_plain_x_str_plain_y_str_plain_z_str_plain_c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_af685d0621d649f9fa3d90c6cc5edbe7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyvander, 1013, const_tuple_5ac5563309656f6342973420ec643c7c_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_62128576ef00e03c45248fadee8681f3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyvander2d, 1069, const_tuple_dd080dd474cbe22b968b7ac16c53de9b_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_756caae9dbdf125362b14a095fa76728 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyvander3d, 1129, const_tuple_3e11cb3b4ce200eeb96b7be63076d2de_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$polynomial$polynomial$$$class_1_Polynomial( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_10_polyint( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_11_polyval( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_12_polyval2d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_13_polygrid2d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_14_polyval3d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_15_polygrid3d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_16_polyvander(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_17_polyvander2d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_18_polyvander3d(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_19_polyfit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_1_polyline(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_20_polycompanion(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_21_polyroots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_2_polyfromroots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_3_polyadd(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_4_polysub(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_5_polymulx(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_6_polymul(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_7_polydiv(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_8_polypow( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_9_polyder( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$polynomial$polynomial$$$function_1_polyline( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_off = python_pars[ 0 ];
    PyObject *par_scl = python_pars[ 1 ];
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
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a63bb0b50881cb6bbf093185764a3b93, module_numpy$polynomial$polynomial );
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
    tmp_compare_left_1 = par_scl;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = PyList_New( 2 );
    tmp_list_element_1 = par_off;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_scl;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
    frame_function->f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = PyList_New( 1 );
    tmp_list_element_2 = par_off;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
    frame_function->f_lineno = 127;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
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
            if ( par_off )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_off,
                    par_off
                );

                assert( res == 0 );
            }

            if ( par_scl )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scl,
                    par_scl
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_1_polyline );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_off );
    Py_DECREF( par_off );
    par_off = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

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

    CHECK_OBJECT( (PyObject *)par_off );
    Py_DECREF( par_off );
    par_off = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_1_polyline );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_2_polyfromroots( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_roots = python_pars[ 0 ];
    PyObject *var_r = NULL;
    PyObject *var_p = NULL;
    PyObject *var_n = NULL;
    PyObject *var_m = NULL;
    PyObject *var_i = NULL;
    PyObject *var_tmp = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
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
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    int tmp_ass_subscript_res_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
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
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_55d88a7d4d74db203afebc136f302572, module_numpy$polynomial$polynomial );
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
    tmp_len_arg_1 = par_roots;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 188;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 189;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ones );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 189;
    tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 189;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 191;
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_as_series );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_list_element_1 = par_roots;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
    frame_function->f_lineno = 191;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 191;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_roots;
        assert( old != NULL );
        par_roots = tmp_assign_source_3;
        Py_INCREF( par_roots );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_source_name_3 = par_roots;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_sort );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 192;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 192;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_iter_arg_2 = par_roots;

    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_3;
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
            PyThreadState_GET()->frame->f_lineno = 193;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_r;
        var_r = tmp_assign_source_8;
        Py_INCREF( var_r );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyline );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyline );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyline" );
        exception_tb = NULL;

        exception_lineno = 193;
        goto try_except_handler_3;
    }

    tmp_operand_name_1 = var_r;

    tmp_args_element_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_3;
    }
    tmp_args_element_name_2 = const_int_pos_1;
    PyThreadState_GET()->frame->f_lineno = 193;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_2_polyfromroots );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_2_polyfromroots );
    return NULL;
    outline_result_1:;
    tmp_assign_source_4 = tmp_outline_return_value_1;
    assert( var_p == NULL );
    var_p = tmp_assign_source_4;

    tmp_len_arg_2 = var_p;

    tmp_assign_source_9 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_9;

    loop_start_2:;
    tmp_compare_left_2 = var_n;

    if ( tmp_compare_left_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 195;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    goto loop_end_2;
    branch_no_2:;
    // Tried code:
    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_divmod );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_3 = var_n;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 196;
        goto try_except_handler_4;
    }

    tmp_args_element_name_4 = const_int_pos_2;
    frame_function->f_lineno = 196;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_4;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_2, 0 );
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


        exception_lineno = 196;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_3, 1 );
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


        exception_lineno = 196;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_2;
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
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

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_m;
        var_m = tmp_assign_source_13;
        Py_INCREF( var_m );
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = var_r;
        var_r = tmp_assign_source_14;
        Py_INCREF( var_r );
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

    // Tried code:
    tmp_range_arg_1 = var_m;

    tmp_iter_arg_4 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_5;
    }
    tmp_assign_source_16 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_list_contraction_2__$0;
        tmp_list_contraction_2__$0 = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_assign_source_17 = PyList_New( 0 );
    {
        PyObject *old = tmp_list_contraction_2__contraction_result;
        tmp_list_contraction_2__contraction_result = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    loop_start_3:;
    tmp_next_source_2 = tmp_list_contraction_2__$0;

    tmp_assign_source_18 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_18 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 197;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_assign_source_19 = tmp_list_contraction_2__iter_value_0;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_19;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polymul );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polymul );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polymul" );
        exception_tb = NULL;

        exception_lineno = 197;
        goto try_except_handler_5;
    }

    tmp_subscribed_name_1 = var_p;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;

        exception_lineno = 197;
        goto try_except_handler_5;
    }

    tmp_subscript_name_1 = var_i;

    tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_5;
    }
    tmp_subscribed_name_2 = var_p;

    if ( tmp_subscribed_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;

        exception_lineno = 197;
        goto try_except_handler_5;
    }

    tmp_left_name_1 = var_i;

    tmp_right_name_1 = var_m;

    tmp_subscript_name_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_subscript_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 197;
        goto try_except_handler_5;
    }
    tmp_args_element_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 197;
        goto try_except_handler_5;
    }
    PyThreadState_GET()->frame->f_lineno = 197;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_append_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_5;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_5;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto try_except_handler_5;
    }
    goto loop_start_3;
    loop_end_3:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_5;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_2_polyfromroots );
    return NULL;
    // Return handler code:
    try_return_handler_5:;
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
    try_except_handler_5:;
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

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_2_polyfromroots );
    return NULL;
    outline_result_2:;
    tmp_assign_source_15 = tmp_outline_return_value_2;
    {
        PyObject *old = var_tmp;
        var_tmp = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    tmp_cond_value_1 = var_r;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polymul );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polymul );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polymul" );
        exception_tb = NULL;

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_3 = var_tmp;

    tmp_subscript_name_3 = const_int_0;
    tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_4 = var_p;

    if ( tmp_subscribed_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_4 = const_int_neg_1;
    tmp_args_element_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 199;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_tmp;

    tmp_ass_subscript_1 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    tmp_assign_source_20 = var_tmp;

    {
        PyObject *old = var_p;
        var_p = tmp_assign_source_20;
        Py_INCREF( var_p );
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = var_m;

    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_21;
        Py_INCREF( var_n );
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 195;
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_subscribed_name_5 = var_p;

    if ( tmp_subscribed_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "p" );
        exception_tb = NULL;

        exception_lineno = 202;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_5 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
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
            if ( par_roots )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_roots,
                    par_roots
                );

                assert( res == 0 );
            }

            if ( var_r )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_r,
                    var_r
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

            if ( var_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    var_n
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_2_polyfromroots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_roots );
    Py_DECREF( par_roots );
    par_roots = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

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

    CHECK_OBJECT( (PyObject *)par_roots );
    Py_DECREF( par_roots );
    par_roots = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_p );
    var_p = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_2_polyfromroots );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_3_polyadd( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    PyObject *var_ret = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_inplace_assign_slice_1__target = NULL;
    PyObject *tmp_inplace_assign_slice_1__upper = NULL;
    PyObject *tmp_inplace_assign_slice_2__target = NULL;
    PyObject *tmp_inplace_assign_slice_2__upper = NULL;
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
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_target_2;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_upper_2;
    PyObject *tmp_sliceass_value_1;
    PyObject *tmp_sliceass_value_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1af78ff3a009ea99d8c52e0c556c5275, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 239;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyList_New( 2 );
    tmp_list_element_1 = par_c1;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_c2;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
    frame_function->f_lineno = 239;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 239;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 239;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_c1;
        assert( old != NULL );
        par_c1 = tmp_assign_source_4;
        Py_INCREF( par_c1 );
        Py_DECREF( old );
    }

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_c2;
        assert( old != NULL );
        par_c2 = tmp_assign_source_5;
        Py_INCREF( par_c2 );
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

    tmp_len_arg_1 = par_c1;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_c2;

    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 240;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_6 = par_c1;

    assert( tmp_inplace_assign_slice_1__target == NULL );
    Py_INCREF( tmp_assign_source_6 );
    tmp_inplace_assign_slice_1__target = tmp_assign_source_6;

    // Tried code:
    tmp_source_name_2 = par_c2;

    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto try_except_handler_3;
    }
    assert( tmp_inplace_assign_slice_1__upper == NULL );
    tmp_inplace_assign_slice_1__upper = tmp_assign_source_7;

    tmp_slice_source_1 = tmp_inplace_assign_slice_1__target;

    tmp_slice_upper_1 = tmp_inplace_assign_slice_1__upper;

    tmp_left_name_1 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto try_except_handler_3;
    }
    tmp_right_name_1 = par_c2;

    tmp_sliceass_value_1 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_sliceass_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto try_except_handler_3;
    }
    tmp_sliceass_target_1 = tmp_inplace_assign_slice_1__target;

    tmp_sliceass_upper_1 = tmp_inplace_assign_slice_1__upper;

    tmp_result = SET_SLICE( tmp_sliceass_target_1, Py_None, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
    Py_DECREF( tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto try_except_handler_3;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    Py_XDECREF( tmp_inplace_assign_slice_1__upper );
    tmp_inplace_assign_slice_1__upper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__upper );
    Py_DECREF( tmp_inplace_assign_slice_1__upper );
    tmp_inplace_assign_slice_1__upper = NULL;

    tmp_assign_source_8 = par_c1;

    assert( var_ret == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_ret = tmp_assign_source_8;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_9 = par_c2;

    assert( tmp_inplace_assign_slice_2__target == NULL );
    Py_INCREF( tmp_assign_source_9 );
    tmp_inplace_assign_slice_2__target = tmp_assign_source_9;

    // Tried code:
    tmp_source_name_3 = par_c1;

    tmp_assign_source_10 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto try_except_handler_4;
    }
    assert( tmp_inplace_assign_slice_2__upper == NULL );
    tmp_inplace_assign_slice_2__upper = tmp_assign_source_10;

    tmp_slice_source_2 = tmp_inplace_assign_slice_2__target;

    tmp_slice_upper_2 = tmp_inplace_assign_slice_2__upper;

    tmp_left_name_2 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto try_except_handler_4;
    }
    tmp_right_name_2 = par_c1;

    tmp_sliceass_value_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_sliceass_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto try_except_handler_4;
    }
    tmp_sliceass_target_2 = tmp_inplace_assign_slice_2__target;

    tmp_sliceass_upper_2 = tmp_inplace_assign_slice_2__upper;

    tmp_result = SET_SLICE( tmp_sliceass_target_2, Py_None, tmp_sliceass_upper_2, tmp_sliceass_value_2 );
    Py_DECREF( tmp_sliceass_value_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
    Py_DECREF( tmp_inplace_assign_slice_2__target );
    tmp_inplace_assign_slice_2__target = NULL;

    Py_XDECREF( tmp_inplace_assign_slice_2__upper );
    tmp_inplace_assign_slice_2__upper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
    Py_DECREF( tmp_inplace_assign_slice_2__target );
    tmp_inplace_assign_slice_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__upper );
    Py_DECREF( tmp_inplace_assign_slice_2__upper );
    tmp_inplace_assign_slice_2__upper = NULL;

    tmp_assign_source_11 = par_c2;

    assert( var_ret == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_ret = tmp_assign_source_11;

    branch_end_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 246;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_trimseq );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_ret;

    frame_function->f_lineno = 246;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
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
            if ( par_c1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c1,
                    par_c1
                );

                assert( res == 0 );
            }

            if ( par_c2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c2,
                    par_c2
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_3_polyadd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
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

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_3_polyadd );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_4_polysub( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    PyObject *var_ret = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_inplace_assign_slice_1__target = NULL;
    PyObject *tmp_inplace_assign_slice_1__upper = NULL;
    PyObject *tmp_inplace_assign_slice_2__target = NULL;
    PyObject *tmp_inplace_assign_slice_2__upper = NULL;
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
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_target_2;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_upper_2;
    PyObject *tmp_sliceass_value_1;
    PyObject *tmp_sliceass_value_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1f8e5d4a89229aee321cf4b110179da2, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 284;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyList_New( 2 );
    tmp_list_element_1 = par_c1;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_c2;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
    frame_function->f_lineno = 284;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 284;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 284;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_c1;
        assert( old != NULL );
        par_c1 = tmp_assign_source_4;
        Py_INCREF( par_c1 );
        Py_DECREF( old );
    }

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_c2;
        assert( old != NULL );
        par_c2 = tmp_assign_source_5;
        Py_INCREF( par_c2 );
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

    tmp_len_arg_1 = par_c1;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_c2;

    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 285;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_6 = par_c1;

    assert( tmp_inplace_assign_slice_1__target == NULL );
    Py_INCREF( tmp_assign_source_6 );
    tmp_inplace_assign_slice_1__target = tmp_assign_source_6;

    // Tried code:
    tmp_source_name_2 = par_c2;

    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_size );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        goto try_except_handler_3;
    }
    assert( tmp_inplace_assign_slice_1__upper == NULL );
    tmp_inplace_assign_slice_1__upper = tmp_assign_source_7;

    tmp_slice_source_1 = tmp_inplace_assign_slice_1__target;

    tmp_slice_upper_1 = tmp_inplace_assign_slice_1__upper;

    tmp_left_name_1 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        goto try_except_handler_3;
    }
    tmp_right_name_1 = par_c2;

    tmp_sliceass_value_1 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_sliceass_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        goto try_except_handler_3;
    }
    tmp_sliceass_target_1 = tmp_inplace_assign_slice_1__target;

    tmp_sliceass_upper_1 = tmp_inplace_assign_slice_1__upper;

    tmp_result = SET_SLICE( tmp_sliceass_target_1, Py_None, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
    Py_DECREF( tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
        goto try_except_handler_3;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    Py_XDECREF( tmp_inplace_assign_slice_1__upper );
    tmp_inplace_assign_slice_1__upper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__upper );
    Py_DECREF( tmp_inplace_assign_slice_1__upper );
    tmp_inplace_assign_slice_1__upper = NULL;

    tmp_assign_source_8 = par_c1;

    assert( var_ret == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_ret = tmp_assign_source_8;

    goto branch_end_1;
    branch_no_1:;
    tmp_operand_name_1 = par_c2;

    tmp_assign_source_9 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c2;
        assert( old != NULL );
        par_c2 = tmp_assign_source_9;
        Py_DECREF( old );
    }

    tmp_assign_source_10 = par_c2;

    assert( tmp_inplace_assign_slice_2__target == NULL );
    Py_INCREF( tmp_assign_source_10 );
    tmp_inplace_assign_slice_2__target = tmp_assign_source_10;

    // Tried code:
    tmp_source_name_3 = par_c1;

    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto try_except_handler_4;
    }
    assert( tmp_inplace_assign_slice_2__upper == NULL );
    tmp_inplace_assign_slice_2__upper = tmp_assign_source_11;

    tmp_slice_source_2 = tmp_inplace_assign_slice_2__target;

    tmp_slice_upper_2 = tmp_inplace_assign_slice_2__upper;

    tmp_left_name_2 = LOOKUP_SLICE( tmp_slice_source_2, Py_None, tmp_slice_upper_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto try_except_handler_4;
    }
    tmp_right_name_2 = par_c1;

    tmp_sliceass_value_2 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_sliceass_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto try_except_handler_4;
    }
    tmp_sliceass_target_2 = tmp_inplace_assign_slice_2__target;

    tmp_sliceass_upper_2 = tmp_inplace_assign_slice_2__upper;

    tmp_result = SET_SLICE( tmp_sliceass_target_2, Py_None, tmp_sliceass_upper_2, tmp_sliceass_value_2 );
    Py_DECREF( tmp_sliceass_value_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
    Py_DECREF( tmp_inplace_assign_slice_2__target );
    tmp_inplace_assign_slice_2__target = NULL;

    Py_XDECREF( tmp_inplace_assign_slice_2__upper );
    tmp_inplace_assign_slice_2__upper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__target );
    Py_DECREF( tmp_inplace_assign_slice_2__target );
    tmp_inplace_assign_slice_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_2__upper );
    Py_DECREF( tmp_inplace_assign_slice_2__upper );
    tmp_inplace_assign_slice_2__upper = NULL;

    tmp_assign_source_12 = par_c2;

    assert( var_ret == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_ret = tmp_assign_source_12;

    branch_end_1:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_trimseq );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_ret;

    frame_function->f_lineno = 292;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
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
            if ( par_c1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c1,
                    par_c1
                );

                assert( res == 0 );
            }

            if ( par_c2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c2,
                    par_c2
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_4_polysub );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
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

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    Py_XDECREF( par_c2 );
    par_c2 = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_4_polysub );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_5_polymulx( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *var_prd = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    int tmp_ass_subscript_res_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    Py_ssize_t tmp_sliceass_index_upper_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_value_1;
    Py_ssize_t tmp_sliceassslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_41a3f5d1e281951de6fecffa31a96c2f, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 320;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyList_New( 1 );
    tmp_list_element_1 = par_c;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    frame_function->f_lineno = 320;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 320;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_3;
        Py_INCREF( par_c );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_len_arg_1 = par_c;

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 322;
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
    tmp_subscribed_name_1 = par_c;

    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
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

        exception_lineno = 322;
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
    tmp_return_value = par_c;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 325;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_empty );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_len_arg_2 = par_c;

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_tuple_element_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_3 = par_c;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 325;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    assert( var_prd == NULL );
    var_prd = tmp_assign_source_4;

    tmp_subscribed_name_2 = par_c;

    tmp_subscript_name_2 = const_int_0;
    tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_0;
    tmp_ass_subvalue_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_prd;

    tmp_ass_subscript_1 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto frame_exception_exit_1;
    }
    tmp_sliceass_value_1 = par_c;

    tmp_sliceass_target_1 = var_prd;

    tmp_sliceassslicedel_index_lower_1 = 1;
    tmp_sliceass_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_result = SET_INDEX_SLICE( tmp_sliceass_target_1, tmp_sliceassslicedel_index_lower_1, tmp_sliceass_index_upper_1, tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
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
            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
                );

                assert( res == 0 );
            }

            if ( var_prd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_prd,
                    var_prd
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

    tmp_return_value = var_prd;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_5_polymulx );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_prd );
    var_prd = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_prd );
    var_prd = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_5_polymulx );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_6_polymul( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    PyObject *var_ret = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e9e45dfc51ec84ab5a22060966bb2c0a, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 364;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyList_New( 2 );
    tmp_list_element_1 = par_c1;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_c2;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
    frame_function->f_lineno = 364;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 364;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 364;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_c1;
        assert( old != NULL );
        par_c1 = tmp_assign_source_4;
        Py_INCREF( par_c1 );
        Py_DECREF( old );
    }

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_c2;
        assert( old != NULL );
        par_c2 = tmp_assign_source_5;
        Py_INCREF( par_c2 );
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

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 365;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_convolve );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_c1;

    tmp_args_element_name_3 = par_c2;

    frame_function->f_lineno = 365;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 365;
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_6;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 366;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_trimseq );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_ret;

    frame_function->f_lineno = 366;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
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
            if ( par_c1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c1,
                    par_c1
                );

                assert( res == 0 );
            }

            if ( par_c2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c2,
                    par_c2
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_6_polymul );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_6_polymul );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_7_polydiv( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c1 = python_pars[ 0 ];
    PyObject *par_c2 = python_pars[ 1 ];
    PyObject *var_len1 = NULL;
    PyObject *var_len2 = NULL;
    PyObject *var_dlen = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_i = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_inplace_assign_slice_1__target = NULL;
    PyObject *tmp_inplace_assign_slice_1__lower = NULL;
    PyObject *tmp_inplace_assign_slice_1__upper = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_GtE_1;
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
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
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_raise_type_1;
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
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    Py_ssize_t tmp_slice_index_upper_3;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_source_3;
    PyObject *tmp_slice_source_4;
    PyObject *tmp_slice_source_5;
    PyObject *tmp_slice_source_6;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_slice_upper_2;
    PyObject *tmp_sliceass_lower_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_value_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4c032214a7a6a2446fef32555b1930ab, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 403;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyList_New( 2 );
    tmp_list_element_1 = par_c1;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_c2;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 1, tmp_list_element_1 );
    frame_function->f_lineno = 403;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 403;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 403;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_c1;
        assert( old != NULL );
        par_c1 = tmp_assign_source_4;
        Py_INCREF( par_c1 );
        Py_DECREF( old );
    }

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_c2;
        assert( old != NULL );
        par_c2 = tmp_assign_source_5;
        Py_INCREF( par_c2 );
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

    tmp_subscribed_name_1 = par_c2;

    tmp_subscript_name_1 = const_int_neg_1;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 404;
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
    frame_function->f_lineno = 405;
    tmp_raise_type_1 = CALL_FUNCTION_NO_ARGS( PyExc_ZeroDivisionError );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 405;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_len_arg_1 = par_c1;

    tmp_assign_source_6 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 407;
        goto frame_exception_exit_1;
    }
    assert( var_len1 == NULL );
    var_len1 = tmp_assign_source_6;

    tmp_len_arg_2 = par_c2;

    tmp_assign_source_7 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 408;
        goto frame_exception_exit_1;
    }
    assert( var_len2 == NULL );
    var_len2 = tmp_assign_source_7;

    tmp_compare_left_2 = var_len2;

    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 409;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_left_name_1 = par_c1;

    tmp_subscribed_name_2 = par_c2;

    tmp_subscript_name_2 = const_int_neg_1;
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 410;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 410;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 1;
    tmp_slice_source_1 = par_c1;

    tmp_left_name_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 410;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_0;
    tmp_tuple_element_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 410;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = var_len1;

    tmp_compare_right_3 = var_len2;

    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 411;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = 1;
    tmp_slice_source_2 = par_c1;

    tmp_left_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 412;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_0;
    tmp_tuple_element_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 412;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_c1;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_left_name_4 = var_len1;

    tmp_right_name_4 = var_len2;

    tmp_assign_source_8 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
        goto frame_exception_exit_1;
    }
    assert( var_dlen == NULL );
    var_dlen = tmp_assign_source_8;

    tmp_subscribed_name_3 = par_c2;

    tmp_subscript_name_3 = const_int_neg_1;
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    assert( var_scl == NULL );
    var_scl = tmp_assign_source_9;

    tmp_sliceslicedel_index_lower_3 = 0;
    tmp_slice_index_upper_3 = -1;
    tmp_slice_source_3 = par_c2;

    tmp_left_name_5 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = var_scl;

    tmp_assign_source_10 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c2;
        assert( old != NULL );
        par_c2 = tmp_assign_source_10;
        Py_DECREF( old );
    }

    tmp_assign_source_11 = var_dlen;

    assert( var_i == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_i = tmp_assign_source_11;

    tmp_left_name_6 = var_len1;

    tmp_right_name_6 = const_int_pos_1;
    tmp_assign_source_12 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        goto frame_exception_exit_1;
    }
    assert( var_j == NULL );
    var_j = tmp_assign_source_12;

    loop_start_1:;
    tmp_compare_left_4 = var_i;

    if ( tmp_compare_left_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;

        exception_lineno = 419;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_4 = const_int_0;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    goto loop_end_1;
    branch_no_4:;
    tmp_assign_source_13 = par_c1;

    {
        PyObject *old = tmp_inplace_assign_slice_1__target;
        tmp_inplace_assign_slice_1__target = tmp_assign_source_13;
        Py_INCREF( tmp_inplace_assign_slice_1__target );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_assign_source_14 = var_i;

    if ( tmp_assign_source_14 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;

        exception_lineno = 420;
        goto try_except_handler_3;
    }

    {
        PyObject *old = tmp_inplace_assign_slice_1__lower;
        tmp_inplace_assign_slice_1__lower = tmp_assign_source_14;
        Py_INCREF( tmp_inplace_assign_slice_1__lower );
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = var_j;

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "j" );
        exception_tb = NULL;

        exception_lineno = 420;
        goto try_except_handler_3;
    }

    {
        PyObject *old = tmp_inplace_assign_slice_1__upper;
        tmp_inplace_assign_slice_1__upper = tmp_assign_source_15;
        Py_INCREF( tmp_inplace_assign_slice_1__upper );
        Py_XDECREF( old );
    }

    tmp_slice_source_4 = tmp_inplace_assign_slice_1__target;

    tmp_slice_lower_1 = tmp_inplace_assign_slice_1__lower;

    tmp_slice_upper_1 = tmp_inplace_assign_slice_1__upper;

    tmp_left_name_7 = LOOKUP_SLICE( tmp_slice_source_4, tmp_slice_lower_1, tmp_slice_upper_1 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        goto try_except_handler_3;
    }
    tmp_left_name_8 = par_c2;

    tmp_subscribed_name_4 = par_c1;

    tmp_subscript_name_4 = var_j;

    if ( tmp_subscript_name_4 == NULL )
    {
        Py_DECREF( tmp_left_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "j" );
        exception_tb = NULL;

        exception_lineno = 420;
        goto try_except_handler_3;
    }

    tmp_right_name_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 420;
        goto try_except_handler_3;
    }
    tmp_right_name_7 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 420;
        goto try_except_handler_3;
    }
    tmp_sliceass_value_1 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_sliceass_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        goto try_except_handler_3;
    }
    tmp_sliceass_target_1 = tmp_inplace_assign_slice_1__target;

    tmp_sliceass_lower_1 = tmp_inplace_assign_slice_1__lower;

    tmp_sliceass_upper_1 = tmp_inplace_assign_slice_1__upper;

    tmp_result = SET_SLICE( tmp_sliceass_target_1, tmp_sliceass_lower_1, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
    Py_DECREF( tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 420;
        goto try_except_handler_3;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    Py_XDECREF( tmp_inplace_assign_slice_1__lower );
    tmp_inplace_assign_slice_1__lower = NULL;

    Py_XDECREF( tmp_inplace_assign_slice_1__upper );
    tmp_inplace_assign_slice_1__upper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__lower );
    Py_DECREF( tmp_inplace_assign_slice_1__lower );
    tmp_inplace_assign_slice_1__lower = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__upper );
    Py_DECREF( tmp_inplace_assign_slice_1__upper );
    tmp_inplace_assign_slice_1__upper = NULL;

    tmp_left_name_9 = var_i;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "i" );
        exception_tb = NULL;

        exception_lineno = 421;
        goto frame_exception_exit_1;
    }

    tmp_right_name_9 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_16 = tmp_left_name_9;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
        goto frame_exception_exit_1;
    }
    var_i = tmp_assign_source_16;

    tmp_left_name_10 = var_j;

    if ( tmp_left_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "j" );
        exception_tb = NULL;

        exception_lineno = 422;
        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceSubtract, &tmp_left_name_10, tmp_right_name_10 );
    tmp_assign_source_17 = tmp_left_name_10;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 422;
        goto frame_exception_exit_1;
    }
    var_j = tmp_assign_source_17;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 419;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_slice_source_5 = par_c1;

    tmp_left_name_12 = var_j;

    if ( tmp_left_name_12 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "j" );
        exception_tb = NULL;

        exception_lineno = 423;
        goto frame_exception_exit_1;
    }

    tmp_right_name_11 = const_int_pos_1;
    tmp_slice_lower_2 = BINARY_OPERATION_ADD( tmp_left_name_12, tmp_right_name_11 );
    if ( tmp_slice_lower_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 423;
        goto frame_exception_exit_1;
    }
    tmp_left_name_11 = LOOKUP_SLICE( tmp_slice_source_5, tmp_slice_lower_2, Py_None );
    Py_DECREF( tmp_slice_lower_2 );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 423;
        goto frame_exception_exit_1;
    }
    tmp_right_name_12 = var_scl;

    tmp_tuple_element_3 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_11, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_11 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 423;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 423;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_trimseq );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 423;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_6 = par_c1;

    tmp_left_name_13 = var_j;

    if ( tmp_left_name_13 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "j" );
        exception_tb = NULL;

        exception_lineno = 423;
        goto frame_exception_exit_1;
    }

    tmp_right_name_13 = const_int_pos_1;
    tmp_slice_upper_2 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_13 );
    if ( tmp_slice_upper_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 423;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = LOOKUP_SLICE( tmp_slice_source_6, Py_None, tmp_slice_upper_2 );
    Py_DECREF( tmp_slice_upper_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 423;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 423;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 423;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    goto frame_return_exit_1;
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
            if ( par_c1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c1,
                    par_c1
                );

                assert( res == 0 );
            }

            if ( par_c2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c2,
                    par_c2
                );

                assert( res == 0 );
            }

            if ( var_len1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_len1,
                    var_len1
                );

                assert( res == 0 );
            }

            if ( var_len2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_len2,
                    var_len2
                );

                assert( res == 0 );
            }

            if ( var_dlen )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dlen,
                    var_dlen
                );

                assert( res == 0 );
            }

            if ( var_scl )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scl,
                    var_scl
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_7_polydiv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    CHECK_OBJECT( (PyObject *)var_len1 );
    Py_DECREF( var_len1 );
    var_len1 = NULL;

    CHECK_OBJECT( (PyObject *)var_len2 );
    Py_DECREF( var_len2 );
    var_len2 = NULL;

    Py_XDECREF( var_dlen );
    var_dlen = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c1 );
    Py_DECREF( par_c1 );
    par_c1 = NULL;

    CHECK_OBJECT( (PyObject *)par_c2 );
    Py_DECREF( par_c2 );
    par_c2 = NULL;

    Py_XDECREF( var_len1 );
    var_len1 = NULL;

    Py_XDECREF( var_len2 );
    var_len2 = NULL;

    Py_XDECREF( var_dlen );
    var_dlen = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_7_polydiv );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_8_polypow( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_pow = python_pars[ 1 ];
    PyObject *par_maxpower = python_pars[ 2 ];
    PyObject *var_power = NULL;
    PyObject *var_prd = NULL;
    PyObject *var_i = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_low_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_unpack_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2db488333022da8b7e0a84ccf0cf862f, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 458;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyList_New( 1 );
    tmp_list_element_1 = par_c;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    frame_function->f_lineno = 458;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 458;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 458;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_3;
        Py_INCREF( par_c );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_int_arg_1 = par_pow;

    tmp_assign_source_4 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 459;
        goto frame_exception_exit_1;
    }
    assert( var_power == NULL );
    var_power = tmp_assign_source_4;

    tmp_compexpr_left_1 = var_power;

    tmp_compexpr_right_1 = par_pow;

    tmp_or_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 460;
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
    tmp_compexpr_left_2 = var_power;

    tmp_compexpr_right_2 = const_int_0;
    tmp_or_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 460;
        goto frame_exception_exit_1;
    }
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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 460;
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
    tmp_make_exception_arg_1 = const_str_digest_5075ddfb8c5b93b4cdb1b7871af68165;
    frame_function->f_lineno = 461;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 461;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_compexpr_left_3 = par_maxpower;

    tmp_compexpr_right_3 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_3 != tmp_compexpr_right_3 );
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
    tmp_compexpr_left_4 = var_power;

    tmp_compexpr_right_4 = par_maxpower;

    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 462;
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

        exception_lineno = 462;
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
    tmp_make_exception_arg_2 = const_str_digest_3a21fa4bd62cdcaaa70f24e241b85885;
    frame_function->f_lineno = 463;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 463;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_1 = var_power;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 464;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 465;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = DEEP_COPY( const_tuple_list_int_pos_1_list_tuple );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_3 = par_c;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 465;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 465;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 465;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_2 = var_power;

    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 466;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = par_c;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_5 = par_c;

    assert( var_prd == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_prd = tmp_assign_source_5;

    tmp_range2_low_1 = const_int_pos_2;
    tmp_left_name_1 = var_power;

    tmp_right_name_1 = const_int_pos_1;
    tmp_range2_high_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_range2_high_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_2 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_high_1 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            frame_function->f_lineno = 472;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_8;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 473;
        goto try_except_handler_3;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_convolve );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto try_except_handler_3;
    }
    tmp_args_element_name_2 = var_prd;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "prd" );
        exception_tb = NULL;

        exception_lineno = 473;
        goto try_except_handler_3;
    }

    tmp_args_element_name_3 = par_c;

    frame_function->f_lineno = 473;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 473;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_prd;
        var_prd = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 472;
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

    tmp_return_value = var_prd;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "prd" );
        exception_tb = NULL;

        exception_lineno = 474;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_4:;
    branch_end_3:;
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
            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
                );

                assert( res == 0 );
            }

            if ( par_pow )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pow,
                    par_pow
                );

                assert( res == 0 );
            }

            if ( par_maxpower )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxpower,
                    par_maxpower
                );

                assert( res == 0 );
            }

            if ( var_power )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_power,
                    var_power
                );

                assert( res == 0 );
            }

            if ( var_prd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_prd,
                    var_prd
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_8_polypow );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_pow );
    Py_DECREF( par_pow );
    par_pow = NULL;

    CHECK_OBJECT( (PyObject *)par_maxpower );
    Py_DECREF( par_maxpower );
    par_maxpower = NULL;

    CHECK_OBJECT( (PyObject *)var_power );
    Py_DECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_prd );
    var_prd = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_pow );
    Py_DECREF( par_pow );
    par_pow = NULL;

    CHECK_OBJECT( (PyObject *)par_maxpower );
    Py_DECREF( par_maxpower );
    par_maxpower = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_prd );
    var_prd = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_8_polypow );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_9_polyder( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_scl = python_pars[ 2 ];
    PyObject *par_axis = python_pars[ 3 ];
    PyObject *var_cdt = NULL;
    PyObject *var_t = NULL;
    PyObject *var_cnt = NULL;
    PyObject *var_iaxis = NULL;
    PyObject *var_n = NULL;
    PyObject *var_i = NULL;
    PyObject *var_der = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_In_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
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
    PyObject *tmp_left_name_9;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_range3_high_1;
    PyObject *tmp_range3_low_1;
    PyObject *tmp_range3_step_1;
    PyObject *tmp_range_arg_1;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2eb039c1353d14b89f214352aae35434, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 529;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 529;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_c;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_8c0923655000b74dc494a1a4f40853b5 );
    frame_function->f_lineno = 529;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 529;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_3 = par_c;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 530;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_char );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 530;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = par_c;

    tmp_right_name_1 = const_float_0_0;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 532;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_4 = par_c;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 533;
        goto frame_exception_exit_1;
    }
    assert( var_cdt == NULL );
    var_cdt = tmp_assign_source_3;

    // Tried code:
    tmp_iter_arg_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_m;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_axis;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    assert( tmp_assign_source_5 != NULL );
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_5;

    tmp_assign_source_6 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_6;

    // Tried code:
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
            PyThreadState_GET()->frame->f_lineno = 534;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_8;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_int_arg_1 = var_t;

    tmp_append_value_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 534;
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 534;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 534;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_9_polyder );
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

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_9_polyder );
    return NULL;
    outline_result_1:;
    tmp_iter_arg_1 = tmp_outline_return_value_1;
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 534;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;

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


        exception_lineno = 534;
        goto try_except_handler_2;
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


        exception_lineno = 534;
        goto try_except_handler_2;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;

    assert( var_cnt == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_cnt = tmp_assign_source_11;

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;

    assert( var_iaxis == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_iaxis = tmp_assign_source_12;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_2 = var_cnt;

    tmp_compare_right_2 = par_m;

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 536;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_38178dad4ac962606854d73542c6407a;
    frame_function->f_lineno = 537;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 537;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_compare_left_3 = var_cnt;

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 538;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_2 = const_str_digest_dbb9a16d39ca754da17294f7f64a4b4b;
    frame_function->f_lineno = 539;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 539;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_compare_left_4 = var_iaxis;

    tmp_compare_right_4 = par_axis;

    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 540;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_3 = const_str_digest_c58373a0fb3d7245efa1b5aed182e608;
    frame_function->f_lineno = 541;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 541;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_assign_source_13 = var_iaxis;

    assert( tmp_comparison_chain_1__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_13 );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_13;

    // Tried code:
    tmp_source_name_5 = par_c;

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndim );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto try_except_handler_4;
    }
    tmp_compexpr_left_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto try_except_handler_4;
    }
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    tmp_assign_source_14 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto try_except_handler_4;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_14;

    tmp_cond_value_2 = tmp_comparison_chain_1__comparison_result;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_6;
    }
    else
    {
        goto branch_yes_6;
    }
    branch_yes_6:;
    tmp_outline_return_value_2 = tmp_comparison_chain_1__comparison_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_4;
    branch_no_6:;
    tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;

    tmp_source_name_6 = par_c;

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto try_except_handler_4;
    }
    tmp_outline_return_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 542;
        goto try_except_handler_4;
    }
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_9_polyder );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
    Py_DECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    goto outline_result_2;
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

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_9_polyder );
    return NULL;
    outline_result_2:;
    tmp_cond_value_1 = tmp_outline_return_value_2;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 542;
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
    tmp_make_exception_arg_4 = const_str_digest_644ceea54723b4814b2af8460d62b8a6;
    frame_function->f_lineno = 543;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 543;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_compare_left_5 = var_iaxis;

    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_left_name_2 = var_iaxis;

    tmp_source_name_7 = par_c;

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ndim );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_15 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        goto frame_exception_exit_1;
    }
    var_iaxis = tmp_assign_source_15;

    branch_no_7:;
    tmp_compare_left_6 = var_cnt;

    tmp_compare_right_6 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_return_value = par_c;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_8:;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_rollaxis );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_c;

    tmp_args_element_name_2 = var_iaxis;

    frame_function->f_lineno = 550;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_16;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_c;

    tmp_assign_source_17 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_17;

    tmp_compare_left_7 = var_cnt;

    tmp_compare_right_7 = var_n;

    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 552;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 1;
    tmp_slice_source_1 = par_c;

    tmp_left_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 553;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_0;
    tmp_assign_source_18 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 553;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_18;
        Py_DECREF( old );
    }

    goto branch_end_9;
    branch_no_9:;
    tmp_range_arg_1 = var_cnt;

    tmp_iter_arg_3 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_19;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 555;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_21;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_left_name_4 = var_n;

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 556;
        goto try_except_handler_5;
    }

    tmp_right_name_4 = const_int_pos_1;
    tmp_assign_source_22 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_left_name_5 = par_c;

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;

        exception_lineno = 557;
        goto try_except_handler_5;
    }

    tmp_right_name_5 = par_scl;

    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_23 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 557;
        goto try_except_handler_5;
    }
    par_c = tmp_assign_source_23;

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 558;
        goto try_except_handler_5;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_empty );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        goto try_except_handler_5;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_left_name_6 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_n;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_left_name_6, 0, tmp_tuple_element_4 );
    tmp_sliceslicedel_index_lower_2 = 1;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_source_name_10 = par_c;

    tmp_slice_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 558;
        goto try_except_handler_5;
    }
    tmp_right_name_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 558;
        goto try_except_handler_5;
    }
    tmp_tuple_element_3 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 558;
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_cdt;

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 558;
    tmp_assign_source_24 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_der;
        var_der = tmp_assign_source_24;
        Py_XDECREF( old );
    }

    tmp_range3_low_1 = var_n;

    tmp_range3_high_1 = const_int_0;
    tmp_range3_step_1 = const_int_neg_1;
    tmp_iter_arg_4 = BUILTIN_RANGE3( tmp_range3_low_1, tmp_range3_high_1, tmp_range3_step_1 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 559;
        goto try_except_handler_5;
    }
    tmp_assign_source_25 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 559;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_25;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_26 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_26 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 559;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_assign_source_27 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_j;
        var_j = tmp_assign_source_27;
        Py_INCREF( var_j );
        Py_XDECREF( old );
    }

    tmp_left_name_7 = var_j;

    tmp_subscribed_name_1 = par_c;

    tmp_subscript_name_1 = var_j;

    tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        goto try_except_handler_6;
    }
    tmp_ass_subvalue_1 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        goto try_except_handler_6;
    }
    tmp_ass_subscribed_1 = var_der;

    tmp_left_name_8 = var_j;

    tmp_right_name_8 = const_int_pos_1;
    tmp_ass_subscript_1 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 560;
        goto try_except_handler_6;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 559;
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
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

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_assign_source_28 = var_der;

    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_28;
        Py_INCREF( par_c );
        Py_DECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 555;
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
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
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    branch_end_9:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 562;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_rollaxis );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_c;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;

        exception_lineno = 562;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = const_int_0;
    tmp_left_name_9 = var_iaxis;

    tmp_right_name_9 = const_int_pos_1;
    tmp_args_element_name_5 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_9 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 562;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        par_c = tmp_assign_source_29;
        Py_XDECREF( old );
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
            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
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

            if ( par_scl )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scl,
                    par_scl
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

            if ( var_cdt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cdt,
                    var_cdt
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

            if ( var_cnt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cnt,
                    var_cnt
                );

                assert( res == 0 );
            }

            if ( var_iaxis )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iaxis,
                    var_iaxis
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

            if ( var_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    var_i
                );

                assert( res == 0 );
            }

            if ( var_der )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_der,
                    var_der
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

    tmp_return_value = par_c;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_9_polyder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_cdt );
    Py_DECREF( var_cdt );
    var_cdt = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_cnt );
    Py_DECREF( var_cnt );
    var_cnt = NULL;

    CHECK_OBJECT( (PyObject *)var_iaxis );
    Py_DECREF( var_iaxis );
    var_iaxis = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_der );
    var_der = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

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

    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_cdt );
    var_cdt = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_cnt );
    var_cnt = NULL;

    Py_XDECREF( var_iaxis );
    var_iaxis = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_der );
    var_der = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_9_polyder );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_10_polyint( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *par_lbnd = python_pars[ 3 ];
    PyObject *par_scl = python_pars[ 4 ];
    PyObject *par_axis = python_pars[ 5 ];
    PyObject *var_cdt = NULL;
    PyObject *var_t = NULL;
    PyObject *var_cnt = NULL;
    PyObject *var_iaxis = NULL;
    PyObject *var_i = NULL;
    PyObject *var_n = NULL;
    PyObject *var_tmp = NULL;
    PyObject *var_j = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_comparison_chain_1__operand_2 = NULL;
    PyObject *tmp_comparison_chain_1__comparison_result = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
    PyObject *tmp_inplace_assign_subscr_1__subscript = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_inplace_assign_subscr_2__target = NULL;
    PyObject *tmp_inplace_assign_subscr_2__subscript = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscribed_4;
    PyObject *tmp_ass_subscribed_5;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subscript_4;
    PyObject *tmp_ass_subscript_5;
    int tmp_ass_subscript_res_1;
    int tmp_ass_subscript_res_2;
    int tmp_ass_subscript_res_3;
    int tmp_ass_subscript_res_4;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_ass_subvalue_4;
    PyObject *tmp_ass_subvalue_5;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_In_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
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
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
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
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_low_1;
    PyObject *tmp_range_arg_1;
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
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscribed_name_7;
    PyObject *tmp_subscribed_name_8;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_subscript_name_7;
    PyObject *tmp_subscript_name_8;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bd1b0dfc2668f8505acc79187009cf4e, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 643;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 643;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_c;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_8c0923655000b74dc494a1a4f40853b5 );
    frame_function->f_lineno = 643;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 643;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_3 = par_c;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 644;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_char );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 644;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = par_c;

    tmp_right_name_1 = const_float_0_0;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 646;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_4 = par_c;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 647;
        goto frame_exception_exit_1;
    }
    assert( var_cdt == NULL );
    var_cdt = tmp_assign_source_3;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 648;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_iterable );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 648;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_k;

    frame_function->f_lineno = 648;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 648;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 648;
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
    tmp_assign_source_4 = PyList_New( 1 );
    tmp_list_element_1 = par_k;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_assign_source_4, 0, tmp_list_element_1 );
    {
        PyObject *old = par_k;
        assert( old != NULL );
        par_k = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_2:;
    // Tried code:
    tmp_iter_arg_2 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_m;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_axis;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_iter_arg_2, 1, tmp_tuple_element_2 );
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    assert( tmp_assign_source_6 != NULL );
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_6;

    tmp_assign_source_7 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_7;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 650;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_9;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_int_arg_1 = var_t;

    tmp_append_value_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 650;
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 650;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 650;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_10_polyint );
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

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_10_polyint );
    return NULL;
    outline_result_1:;
    tmp_iter_arg_1 = tmp_outline_return_value_1;
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 650;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;

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


        exception_lineno = 650;
        goto try_except_handler_2;
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


        exception_lineno = 650;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;

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

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;

    assert( var_cnt == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_cnt = tmp_assign_source_12;

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;

    assert( var_iaxis == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_iaxis = tmp_assign_source_13;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_2 = var_cnt;

    tmp_compare_right_2 = par_m;

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_1 = const_str_digest_2d1bfbe8c32cb9190bf6cbec9abdf62a;
    frame_function->f_lineno = 653;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 653;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_compare_left_3 = var_cnt;

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_b303cff154cb34d4708df3886d4b732e;
    frame_function->f_lineno = 655;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 655;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_len_arg_1 = par_k;

    tmp_compare_left_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = var_cnt;

    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 656;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_make_exception_arg_3 = const_str_digest_616f6ee3ef74479987454a15fb3cc986;
    frame_function->f_lineno = 657;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 657;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_compare_left_5 = var_iaxis;

    tmp_compare_right_5 = par_axis;

    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 658;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_make_exception_arg_4 = const_str_digest_c58373a0fb3d7245efa1b5aed182e608;
    frame_function->f_lineno = 659;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 659;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_assign_source_14 = var_iaxis;

    assert( tmp_comparison_chain_1__operand_2 == NULL );
    Py_INCREF( tmp_assign_source_14 );
    tmp_comparison_chain_1__operand_2 = tmp_assign_source_14;

    // Tried code:
    tmp_source_name_6 = par_c;

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        goto try_except_handler_4;
    }
    tmp_compexpr_left_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        goto try_except_handler_4;
    }
    tmp_compexpr_right_1 = tmp_comparison_chain_1__operand_2;

    tmp_assign_source_15 = RICH_COMPARE_LE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        goto try_except_handler_4;
    }
    assert( tmp_comparison_chain_1__comparison_result == NULL );
    tmp_comparison_chain_1__comparison_result = tmp_assign_source_15;

    tmp_cond_value_3 = tmp_comparison_chain_1__comparison_result;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        goto try_except_handler_4;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_no_8;
    }
    else
    {
        goto branch_yes_8;
    }
    branch_yes_8:;
    tmp_outline_return_value_2 = tmp_comparison_chain_1__comparison_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_4;
    branch_no_8:;
    tmp_compexpr_left_2 = tmp_comparison_chain_1__operand_2;

    tmp_source_name_7 = par_c;

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ndim );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        goto try_except_handler_4;
    }
    tmp_outline_return_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_outline_return_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        goto try_except_handler_4;
    }
    goto try_return_handler_4;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_10_polyint );
    return NULL;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__comparison_result );
    Py_DECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    goto outline_result_2;
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

    CHECK_OBJECT( (PyObject *)tmp_comparison_chain_1__operand_2 );
    Py_DECREF( tmp_comparison_chain_1__operand_2 );
    tmp_comparison_chain_1__operand_2 = NULL;

    Py_XDECREF( tmp_comparison_chain_1__comparison_result );
    tmp_comparison_chain_1__comparison_result = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_10_polyint );
    return NULL;
    outline_result_2:;
    tmp_cond_value_2 = tmp_outline_return_value_2;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 660;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_7;
    }
    else
    {
        goto branch_yes_7;
    }
    branch_yes_7:;
    tmp_make_exception_arg_5 = const_str_digest_644ceea54723b4814b2af8460d62b8a6;
    frame_function->f_lineno = 661;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_5 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 661;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_7:;
    tmp_compare_left_6 = var_iaxis;

    tmp_compare_right_6 = const_int_0;
    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 662;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_left_name_2 = var_iaxis;

    tmp_source_name_8 = par_c;

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ndim );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 663;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_16 = tmp_left_name_2;
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 663;
        goto frame_exception_exit_1;
    }
    var_iaxis = tmp_assign_source_16;

    branch_no_9:;
    tmp_compare_left_7 = var_cnt;

    tmp_compare_right_7 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 665;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_return_value = par_c;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_10:;
    tmp_list_arg_1 = par_k;

    tmp_left_name_3 = PySequence_List( tmp_list_arg_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 668;
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = LIST_COPY( const_list_int_0_list );
    tmp_left_name_5 = var_cnt;

    tmp_len_arg_2 = par_k;

    tmp_right_name_5 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 668;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 668;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 668;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 668;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_k;
        assert( old != NULL );
        par_k = tmp_assign_source_17;
        Py_DECREF( old );
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 669;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_rollaxis );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 669;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_c;

    tmp_args_element_name_3 = var_iaxis;

    frame_function->f_lineno = 669;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 669;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_18;
        Py_DECREF( old );
    }

    tmp_range_arg_1 = var_cnt;

    tmp_iter_arg_3 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 670;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 670;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_19;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 670;
            goto try_except_handler_5;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_21;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_len_arg_3 = par_c;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;

        exception_lineno = 671;
        goto try_except_handler_5;
    }

    tmp_assign_source_22 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 671;
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    tmp_left_name_6 = par_c;

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;

        exception_lineno = 672;
        goto try_except_handler_5;
    }

    tmp_right_name_6 = par_scl;

    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_23 = tmp_left_name_6;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 672;
        goto try_except_handler_5;
    }
    par_c = tmp_assign_source_23;

    tmp_compexpr_left_3 = var_n;

    tmp_compexpr_right_3 = const_int_pos_1;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        goto try_except_handler_5;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 673;
        goto try_except_handler_5;
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
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 673;
        goto try_except_handler_5;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_all );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        goto try_except_handler_5;
    }
    tmp_subscribed_name_1 = par_c;

    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 673;
        goto try_except_handler_5;
    }
    tmp_compexpr_right_4 = const_int_0;
    tmp_args_element_name_4 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 673;
        goto try_except_handler_5;
    }
    frame_function->f_lineno = 673;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        goto try_except_handler_5;
    }
    tmp_cond_value_4 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_4 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 673;
        goto try_except_handler_5;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assign_source_24 = par_c;

    {
        PyObject *old = tmp_inplace_assign_subscr_1__target;
        tmp_inplace_assign_subscr_1__target = tmp_assign_source_24;
        Py_INCREF( tmp_inplace_assign_subscr_1__target );
        Py_XDECREF( old );
    }

    tmp_assign_source_25 = const_int_0;
    {
        PyObject *old = tmp_inplace_assign_subscr_1__subscript;
        tmp_inplace_assign_subscr_1__subscript = tmp_assign_source_25;
        Py_INCREF( tmp_inplace_assign_subscr_1__subscript );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_subscribed_name_2 = tmp_inplace_assign_subscr_1__target;

    tmp_subscript_name_2 = const_int_0;
    tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        goto try_except_handler_6;
    }
    tmp_subscribed_name_3 = par_k;

    tmp_subscript_name_3 = var_i;

    tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 674;
        goto try_except_handler_6;
    }
    tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        goto try_except_handler_6;
    }
    tmp_ass_subscribed_1 = tmp_inplace_assign_subscr_1__target;

    tmp_ass_subscript_1 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        goto try_except_handler_6;
    }
    goto try_end_2;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_1__subscript );
    tmp_inplace_assign_subscr_1__subscript = NULL;

    goto branch_end_11;
    branch_no_11:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 676;
        goto try_except_handler_5;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_empty );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 676;
        goto try_except_handler_5;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_left_name_8 = PyTuple_New( 1 );
    tmp_left_name_9 = var_n;

    tmp_right_name_8 = const_int_pos_1;
    tmp_tuple_element_4 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_8 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_left_name_8 );

        exception_lineno = 676;
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_left_name_8, 0, tmp_tuple_element_4 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_source_name_12 = par_c;

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_shape );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_left_name_8 );

        exception_lineno = 676;
        goto try_except_handler_5;
    }
    tmp_right_name_9 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_left_name_8 );

        exception_lineno = 676;
        goto try_except_handler_5;
    }
    tmp_tuple_element_3 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_8 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 676;
        goto try_except_handler_5;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_cdt;

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 676;
    tmp_assign_source_26 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 676;
        goto try_except_handler_5;
    }
    {
        PyObject *old = var_tmp;
        var_tmp = tmp_assign_source_26;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_4 = par_c;

    tmp_subscript_name_4 = const_int_0;
    tmp_left_name_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 677;
        goto try_except_handler_5;
    }
    tmp_right_name_10 = const_int_0;
    tmp_ass_subvalue_2 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_10 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 677;
        goto try_except_handler_5;
    }
    tmp_ass_subscribed_2 = var_tmp;

    tmp_ass_subscript_2 = const_int_0;
    tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 0, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_ass_subscript_res_2 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 677;
        goto try_except_handler_5;
    }
    tmp_subscribed_name_5 = par_c;

    tmp_subscript_name_5 = const_int_0;
    tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 678;
        goto try_except_handler_5;
    }
    tmp_ass_subscribed_3 = var_tmp;

    tmp_ass_subscript_3 = const_int_pos_1;
    tmp_ass_subscript_res_3 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_3, tmp_ass_subscript_3, 1, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_ass_subscript_res_3 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 678;
        goto try_except_handler_5;
    }
    tmp_range2_low_1 = const_int_pos_1;
    tmp_range2_high_1 = var_n;

    tmp_iter_arg_4 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        goto try_except_handler_5;
    }
    tmp_assign_source_27 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_27;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_28 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_28 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 679;
            goto try_except_handler_7;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_28;
        Py_XDECREF( old );
    }

    tmp_assign_source_29 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_j;
        var_j = tmp_assign_source_29;
        Py_INCREF( var_j );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_6 = par_c;

    tmp_subscript_name_6 = var_j;

    tmp_left_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        goto try_except_handler_7;
    }
    tmp_left_name_12 = var_j;

    tmp_right_name_12 = const_int_pos_1;
    tmp_right_name_11 = BINARY_OPERATION_ADD( tmp_left_name_12, tmp_right_name_12 );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 680;
        goto try_except_handler_7;
    }
    tmp_ass_subvalue_4 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_11 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        goto try_except_handler_7;
    }
    tmp_ass_subscribed_4 = var_tmp;

    tmp_left_name_13 = var_j;

    tmp_right_name_13 = const_int_pos_1;
    tmp_ass_subscript_4 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_13 );
    if ( tmp_ass_subscript_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_4 );

        exception_lineno = 680;
        goto try_except_handler_7;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscript_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        goto try_except_handler_7;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        goto try_except_handler_7;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_3;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_assign_source_30 = var_tmp;

    {
        PyObject *old = tmp_inplace_assign_subscr_2__target;
        tmp_inplace_assign_subscr_2__target = tmp_assign_source_30;
        Py_INCREF( tmp_inplace_assign_subscr_2__target );
        Py_XDECREF( old );
    }

    tmp_assign_source_31 = const_int_0;
    {
        PyObject *old = tmp_inplace_assign_subscr_2__subscript;
        tmp_inplace_assign_subscr_2__subscript = tmp_assign_source_31;
        Py_INCREF( tmp_inplace_assign_subscr_2__subscript );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_subscribed_name_7 = tmp_inplace_assign_subscr_2__target;

    tmp_subscript_name_7 = const_int_0;
    tmp_left_name_14 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 681;
        goto try_except_handler_8;
    }
    tmp_subscribed_name_8 = par_k;

    tmp_subscript_name_8 = var_i;

    tmp_left_name_15 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_8, tmp_subscript_name_8 );
    if ( tmp_left_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_14 );

        exception_lineno = 681;
        goto try_except_handler_8;
    }
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_left_name_14 );
        Py_DECREF( tmp_left_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 681;
        goto try_except_handler_8;
    }

    tmp_args_element_name_5 = par_lbnd;

    tmp_args_element_name_6 = var_tmp;

    frame_function->f_lineno = 681;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_right_name_15 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_6, call_args );
    }

    if ( tmp_right_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_14 );
        Py_DECREF( tmp_left_name_15 );

        exception_lineno = 681;
        goto try_except_handler_8;
    }
    tmp_right_name_14 = BINARY_OPERATION_SUB( tmp_left_name_15, tmp_right_name_15 );
    Py_DECREF( tmp_left_name_15 );
    Py_DECREF( tmp_right_name_15 );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_14 );

        exception_lineno = 681;
        goto try_except_handler_8;
    }
    tmp_ass_subvalue_5 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_ass_subvalue_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 681;
        goto try_except_handler_8;
    }
    tmp_ass_subscribed_5 = tmp_inplace_assign_subscr_2__target;

    tmp_ass_subscript_5 = const_int_0;
    tmp_ass_subscript_res_4 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_5, tmp_ass_subscript_5, 0, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subvalue_5 );
    if ( tmp_ass_subscript_res_4 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 681;
        goto try_except_handler_8;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__target );
    Py_DECREF( tmp_inplace_assign_subscr_2__target );
    tmp_inplace_assign_subscr_2__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_2__subscript );
    Py_DECREF( tmp_inplace_assign_subscr_2__subscript );
    tmp_inplace_assign_subscr_2__subscript = NULL;

    tmp_assign_source_32 = var_tmp;

    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_32;
        Py_INCREF( par_c );
        Py_DECREF( old );
    }

    branch_end_11:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 670;
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 683;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_rollaxis );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 683;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_c;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;

        exception_lineno = 683;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = const_int_0;
    tmp_left_name_16 = var_iaxis;

    tmp_right_name_16 = const_int_pos_1;
    tmp_args_element_name_9 = BINARY_OPERATION_ADD( tmp_left_name_16, tmp_right_name_16 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 683;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 683;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_33 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 683;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        par_c = tmp_assign_source_33;
        Py_XDECREF( old );
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
            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
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

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
                );

                assert( res == 0 );
            }

            if ( par_lbnd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lbnd,
                    par_lbnd
                );

                assert( res == 0 );
            }

            if ( par_scl )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scl,
                    par_scl
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

            if ( var_cdt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cdt,
                    var_cdt
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

            if ( var_cnt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cnt,
                    var_cnt
                );

                assert( res == 0 );
            }

            if ( var_iaxis )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iaxis,
                    var_iaxis
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

            if ( var_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    var_n
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

    tmp_return_value = par_c;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_10_polyint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_lbnd );
    Py_DECREF( par_lbnd );
    par_lbnd = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)var_cdt );
    Py_DECREF( var_cdt );
    var_cdt = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    CHECK_OBJECT( (PyObject *)var_cnt );
    Py_DECREF( var_cnt );
    var_cnt = NULL;

    CHECK_OBJECT( (PyObject *)var_iaxis );
    Py_DECREF( var_iaxis );
    var_iaxis = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)par_lbnd );
    Py_DECREF( par_lbnd );
    par_lbnd = NULL;

    CHECK_OBJECT( (PyObject *)par_scl );
    Py_DECREF( par_scl );
    par_scl = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_cdt );
    var_cdt = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_cnt );
    var_cnt = NULL;

    Py_XDECREF( var_iaxis );
    var_iaxis = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_10_polyint );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_11_polyval( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_c = python_pars[ 1 ];
    PyObject *par_tensor = python_pars[ 2 ];
    PyObject *var_c0 = NULL;
    PyObject *var_i = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_low_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ee374e192687b88177b6ba99b538f8a6, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 768;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 768;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_c;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_1eef64507cf3de8ea0ea857c5e7e1090 );
    frame_function->f_lineno = 768;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 768;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_3 = par_c;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 769;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_char );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 769;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_digest_6e06792ac9d1e948515e79b21ef14ea6;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = par_c;

    tmp_right_name_1 = const_float_0_0;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 771;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_isinstance_inst_1 = par_x;

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
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 772;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 773;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_asarray );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_x;

    frame_function->f_lineno = 773;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 773;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_isinstance_inst_2 = par_x;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 774;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndarray );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 774;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 774;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 774;
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
    tmp_and_right_value_1 = par_tensor;

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


        exception_lineno = 774;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_6 = par_c;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_reshape );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 775;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_c;

    tmp_left_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 775;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = const_tuple_int_pos_1_tuple;
    tmp_source_name_8 = par_x;

    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_ndim );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 775;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 775;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 775;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 775;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 775;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_subscribed_name_1 = par_c;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;

        exception_lineno = 777;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = const_int_neg_1;
    tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 777;
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = par_x;

    tmp_right_name_5 = const_int_0;
    tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 777;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 777;
        goto frame_exception_exit_1;
    }
    assert( var_c0 == NULL );
    var_c0 = tmp_assign_source_5;

    tmp_range2_low_1 = const_int_pos_2;
    tmp_len_arg_1 = par_c;

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;

        exception_lineno = 778;
        goto frame_exception_exit_1;
    }

    tmp_left_name_6 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        goto frame_exception_exit_1;
    }
    tmp_right_name_6 = const_int_pos_1;
    tmp_range2_high_1 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_range2_high_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_high_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            frame_function->f_lineno = 778;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_8;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_2 = par_c;

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c" );
        exception_tb = NULL;

        exception_lineno = 779;
        goto try_except_handler_2;
    }

    tmp_operand_name_1 = var_i;

    tmp_subscript_name_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_subscript_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 779;
        goto try_except_handler_2;
    }
    tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 779;
        goto try_except_handler_2;
    }
    tmp_left_name_8 = var_c0;

    if ( tmp_left_name_8 == NULL )
    {
        Py_DECREF( tmp_left_name_7 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c0" );
        exception_tb = NULL;

        exception_lineno = 779;
        goto try_except_handler_2;
    }

    tmp_right_name_8 = par_x;

    tmp_right_name_7 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 779;
        goto try_except_handler_2;
    }
    tmp_assign_source_9 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 779;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_c0;
        var_c0 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
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

    tmp_return_value = var_c0;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "c0" );
        exception_tb = NULL;

        exception_lineno = 780;
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

            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
                );

                assert( res == 0 );
            }

            if ( par_tensor )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tensor,
                    par_tensor
                );

                assert( res == 0 );
            }

            if ( var_c0 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c0,
                    var_c0
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_11_polyval );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_tensor );
    Py_DECREF( par_tensor );
    par_tensor = NULL;

    Py_XDECREF( var_c0 );
    var_c0 = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_c );
    par_c = NULL;

    CHECK_OBJECT( (PyObject *)par_tensor );
    Py_DECREF( par_tensor );
    par_tensor = NULL;

    Py_XDECREF( var_c0 );
    var_c0 = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_11_polyval );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_12_polyval2d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_c = python_pars[ 2 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7251454ca7365b5bc118e9d75ae1c339, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 831;
        goto try_except_handler_3;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 831;
        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_x;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_y;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_5c9928d3d4adf8d21e4940309b7f60ed );
    frame_function->f_lineno = 831;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 831;
        goto try_except_handler_3;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 831;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 831;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 831;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

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
    tmp_make_exception_arg_1 = const_str_digest_88ea85868dacccabad48a8aef44c097b;
    frame_function->f_lineno = 833;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 833;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_4;
        Py_INCREF( par_x );
        Py_DECREF( old );
    }

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_y;
        assert( old != NULL );
        par_y = tmp_assign_source_5;
        Py_INCREF( par_y );
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

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 835;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    tmp_args_element_name_2 = par_c;

    frame_function->f_lineno = 835;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 835;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 836;
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_y;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_c;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_d61f4d385fe121badbdc8e4bc7fe576f );
    frame_function->f_lineno = 836;
    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 836;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_7;
        Py_DECREF( old );
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

            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
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

    tmp_return_value = par_c;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_12_polyval2d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_12_polyval2d );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_13_polygrid2d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_c = python_pars[ 2 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_567497983e9e0ae182bf48c39366d69f, module_numpy$polynomial$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 890;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    tmp_args_element_name_2 = par_c;

    frame_function->f_lineno = 890;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 890;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 891;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_y;

    tmp_args_element_name_4 = par_c;

    frame_function->f_lineno = 891;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 891;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_2;
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

            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
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

    tmp_return_value = par_c;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_13_polygrid2d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_13_polygrid2d );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_14_polyval3d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    PyObject *par_c = python_pars[ 3 ];
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2c1c5896e181b2ef6386157f945352c1, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 944;
        goto try_except_handler_3;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 944;
        goto try_except_handler_3;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = par_x;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_y;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_z;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_5c9928d3d4adf8d21e4940309b7f60ed );
    frame_function->f_lineno = 944;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 944;
        goto try_except_handler_3;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 944;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 944;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 944;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 944;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;

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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
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
    tmp_make_exception_arg_1 = const_str_digest_13227f847c5a19dd9cedee16debb959e;
    frame_function->f_lineno = 946;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 946;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_5;
        Py_INCREF( par_x );
        Py_DECREF( old );
    }

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_y;
        assert( old != NULL );
        par_y = tmp_assign_source_6;
        Py_INCREF( par_y );
        Py_DECREF( old );
    }

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_3;

    {
        PyObject *old = par_z;
        assert( old != NULL );
        par_z = tmp_assign_source_7;
        Py_INCREF( par_z );
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_3 );
    Py_DECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 948;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    tmp_args_element_name_2 = par_c;

    frame_function->f_lineno = 948;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 948;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 949;
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = par_y;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_c;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_d61f4d385fe121badbdc8e4bc7fe576f );
    frame_function->f_lineno = 949;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 949;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_9;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 950;
        goto frame_exception_exit_1;
    }

    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = par_z;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = par_c;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_d61f4d385fe121badbdc8e4bc7fe576f );
    frame_function->f_lineno = 950;
    tmp_assign_source_10 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 950;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_10;
        Py_DECREF( old );
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

            if ( par_z )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_z,
                    par_z
                );

                assert( res == 0 );
            }

            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
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

    tmp_return_value = par_c;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_14_polyval3d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_14_polyval3d );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_15_polygrid3d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    PyObject *par_c = python_pars[ 3 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5bfc5c3dc7f545ba7fba279e8fb0643e, module_numpy$polynomial$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 1007;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    tmp_args_element_name_2 = par_c;

    frame_function->f_lineno = 1007;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1007;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 1008;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_y;

    tmp_args_element_name_4 = par_c;

    frame_function->f_lineno = 1008;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1008;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 1009;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_z;

    tmp_args_element_name_6 = par_c;

    frame_function->f_lineno = 1009;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1009;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_3;
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

            if ( par_z )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_z,
                    par_z
                );

                assert( res == 0 );
            }

            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
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

    tmp_return_value = par_c;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_15_polygrid3d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

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

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_15_polygrid3d );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_16_polyvander( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_deg = python_pars[ 1 ];
    PyObject *var_ideg = NULL;
    PyObject *var_dims = NULL;
    PyObject *var_dtyp = NULL;
    PyObject *var_v = NULL;
    PyObject *var_i = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    int tmp_ass_subscript_res_1;
    int tmp_ass_subscript_res_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
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
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
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
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_range2_high_1;
    PyObject *tmp_range2_low_1;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_af685d0621d649f9fa3d90c6cc5edbe7, module_numpy$polynomial$polynomial );
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
    tmp_int_arg_1 = par_deg;

    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1051;
        goto frame_exception_exit_1;
    }
    assert( var_ideg == NULL );
    var_ideg = tmp_assign_source_1;

    tmp_compare_left_1 = var_ideg;

    tmp_compare_right_1 = par_deg;

    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1052;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_bdb9c499ede16dacf39d6b78c1ed0d5e;
    frame_function->f_lineno = 1053;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1053;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = var_ideg;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1054;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_ea8c65b23281db7ee7660696e61ab360;
    frame_function->f_lineno = 1055;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 1055;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1057;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1057;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_x;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_1eef64507cf3de8ea0ea857c5e7e1090 );
    frame_function->f_lineno = 1057;
    tmp_left_name_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1057;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_float_0_0;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1057;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_left_name_2 = PyTuple_New( 1 );
    tmp_left_name_3 = var_ideg;

    tmp_right_name_2 = const_int_pos_1;
    tmp_tuple_element_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 1058;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_left_name_2, 0, tmp_tuple_element_2 );
    tmp_source_name_2 = par_x;

    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 1058;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1058;
        goto frame_exception_exit_1;
    }
    assert( var_dims == NULL );
    var_dims = tmp_assign_source_3;

    tmp_source_name_3 = par_x;

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1059;
        goto frame_exception_exit_1;
    }
    assert( var_dtyp == NULL );
    var_dtyp = tmp_assign_source_4;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1060;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_empty );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1060;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_dims;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_dtyp;

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 1060;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1060;
        goto frame_exception_exit_1;
    }
    assert( var_v == NULL );
    var_v = tmp_assign_source_5;

    tmp_left_name_5 = par_x;

    tmp_right_name_4 = const_int_0;
    tmp_left_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1061;
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_ass_subvalue_1 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1061;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_v;

    tmp_ass_subscript_1 = const_int_0;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, 0, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1061;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_3 = var_ideg;

    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1062;
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
    tmp_ass_subvalue_2 = par_x;

    tmp_ass_subscribed_2 = var_v;

    tmp_ass_subscript_2 = const_int_pos_1;
    tmp_ass_subscript_res_2 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_2, tmp_ass_subscript_2, 1, tmp_ass_subvalue_2 );
    if ( tmp_ass_subscript_res_2 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1063;
        goto frame_exception_exit_1;
    }
    tmp_range2_low_1 = const_int_pos_2;
    tmp_left_name_6 = var_ideg;

    tmp_right_name_6 = const_int_pos_1;
    tmp_range2_high_1 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_range2_high_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1064;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_high_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1064;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1064;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

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
            frame_function->f_lineno = 1064;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_8;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_subscribed_name_1 = var_v;

    tmp_left_name_8 = var_i;

    tmp_right_name_7 = const_int_pos_1;
    tmp_subscript_name_1 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_7 );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1065;
        goto try_except_handler_2;
    }
    tmp_left_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1065;
        goto try_except_handler_2;
    }
    tmp_right_name_8 = par_x;

    tmp_ass_subvalue_3 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_7 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1065;
        goto try_except_handler_2;
    }
    tmp_ass_subscribed_3 = var_v;

    tmp_ass_subscript_3 = var_i;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1065;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1064;
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

    branch_no_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1066;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_rollaxis );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1066;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_v;

    tmp_args_element_name_2 = const_int_0;
    tmp_source_name_6 = var_v;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 1066;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1066;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1066;
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

            if ( par_deg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deg,
                    par_deg
                );

                assert( res == 0 );
            }

            if ( var_ideg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ideg,
                    var_ideg
                );

                assert( res == 0 );
            }

            if ( var_dims )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dims,
                    var_dims
                );

                assert( res == 0 );
            }

            if ( var_dtyp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dtyp,
                    var_dtyp
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_16_polyvander );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)var_ideg );
    Py_DECREF( var_ideg );
    var_ideg = NULL;

    CHECK_OBJECT( (PyObject *)var_dims );
    Py_DECREF( var_dims );
    var_dims = NULL;

    CHECK_OBJECT( (PyObject *)var_dtyp );
    Py_DECREF( var_dtyp );
    var_dtyp = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( var_ideg );
    var_ideg = NULL;

    Py_XDECREF( var_dims );
    var_dims = NULL;

    Py_XDECREF( var_dtyp );
    var_dtyp = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_16_polyvander );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_17_polyvander2d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_deg = python_pars[ 2 ];
    PyObject *var_d = NULL;
    PyObject *var_ideg = NULL;
    PyObject *var_id = NULL;
    PyObject *var_is_valid = NULL;
    PyObject *var_degx = NULL;
    PyObject *var_degy = NULL;
    PyObject *var_vx = NULL;
    PyObject *var_vy = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
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
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
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
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
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
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_62128576ef00e03c45248fadee8681f3, module_numpy$polynomial$polynomial );
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
    tmp_iter_arg_1 = par_deg;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1114;
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
            PyThreadState_GET()->frame->f_lineno = 1114;
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
        PyObject *old = var_d;
        var_d = tmp_assign_source_5;
        Py_INCREF( var_d );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_int_arg_1 = var_d;

    tmp_append_value_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1114;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1114;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1114;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_17_polyvander2d );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_17_polyvander2d );
    return NULL;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_ideg == NULL );
    var_ideg = tmp_assign_source_1;

    // Tried code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = var_ideg;

    tmp_args_element_name_2 = par_deg;

    PyThreadState_GET()->frame->f_lineno = 1115;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1115;
        goto try_except_handler_3;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1115;
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
            PyThreadState_GET()->frame->f_lineno = 1115;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = tmp_list_contraction_2__iter_value_0;

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1115;
        goto try_except_handler_4;
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


        exception_lineno = 1115;
        goto try_except_handler_4;
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


        exception_lineno = 1115;
        goto try_except_handler_4;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    tmp_assign_source_13 = tmp_list_contraction$tuple_unpack_1__element_1;

    {
        PyObject *old = var_id;
        var_id = tmp_assign_source_13;
        Py_INCREF( var_id );
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_list_contraction$tuple_unpack_1__element_2;

    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_14;
        Py_INCREF( var_d );
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

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    tmp_compexpr_left_1 = var_id;

    tmp_compexpr_right_1 = var_d;

    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1115;
        goto try_except_handler_3;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 1115;
        goto try_except_handler_3;
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
    tmp_compexpr_left_2 = var_id;

    tmp_compexpr_right_2 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1115;
        goto try_except_handler_3;
    }
    tmp_append_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_append_value_2 = tmp_and_left_value_1;
    and_end_1:;
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1115;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1115;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_17_polyvander2d );
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
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_17_polyvander2d );
    return NULL;
    outline_result_2:;
    tmp_assign_source_6 = tmp_outline_return_value_2;
    assert( var_is_valid == NULL );
    var_is_valid = tmp_assign_source_6;

    tmp_compare_left_1 = var_is_valid;

    tmp_compare_right_1 = LIST_COPY( const_list_int_pos_1_int_pos_1_list );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 1116;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_6a43499de4143b7f2feff247d35ef074;
    frame_function->f_lineno = 1117;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1117;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_iter_arg_4 = var_ideg;

    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1118;
        goto try_except_handler_5;
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


        exception_lineno = 1118;
        goto try_except_handler_5;
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


        exception_lineno = 1118;
        goto try_except_handler_5;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_18 = tmp_tuple_unpack_1__element_1;

    assert( var_degx == NULL );
    Py_INCREF( tmp_assign_source_18 );
    var_degx = tmp_assign_source_18;

    tmp_assign_source_19 = tmp_tuple_unpack_1__element_2;

    assert( var_degy == NULL );
    Py_INCREF( tmp_assign_source_19 );
    var_degy = tmp_assign_source_19;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1119;
        goto try_except_handler_6;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1119;
        goto try_except_handler_6;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = par_x;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_y;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_5c9928d3d4adf8d21e4940309b7f60ed );
    frame_function->f_lineno = 1119;
    tmp_left_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1119;
        goto try_except_handler_6;
    }
    tmp_right_name_1 = const_float_0_0;
    tmp_iter_arg_5 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1119;
        goto try_except_handler_6;
    }
    tmp_assign_source_20 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1119;
        goto try_except_handler_6;
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


        exception_lineno = 1119;
        goto try_except_handler_6;
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


        exception_lineno = 1119;
        goto try_except_handler_6;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_6;
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_23 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_23;
        Py_INCREF( par_x );
        Py_DECREF( old );
    }

    tmp_assign_source_24 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = par_y;
        assert( old != NULL );
        par_y = tmp_assign_source_24;
        Py_INCREF( par_y );
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

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyvander );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyvander );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyvander" );
        exception_tb = NULL;

        exception_lineno = 1121;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_x;

    tmp_args_element_name_4 = var_degx;

    frame_function->f_lineno = 1121;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1121;
        goto frame_exception_exit_1;
    }
    assert( var_vx == NULL );
    var_vx = tmp_assign_source_25;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyvander );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyvander );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyvander" );
        exception_tb = NULL;

        exception_lineno = 1122;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_y;

    tmp_args_element_name_6 = var_degy;

    frame_function->f_lineno = 1122;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_26 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1122;
        goto frame_exception_exit_1;
    }
    assert( var_vy == NULL );
    var_vy = tmp_assign_source_26;

    tmp_subscribed_name_1 = var_vx;

    tmp_subscript_name_1 = const_tuple_ellipsis_none_tuple;
    tmp_left_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1123;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = var_vy;

    tmp_subscript_name_2 = const_tuple_ellipsis_none_slice_none_none_none_tuple;
    tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 1123;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1123;
        goto frame_exception_exit_1;
    }
    assert( var_v == NULL );
    var_v = tmp_assign_source_27;

    tmp_source_name_2 = var_v;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reshape );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1126;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -2;
    tmp_source_name_3 = var_v;

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 1126;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 1126;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_tuple_int_neg_1_tuple;
    tmp_args_element_name_7 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 1126;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1126;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1126;
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

            if ( par_y )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_y,
                    par_y
                );

                assert( res == 0 );
            }

            if ( par_deg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deg,
                    par_deg
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

            if ( var_ideg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ideg,
                    var_ideg
                );

                assert( res == 0 );
            }

            if ( var_id )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_id,
                    var_id
                );

                assert( res == 0 );
            }

            if ( var_is_valid )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_is_valid,
                    var_is_valid
                );

                assert( res == 0 );
            }

            if ( var_degx )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_degx,
                    var_degx
                );

                assert( res == 0 );
            }

            if ( var_degy )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_degy,
                    var_degy
                );

                assert( res == 0 );
            }

            if ( var_vx )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vx,
                    var_vx
                );

                assert( res == 0 );
            }

            if ( var_vy )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vy,
                    var_vy
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_17_polyvander2d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_ideg );
    Py_DECREF( var_ideg );
    var_ideg = NULL;

    Py_XDECREF( var_id );
    var_id = NULL;

    CHECK_OBJECT( (PyObject *)var_is_valid );
    Py_DECREF( var_is_valid );
    var_is_valid = NULL;

    CHECK_OBJECT( (PyObject *)var_degx );
    Py_DECREF( var_degx );
    var_degx = NULL;

    CHECK_OBJECT( (PyObject *)var_degy );
    Py_DECREF( var_degy );
    var_degy = NULL;

    CHECK_OBJECT( (PyObject *)var_vx );
    Py_DECREF( var_vx );
    var_vx = NULL;

    CHECK_OBJECT( (PyObject *)var_vy );
    Py_DECREF( var_vy );
    var_vy = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_ideg );
    var_ideg = NULL;

    Py_XDECREF( var_id );
    var_id = NULL;

    Py_XDECREF( var_is_valid );
    var_is_valid = NULL;

    Py_XDECREF( var_degx );
    var_degx = NULL;

    Py_XDECREF( var_degy );
    var_degy = NULL;

    Py_XDECREF( var_vx );
    var_vx = NULL;

    Py_XDECREF( var_vy );
    var_vy = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_17_polyvander2d );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_18_polyvander3d( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_z = python_pars[ 2 ];
    PyObject *par_deg = python_pars[ 3 ];
    PyObject *var_d = NULL;
    PyObject *var_ideg = NULL;
    PyObject *var_id = NULL;
    PyObject *var_is_valid = NULL;
    PyObject *var_degx = NULL;
    PyObject *var_degy = NULL;
    PyObject *var_degz = NULL;
    PyObject *var_vx = NULL;
    PyObject *var_vy = NULL;
    PyObject *var_vz = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_list_contraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    PyObject *tmp_unpack_7;
    PyObject *tmp_unpack_8;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_756caae9dbdf125362b14a095fa76728, module_numpy$polynomial$polynomial );
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
    tmp_iter_arg_1 = par_deg;

    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1180;
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
            PyThreadState_GET()->frame->f_lineno = 1180;
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
        PyObject *old = var_d;
        var_d = tmp_assign_source_5;
        Py_INCREF( var_d );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_int_arg_1 = var_d;

    tmp_append_value_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1180;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1180;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1180;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_18_polyvander3d );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_18_polyvander3d );
    return NULL;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_ideg == NULL );
    var_ideg = tmp_assign_source_1;

    // Tried code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = var_ideg;

    tmp_args_element_name_2 = par_deg;

    PyThreadState_GET()->frame->f_lineno = 1181;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1181;
        goto try_except_handler_3;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1181;
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
            PyThreadState_GET()->frame->f_lineno = 1181;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = tmp_list_contraction_2__iter_value_0;

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1181;
        goto try_except_handler_4;
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


        exception_lineno = 1181;
        goto try_except_handler_4;
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


        exception_lineno = 1181;
        goto try_except_handler_4;
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

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    tmp_assign_source_13 = tmp_list_contraction$tuple_unpack_1__element_1;

    {
        PyObject *old = var_id;
        var_id = tmp_assign_source_13;
        Py_INCREF( var_id );
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_list_contraction$tuple_unpack_1__element_2;

    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_14;
        Py_INCREF( var_d );
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

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    tmp_compexpr_left_1 = var_id;

    tmp_compexpr_right_1 = var_d;

    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1181;
        goto try_except_handler_3;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 1181;
        goto try_except_handler_3;
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
    tmp_compexpr_left_2 = var_id;

    tmp_compexpr_right_2 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_GE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1181;
        goto try_except_handler_3;
    }
    tmp_append_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_append_value_2 = tmp_and_left_value_1;
    and_end_1:;
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1181;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1181;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_18_polyvander3d );
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
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_18_polyvander3d );
    return NULL;
    outline_result_2:;
    tmp_assign_source_6 = tmp_outline_return_value_2;
    assert( var_is_valid == NULL );
    var_is_valid = tmp_assign_source_6;

    tmp_compare_left_1 = var_is_valid;

    tmp_compare_right_1 = LIST_COPY( const_list_int_pos_1_int_pos_1_int_pos_1_list );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 1182;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_6a43499de4143b7f2feff247d35ef074;
    frame_function->f_lineno = 1183;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1183;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_iter_arg_4 = var_ideg;

    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1184;
        goto try_except_handler_5;
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


        exception_lineno = 1184;
        goto try_except_handler_5;
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


        exception_lineno = 1184;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_17;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

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


        exception_lineno = 1184;
        goto try_except_handler_5;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_18;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_5;
    }
    goto try_end_2;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_19 = tmp_tuple_unpack_1__element_1;

    assert( var_degx == NULL );
    Py_INCREF( tmp_assign_source_19 );
    var_degx = tmp_assign_source_19;

    tmp_assign_source_20 = tmp_tuple_unpack_1__element_2;

    assert( var_degy == NULL );
    Py_INCREF( tmp_assign_source_20 );
    var_degy = tmp_assign_source_20;

    tmp_assign_source_21 = tmp_tuple_unpack_1__element_3;

    assert( var_degz == NULL );
    Py_INCREF( tmp_assign_source_21 );
    var_degz = tmp_assign_source_21;

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

    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1185;
        goto try_except_handler_6;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1185;
        goto try_except_handler_6;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = par_x;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_y;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_z;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 2, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_5c9928d3d4adf8d21e4940309b7f60ed );
    frame_function->f_lineno = 1185;
    tmp_left_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1185;
        goto try_except_handler_6;
    }
    tmp_right_name_1 = const_float_0_0;
    tmp_iter_arg_5 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_iter_arg_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1185;
        goto try_except_handler_6;
    }
    tmp_assign_source_22 = MAKE_ITERATOR( tmp_iter_arg_5 );
    Py_DECREF( tmp_iter_arg_5 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1185;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_22;

    tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_6, 0 );
    if ( tmp_assign_source_23 == NULL )
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


        exception_lineno = 1185;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_23;

    tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_24 = UNPACK_NEXT( tmp_unpack_7, 1 );
    if ( tmp_assign_source_24 == NULL )
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


        exception_lineno = 1185;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_24;

    tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_25 = UNPACK_NEXT( tmp_unpack_8, 2 );
    if ( tmp_assign_source_25 == NULL )
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


        exception_lineno = 1185;
        goto try_except_handler_6;
    }
    assert( tmp_tuple_unpack_2__element_3 == NULL );
    tmp_tuple_unpack_2__element_3 = tmp_assign_source_25;

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
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_26 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_26;
        Py_INCREF( par_x );
        Py_DECREF( old );
    }

    tmp_assign_source_27 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = par_y;
        assert( old != NULL );
        par_y = tmp_assign_source_27;
        Py_INCREF( par_y );
        Py_DECREF( old );
    }

    tmp_assign_source_28 = tmp_tuple_unpack_2__element_3;

    {
        PyObject *old = par_z;
        assert( old != NULL );
        par_z = tmp_assign_source_28;
        Py_INCREF( par_z );
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_3 );
    Py_DECREF( tmp_tuple_unpack_2__element_3 );
    tmp_tuple_unpack_2__element_3 = NULL;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyvander );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyvander );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyvander" );
        exception_tb = NULL;

        exception_lineno = 1187;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_x;

    tmp_args_element_name_4 = var_degx;

    frame_function->f_lineno = 1187;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_29 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1187;
        goto frame_exception_exit_1;
    }
    assert( var_vx == NULL );
    var_vx = tmp_assign_source_29;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyvander );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyvander );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyvander" );
        exception_tb = NULL;

        exception_lineno = 1188;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_y;

    tmp_args_element_name_6 = var_degy;

    frame_function->f_lineno = 1188;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_30 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1188;
        goto frame_exception_exit_1;
    }
    assert( var_vy == NULL );
    var_vy = tmp_assign_source_30;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyvander );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyvander );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyvander" );
        exception_tb = NULL;

        exception_lineno = 1189;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_z;

    tmp_args_element_name_8 = var_degz;

    frame_function->f_lineno = 1189;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_31 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1189;
        goto frame_exception_exit_1;
    }
    assert( var_vz == NULL );
    var_vz = tmp_assign_source_31;

    tmp_subscribed_name_1 = var_vx;

    tmp_subscript_name_1 = const_tuple_ellipsis_none_none_tuple;
    tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1190;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = var_vy;

    tmp_subscript_name_2 = const_tuple_ellipsis_none_slice_none_none_none_none_tuple;
    tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 1190;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1190;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_3 = var_vz;

    tmp_subscript_name_3 = const_tuple_ellipsis_none_none_slice_none_none_none_tuple;
    tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 1190;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1190;
        goto frame_exception_exit_1;
    }
    assert( var_v == NULL );
    var_v = tmp_assign_source_32;

    tmp_source_name_2 = var_v;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_reshape );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1193;
        goto frame_exception_exit_1;
    }
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -3;
    tmp_source_name_3 = var_v;

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 1193;
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 1193;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_tuple_int_neg_1_tuple;
    tmp_args_element_name_9 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 1193;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1193;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1193;
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

            if ( par_y )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_y,
                    par_y
                );

                assert( res == 0 );
            }

            if ( par_z )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_z,
                    par_z
                );

                assert( res == 0 );
            }

            if ( par_deg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deg,
                    par_deg
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

            if ( var_ideg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ideg,
                    var_ideg
                );

                assert( res == 0 );
            }

            if ( var_id )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_id,
                    var_id
                );

                assert( res == 0 );
            }

            if ( var_is_valid )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_is_valid,
                    var_is_valid
                );

                assert( res == 0 );
            }

            if ( var_degx )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_degx,
                    var_degx
                );

                assert( res == 0 );
            }

            if ( var_degy )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_degy,
                    var_degy
                );

                assert( res == 0 );
            }

            if ( var_degz )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_degz,
                    var_degz
                );

                assert( res == 0 );
            }

            if ( var_vx )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vx,
                    var_vx
                );

                assert( res == 0 );
            }

            if ( var_vy )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vy,
                    var_vy
                );

                assert( res == 0 );
            }

            if ( var_vz )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vz,
                    var_vz
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_18_polyvander3d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    CHECK_OBJECT( (PyObject *)var_ideg );
    Py_DECREF( var_ideg );
    var_ideg = NULL;

    Py_XDECREF( var_id );
    var_id = NULL;

    CHECK_OBJECT( (PyObject *)var_is_valid );
    Py_DECREF( var_is_valid );
    var_is_valid = NULL;

    CHECK_OBJECT( (PyObject *)var_degx );
    Py_DECREF( var_degx );
    var_degx = NULL;

    CHECK_OBJECT( (PyObject *)var_degy );
    Py_DECREF( var_degy );
    var_degy = NULL;

    CHECK_OBJECT( (PyObject *)var_degz );
    Py_DECREF( var_degz );
    var_degz = NULL;

    CHECK_OBJECT( (PyObject *)var_vx );
    Py_DECREF( var_vx );
    var_vx = NULL;

    CHECK_OBJECT( (PyObject *)var_vy );
    Py_DECREF( var_vy );
    var_vy = NULL;

    CHECK_OBJECT( (PyObject *)var_vz );
    Py_DECREF( var_vz );
    var_vz = NULL;

    CHECK_OBJECT( (PyObject *)var_v );
    Py_DECREF( var_v );
    var_v = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_z );
    Py_DECREF( par_z );
    par_z = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_ideg );
    var_ideg = NULL;

    Py_XDECREF( var_id );
    var_id = NULL;

    Py_XDECREF( var_is_valid );
    var_is_valid = NULL;

    Py_XDECREF( var_degx );
    var_degx = NULL;

    Py_XDECREF( var_degy );
    var_degy = NULL;

    Py_XDECREF( var_degz );
    var_degz = NULL;

    Py_XDECREF( var_vx );
    var_vx = NULL;

    Py_XDECREF( var_vy );
    var_vy = NULL;

    Py_XDECREF( var_vz );
    var_vz = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_18_polyvander3d );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_19_polyfit( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_y = python_pars[ 1 ];
    PyObject *par_deg = python_pars[ 2 ];
    PyObject *par_rcond = python_pars[ 3 ];
    PyObject *par_full = python_pars[ 4 ];
    PyObject *par_w = python_pars[ 5 ];
    PyObject *var_lmax = NULL;
    PyObject *var_order = NULL;
    PyObject *var_van = NULL;
    PyObject *var_lhs = NULL;
    PyObject *var_rhs = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_c = NULL;
    PyObject *var_resids = NULL;
    PyObject *var_rank = NULL;
    PyObject *var_s = NULL;
    PyObject *var_cc = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
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
    PyObject *tmp_args_element_name_22;
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
    PyObject *tmp_called_name_21;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Lt_1;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    int tmp_cmp_NotEq_3;
    int tmp_cmp_NotEq_4;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_left_5;
    PyObject *tmp_compexpr_left_6;
    PyObject *tmp_compexpr_left_7;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_compexpr_right_5;
    PyObject *tmp_compexpr_right_6;
    PyObject *tmp_compexpr_right_7;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
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
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_make_exception_arg_6;
    PyObject *tmp_make_exception_arg_7;
    PyObject *tmp_make_exception_arg_8;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    int tmp_or_left_truth_3;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_left_value_3;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_or_right_value_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
    PyObject *tmp_raise_type_8;
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
    PyObject *tmp_source_name_29;
    PyObject *tmp_source_name_30;
    PyObject *tmp_source_name_31;
    PyObject *tmp_source_name_32;
    PyObject *tmp_source_name_33;
    PyObject *tmp_source_name_34;
    PyObject *tmp_source_name_35;
    PyObject *tmp_source_name_36;
    PyObject *tmp_source_name_37;
    PyObject *tmp_source_name_38;
    PyObject *tmp_source_name_39;
    PyObject *tmp_source_name_40;
    PyObject *tmp_source_name_41;
    PyObject *tmp_source_name_42;
    PyObject *tmp_source_name_43;
    PyObject *tmp_source_name_44;
    PyObject *tmp_source_name_45;
    PyObject *tmp_source_name_46;
    PyObject *tmp_source_name_47;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9f6eecf0bcfad3656da3d9fe3566b0ab, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1338;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1338;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_x;

    frame_function->f_lineno = 1338;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1338;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_float_0_0;
    tmp_assign_source_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1338;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1339;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1339;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_y;

    frame_function->f_lineno = 1339;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1339;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_float_0_0;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1339;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_y;
        assert( old != NULL );
        par_y = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1340;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_asarray );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1340;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_deg;

    frame_function->f_lineno = 1340;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1340;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_deg;
        assert( old != NULL );
        par_deg = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_source_name_4 = par_deg;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ndim );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1343;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_or_left_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1343;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 1343;
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
    tmp_source_name_6 = par_deg;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1343;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_kind );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1343;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_str_plain_iu;
    tmp_or_left_value_2 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1343;
        goto frame_exception_exit_1;
    }
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
    tmp_source_name_7 = par_deg;

    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_size );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1343;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = const_int_0;
    tmp_or_right_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1343;
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    Py_INCREF( tmp_or_left_value_2 );
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
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1343;
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
    tmp_make_exception_arg_1 = const_str_digest_86bddf8ddd67e49da0bc28efd50b11b2;
    frame_function->f_lineno = 1344;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1344;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_8 = par_deg;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_min );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1345;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1345;
    tmp_compare_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1345;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 1345;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_58b9c2de86cf9b3c187794eb33218cee;
    frame_function->f_lineno = 1346;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 1346;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_9 = par_x;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_ndim );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1347;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 1347;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_3 = const_str_digest_7776c2b4c0f21c76e792d8c463042f37;
    frame_function->f_lineno = 1348;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 1348;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_10 = par_x;

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_size );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1349;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 1349;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_4 = const_str_digest_470eccc427becdbaa48f7e4c1af24ff5;
    frame_function->f_lineno = 1350;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 1350;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_source_name_11 = par_y;

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_ndim );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1351;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = const_int_pos_1;
    tmp_or_left_value_3 = RICH_COMPARE_LT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_or_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1351;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_3 = CHECK_IF_TRUE( tmp_or_left_value_3 );
    if ( tmp_or_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_3 );

        exception_lineno = 1351;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_3 == 1 )
    {
        goto or_left_3;
    }
    else
    {
        goto or_right_3;
    }
    or_right_3:;
    Py_DECREF( tmp_or_left_value_3 );
    tmp_source_name_12 = par_y;

    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ndim );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1351;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = const_int_pos_2;
    tmp_or_right_value_3 = RICH_COMPARE_GT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_or_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1351;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_or_right_value_3;
    goto or_end_3;
    or_left_3:;
    tmp_cond_value_2 = tmp_or_left_value_3;
    or_end_3:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 1351;
        goto frame_exception_exit_1;
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
    tmp_make_exception_arg_5 = const_str_digest_3943f956186dfbaba7ee5555afa1df28;
    frame_function->f_lineno = 1352;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_5 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 1352;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_len_arg_1 = par_x;

    tmp_compare_left_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1353;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_y;

    tmp_compare_right_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 1353;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 1353;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_make_exception_arg_6 = const_str_digest_44e97c1c143647b689f32f77c9c8ec56;
    frame_function->f_lineno = 1354;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_6 };
        tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_6 != NULL );
    exception_type = tmp_raise_type_6;
    exception_lineno = 1354;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_6:;
    tmp_source_name_13 = par_deg;

    tmp_compare_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_ndim );
    if ( tmp_compare_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1356;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_5 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_5 );

        exception_lineno = 1356;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_5 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_4 = par_deg;

    assert( var_lmax == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_lmax = tmp_assign_source_4;

    tmp_left_name_3 = var_lmax;

    tmp_right_name_3 = const_int_pos_1;
    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1358;
        goto frame_exception_exit_1;
    }
    assert( var_order == NULL );
    var_order = tmp_assign_source_5;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyvander );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyvander );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyvander" );
        exception_tb = NULL;

        exception_lineno = 1359;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_x;

    tmp_args_element_name_5 = var_lmax;

    frame_function->f_lineno = 1359;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1359;
        goto frame_exception_exit_1;
    }
    assert( var_van == NULL );
    var_van = tmp_assign_source_6;

    goto branch_end_7;
    branch_no_7:;
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1361;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_sort );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1361;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_deg;

    frame_function->f_lineno = 1361;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1361;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_deg;
        assert( old != NULL );
        par_deg = tmp_assign_source_7;
        Py_DECREF( old );
    }

    tmp_subscribed_name_1 = par_deg;

    tmp_subscript_name_1 = const_int_neg_1;
    tmp_assign_source_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1362;
        goto frame_exception_exit_1;
    }
    assert( var_lmax == NULL );
    var_lmax = tmp_assign_source_8;

    tmp_len_arg_3 = par_deg;

    tmp_assign_source_9 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1363;
        goto frame_exception_exit_1;
    }
    assert( var_order == NULL );
    var_order = tmp_assign_source_9;

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyvander );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyvander );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyvander" );
        exception_tb = NULL;

        exception_lineno = 1364;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_x;

    tmp_args_element_name_8 = var_lmax;

    frame_function->f_lineno = 1364;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_subscribed_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1364;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_slice_none_none_none;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_subscript_name_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_deg;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_subscript_name_2, 1, tmp_tuple_element_1 );
    tmp_assign_source_10 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    Py_DECREF( tmp_subscript_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1364;
        goto frame_exception_exit_1;
    }
    assert( var_van == NULL );
    var_van = tmp_assign_source_10;

    branch_end_7:;
    tmp_source_name_15 = var_van;

    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_T );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1367;
        goto frame_exception_exit_1;
    }
    assert( var_lhs == NULL );
    var_lhs = tmp_assign_source_11;

    tmp_source_name_16 = par_y;

    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_T );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1368;
        goto frame_exception_exit_1;
    }
    assert( var_rhs == NULL );
    var_rhs = tmp_assign_source_12;

    tmp_compare_left_6 = par_w;

    tmp_compare_right_6 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1370;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_asarray );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1370;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = par_w;

    frame_function->f_lineno = 1370;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_left_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1370;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_float_0_0;
    tmp_assign_source_13 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1370;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_w;
        assert( old != NULL );
        par_w = tmp_assign_source_13;
        Py_DECREF( old );
    }

    tmp_source_name_18 = par_w;

    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ndim );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1371;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = const_int_pos_1;
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 1371;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_7 );
    if ( tmp_cmp_NotEq_3 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_make_exception_arg_7 = const_str_digest_38ddb95e1ec5856024db3736b3b90fc6;
    frame_function->f_lineno = 1372;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_7 };
        tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_7 != NULL );
    exception_type = tmp_raise_type_7;
    exception_lineno = 1372;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_9:;
    tmp_len_arg_4 = par_x;

    tmp_compare_left_8 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1373;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_5 = par_w;

    tmp_compare_right_8 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_compare_right_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 1373;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );
        Py_DECREF( tmp_compare_right_8 );

        exception_lineno = 1373;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    Py_DECREF( tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_4 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_make_exception_arg_8 = const_str_digest_b3b20c6499548f5f690faa8d63dd85e8;
    frame_function->f_lineno = 1374;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_8 };
        tmp_raise_type_8 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_8 != NULL );
    exception_type = tmp_raise_type_8;
    exception_lineno = 1374;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_10:;
    tmp_left_name_5 = var_lhs;

    tmp_right_name_5 = par_w;

    tmp_assign_source_14 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1377;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_lhs;
        assert( old != NULL );
        var_lhs = tmp_assign_source_14;
        Py_DECREF( old );
    }

    tmp_left_name_6 = var_rhs;

    tmp_right_name_6 = par_w;

    tmp_assign_source_15 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1378;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rhs;
        assert( old != NULL );
        var_rhs = tmp_assign_source_15;
        Py_DECREF( old );
    }

    branch_no_8:;
    tmp_compare_left_9 = par_rcond;

    tmp_compare_right_9 = Py_None;
    tmp_is_1 = ( tmp_compare_left_9 == tmp_compare_right_9 );
    if ( tmp_is_1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_len_arg_6 = par_x;

    tmp_left_name_7 = BUILTIN_LEN( tmp_len_arg_6 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1382;
        goto frame_exception_exit_1;
    }
    tmp_source_name_20 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_20 == NULL ))
    {
        tmp_source_name_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_20 == NULL )
    {
        Py_DECREF( tmp_left_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1382;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_finfo );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 1382;
        goto frame_exception_exit_1;
    }
    tmp_source_name_21 = par_x;

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_dtype );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 1382;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1382;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_source_name_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 1382;
        goto frame_exception_exit_1;
    }
    tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_eps );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 1382;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1382;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_rcond;
        assert( old != NULL );
        par_rcond = tmp_assign_source_16;
        Py_DECREF( old );
    }

    branch_no_11:;
    tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_10 != NULL );
    tmp_source_name_23 = var_lhs;

    tmp_source_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_dtype );
    if ( tmp_source_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1385;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_type );
    Py_DECREF( tmp_source_name_22 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1385;
        goto frame_exception_exit_1;
    }
    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_24 == NULL )
    {
        Py_DECREF( tmp_args_element_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1385;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_complexfloating );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 1385;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1385;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_cond_value_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1385;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 1385;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_25 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_25 == NULL ))
    {
        tmp_source_name_25 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_25 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_sqrt );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    tmp_source_name_27 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_27 == NULL ))
    {
        tmp_source_name_27 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_27 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_square );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    tmp_source_name_28 = var_lhs;

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_real );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_called_name_13 );

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1386;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_left_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    tmp_source_name_29 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_29 == NULL ))
    {
        tmp_source_name_29 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_29 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_left_name_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_29, const_str_plain_square );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_left_name_8 );

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    tmp_source_name_30 = var_lhs;

    tmp_args_element_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_30, const_str_plain_imag );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_left_name_8 );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1386;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_right_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_left_name_8 );

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    tmp_source_name_26 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_source_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_sum );
    Py_DECREF( tmp_source_name_26 );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1386;
    tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1386;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1386;
        goto frame_exception_exit_1;
    }
    assert( var_scl == NULL );
    var_scl = tmp_assign_source_17;

    goto branch_end_12;
    branch_no_12:;
    tmp_source_name_31 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_31 == NULL ))
    {
        tmp_source_name_31 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_31 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1388;
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_31, const_str_plain_sqrt );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1388;
        goto frame_exception_exit_1;
    }
    tmp_source_name_33 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_33 == NULL ))
    {
        tmp_source_name_33 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_33 == NULL )
    {
        Py_DECREF( tmp_called_name_15 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1388;
        goto frame_exception_exit_1;
    }

    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_33, const_str_plain_square );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 1388;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_17 = var_lhs;

    frame_function->f_lineno = 1388;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_source_name_32 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    if ( tmp_source_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 1388;
        goto frame_exception_exit_1;
    }
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_32, const_str_plain_sum );
    Py_DECREF( tmp_source_name_32 );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 1388;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1388;
    tmp_args_element_name_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_16 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 1388;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1388;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1388;
        goto frame_exception_exit_1;
    }
    assert( var_scl == NULL );
    var_scl = tmp_assign_source_18;

    branch_end_12:;
    tmp_ass_subvalue_1 = const_int_pos_1;
    tmp_ass_subscribed_1 = var_scl;

    tmp_compexpr_left_6 = var_scl;

    tmp_compexpr_right_6 = const_int_0;
    tmp_ass_subscript_1 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    if ( tmp_ass_subscript_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1389;
        goto frame_exception_exit_1;
    }
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscript_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1389;
        goto frame_exception_exit_1;
    }
    // Tried code:
    tmp_source_name_34 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_la );

    if (unlikely( tmp_source_name_34 == NULL ))
    {
        tmp_source_name_34 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_la );
    }

    if ( tmp_source_name_34 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "la" );
        exception_tb = NULL;

        exception_lineno = 1392;
        goto try_except_handler_2;
    }

    tmp_called_name_18 = LOOKUP_ATTRIBUTE( tmp_source_name_34, const_str_plain_lstsq );
    if ( tmp_called_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1392;
        goto try_except_handler_2;
    }
    tmp_source_name_35 = var_lhs;

    tmp_left_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_35, const_str_plain_T );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 1392;
        goto try_except_handler_2;
    }
    tmp_right_name_9 = var_scl;

    tmp_args_element_name_18 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_9 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );

        exception_lineno = 1392;
        goto try_except_handler_2;
    }
    tmp_source_name_36 = var_rhs;

    tmp_args_element_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_36, const_str_plain_T );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_18 );
        Py_DECREF( tmp_args_element_name_18 );

        exception_lineno = 1392;
        goto try_except_handler_2;
    }
    tmp_args_element_name_20 = par_rcond;

    frame_function->f_lineno = 1392;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_called_name_18 );
    Py_DECREF( tmp_args_element_name_18 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1392;
        goto try_except_handler_2;
    }
    tmp_assign_source_19 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1392;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_19;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_20 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_20 == NULL )
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


        exception_lineno = 1392;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_20;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_21 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 1392;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_21;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_22 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 1392;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_22;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_23 = UNPACK_NEXT( tmp_unpack_4, 3 );
    if ( tmp_assign_source_23 == NULL )
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


        exception_lineno = 1392;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_23;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_24 = tmp_tuple_unpack_1__element_1;

    assert( var_c == NULL );
    Py_INCREF( tmp_assign_source_24 );
    var_c = tmp_assign_source_24;

    tmp_assign_source_25 = tmp_tuple_unpack_1__element_2;

    assert( var_resids == NULL );
    Py_INCREF( tmp_assign_source_25 );
    var_resids = tmp_assign_source_25;

    tmp_assign_source_26 = tmp_tuple_unpack_1__element_3;

    assert( var_rank == NULL );
    Py_INCREF( tmp_assign_source_26 );
    var_rank = tmp_assign_source_26;

    tmp_assign_source_27 = tmp_tuple_unpack_1__element_4;

    assert( var_s == NULL );
    Py_INCREF( tmp_assign_source_27 );
    var_s = tmp_assign_source_27;

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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_4 );
    Py_DECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    tmp_source_name_38 = var_c;

    tmp_left_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_38, const_str_plain_T );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1393;
        goto frame_exception_exit_1;
    }
    tmp_right_name_10 = var_scl;

    tmp_source_name_37 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_10 );
    if ( tmp_source_name_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1393;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_37, const_str_plain_T );
    Py_DECREF( tmp_source_name_37 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1393;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_c;
        assert( old != NULL );
        var_c = tmp_assign_source_28;
        Py_DECREF( old );
    }

    tmp_source_name_39 = par_deg;

    tmp_compare_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_39, const_str_plain_ndim );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1396;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = const_int_pos_1;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 1396;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_source_name_40 = var_c;

    tmp_compare_left_11 = LOOKUP_ATTRIBUTE( tmp_source_name_40, const_str_plain_ndim );
    if ( tmp_compare_left_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1397;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_11 = const_int_pos_2;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_11 );

        exception_lineno = 1397;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_11 );
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_source_name_41 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_41 == NULL ))
    {
        tmp_source_name_41 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_41 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1398;
        goto frame_exception_exit_1;
    }

    tmp_called_name_19 = LOOKUP_ATTRIBUTE( tmp_source_name_41, const_str_plain_zeros );
    if ( tmp_called_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1398;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyTuple_New( 2 );
    tmp_left_name_11 = var_lmax;

    tmp_right_name_11 = const_int_pos_1;
    tmp_tuple_element_3 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1398;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 0, tmp_tuple_element_3 );
    tmp_source_name_42 = var_c;

    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_42, const_str_plain_shape );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1398;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_int_pos_1;
    tmp_tuple_element_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 1398;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_2, 1, tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_43 = var_c;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_43, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_19 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 1398;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 1398;
    tmp_assign_source_29 = CALL_FUNCTION( tmp_called_name_19, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_19 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1398;
        goto frame_exception_exit_1;
    }
    assert( var_cc == NULL );
    var_cc = tmp_assign_source_29;

    goto branch_end_14;
    branch_no_14:;
    tmp_source_name_44 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_44 == NULL ))
    {
        tmp_source_name_44 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_44 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1400;
        goto frame_exception_exit_1;
    }

    tmp_called_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_44, const_str_plain_zeros );
    if ( tmp_called_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1400;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_left_name_12 = var_lmax;

    tmp_right_name_12 = const_int_pos_1;
    tmp_tuple_element_4 = BINARY_OPERATION_ADD( tmp_left_name_12, tmp_right_name_12 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 1400;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_4 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_45 = var_c;

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_45, const_str_plain_dtype );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_20 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 1400;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 1400;
    tmp_assign_source_30 = CALL_FUNCTION( tmp_called_name_20, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_20 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1400;
        goto frame_exception_exit_1;
    }
    assert( var_cc == NULL );
    var_cc = tmp_assign_source_30;

    branch_end_14:;
    tmp_ass_subvalue_2 = var_c;

    tmp_ass_subscribed_2 = var_cc;

    tmp_ass_subscript_2 = par_deg;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1401;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = var_cc;

    {
        PyObject *old = var_c;
        assert( old != NULL );
        var_c = tmp_assign_source_31;
        Py_INCREF( var_c );
        Py_DECREF( old );
    }

    branch_no_13:;
    tmp_compexpr_left_7 = var_rank;

    tmp_compexpr_right_7 = var_order;

    tmp_and_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1405;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 1405;
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
    tmp_operand_name_1 = par_full;

    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1405;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_4 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_4 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 1405;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_15;
    }
    else
    {
        goto branch_no_15;
    }
    branch_yes_15:;
    tmp_source_name_46 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_46 == NULL ))
    {
        tmp_source_name_46 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_46 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 1407;
        goto frame_exception_exit_1;
    }

    tmp_called_name_21 = LOOKUP_ATTRIBUTE( tmp_source_name_46, const_str_plain_warn );
    if ( tmp_called_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1407;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_21 = const_str_digest_417a5d06d4d954b63a0b0e1634b358ab;
    tmp_source_name_47 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_47 == NULL ))
    {
        tmp_source_name_47 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_47 == NULL )
    {
        Py_DECREF( tmp_called_name_21 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 1407;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_22 = LOOKUP_ATTRIBUTE( tmp_source_name_47, const_str_plain_RankWarning );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_21 );

        exception_lineno = 1407;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1407;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_22 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_21, call_args );
    }

    Py_DECREF( tmp_called_name_21 );
    Py_DECREF( tmp_args_element_name_22 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1407;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_15:;
    tmp_cond_value_5 = par_full;

    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1409;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_16;
    }
    else
    {
        goto branch_no_16;
    }
    branch_yes_16:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_c;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = PyList_New( 4 );
    tmp_list_element_1 = var_resids;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_5, 0, tmp_list_element_1 );
    tmp_list_element_1 = var_rank;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_5, 1, tmp_list_element_1 );
    tmp_list_element_1 = var_s;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_5, 2, tmp_list_element_1 );
    tmp_list_element_1 = par_rcond;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_5, 3, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
    goto frame_return_exit_1;
    goto branch_end_16;
    branch_no_16:;
    tmp_return_value = var_c;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_16:;

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

            if ( par_y )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_y,
                    par_y
                );

                assert( res == 0 );
            }

            if ( par_deg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deg,
                    par_deg
                );

                assert( res == 0 );
            }

            if ( par_rcond )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rcond,
                    par_rcond
                );

                assert( res == 0 );
            }

            if ( par_full )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_full,
                    par_full
                );

                assert( res == 0 );
            }

            if ( par_w )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_w,
                    par_w
                );

                assert( res == 0 );
            }

            if ( var_lmax )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lmax,
                    var_lmax
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

            if ( var_van )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_van,
                    var_van
                );

                assert( res == 0 );
            }

            if ( var_lhs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lhs,
                    var_lhs
                );

                assert( res == 0 );
            }

            if ( var_rhs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rhs,
                    var_rhs
                );

                assert( res == 0 );
            }

            if ( var_scl )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scl,
                    var_scl
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

            if ( var_resids )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_resids,
                    var_resids
                );

                assert( res == 0 );
            }

            if ( var_rank )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rank,
                    var_rank
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

            if ( var_cc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cc,
                    var_cc
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_19_polyfit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    CHECK_OBJECT( (PyObject *)var_lmax );
    Py_DECREF( var_lmax );
    var_lmax = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_van );
    Py_DECREF( var_van );
    var_van = NULL;

    CHECK_OBJECT( (PyObject *)var_lhs );
    Py_DECREF( var_lhs );
    var_lhs = NULL;

    CHECK_OBJECT( (PyObject *)var_rhs );
    Py_DECREF( var_rhs );
    var_rhs = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_c );
    Py_DECREF( var_c );
    var_c = NULL;

    CHECK_OBJECT( (PyObject *)var_resids );
    Py_DECREF( var_resids );
    var_resids = NULL;

    CHECK_OBJECT( (PyObject *)var_rank );
    Py_DECREF( var_rank );
    var_rank = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_cc );
    var_cc = NULL;

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

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    Py_XDECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    Py_XDECREF( par_w );
    par_w = NULL;

    Py_XDECREF( var_lmax );
    var_lmax = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_van );
    var_van = NULL;

    Py_XDECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_rhs );
    var_rhs = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_resids );
    var_resids = NULL;

    Py_XDECREF( var_rank );
    var_rank = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_cc );
    var_cc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_19_polyfit );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_20_polycompanion( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *var_n = NULL;
    PyObject *var_mat = NULL;
    PyObject *var_bot = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_inplace_assign_subscr_1__target = NULL;
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
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
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
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_aae0134eac25a50e53d0aa97c9bd79c6, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 1441;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1441;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyList_New( 1 );
    tmp_list_element_1 = par_c;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    frame_function->f_lineno = 1441;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1441;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1441;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 1441;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_3;
        Py_INCREF( par_c );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_len_arg_1 = par_c;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1442;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 1442;
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
    tmp_make_exception_arg_1 = const_str_digest_af327786ef70d70118fb639ec7c50f4e;
    frame_function->f_lineno = 1443;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1443;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_len_arg_2 = par_c;

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1444;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 1444;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1445;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1445;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = PyList_New( 1 );
    tmp_list_element_2 = PyList_New( 1 );
    tmp_subscribed_name_1 = par_c;

    tmp_subscript_name_1 = const_int_0;
    tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 1445;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 1445;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_c;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_list_element_2 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 1445;
        goto frame_exception_exit_1;
    }
    tmp_list_element_3 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_list_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_list_element_2 );

        exception_lineno = 1445;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_list_element_2, 0, tmp_list_element_3 );
    PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
    frame_function->f_lineno = 1445;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1445;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_len_arg_3 = par_c;

    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1447;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1447;
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_4;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1448;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1448;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_n;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_n;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_4 = par_c;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 1448;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 1448;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1448;
        goto frame_exception_exit_1;
    }
    assert( var_mat == NULL );
    var_mat = tmp_assign_source_5;

    tmp_source_name_5 = var_mat;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_reshape );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1449;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1449;
    tmp_subscribed_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_int_neg_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1449;
        goto frame_exception_exit_1;
    }
    tmp_start_name_1 = var_n;

    tmp_stop_name_1 = Py_None;
    tmp_left_name_3 = var_n;

    tmp_right_name_3 = const_int_pos_1;
    tmp_step_name_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_step_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_3 );

        exception_lineno = 1449;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = MAKE_SLICEOBJ3( tmp_start_name_1, tmp_stop_name_1, tmp_step_name_1 );
    Py_DECREF( tmp_step_name_1 );
    assert( tmp_subscript_name_3 != NULL );
    tmp_assign_source_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    Py_DECREF( tmp_subscript_name_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1449;
        goto frame_exception_exit_1;
    }
    assert( var_bot == NULL );
    var_bot = tmp_assign_source_6;

    tmp_ass_subvalue_1 = const_int_pos_1;
    tmp_ass_subscribed_1 = var_bot;

    tmp_ass_subscript_1 = Py_Ellipsis;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1450;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = var_mat;

    assert( tmp_inplace_assign_subscr_1__target == NULL );
    Py_INCREF( tmp_assign_source_7 );
    tmp_inplace_assign_subscr_1__target = tmp_assign_source_7;

    // Tried code:
    tmp_subscribed_name_4 = tmp_inplace_assign_subscr_1__target;

    tmp_subscript_name_4 = const_tuple_slice_none_none_none_int_neg_1_tuple;
    tmp_left_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1451;
        goto try_except_handler_3;
    }
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = par_c;

    tmp_left_name_5 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 1451;
        goto try_except_handler_3;
    }
    tmp_subscribed_name_5 = par_c;

    tmp_subscript_name_5 = const_int_neg_1;
    tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 1451;
        goto try_except_handler_3;
    }
    tmp_right_name_4 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 1451;
        goto try_except_handler_3;
    }
    tmp_ass_subvalue_2 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1451;
        goto try_except_handler_3;
    }
    tmp_ass_subscribed_2 = tmp_inplace_assign_subscr_1__target;

    tmp_ass_subscript_2 = const_tuple_slice_none_none_none_int_neg_1_tuple;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1451;
        goto try_except_handler_3;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

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
            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
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

            if ( var_mat )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mat,
                    var_mat
                );

                assert( res == 0 );
            }

            if ( var_bot )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bot,
                    var_bot
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_subscr_1__target );
    Py_DECREF( tmp_inplace_assign_subscr_1__target );
    tmp_inplace_assign_subscr_1__target = NULL;

    tmp_return_value = var_mat;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_20_polycompanion );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_mat );
    var_mat = NULL;

    Py_XDECREF( var_bot );
    var_bot = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_mat );
    var_mat = NULL;

    Py_XDECREF( var_bot );
    var_bot = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_20_polycompanion );
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


static PyObject *impl_numpy$polynomial$polynomial$$$function_21_polyroots( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_c = python_pars[ 0 ];
    PyObject *var_m = NULL;
    PyObject *var_r = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
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
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_unpack_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a2d273b8a12a597908108f9c6900e39c, module_numpy$polynomial$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 1501;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1501;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = PyList_New( 1 );
    tmp_list_element_1 = par_c;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_1, 0, tmp_list_element_1 );
    frame_function->f_lineno = 1501;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1501;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1501;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
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


        exception_lineno = 1501;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
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

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_3 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_c;
        assert( old != NULL );
        par_c = tmp_assign_source_3;
        Py_INCREF( par_c );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_len_arg_1 = par_c;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1502;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_2;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 1502;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1503;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1503;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = DEEP_COPY( const_tuple_list_empty_tuple );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_3 = par_c;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 1503;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 1503;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1503;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_len_arg_2 = par_c;

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1504;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 1504;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 1505;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_array );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1505;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = PyList_New( 1 );
    tmp_subscribed_name_1 = par_c;

    tmp_subscript_name_1 = const_int_0;
    tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 1505;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 1505;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_c;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 1505;
        goto frame_exception_exit_1;
    }
    tmp_list_element_2 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_list_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 1505;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_2, 0, tmp_list_element_2 );
    frame_function->f_lineno = 1505;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1505;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polycompanion );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polycompanion );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polycompanion" );
        exception_tb = NULL;

        exception_lineno = 1507;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_c;

    frame_function->f_lineno = 1507;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1507;
        goto frame_exception_exit_1;
    }
    assert( var_m == NULL );
    var_m = tmp_assign_source_4;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_la );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_la );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "la" );
        exception_tb = NULL;

        exception_lineno = 1508;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_eigvals );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1508;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_m;

    frame_function->f_lineno = 1508;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1508;
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_5;

    tmp_source_name_6 = var_r;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sort );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1509;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1509;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1509;
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
            if ( par_c )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c,
                    par_c
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

            if ( var_r )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_r,
                    var_r
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

    tmp_return_value = var_r;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_21_polyroots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

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

    CHECK_OBJECT( (PyObject *)par_c );
    Py_DECREF( par_c );
    par_c = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$function_21_polyroots );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$polynomial$polynomial$$$class_1_Polynomial( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var__add = NULL;
    PyObject *var__sub = NULL;
    PyObject *var__mul = NULL;
    PyObject *var__div = NULL;
    PyObject *var__pow = NULL;
    PyObject *var__val = NULL;
    PyObject *var__int = NULL;
    PyObject *var__der = NULL;
    PyObject *var__fit = NULL;
    PyObject *var__line = NULL;
    PyObject *var__roots = NULL;
    PyObject *var__fromroots = NULL;
    PyObject *var_nickname = NULL;
    PyObject *var_domain = NULL;
    PyObject *var_window = NULL;
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
    PyObject *tmp_args_element_name_13;
    PyObject *tmp_args_element_name_14;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_04b3eb4a69367931852490c2b7667d29;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_fbc615e17ff80e5f3e2c22fc8da80ac2;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ecc37a084d3395bb4faedf0593849173, module_numpy$polynomial$polynomial );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyadd );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyadd );
    }

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polyadd" );
        exception_tb = NULL;

        exception_lineno = 1540;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1540;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1540;
        goto frame_exception_exit_1;
    }
    assert( var__add == NULL );
    var__add = tmp_assign_source_3;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polysub );

    if (unlikely( tmp_args_element_name_2 == NULL ))
    {
        tmp_args_element_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polysub );
    }

    if ( tmp_args_element_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polysub" );
        exception_tb = NULL;

        exception_lineno = 1541;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1541;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1541;
        goto frame_exception_exit_1;
    }
    assert( var__sub == NULL );
    var__sub = tmp_assign_source_4;

    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polymul );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polymul );
    }

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polymul" );
        exception_tb = NULL;

        exception_lineno = 1542;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1542;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1542;
        goto frame_exception_exit_1;
    }
    assert( var__mul == NULL );
    var__mul = tmp_assign_source_5;

    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_4 != NULL );
    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polydiv );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polydiv );
    }

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polydiv" );
        exception_tb = NULL;

        exception_lineno = 1543;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1543;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1543;
        goto frame_exception_exit_1;
    }
    assert( var__div == NULL );
    var__div = tmp_assign_source_6;

    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_5 != NULL );
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polypow );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polypow );
    }

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polypow" );
        exception_tb = NULL;

        exception_lineno = 1544;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1544;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1544;
        goto frame_exception_exit_1;
    }
    assert( var__pow == NULL );
    var__pow = tmp_assign_source_7;

    tmp_called_name_6 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_6 != NULL );
    tmp_args_element_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

    if (unlikely( tmp_args_element_name_6 == NULL ))
    {
        tmp_args_element_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyval );
    }

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polyval" );
        exception_tb = NULL;

        exception_lineno = 1545;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1545;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1545;
        goto frame_exception_exit_1;
    }
    assert( var__val == NULL );
    var__val = tmp_assign_source_8;

    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_7 != NULL );
    tmp_args_element_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyint );

    if (unlikely( tmp_args_element_name_7 == NULL ))
    {
        tmp_args_element_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyint );
    }

    if ( tmp_args_element_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polyint" );
        exception_tb = NULL;

        exception_lineno = 1546;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1546;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1546;
        goto frame_exception_exit_1;
    }
    assert( var__int == NULL );
    var__int = tmp_assign_source_9;

    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_8 != NULL );
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyder );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyder );
    }

    if ( tmp_args_element_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polyder" );
        exception_tb = NULL;

        exception_lineno = 1547;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1547;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1547;
        goto frame_exception_exit_1;
    }
    assert( var__der == NULL );
    var__der = tmp_assign_source_10;

    tmp_called_name_9 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_9 != NULL );
    tmp_args_element_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyfit );

    if (unlikely( tmp_args_element_name_9 == NULL ))
    {
        tmp_args_element_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyfit );
    }

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polyfit" );
        exception_tb = NULL;

        exception_lineno = 1548;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1548;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1548;
        goto frame_exception_exit_1;
    }
    assert( var__fit == NULL );
    var__fit = tmp_assign_source_11;

    tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_10 != NULL );
    tmp_args_element_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyline );

    if (unlikely( tmp_args_element_name_10 == NULL ))
    {
        tmp_args_element_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyline );
    }

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polyline" );
        exception_tb = NULL;

        exception_lineno = 1549;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1549;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1549;
        goto frame_exception_exit_1;
    }
    assert( var__line == NULL );
    var__line = tmp_assign_source_12;

    tmp_called_name_11 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_11 != NULL );
    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyroots );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyroots );
    }

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polyroots" );
        exception_tb = NULL;

        exception_lineno = 1550;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1550;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1550;
        goto frame_exception_exit_1;
    }
    assert( var__roots == NULL );
    var__roots = tmp_assign_source_13;

    tmp_called_name_12 = LOOKUP_BUILTIN( const_str_plain_staticmethod );
    assert( tmp_called_name_12 != NULL );
    tmp_args_element_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyfromroots );

    if (unlikely( tmp_args_element_name_12 == NULL ))
    {
        tmp_args_element_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyfromroots );
    }

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polyfromroots" );
        exception_tb = NULL;

        exception_lineno = 1551;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1551;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1551;
        goto frame_exception_exit_1;
    }
    assert( var__fromroots == NULL );
    var__fromroots = tmp_assign_source_14;

    tmp_assign_source_15 = const_str_plain_poly;
    assert( var_nickname == NULL );
    Py_INCREF( tmp_assign_source_15 );
    var_nickname = tmp_assign_source_15;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1555;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_array );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1555;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polydomain );

    if (unlikely( tmp_args_element_name_13 == NULL ))
    {
        tmp_args_element_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polydomain );
    }

    if ( tmp_args_element_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_13 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polydomain" );
        exception_tb = NULL;

        exception_lineno = 1555;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1555;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_called_name_13 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1555;
        goto frame_exception_exit_1;
    }
    assert( var_domain == NULL );
    var_domain = tmp_assign_source_16;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 1556;
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1556;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polydomain );

    if (unlikely( tmp_args_element_name_14 == NULL ))
    {
        tmp_args_element_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polydomain );
    }

    if ( tmp_args_element_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_14 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "polydomain" );
        exception_tb = NULL;

        exception_lineno = 1556;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1556;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1556;
        goto frame_exception_exit_1;
    }
    assert( var_window == NULL );
    var_window = tmp_assign_source_17;


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

            if ( var__add )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__add,
                    var__add
                );

                assert( res == 0 );
            }

            if ( var__sub )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__sub,
                    var__sub
                );

                assert( res == 0 );
            }

            if ( var__mul )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__mul,
                    var__mul
                );

                assert( res == 0 );
            }

            if ( var__div )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__div,
                    var__div
                );

                assert( res == 0 );
            }

            if ( var__pow )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__pow,
                    var__pow
                );

                assert( res == 0 );
            }

            if ( var__val )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__val,
                    var__val
                );

                assert( res == 0 );
            }

            if ( var__int )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__int,
                    var__int
                );

                assert( res == 0 );
            }

            if ( var__der )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__der,
                    var__der
                );

                assert( res == 0 );
            }

            if ( var__fit )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__fit,
                    var__fit
                );

                assert( res == 0 );
            }

            if ( var__line )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__line,
                    var__line
                );

                assert( res == 0 );
            }

            if ( var__roots )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__roots,
                    var__roots
                );

                assert( res == 0 );
            }

            if ( var__fromroots )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__fromroots,
                    var__fromroots
                );

                assert( res == 0 );
            }

            if ( var_nickname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nickname,
                    var_nickname
                );

                assert( res == 0 );
            }

            if ( var_domain )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_domain,
                    var_domain
                );

                assert( res == 0 );
            }

            if ( var_window )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_window,
                    var_window
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

    if ( var__add )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__add,
            var__add
        );

        assert( res == 0 );
    }

    if ( var__sub )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__sub,
            var__sub
        );

        assert( res == 0 );
    }

    if ( var__mul )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__mul,
            var__mul
        );

        assert( res == 0 );
    }

    if ( var__div )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__div,
            var__div
        );

        assert( res == 0 );
    }

    if ( var__pow )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__pow,
            var__pow
        );

        assert( res == 0 );
    }

    if ( var__val )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__val,
            var__val
        );

        assert( res == 0 );
    }

    if ( var__int )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__int,
            var__int
        );

        assert( res == 0 );
    }

    if ( var__der )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__der,
            var__der
        );

        assert( res == 0 );
    }

    if ( var__fit )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__fit,
            var__fit
        );

        assert( res == 0 );
    }

    if ( var__line )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__line,
            var__line
        );

        assert( res == 0 );
    }

    if ( var__roots )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__roots,
            var__roots
        );

        assert( res == 0 );
    }

    if ( var__fromroots )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__fromroots,
            var__fromroots
        );

        assert( res == 0 );
    }

    if ( var_nickname )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_nickname,
            var_nickname
        );

        assert( res == 0 );
    }

    if ( var_domain )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_domain,
            var_domain
        );

        assert( res == 0 );
    }

    if ( var_window )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_window,
            var_window
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$class_1_Polynomial );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var__add );
    Py_DECREF( var__add );
    var__add = NULL;

    CHECK_OBJECT( (PyObject *)var__sub );
    Py_DECREF( var__sub );
    var__sub = NULL;

    CHECK_OBJECT( (PyObject *)var__mul );
    Py_DECREF( var__mul );
    var__mul = NULL;

    CHECK_OBJECT( (PyObject *)var__div );
    Py_DECREF( var__div );
    var__div = NULL;

    CHECK_OBJECT( (PyObject *)var__pow );
    Py_DECREF( var__pow );
    var__pow = NULL;

    CHECK_OBJECT( (PyObject *)var__val );
    Py_DECREF( var__val );
    var__val = NULL;

    CHECK_OBJECT( (PyObject *)var__int );
    Py_DECREF( var__int );
    var__int = NULL;

    CHECK_OBJECT( (PyObject *)var__der );
    Py_DECREF( var__der );
    var__der = NULL;

    CHECK_OBJECT( (PyObject *)var__fit );
    Py_DECREF( var__fit );
    var__fit = NULL;

    CHECK_OBJECT( (PyObject *)var__line );
    Py_DECREF( var__line );
    var__line = NULL;

    CHECK_OBJECT( (PyObject *)var__roots );
    Py_DECREF( var__roots );
    var__roots = NULL;

    CHECK_OBJECT( (PyObject *)var__fromroots );
    Py_DECREF( var__fromroots );
    var__fromroots = NULL;

    CHECK_OBJECT( (PyObject *)var_nickname );
    Py_DECREF( var_nickname );
    var_nickname = NULL;

    CHECK_OBJECT( (PyObject *)var_domain );
    Py_DECREF( var_domain );
    var_domain = NULL;

    CHECK_OBJECT( (PyObject *)var_window );
    Py_DECREF( var_window );
    var_window = NULL;

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

    Py_XDECREF( var__add );
    var__add = NULL;

    Py_XDECREF( var__sub );
    var__sub = NULL;

    Py_XDECREF( var__mul );
    var__mul = NULL;

    Py_XDECREF( var__div );
    var__div = NULL;

    Py_XDECREF( var__pow );
    var__pow = NULL;

    Py_XDECREF( var__val );
    var__val = NULL;

    Py_XDECREF( var__int );
    var__int = NULL;

    Py_XDECREF( var__der );
    var__der = NULL;

    Py_XDECREF( var__fit );
    var__fit = NULL;

    Py_XDECREF( var__line );
    var__line = NULL;

    Py_XDECREF( var__roots );
    var__roots = NULL;

    Py_XDECREF( var__fromroots );
    var__fromroots = NULL;

    Py_XDECREF( var_nickname );
    var_nickname = NULL;

    Py_XDECREF( var_domain );
    var_domain = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$polynomial$$$class_1_Polynomial );
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



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_10_polyint( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_10_polyint,
        const_str_plain_polyint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bd1b0dfc2668f8505acc79187009cf4e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_f6b5fc5179d542b1203e0b166434aa39
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_11_polyval( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_11_polyval,
        const_str_plain_polyval,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ee374e192687b88177b6ba99b538f8a6,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_c57defccf4d43c1a8042cd8196b97317
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_12_polyval2d(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_12_polyval2d,
        const_str_plain_polyval2d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7251454ca7365b5bc118e9d75ae1c339,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_94aadee723134ad56a2dcd61143598ee
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_13_polygrid2d(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_13_polygrid2d,
        const_str_plain_polygrid2d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_567497983e9e0ae182bf48c39366d69f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_07af7a256760190b1876f06607bb152f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_14_polyval3d(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_14_polyval3d,
        const_str_plain_polyval3d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2c1c5896e181b2ef6386157f945352c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_f5b013da93a0fb87edae85c9b6bcf1c0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_15_polygrid3d(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_15_polygrid3d,
        const_str_plain_polygrid3d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5bfc5c3dc7f545ba7fba279e8fb0643e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_cc8591968cda29e3a8682a63a179b351
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_16_polyvander(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_16_polyvander,
        const_str_plain_polyvander,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_af685d0621d649f9fa3d90c6cc5edbe7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_9b2925c50302e1857eb7a6df5d4ba81d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_17_polyvander2d(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_17_polyvander2d,
        const_str_plain_polyvander2d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_62128576ef00e03c45248fadee8681f3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_ded97805aeaaf447090d1b95fc5e6c9f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_18_polyvander3d(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_18_polyvander3d,
        const_str_plain_polyvander3d,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_756caae9dbdf125362b14a095fa76728,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_5065d3f2513342e412b98ed1a6163eed
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_19_polyfit( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_19_polyfit,
        const_str_plain_polyfit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9f6eecf0bcfad3656da3d9fe3566b0ab,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_310d6b932e67be8466cbd674cad8302f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_1_polyline(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_1_polyline,
        const_str_plain_polyline,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a63bb0b50881cb6bbf093185764a3b93,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_df8726d6a9afc37a0d65a873963c8252
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_20_polycompanion(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_20_polycompanion,
        const_str_plain_polycompanion,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aae0134eac25a50e53d0aa97c9bd79c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_273c81250a61a3faaf18d00c926f5dcf
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_21_polyroots(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_21_polyroots,
        const_str_plain_polyroots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a2d273b8a12a597908108f9c6900e39c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_71527afbe1ec4ef93b09b9c48b1745fe
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_2_polyfromroots(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_2_polyfromroots,
        const_str_plain_polyfromroots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_55d88a7d4d74db203afebc136f302572,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_1fdc271ac77fb35cc7f4f19e9277dc69
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_3_polyadd(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_3_polyadd,
        const_str_plain_polyadd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1af78ff3a009ea99d8c52e0c556c5275,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_5ca3a23877ab4feed6274554bf5e0c55
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_4_polysub(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_4_polysub,
        const_str_plain_polysub,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f8e5d4a89229aee321cf4b110179da2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_b7c0d2aaa27d1742c61decdec182fa91
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_5_polymulx(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_5_polymulx,
        const_str_plain_polymulx,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_41a3f5d1e281951de6fecffa31a96c2f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_1d948760e3d41e061c64e66c1200a7a1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_6_polymul(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_6_polymul,
        const_str_plain_polymul,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e9e45dfc51ec84ab5a22060966bb2c0a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_90b14d1474f1339f0b65e344134731b2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_7_polydiv(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_7_polydiv,
        const_str_plain_polydiv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4c032214a7a6a2446fef32555b1930ab,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_98f661109b08acb2eefa2e7b2788d5fe
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_8_polypow( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_8_polypow,
        const_str_plain_polypow,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2db488333022da8b7e0a84ccf0cf862f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_cfa534087adaf22b87a703c066c9f588
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_9_polyder( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$polynomial$$$function_9_polyder,
        const_str_plain_polyder,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2eb039c1353d14b89f214352aae35434,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$polynomial,
        const_str_digest_192b7eec86660f27083fb1cfb324492c
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$polynomial$polynomial =
{
    PyModuleDef_HEAD_INIT,
    "numpy.polynomial.polynomial",   /* m_name */
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

MOD_INIT_DECL( numpy$polynomial$polynomial )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$polynomial$polynomial );
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

    // puts( "in initnumpy$polynomial$polynomial" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$polynomial$polynomial = Py_InitModule4(
        "numpy.polynomial.polynomial",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$polynomial$polynomial = PyModule_Create( &mdef_numpy$polynomial$polynomial );
#endif

    moduledict_numpy$polynomial$polynomial = (PyDictObject *)((PyModuleObject *)module_numpy$polynomial$polynomial)->md_dict;

    CHECK_OBJECT( module_numpy$polynomial$polynomial );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_04b3eb4a69367931852490c2b7667d29, module_numpy$polynomial$polynomial );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$polynomial$polynomial );

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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
    PyObject *tmp_call_arg_element_3;
    PyObject *tmp_call_arg_element_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_5313cb49e8cae4ea20876d69dd711abd;
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5e2905094d9b11f370553205dbf6f898;
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_41dafed945a60b867871eb8418069288_list );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_fc0d5d686016267b1f40a558d6c521bf, module_numpy$polynomial$polynomial );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$polynomial$polynomial)->md_dict;
    frame_module->f_lineno = 65;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$polynomial$polynomial)->md_dict;
    frame_module->f_lineno = 66;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$polynomial$polynomial)->md_dict;
    frame_module->f_lineno = 67;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_linalg );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_la, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$polynomial$polynomial)->md_dict;
    frame_module->f_lineno = 69;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_empty, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_polyutils_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_polyutils );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$polynomial$polynomial)->md_dict;
    frame_module->f_lineno = 70;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain__polybase, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_ABCPolyBase_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ABCPolyBase );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_ABCPolyBase, tmp_assign_source_11 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 72;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_trimcoef );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polytrim, tmp_assign_source_12 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_array );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = LIST_COPY( const_list_int_neg_1_int_pos_1_list );
    frame_module->f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polydomain, tmp_assign_source_13 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_array );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = LIST_COPY( const_list_int_0_list );
    frame_module->f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_call_arg_element_2 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyzero, tmp_assign_source_14 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_array );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_3 = LIST_COPY( const_list_int_pos_1_list );
    frame_module->f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_call_arg_element_3 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_call_arg_element_3 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyone, tmp_assign_source_15 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_array );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_4 = LIST_COPY( const_list_int_0_int_pos_1_list );
    frame_module->f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_call_arg_element_4 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_call_arg_element_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyx, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_1_polyline(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyline, tmp_assign_source_17 );
    tmp_assign_source_18 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_2_polyfromroots(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyfromroots, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_3_polyadd(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyadd, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_4_polysub(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polysub, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_5_polymulx(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polymulx, tmp_assign_source_21 );
    tmp_assign_source_22 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_6_polymul(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polymul, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_7_polydiv(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polydiv, tmp_assign_source_23 );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_24 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_8_polypow( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polypow, tmp_assign_source_24 );
    tmp_defaults_2 = const_tuple_int_pos_1_int_pos_1_int_0_tuple;
    tmp_assign_source_25 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_9_polyder( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyder, tmp_assign_source_25 );
    tmp_defaults_3 = PyTuple_New( 5 );
    tmp_tuple_element_1 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_3, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_defaults_3, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_3, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_3, 3, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_3, 4, tmp_tuple_element_1 );
    tmp_assign_source_26 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_10_polyint( tmp_defaults_3 );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyint, tmp_assign_source_26 );
    tmp_defaults_4 = const_tuple_true_tuple;
    tmp_assign_source_27 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_11_polyval( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval, tmp_assign_source_27 );
    tmp_assign_source_28 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_12_polyval2d(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval2d, tmp_assign_source_28 );
    tmp_assign_source_29 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_13_polygrid2d(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polygrid2d, tmp_assign_source_29 );
    tmp_assign_source_30 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_14_polyval3d(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyval3d, tmp_assign_source_30 );
    tmp_assign_source_31 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_15_polygrid3d(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polygrid3d, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_16_polyvander(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyvander, tmp_assign_source_32 );
    tmp_assign_source_33 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_17_polyvander2d(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyvander2d, tmp_assign_source_33 );
    tmp_assign_source_34 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_18_polyvander3d(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyvander3d, tmp_assign_source_34 );
    tmp_defaults_5 = const_tuple_none_false_none_tuple;
    tmp_assign_source_35 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_19_polyfit( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyfit, tmp_assign_source_35 );
    tmp_assign_source_36 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_20_polycompanion(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polycompanion, tmp_assign_source_36 );
    tmp_assign_source_37 = MAKE_FUNCTION_numpy$polynomial$polynomial$$$function_21_polyroots(  );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_polyroots, tmp_assign_source_37 );
    // Tried code:
    tmp_assign_source_38 = PyTuple_New( 1 );
    tmp_tuple_element_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_ABCPolyBase );

    if (unlikely( tmp_tuple_element_2 == NULL ))
    {
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABCPolyBase );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_38 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ABCPolyBase" );
        exception_tb = NULL;

        exception_lineno = 1517;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_38, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_38;

    tmp_assign_source_39 = impl_numpy$polynomial$polynomial$$$class_1_Polynomial( NULL );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1517;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_39;

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
    tmp_assign_source_40 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1517;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_40 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_40;

    tmp_called_name_5 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_Polynomial;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 1517;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_41 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1517;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_41;

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
    tmp_assign_source_42 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$polynomial, (Nuitka_StringObject *)const_str_plain_Polynomial, tmp_assign_source_42 );
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


    return MOD_RETURN_VALUE( module_numpy$polynomial$polynomial );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
