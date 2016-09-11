/* Generated code for Python source for module 'numpy.lib.polynomial'
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

/* The _module_numpy$lib$polynomial is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$polynomial;
PyDictObject *moduledict_numpy$lib$polynomial;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___radd__;
extern PyObject *const_str_plain_RankWarning;
extern PyObject *const_str_plain_logical_or;
static PyObject *const_str_digest_4aa5fb15c76d22fba6c2db6cceed9a4d;
static PyObject *const_str_digest_a12ca88a2988b41a7bbf1fb0e924336b;
extern PyObject *const_str_plain_rhs;
extern PyObject *const_str_plain_poly;
extern PyObject *const_str_plain_type;
static PyObject *const_str_digest_7614d066b99092ed61947ba53de28328;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
extern PyObject *const_str_plain_polydiv;
extern PyObject *const_tuple_none_false_none_false_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_d718e5663dad1c61efeeca8554360ab2_tuple;
extern PyObject *const_str_plain_sh;
extern PyObject *const_str_plain_output;
static PyObject *const_str_digest_ca3b9b4a9fef02910aa9e18b690ebb47;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_startswith;
static PyObject *const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple;
extern PyObject *const_str_plain_eps;
static PyObject *const_str_digest_63e450e710f10ffa31b2603b90b1a06b;
static PyObject *const_dict_144cf727ca808c02413e0ad8ab424cf2;
extern PyObject *const_str_plain_wrap;
static PyObject *const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple;
static PyObject *const_str_digest_ac4e5511907cabbe407110fccb6e5898;
static PyObject *const_str_digest_d025b8cc434c4be4e6c06e89082ea183;
extern PyObject *const_str_plain___getattr__;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_rtol;
static PyObject *const_tuple_f3acc424a18a0019640906fc08f507d1_tuple;
extern PyObject *const_str_plain_astype;
extern PyObject *const_str_plain___hash__;
extern PyObject *const_int_pos_70;
extern PyObject *const_str_plain_shape;
static PyObject *const_str_digest_c5104c95b26caa2770b936f43693659b;
extern PyObject *const_str_plain_conjugate;
extern PyObject *const_str_plain_key;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_var;
static PyObject *const_str_digest_f21e02642cb931dff513acf416b301f5;
static PyObject *const_str_digest_d31b1f7cd665ec833fe85cdeb11902cb;
extern PyObject *const_str_plain_astr;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_eigvals;
extern PyObject *const_str_plain_size;
extern PyObject *const_tuple_int_0_none_tuple;
extern PyObject *const_str_plain___ne__;
static PyObject *const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple;
extern PyObject *const_str_plain_iscomplex;
static PyObject *const_float_1e_minus_14;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_trim_zeros;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_trim;
static PyObject *const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_str_plain_allclose;
extern PyObject *const_tuple_str_chr_45_tuple;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_polyval;
extern PyObject *const_str_plain_res;
extern PyObject *const_str_plain_ind;
extern PyObject *const_str_plain_sort_complex;
extern PyObject *const_str_empty;
extern PyObject *const_str_plain_polynomial;
extern PyObject *const_str_plain_floating;
extern PyObject *const_str_plain_newstr;
static PyObject *const_str_digest_692dc77e7651117b5059c24a0fc8e6ef;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_digest_125ec7974471c7c212f84a3304bc12c3;
static PyObject *const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple;
extern PyObject *const_str_plain_rcond;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_asarray;
static PyObject *const_list_float_0_0_list;
static PyObject *const_str_plain_zr;
extern PyObject *const_str_plain___mul__;
extern PyObject *const_str_plain_re;
extern PyObject *const_str_plain_integ;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_digest_912fae8a28b8bd5ead766661045cede3;
extern PyObject *const_tuple_tuple_int_pos_1_tuple_tuple;
extern PyObject *const_str_plain_rank;
extern PyObject *const_str_plain___setattr__;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_warn;
extern PyObject *const_str_plain_lstsq;
extern PyObject *const_list_int_pos_1_list;
static PyObject *const_str_plain_coefstr;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain_b;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_dff86e29a4436a81b6306b0416211f76;
static PyObject *const_dict_550850c0300eb7076f24d8318a86fb89;
extern PyObject *const_str_chr_45;
extern PyObject *const_str_plain_deriv;
static PyObject *const_dict_77bffa4b7de1ff8d7cd5370bafca6dcc;
extern PyObject *const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple;
static PyObject *const_str_plain_neg_roots;
extern PyObject *const_str_digest_470eccc427becdbaa48f7e4c1af24ff5;
static PyObject *const_tuple_str_plain_q_str_plain_s_tuple;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_alltrue;
static PyObject *const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple;
extern PyObject *const_slice_none_none_none;
static PyObject *const_str_plain_trailing_zeros;
extern PyObject *const_str_plain___len__;
extern PyObject *const_str_plain_o;
extern PyObject *const_str_plain_isscalar;
static PyObject *const_str_digest_0db5f082e757bf000893d1070c5314d6;
extern PyObject *const_str_plain_accumulate;
extern PyObject *const_str_plain_mat;
extern PyObject *const_str_digest_9b2a32a10f34854554acce4f0a1e5df6;
static PyObject *const_str_digest_8d57b7b6e72d04b87b3e2a50f3755912;
extern PyObject *const_str_plain_polyint;
extern PyObject *const_str_plain_max;
static PyObject *const_str_digest_b73629cbd250f78988da03d69fd963c8;
extern PyObject *const_str_plain_search;
static PyObject *const_str_plain_coeffs;
extern PyObject *const_str_digest_37eb5527e8de3a4de5a4da95d734d451;
static PyObject *const_str_digest_d2e3016ff6c92dbac6fddfcf75daea5a;
extern PyObject *const_str_plain_mode;
static PyObject *const_str_digest_8e8cc082af63fdab10d5a5ad0df80a3b;
static PyObject *const_str_digest_5d29a5fa4d48aa4eec4b679b0c640190;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_dt;
static PyObject *const_str_plain_partstr;
static PyObject *const_str_plain_truepoly;
extern PyObject *const_str_plain_axis;
extern PyObject *const_float_2_0;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_nonzero;
extern PyObject *const_str_plain___rtruediv__;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
static PyObject *const_str_digest_ab2bc23826697fad0288f5ff4e6158d3;
extern PyObject *const_str_plain_f;
static PyObject *const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple;
extern PyObject *const_str_plain___module__;
extern PyObject *const_str_plain___getitem__;
static PyObject *const_str_digest_890a188d39e55adb81cbf78ea2c7a2e8;
static PyObject *const_str_plain_Vbase;
extern PyObject *const_str_plain___rmul__;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_tuple_str_plain_self_str_plain_t_tuple;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_tuple_str_plain_self_str_plain_vals_tuple;
extern PyObject *const_str_plain_array;
extern PyObject *const_str_digest_58b9c2de86cf9b3c187794eb33218cee;
static PyObject *const_tuple_f8024a2bf18cc52be702814b03234d41_tuple;
static PyObject *const_str_plain_NX;
extern PyObject *const_str_plain_polysub;
extern PyObject *const_str_digest_7776c2b4c0f21c76e792d8c463042f37;
extern PyObject *const_str_plain___init__;
static PyObject *const_str_digest_1ddd25da7461a4681aa105108f792da7;
extern PyObject *const_tuple_int_pos_1_none_tuple;
static PyObject *const_str_plain_c_or_r;
static PyObject *const_str_digest_1ed57e39ffcca0b15b9cb6b3f4b1fee7;
extern PyObject *const_str_plain_polymul;
extern PyObject *const_str_digest_44e97c1c143647b689f32f77c9c8ec56;
extern PyObject *const_str_plain_coefficients;
extern PyObject *const_str_plain_finfo;
extern PyObject *const_str_space;
extern PyObject *const_str_plain___sub__;
extern PyObject *const_str_plain_polyder;
static PyObject *const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple;
extern PyObject *const_str_plain_complexfloating;
static PyObject *const_str_digest_288b855de22027ea51f62f6ba4203a91;
static PyObject *const_str_plain_pos_roots;
static PyObject *const_tuple_str_plain_diag_str_plain_vander_tuple;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
extern PyObject *const_str_digest_f06b0863ac057f993e0b6697d72eaf86;
static PyObject *const_tuple_str_digest_63e450e710f10ffa31b2603b90b1a06b_tuple;
extern PyObject *const_str_plain___pos__;
extern PyObject *const_float_0_0;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_simplefilter;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain_dot;
extern PyObject *const_tuple_str_plain_self_str_plain_key_tuple;
static PyObject *const_tuple_54532a8d90a79048cf8dd43464442f49_tuple;
static PyObject *const_str_digest_ae8ef7cff1c65112641662cfd4904c7d;
extern PyObject *const_str_plain___truediv__;
extern PyObject *const_tuple_int_pos_1_int_0_tuple;
extern PyObject *const_str_plain_all;
static PyObject *const_str_digest_7bf6668dbb7b9c33d53ed1c615ea8bfa;
static PyObject *const_str_digest_539b940ce8b78f070990007c87f8234f;
static PyObject *const_list_str_plain_r_str_plain_roots_list;
extern PyObject *const_str_plain_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_0bc9862339567bf106d2e64cfb092682;
static PyObject *const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple;
static PyObject *const_tuple_int_0_slice_none_none_none_tuple;
extern PyObject *const_str_plain___array__;
static PyObject *const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_line2;
extern PyObject *const_str_plain_vander;
extern PyObject *const_str_plain_other;
extern PyObject *const_str_digest_4dee642e949d4b9ad453719dec9278da;
extern PyObject *const_str_plain___add__;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_coef;
extern PyObject *const_str_plain_order;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_plain_a2;
static PyObject *const_str_plain_scale;
extern PyObject *const_str_plain_a1;
extern PyObject *const_str_plain_T;
static PyObject *const_str_plain__raise_power;
static PyObject *const_str_digest_09c158c60390ce109dd1bc7de9f8a49c;
extern PyObject *const_str_plain_imag;
extern PyObject *const_str_plain_ravel;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_n;
static PyObject *const_str_digest_0ddcb33b72d63396a5ce5d79e1bd425b;
static PyObject *const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_d;
extern PyObject *const_tuple_str_plain_self_str_plain_val_tuple;
static PyObject *const_list_str_plain_c_str_plain_coef_str_plain_coefficients_list;
extern PyObject *const_str_plain___rsub__;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_UserWarning;
extern PyObject *const_str_plain_c;
extern PyObject *const_str_plain_span;
extern PyObject *const_str_plain___setitem__;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_t;
extern PyObject *const_str_plain_u;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_p;
extern PyObject *const_str_plain_q;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_s;
static PyObject *const_str_plain_fac;
extern PyObject *const_str_plain_ones;
extern PyObject *const_str_plain_resids;
extern PyObject *const_str_plain_vals;
static PyObject *const_str_digest_cec87595b4737c124889189ff15d0b22;
static PyObject *const_str_plain_poly1d;
extern PyObject *const_str_plain_convolve;
extern PyObject *const_str_digest_cf0c975c6a453043b357f5230e9e8ede;
extern PyObject *const_str_plain_N;
extern PyObject *const_str_digest_ade38aed73decbd99585ad80f3adae97;
extern PyObject *const_str_plain___div__;
extern PyObject *const_str_plain_groups;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_str_plain___neg__;
extern PyObject *const_str_plain_polyfit;
extern PyObject *const_str_plain_core;
extern PyObject *const_str_plain_full;
static PyObject *const_tuple_str_plain_trim_zeros_str_plain_sort_complex_tuple;
extern PyObject *const_str_digest_3943f956186dfbaba7ee5555afa1df28;
static PyObject *const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple;
extern PyObject *const_str_plain_cov;
extern PyObject *const_str_plain_deg;
extern PyObject *const_str_plain_newaxis;
static PyObject *const_str_plain_always;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_plain___rdiv__;
extern PyObject *const_str_plain_msg;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_ff5e3b1ae0d95ffe8b3d72657a27de19;
static PyObject *const_str_digest_2e159b87ee53f6cabc8ee285b77f805b;
extern PyObject *const_str_plain_hstack;
static PyObject *const_str_plain_seq_of_zeros;
extern PyObject *const_str_plain_complex;
extern PyObject *const_str_plain_arange;
extern PyObject *const_tuple_str_plain_self_str_plain_m_tuple;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_polyadd;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_power;
extern PyObject *const_str_plain___pow__;
extern PyObject *const_str_plain_line1;
extern PyObject *const_str_plain_diag;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
extern PyObject *const_str_plain_mintypecode;
extern PyObject *const_str_plain_val;
static PyObject *const_str_digest_0fd0577caa73fdd5d0bda8d20ce51418;
extern PyObject *const_str_plain_non_zero;
static PyObject *const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple;
static PyObject *const_str_plain_toadd1;
extern PyObject *const_str_plain_lhs;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_c83df442e23a024511d0efec171e26a9;
static PyObject *const_str_plain_fmt_float;
static PyObject *const_tuple_str_digest_890a188d39e55adb81cbf78ea2c7a2e8_tuple;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_str_plain_compress;
static PyObject *const_list_str_plain_o_list;
static PyObject *const_list_75a84415d4dfb7e31ed742c0fa94f09b_list;
extern PyObject *const_str_plain_compile;
static PyObject *const_str_plain__poly_mat;
extern PyObject *const_str_plain_concatenate;
static PyObject *const_str_plain_thestr;
static PyObject *const_str_digest_e43f3bd915f6ace2e523b3a24994fdbc;
extern PyObject *const_str_plain_roots;
static PyObject *const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple;
extern PyObject *const_str_plain_outer;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_plain_variable;
extern PyObject *const_str_plain_zeros_like;
static PyObject *const_str_digest_e830032217724d27845e33581eb30139;
extern PyObject *const_str_plain_float;
extern PyObject *const_str_digest_d6d72a26db479ec8da48b32012f92cbf;
static PyObject *const_tuple_int_pos_70_tuple;
static PyObject *const_str_plain_toadd2;
extern PyObject *const_str_plain_atleast_1d;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_4aa5fb15c76d22fba6c2db6cceed9a4d = UNSTREAM_STRING( &constant_bin[ 1143306 ], 1319, 0 );
    const_str_digest_a12ca88a2988b41a7bbf1fb0e924336b = UNSTREAM_STRING( &constant_bin[ 1144625 ], 200, 0 );
    const_str_digest_7614d066b99092ed61947ba53de28328 = UNSTREAM_STRING( &constant_bin[ 1144825 ], 55, 0 );
    const_tuple_d718e5663dad1c61efeeca8554360ab2_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d718e5663dad1c61efeeca8554360ab2_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_c_or_r = UNSTREAM_STRING( &constant_bin[ 1144880 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_d718e5663dad1c61efeeca8554360ab2_tuple, 1, const_str_plain_c_or_r ); Py_INCREF( const_str_plain_c_or_r );
    PyTuple_SET_ITEM( const_tuple_d718e5663dad1c61efeeca8554360ab2_tuple, 2, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    const_str_plain_variable = UNSTREAM_STRING( &constant_bin[ 1290 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_d718e5663dad1c61efeeca8554360ab2_tuple, 3, const_str_plain_variable ); Py_INCREF( const_str_plain_variable );
    PyTuple_SET_ITEM( const_tuple_d718e5663dad1c61efeeca8554360ab2_tuple, 4, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    const_str_digest_ca3b9b4a9fef02910aa9e18b690ebb47 = UNSTREAM_STRING( &constant_bin[ 1144886 ], 1232, 0 );
    const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 1, const_str_plain_non_zero ); Py_INCREF( const_str_plain_non_zero );
    const_str_plain_trailing_zeros = UNSTREAM_STRING( &constant_bin[ 1146118 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 2, const_str_plain_trailing_zeros ); Py_INCREF( const_str_plain_trailing_zeros );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 3, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 4, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 5, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    const_str_digest_63e450e710f10ffa31b2603b90b1a06b = UNSTREAM_STRING( &constant_bin[ 363579 ], 5, 0 );
    const_dict_144cf727ca808c02413e0ad8ab424cf2 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_144cf727ca808c02413e0ad8ab424cf2, const_str_plain_mode, const_str_plain_full );
    assert( PyDict_Size( const_dict_144cf727ca808c02413e0ad8ab424cf2 ) == 1 );
    const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 0, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 1, const_str_plain_a2 ); Py_INCREF( const_str_plain_a2 );
    const_str_plain_truepoly = UNSTREAM_STRING( &constant_bin[ 1146132 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 2, const_str_plain_truepoly ); Py_INCREF( const_str_plain_truepoly );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 3, const_str_plain_diff ); Py_INCREF( const_str_plain_diff );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 4, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_plain_zr = UNSTREAM_STRING( &constant_bin[ 85020 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 5, const_str_plain_zr ); Py_INCREF( const_str_plain_zr );
    const_str_digest_ac4e5511907cabbe407110fccb6e5898 = UNSTREAM_STRING( &constant_bin[ 1146140 ], 1910, 0 );
    const_str_digest_d025b8cc434c4be4e6c06e89082ea183 = UNSTREAM_STRING( &constant_bin[ 1148050 ], 1864, 0 );
    const_tuple_f3acc424a18a0019640906fc08f507d1_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 2, const_str_plain_truepoly ); Py_INCREF( const_str_plain_truepoly );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 5, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_digest_c5104c95b26caa2770b936f43693659b = UNSTREAM_STRING( &constant_bin[ 1149914 ], 26, 0 );
    const_str_digest_f21e02642cb931dff513acf416b301f5 = UNSTREAM_STRING( &constant_bin[ 1149940 ], 33, 0 );
    const_str_digest_d31b1f7cd665ec833fe85cdeb11902cb = UNSTREAM_STRING( &constant_bin[ 1149973 ], 10, 0 );
    const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 3, const_str_plain_truepoly ); Py_INCREF( const_str_plain_truepoly );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 5, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_float_1e_minus_14 = UNSTREAM_FLOAT( &constant_bin[ 1149983 ] );
    const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple = PyTuple_New( 8 );
    const_str_plain_seq_of_zeros = UNSTREAM_STRING( &constant_bin[ 1149991 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple, 0, const_str_plain_seq_of_zeros ); Py_INCREF( const_str_plain_seq_of_zeros );
    PyTuple_SET_ITEM( const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple, 1, const_str_plain_sh ); Py_INCREF( const_str_plain_sh );
    PyTuple_SET_ITEM( const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple, 2, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    PyTuple_SET_ITEM( const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple, 3, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple, 4, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple, 5, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    const_str_plain_pos_roots = UNSTREAM_STRING( &constant_bin[ 1150003 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple, 6, const_str_plain_pos_roots ); Py_INCREF( const_str_plain_pos_roots );
    const_str_plain_neg_roots = UNSTREAM_STRING( &constant_bin[ 1150012 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple, 7, const_str_plain_neg_roots ); Py_INCREF( const_str_plain_neg_roots );
    const_str_digest_692dc77e7651117b5059c24a0fc8e6ef = UNSTREAM_STRING( &constant_bin[ 1150021 ], 9, 0 );
    const_str_digest_125ec7974471c7c212f84a3304bc12c3 = UNSTREAM_STRING( &constant_bin[ 1150030 ], 1122, 0 );
    const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple, 0, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple, 3, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    const_list_float_0_0_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_float_0_0_list, 0, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    const_str_digest_912fae8a28b8bd5ead766661045cede3 = UNSTREAM_STRING( &constant_bin[ 1151152 ], 48, 0 );
    const_str_plain_coefstr = UNSTREAM_STRING( &constant_bin[ 1151200 ], 7, 1 );
    const_str_digest_dff86e29a4436a81b6306b0416211f76 = UNSTREAM_STRING( &constant_bin[ 1151207 ], 62, 0 );
    const_dict_550850c0300eb7076f24d8318a86fb89 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_550850c0300eb7076f24d8318a86fb89, const_str_plain_trim, const_str_plain_f );
    assert( PyDict_Size( const_dict_550850c0300eb7076f24d8318a86fb89 ) == 1 );
    const_dict_77bffa4b7de1ff8d7cd5370bafca6dcc = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_77bffa4b7de1ff8d7cd5370bafca6dcc, const_str_plain_rtol, const_float_1e_minus_14 );
    assert( PyDict_Size( const_dict_77bffa4b7de1ff8d7cd5370bafca6dcc ) == 1 );
    const_tuple_str_plain_q_str_plain_s_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_q_str_plain_s_tuple, 0, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_str_plain_q_str_plain_s_tuple, 1, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_thestr = UNSTREAM_STRING( &constant_bin[ 1151269 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 1, const_str_plain_thestr ); Py_INCREF( const_str_plain_thestr );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 2, const_str_plain_var ); Py_INCREF( const_str_plain_var );
    const_str_plain_coeffs = UNSTREAM_STRING( &constant_bin[ 1151275 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 3, const_str_plain_coeffs ); Py_INCREF( const_str_plain_coeffs );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 4, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    const_str_plain_fmt_float = UNSTREAM_STRING( &constant_bin[ 1151281 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 5, const_str_plain_fmt_float ); Py_INCREF( const_str_plain_fmt_float );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 6, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 7, const_str_plain_coefstr ); Py_INCREF( const_str_plain_coefstr );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 8, const_str_plain_power ); Py_INCREF( const_str_plain_power );
    PyTuple_SET_ITEM( const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 9, const_str_plain_newstr ); Py_INCREF( const_str_plain_newstr );
    const_str_digest_0db5f082e757bf000893d1070c5314d6 = UNSTREAM_STRING( &constant_bin[ 1151290 ], 1078, 0 );
    const_str_digest_8d57b7b6e72d04b87b3e2a50f3755912 = UNSTREAM_STRING( &constant_bin[ 1152368 ], 39, 0 );
    const_str_digest_b73629cbd250f78988da03d69fd963c8 = UNSTREAM_STRING( &constant_bin[ 1152407 ], 752, 0 );
    const_str_digest_d2e3016ff6c92dbac6fddfcf75daea5a = UNSTREAM_STRING( &constant_bin[ 1153159 ], 20, 0 );
    const_str_digest_8e8cc082af63fdab10d5a5ad0df80a3b = UNSTREAM_STRING( &constant_bin[ 1153179 ], 10, 0 );
    const_str_digest_5d29a5fa4d48aa4eec4b679b0c640190 = UNSTREAM_STRING( &constant_bin[ 3624 ], 2, 0 );
    const_str_plain_partstr = UNSTREAM_STRING( &constant_bin[ 1153189 ], 7, 1 );
    const_str_digest_ab2bc23826697fad0288f5ff4e6158d3 = UNSTREAM_STRING( &constant_bin[ 1153196 ], 183, 0 );
    const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 1, const_str_plain_key ); Py_INCREF( const_str_plain_key );
    PyTuple_SET_ITEM( const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 3, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    PyTuple_SET_ITEM( const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 4, const_str_plain_zr ); Py_INCREF( const_str_plain_zr );
    const_str_digest_890a188d39e55adb81cbf78ea2c7a2e8 = UNSTREAM_STRING( &constant_bin[ 1153379 ], 14, 0 );
    const_str_plain_Vbase = UNSTREAM_STRING( &constant_bin[ 1153393 ], 5, 1 );
    const_tuple_str_plain_self_str_plain_vals_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_vals_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_vals_tuple, 1, const_str_plain_vals ); Py_INCREF( const_str_plain_vals );
    const_tuple_f8024a2bf18cc52be702814b03234d41_tuple = PyTuple_New( 12 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 0, const_str_plain_astr ); Py_INCREF( const_str_plain_astr );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 1, const_str_plain_wrap ); Py_INCREF( const_str_plain_wrap );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 2, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 3, const_str_plain_line1 ); Py_INCREF( const_str_plain_line1 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 4, const_str_plain_line2 ); Py_INCREF( const_str_plain_line2 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 5, const_str_plain_output ); Py_INCREF( const_str_plain_output );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 6, const_str_plain_mat ); Py_INCREF( const_str_plain_mat );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 7, const_str_plain_span ); Py_INCREF( const_str_plain_span );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 8, const_str_plain_power ); Py_INCREF( const_str_plain_power );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 9, const_str_plain_partstr ); Py_INCREF( const_str_plain_partstr );
    const_str_plain_toadd2 = UNSTREAM_STRING( &constant_bin[ 1153398 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 10, const_str_plain_toadd2 ); Py_INCREF( const_str_plain_toadd2 );
    const_str_plain_toadd1 = UNSTREAM_STRING( &constant_bin[ 1153404 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 11, const_str_plain_toadd1 ); Py_INCREF( const_str_plain_toadd1 );
    const_str_plain_NX = UNSTREAM_STRING( &constant_bin[ 1153410 ], 2, 1 );
    const_str_digest_1ddd25da7461a4681aa105108f792da7 = UNSTREAM_STRING( &constant_bin[ 1153412 ], 29, 0 );
    const_str_digest_1ed57e39ffcca0b15b9cb6b3f4b1fee7 = UNSTREAM_STRING( &constant_bin[ 1153441 ], 2616, 0 );
    const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple, 2, const_str_plain_ind ); Py_INCREF( const_str_plain_ind );
    const_str_digest_288b855de22027ea51f62f6ba4203a91 = UNSTREAM_STRING( &constant_bin[ 1156057 ], 33, 0 );
    const_tuple_str_plain_diag_str_plain_vander_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_diag_str_plain_vander_tuple, 0, const_str_plain_diag ); Py_INCREF( const_str_plain_diag );
    PyTuple_SET_ITEM( const_tuple_str_plain_diag_str_plain_vander_tuple, 1, const_str_plain_vander ); Py_INCREF( const_str_plain_vander );
    const_tuple_str_digest_63e450e710f10ffa31b2603b90b1a06b_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_63e450e710f10ffa31b2603b90b1a06b_tuple, 0, const_str_digest_63e450e710f10ffa31b2603b90b1a06b ); Py_INCREF( const_str_digest_63e450e710f10ffa31b2603b90b1a06b );
    const_tuple_54532a8d90a79048cf8dd43464442f49_tuple = PyTuple_New( 18 );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 1, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 2, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 3, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 4, const_str_plain_full ); Py_INCREF( const_str_plain_full );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 5, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 6, const_str_plain_cov ); Py_INCREF( const_str_plain_cov );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 7, const_str_plain_order ); Py_INCREF( const_str_plain_order );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 8, const_str_plain_lhs ); Py_INCREF( const_str_plain_lhs );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 9, const_str_plain_rhs ); Py_INCREF( const_str_plain_rhs );
    const_str_plain_scale = UNSTREAM_STRING( &constant_bin[ 264172 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 10, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 11, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 12, const_str_plain_resids ); Py_INCREF( const_str_plain_resids );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 13, const_str_plain_rank ); Py_INCREF( const_str_plain_rank );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 14, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 15, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 16, const_str_plain_Vbase ); Py_INCREF( const_str_plain_Vbase );
    const_str_plain_fac = UNSTREAM_STRING( &constant_bin[ 2977 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 17, const_str_plain_fac ); Py_INCREF( const_str_plain_fac );
    const_str_digest_ae8ef7cff1c65112641662cfd4904c7d = UNSTREAM_STRING( &constant_bin[ 1156090 ], 1270, 0 );
    const_str_digest_7bf6668dbb7b9c33d53ed1c615ea8bfa = UNSTREAM_STRING( &constant_bin[ 1157360 ], 38, 0 );
    const_str_digest_539b940ce8b78f070990007c87f8234f = UNSTREAM_STRING( &constant_bin[ 1122870 ], 3, 0 );
    const_list_str_plain_r_str_plain_roots_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_r_str_plain_roots_list, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyList_SET_ITEM( const_list_str_plain_r_str_plain_roots_list, 1, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    const_str_digest_0bc9862339567bf106d2e64cfb092682 = UNSTREAM_STRING( &constant_bin[ 1157398 ], 46, 0 );
    const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 0, const_str_plain_u ); Py_INCREF( const_str_plain_u );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 1, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 2, const_str_plain_truepoly ); Py_INCREF( const_str_plain_truepoly );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 3, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 4, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 5, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 6, const_str_plain_scale ); Py_INCREF( const_str_plain_scale );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 7, const_str_plain_q ); Py_INCREF( const_str_plain_q );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 8, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 9, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 10, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_tuple_int_0_slice_none_none_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_slice_none_none_none_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_slice_none_none_none_tuple, 1, const_slice_none_none_none ); Py_INCREF( const_slice_none_none_none );
    const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 0, const_str_plain_isscalar ); Py_INCREF( const_str_plain_isscalar );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 1, const_str_plain_abs ); Py_INCREF( const_str_plain_abs );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 2, const_str_plain_finfo ); Py_INCREF( const_str_plain_finfo );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 3, const_str_plain_atleast_1d ); Py_INCREF( const_str_plain_atleast_1d );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 4, const_str_plain_hstack ); Py_INCREF( const_str_plain_hstack );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 5, const_str_plain_dot ); Py_INCREF( const_str_plain_dot );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 6, const_str_plain_array ); Py_INCREF( const_str_plain_array );
    PyTuple_SET_ITEM( const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, 7, const_str_plain_ones ); Py_INCREF( const_str_plain_ones );
    const_str_plain__raise_power = UNSTREAM_STRING( &constant_bin[ 1157444 ], 12, 1 );
    const_str_digest_09c158c60390ce109dd1bc7de9f8a49c = UNSTREAM_STRING( &constant_bin[ 1157456 ], 2941, 0 );
    const_str_digest_0ddcb33b72d63396a5ce5d79e1bd425b = UNSTREAM_STRING( &constant_bin[ 1160397 ], 5315, 0 );
    const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple, 0, const_str_plain_eigvals ); Py_INCREF( const_str_plain_eigvals );
    PyTuple_SET_ITEM( const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple, 1, const_str_plain_lstsq ); Py_INCREF( const_str_plain_lstsq );
    PyTuple_SET_ITEM( const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple, 2, const_str_plain_inv ); Py_INCREF( const_str_plain_inv );
    const_list_str_plain_c_str_plain_coef_str_plain_coefficients_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_c_str_plain_coef_str_plain_coefficients_list, 0, const_str_plain_c ); Py_INCREF( const_str_plain_c );
    PyList_SET_ITEM( const_list_str_plain_c_str_plain_coef_str_plain_coefficients_list, 1, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyList_SET_ITEM( const_list_str_plain_c_str_plain_coef_str_plain_coefficients_list, 2, const_str_plain_coefficients ); Py_INCREF( const_str_plain_coefficients );
    const_str_digest_cec87595b4737c124889189ff15d0b22 = UNSTREAM_STRING( &constant_bin[ 1165712 ], 210, 0 );
    const_str_plain_poly1d = UNSTREAM_STRING( &constant_bin[ 766679 ], 6, 1 );
    const_tuple_str_plain_trim_zeros_str_plain_sort_complex_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_trim_zeros_str_plain_sort_complex_tuple, 0, const_str_plain_trim_zeros ); Py_INCREF( const_str_plain_trim_zeros );
    PyTuple_SET_ITEM( const_tuple_str_plain_trim_zeros_str_plain_sort_complex_tuple, 1, const_str_plain_sort_complex ); Py_INCREF( const_str_plain_sort_complex );
    const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple, 3, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    const_str_plain_always = UNSTREAM_STRING( &constant_bin[ 99286 ], 6, 1 );
    const_str_digest_ff5e3b1ae0d95ffe8b3d72657a27de19 = UNSTREAM_STRING( &constant_bin[ 1165922 ], 7, 0 );
    const_str_digest_2e159b87ee53f6cabc8ee285b77f805b = UNSTREAM_STRING( &constant_bin[ 1165929 ], 4, 0 );
    const_str_digest_0fd0577caa73fdd5d0bda8d20ce51418 = UNSTREAM_STRING( &constant_bin[ 1165933 ], 36, 0 );
    const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple, 0, const_str_plain_a1 ); Py_INCREF( const_str_plain_a1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple, 1, const_str_plain_a2 ); Py_INCREF( const_str_plain_a2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple, 2, const_str_plain_truepoly ); Py_INCREF( const_str_plain_truepoly );
    PyTuple_SET_ITEM( const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple, 3, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_digest_c83df442e23a024511d0efec171e26a9 = UNSTREAM_STRING( &constant_bin[ 1165969 ], 50, 0 );
    const_tuple_str_digest_890a188d39e55adb81cbf78ea2c7a2e8_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_890a188d39e55adb81cbf78ea2c7a2e8_tuple, 0, const_str_digest_890a188d39e55adb81cbf78ea2c7a2e8 ); Py_INCREF( const_str_digest_890a188d39e55adb81cbf78ea2c7a2e8 );
    const_list_str_plain_o_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_o_list, 0, const_str_plain_o ); Py_INCREF( const_str_plain_o );
    const_list_75a84415d4dfb7e31ed742c0fa94f09b_list = PyList_New( 12 );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 0, const_str_plain_poly ); Py_INCREF( const_str_plain_poly );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 1, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 2, const_str_plain_polyint ); Py_INCREF( const_str_plain_polyint );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 3, const_str_plain_polyder ); Py_INCREF( const_str_plain_polyder );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 4, const_str_plain_polyadd ); Py_INCREF( const_str_plain_polyadd );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 5, const_str_plain_polysub ); Py_INCREF( const_str_plain_polysub );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 6, const_str_plain_polymul ); Py_INCREF( const_str_plain_polymul );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 7, const_str_plain_polydiv ); Py_INCREF( const_str_plain_polydiv );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 8, const_str_plain_polyval ); Py_INCREF( const_str_plain_polyval );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 9, const_str_plain_poly1d ); Py_INCREF( const_str_plain_poly1d );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 10, const_str_plain_polyfit ); Py_INCREF( const_str_plain_polyfit );
    PyList_SET_ITEM( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list, 11, const_str_plain_RankWarning ); Py_INCREF( const_str_plain_RankWarning );
    const_str_plain__poly_mat = UNSTREAM_STRING( &constant_bin[ 1166019 ], 9, 1 );
    const_str_digest_e43f3bd915f6ace2e523b3a24994fdbc = UNSTREAM_STRING( &constant_bin[ 1166028 ], 27, 0 );
    const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, 0, const_str_plain_iscomplex ); Py_INCREF( const_str_plain_iscomplex );
    PyTuple_SET_ITEM( const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, 1, const_str_plain_real ); Py_INCREF( const_str_plain_real );
    PyTuple_SET_ITEM( const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, 2, const_str_plain_imag ); Py_INCREF( const_str_plain_imag );
    PyTuple_SET_ITEM( const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, 3, const_str_plain_mintypecode ); Py_INCREF( const_str_plain_mintypecode );
    const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_digest_e830032217724d27845e33581eb30139 = UNSTREAM_STRING( &constant_bin[ 1150024 ], 6, 0 );
    const_tuple_int_pos_70_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_int_pos_70_tuple, 0, const_int_pos_70 ); Py_INCREF( const_int_pos_70 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$polynomial( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e19cfea33d4655c3dc632daebd66cddb;
static PyCodeObject *codeobj_a5ba9eec3c1492d7db53ee7926486d7a;
static PyCodeObject *codeobj_5bd9e9da0aab9670e3d5ba97bd481793;
static PyCodeObject *codeobj_c1a9e3dbfd0a0eae7275cab4652fdd16;
static PyCodeObject *codeobj_7efaaeb72ecb47ecfae49ee2e20810fa;
static PyCodeObject *codeobj_c51c85bfe6831ca91f24de0e9286b9b9;
static PyCodeObject *codeobj_42f215f447ef744885b4f84447f2e86d;
static PyCodeObject *codeobj_2c949f2d9b6bbd87ac2cec62e7bc4419;
static PyCodeObject *codeobj_c9fc2fea2da5796a939898e67598dd25;
static PyCodeObject *codeobj_4b7fa8dea597a4404af82b6624eb9e46;
static PyCodeObject *codeobj_dc5aefb732a9582ded9baecba6be15d9;
static PyCodeObject *codeobj_60757909784b1d7a0b8894d9aacdbcc7;
static PyCodeObject *codeobj_7f73a5aa57bfd230c7e50d0e11cab895;
static PyCodeObject *codeobj_b718dc0b2e8b422bcb5bd0db8fdb544b;
static PyCodeObject *codeobj_1ca2dec18f61e9d74fe26947a86fb6cc;
static PyCodeObject *codeobj_66d5af7e92baf4603552bf7f96dd0e1d;
static PyCodeObject *codeobj_7816978eb1f0eba3dd1c8d5f20b602b1;
static PyCodeObject *codeobj_a7c8c71306895accf94d97afbdada2e5;
static PyCodeObject *codeobj_50720cb05fb31d3fb6ea730e417bba13;
static PyCodeObject *codeobj_8a53d3ab375e5f2bd2f28dbd788ba399;
static PyCodeObject *codeobj_895f0384ae7bee0c974ed2e9233c1fd8;
static PyCodeObject *codeobj_df03cf39507d2efdb944de5714b6206a;
static PyCodeObject *codeobj_08ddd1e55e212c0a54dd1359e0a58fc9;
static PyCodeObject *codeobj_72fe6510b0d282886c390f3ffaaadb0b;
static PyCodeObject *codeobj_7c17eb625ebac3d4ac9c67d763db16ea;
static PyCodeObject *codeobj_ec44886496687bc2b67d7df4ade6b52a;
static PyCodeObject *codeobj_58a1b367b90adf6a1bcdb27514289d10;
static PyCodeObject *codeobj_223271ff15fda2824c1284c46bb74907;
static PyCodeObject *codeobj_3dfc7be51bdfe1fe88b34aea758acc0e;
static PyCodeObject *codeobj_4feca4a67e9a9a92c6ac1f1b00538e3f;
static PyCodeObject *codeobj_7e169f60dc35951f2319fed152cafb1b;
static PyCodeObject *codeobj_ffe2854076f9b567937641d47d5ad57d;
static PyCodeObject *codeobj_0233cb0db773ba7a0e3356c02ae06cb2;
static PyCodeObject *codeobj_1ebb457a5943fc7f293df95ace0dcef8;
static PyCodeObject *codeobj_4121f3768067bf913adeac2e378ae9ce;
static PyCodeObject *codeobj_51276285eb3cf0d1736d7a471fb58437;
static PyCodeObject *codeobj_9af60bf673ecf3e0139d8d519a42e494;
static PyCodeObject *codeobj_11d3362aea16d91bb4fc39e6fde357a3;
static PyCodeObject *codeobj_a38f5dff5105aedc29830ea93203faff;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_dff86e29a4436a81b6306b0416211f76;
    codeobj_e19cfea33d4655c3dc632daebd66cddb = MAKE_CODEOBJ( module_filename_obj, const_str_plain___add__, 1160, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a5ba9eec3c1492d7db53ee7926486d7a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___array__, 1066, const_tuple_str_plain_self_str_plain_t_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5bd9e9da0aab9670e3d5ba97bd481793 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 1137, const_tuple_str_plain_self_str_plain_val_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c1a9e3dbfd0a0eae7275cab4652fdd16 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___div__, 1184, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7efaaeb72ecb47ecfae49ee2e20810fa = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 1202, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c51c85bfe6831ca91f24de0e9286b9b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getattr__, 1213, const_tuple_str_plain_self_str_plain_key_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_42f215f447ef744885b4f84447f2e86d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getitem__, 1227, const_tuple_str_plain_self_str_plain_val_str_plain_ind_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2c949f2d9b6bbd87ac2cec62e7bc4419 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 1045, const_tuple_d718e5663dad1c61efeeca8554360ab2_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c9fc2fea2da5796a939898e67598dd25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 1247, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4b7fa8dea597a4404af82b6624eb9e46 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 1077, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dc5aefb732a9582ded9baecba6be15d9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___mul__, 1146, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_60757909784b1d7a0b8894d9aacdbcc7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 1207, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7f73a5aa57bfd230c7e50d0e11cab895 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___neg__, 1140, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b718dc0b2e8b422bcb5bd0db8fdb544b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___pos__, 1143, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1ca2dec18f61e9d74fe26947a86fb6cc = MAKE_CODEOBJ( module_filename_obj, const_str_plain___pow__, 1168, const_tuple_str_plain_self_str_plain_val_str_plain_res_str_plain___tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_66d5af7e92baf4603552bf7f96dd0e1d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___radd__, 1164, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7816978eb1f0eba3dd1c8d5f20b602b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rdiv__, 1193, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a7c8c71306895accf94d97afbdada2e5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 1072, const_tuple_str_plain_self_str_plain_vals_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_50720cb05fb31d3fb6ea730e417bba13 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rmul__, 1153, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8a53d3ab375e5f2bd2f28dbd788ba399 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rsub__, 1180, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_895f0384ae7bee0c974ed2e9233c1fd8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setattr__, 1210, const_tuple_str_plain_self_str_plain_key_str_plain_val_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_df03cf39507d2efdb944de5714b6206a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setitem__, 1235, const_tuple_ae5ec3294549ae46b182281f164bc39b_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_08ddd1e55e212c0a54dd1359e0a58fc9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 1080, const_tuple_8d8bd48677a233b7e28dea7c60586233_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_72fe6510b0d282886c390f3ffaaadb0b = MAKE_CODEOBJ( module_filename_obj, const_str_plain___sub__, 1176, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7c17eb625ebac3d4ac9c67d763db16ea = MAKE_CODEOBJ( module_filename_obj, const_str_plain__raise_power, 913, const_tuple_f8024a2bf18cc52be702814b03234d41_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ec44886496687bc2b67d7df4ade6b52a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deriv, 1263, const_tuple_str_plain_self_str_plain_m_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_58a1b367b90adf6a1bcdb27514289d10 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fmt_float, 1088, const_tuple_str_plain_q_str_plain_s_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_223271ff15fda2824c1284c46bb74907 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_integ, 1250, const_tuple_str_plain_self_str_plain_m_str_plain_k_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3dfc7be51bdfe1fe88b34aea758acc0e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_poly, 32, const_tuple_dbb5f364f155e591a19db2647be81fbf_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4feca4a67e9a9a92c6ac1f1b00538e3f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyadd, 684, const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7e169f60dc35951f2319fed152cafb1b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyder, 334, const_tuple_f3acc424a18a0019640906fc08f507d1_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ffe2854076f9b567937641d47d5ad57d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polydiv, 847, const_tuple_d68b7cd0497555b36c7c1de38a1c5c02_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0233cb0db773ba7a0e3356c02ae06cb2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyfit, 402, const_tuple_54532a8d90a79048cf8dd43464442f49_tuple, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1ebb457a5943fc7f293df95ace0dcef8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyint, 241, const_tuple_efb1f900d0bb2c55612746876a2ad204_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4121f3768067bf913adeac2e378ae9ce = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polymul, 791, const_tuple_str_plain_a1_str_plain_a2_str_plain_truepoly_str_plain_val_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_51276285eb3cf0d1736d7a471fb58437 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polynomial, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9af60bf673ecf3e0139d8d519a42e494 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polysub, 744, const_tuple_38fd55d6d5de02e1f84bae597aab40ee_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_11d3362aea16d91bb4fc39e6fde357a3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polyval, 615, const_tuple_str_plain_p_str_plain_x_str_plain_y_str_plain_i_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a38f5dff5105aedc29830ea93203faff = MAKE_CODEOBJ( module_filename_obj, const_str_plain_roots, 157, const_tuple_e9058b302c7706398a26fa3c2cfea436_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$polynomial$$$class_1_RankWarning( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_10___rmul__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_11___add__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_12___radd__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_13___pow__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_14___sub__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_15___rsub__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_16___div__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_17___rdiv__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_18___eq__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_19___ne__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_20___setattr__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_21___getattr__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_22___getitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_23___setitem__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_24___iter__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_25_integ( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_26_deriv( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_2___array__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_3___repr__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_4___len__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__$$$function_1_fmt_float(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_6___call__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_7___neg__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_8___pos__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_9___mul__(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_10_polydiv(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_11__raise_power( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_1_poly(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_2_roots(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_3_polyint( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_4_polyder( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_5_polyfit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_6_polyval(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_7_polyadd(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_8_polysub(  );


static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_9_polymul(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$polynomial$$$class_1_RankWarning( PyObject **python_pars )
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
    tmp_assign_source_1 = const_str_digest_d2e3016ff6c92dbac6fddfcf75daea5a;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_a12ca88a2988b41a7bbf1fb0e924336b;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_1_RankWarning );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_1_RankWarning );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$polynomial$$$function_1_poly( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_seq_of_zeros = python_pars[ 0 ];
    PyObject *var_sh = NULL;
    PyObject *var_dt = NULL;
    PyObject *var_a = NULL;
    PyObject *var_k = NULL;
    PyObject *var_roots = NULL;
    PyObject *var_pos_roots = NULL;
    PyObject *var_neg_roots = NULL;
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
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range_arg_1;
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
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
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
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3dfc7be51bdfe1fe88b34aea758acc0e, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_seq_of_zeros;

    frame_function->f_lineno = 124;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_seq_of_zeros;
        assert( old != NULL );
        par_seq_of_zeros = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_seq_of_zeros;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    assert( var_sh == NULL );
    var_sh = tmp_assign_source_2;

    tmp_len_arg_1 = var_sh;

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 127;
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
    tmp_subscribed_name_1 = var_sh;

    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = var_sh;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_compexpr_right_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 127;
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
    tmp_subscribed_name_3 = var_sh;

    tmp_subscript_name_3 = const_int_0;
    tmp_compexpr_left_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = const_int_0;
    tmp_and_right_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
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

        exception_lineno = 127;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_eigvals );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eigvals );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "eigvals" );
        exception_tb = NULL;

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_seq_of_zeros;

    frame_function->f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_seq_of_zeros;
        assert( old != NULL );
        par_seq_of_zeros = tmp_assign_source_3;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_len_arg_2 = var_sh;

    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 129;
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
    tmp_source_name_2 = par_seq_of_zeros;

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    assert( var_dt == NULL );
    var_dt = tmp_assign_source_4;

    tmp_compare_left_2 = var_dt;

    tmp_compare_right_2 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_compare_right_2 != NULL );
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
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
    tmp_source_name_3 = par_seq_of_zeros;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astype );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_mintypecode );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mintypecode );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mintypecode" );
        exception_tb = NULL;

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = var_dt;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_char );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 133;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 133;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 133;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_seq_of_zeros;
        assert( old != NULL );
        par_seq_of_zeros = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_make_exception_arg_1 = const_str_digest_0bc9862339567bf106d2e64cfb092682;
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
    branch_end_2:;
    branch_end_1:;
    tmp_len_arg_3 = par_seq_of_zeros;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seq_of_zeros" );
        exception_tb = NULL;

        exception_lineno = 137;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 137;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_return_value = const_float_1_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_4:;
    tmp_source_name_5 = par_seq_of_zeros;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seq_of_zeros" );
        exception_tb = NULL;

        exception_lineno = 139;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_dt;
        var_dt = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_ones );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ones );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ones" );
        exception_tb = NULL;

        exception_lineno = 140;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = const_tuple_tuple_int_pos_1_tuple_tuple;
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_dt;

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 140;
    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    assert( var_a == NULL );
    var_a = tmp_assign_source_7;

    tmp_len_arg_4 = par_seq_of_zeros;

    if ( tmp_len_arg_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seq_of_zeros" );
        exception_tb = NULL;

        exception_lineno = 141;
        goto frame_exception_exit_1;
    }

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
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
            frame_function->f_lineno = 141;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_10;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 142;
        goto try_except_handler_2;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_convolve );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto try_except_handler_2;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_a;

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 142;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_1 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_array );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_array );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "array" );
        exception_tb = NULL;

        exception_lineno = 142;
        goto try_except_handler_2;
    }

    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyList_New( 2 );
    tmp_list_element_1 = const_int_pos_1;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_1 );
    tmp_subscribed_name_4 = par_seq_of_zeros;

    if ( tmp_subscribed_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_tuple_element_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seq_of_zeros" );
        exception_tb = NULL;

        exception_lineno = 142;
        goto try_except_handler_2;
    }

    tmp_subscript_name_4 = var_k;

    tmp_operand_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 142;
        goto try_except_handler_2;
    }
    tmp_list_element_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_tuple_element_2 );

        exception_lineno = 142;
        goto try_except_handler_2;
    }
    PyList_SET_ITEM( tmp_tuple_element_2, 1, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = var_dt;

    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 142;
    tmp_tuple_element_1 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_3, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 142;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_1 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_144cf727ca808c02413e0ad8ab424cf2 );
    frame_function->f_lineno = 143;
    tmp_assign_source_11 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_2, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
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

    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_8 != NULL );
    tmp_source_name_8 = var_a;

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_dtype );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_type );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 145;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_complexfloating );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 145;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 145;
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
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_asarray );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = par_seq_of_zeros;

    if ( tmp_args_element_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "seq_of_zeros" );
        exception_tb = NULL;

        exception_lineno = 147;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = LOOKUP_BUILTIN( const_str_plain_complex );
    assert( tmp_args_element_name_8 != NULL );
    frame_function->f_lineno = 147;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    assert( var_roots == NULL );
    var_roots = tmp_assign_source_12;

    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_sort_complex );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sort_complex );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sort_complex" );
        exception_tb = NULL;

        exception_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 148;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_compress );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_source_name_12 = var_roots;

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_imag );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_4 = const_int_0;
    tmp_args_element_name_10 = RICH_COMPARE_GT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = var_roots;

    frame_function->f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 148;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    assert( var_pos_roots == NULL );
    var_pos_roots = tmp_assign_source_13;

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_conjugate );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_sort_complex );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sort_complex );
    }

    if ( tmp_called_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sort_complex" );
        exception_tb = NULL;

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }

    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_14 == NULL )
    {
        Py_DECREF( tmp_called_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }

    tmp_called_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_compress );
    if ( tmp_called_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_source_name_15 = var_roots;

    tmp_compexpr_left_5 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_imag );
    if ( tmp_compexpr_left_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_5 = const_int_0;
    tmp_args_element_name_14 = RICH_COMPARE_LT( tmp_compexpr_left_5, tmp_compexpr_right_5 );
    Py_DECREF( tmp_compexpr_left_5 );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_called_name_14 );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = var_roots;

    frame_function->f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_called_name_14 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_args_element_name_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 150;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 150;
        goto frame_exception_exit_1;
    }
    assert( var_neg_roots == NULL );
    var_neg_roots = tmp_assign_source_14;

    tmp_len_arg_5 = var_pos_roots;

    tmp_compexpr_left_6 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_compexpr_left_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_6 = var_neg_roots;

    tmp_compexpr_right_6 = BUILTIN_LEN( tmp_len_arg_6 );
    if ( tmp_compexpr_right_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_6 );

        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_3 = RICH_COMPARE_EQ( tmp_compexpr_left_6, tmp_compexpr_right_6 );
    Py_DECREF( tmp_compexpr_left_6 );
    Py_DECREF( tmp_compexpr_right_6 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 152;
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
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }

    tmp_called_name_15 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_alltrue );
    if ( tmp_called_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_7 = var_neg_roots;

    tmp_compexpr_right_7 = var_pos_roots;

    tmp_args_element_name_16 = RICH_COMPARE_EQ( tmp_compexpr_left_7, tmp_compexpr_right_7 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_15 );

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 152;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_and_right_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_called_name_15 );
    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_and_right_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 152;
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

        exception_lineno = 152;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_18 = var_a;

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }

    tmp_source_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_real );
    if ( tmp_source_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_copy );
    Py_DECREF( tmp_source_name_17 );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 153;
    tmp_assign_source_15 = CALL_FUNCTION_NO_ARGS( tmp_called_name_16 );
    Py_DECREF( tmp_called_name_16 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    branch_no_6:;
    branch_no_5:;
    tmp_return_value = var_a;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "a" );
        exception_tb = NULL;

        exception_lineno = 155;
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
            if ( par_seq_of_zeros )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_seq_of_zeros,
                    par_seq_of_zeros
                );

                assert( res == 0 );
            }

            if ( var_sh )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sh,
                    var_sh
                );

                assert( res == 0 );
            }

            if ( var_dt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dt,
                    var_dt
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

            if ( var_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    var_k
                );

                assert( res == 0 );
            }

            if ( var_roots )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_roots,
                    var_roots
                );

                assert( res == 0 );
            }

            if ( var_pos_roots )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pos_roots,
                    var_pos_roots
                );

                assert( res == 0 );
            }

            if ( var_neg_roots )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_neg_roots,
                    var_neg_roots
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_1_poly );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_seq_of_zeros );
    par_seq_of_zeros = NULL;

    CHECK_OBJECT( (PyObject *)var_sh );
    Py_DECREF( var_sh );
    var_sh = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_roots );
    var_roots = NULL;

    Py_XDECREF( var_pos_roots );
    var_pos_roots = NULL;

    Py_XDECREF( var_neg_roots );
    var_neg_roots = NULL;

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

    Py_XDECREF( par_seq_of_zeros );
    par_seq_of_zeros = NULL;

    Py_XDECREF( var_sh );
    var_sh = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_roots );
    var_roots = NULL;

    Py_XDECREF( var_pos_roots );
    var_pos_roots = NULL;

    Py_XDECREF( var_neg_roots );
    var_neg_roots = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_1_poly );
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


static PyObject *impl_numpy$lib$polynomial$$$function_2_roots( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *var_non_zero = NULL;
    PyObject *var_trailing_zeros = NULL;
    PyObject *var_N = NULL;
    PyObject *var_A = NULL;
    PyObject *var_roots = NULL;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_call_arg_element_2;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_int_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
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
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
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
    PyObject *tmp_tuple_element_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a38f5dff5105aedc29830ea93203faff, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 207;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_p;

    frame_function->f_lineno = 207;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_1 = par_p;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 208;
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
    tmp_make_exception_arg_1 = const_str_digest_1ddd25da7461a4681aa105108f792da7;
    frame_function->f_lineno = 209;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 209;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 212;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_nonzero );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 212;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ravel );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_p;

    frame_function->f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 212;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_subscribed_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    assert( var_non_zero == NULL );
    var_non_zero = tmp_assign_source_2;

    tmp_len_arg_2 = var_non_zero;

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 215;
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
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 216;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_array );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = PyList_New( 0 );
    frame_function->f_lineno = 216;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_len_arg_3 = par_p;

    tmp_left_name_2 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = var_non_zero;

    tmp_subscript_name_2 = const_int_neg_1;
    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_1;
    tmp_assign_source_3 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    assert( var_trailing_zeros == NULL );
    var_trailing_zeros = tmp_assign_source_3;

    tmp_slice_source_1 = par_p;

    tmp_subscribed_name_3 = var_non_zero;

    tmp_subscript_name_3 = const_int_0;
    tmp_int_arg_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_int_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_slice_lower_1 = PyNumber_Int( tmp_int_arg_1 );
    Py_DECREF( tmp_int_arg_1 );
    if ( tmp_slice_lower_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_4 = var_non_zero;

    tmp_subscript_name_4 = const_int_neg_1;
    tmp_int_arg_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_int_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_slice_lower_1 );

        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = PyNumber_Int( tmp_int_arg_2 );
    Py_DECREF( tmp_int_arg_2 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_slice_lower_1 );

        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_1;
    tmp_slice_upper_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_slice_lower_1 );

        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_lower_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_4;
        Py_DECREF( old );
    }

    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_5 != NULL );
    tmp_source_name_6 = par_p;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_type );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = PyTuple_New( 2 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_7 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 225;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_floating );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 225;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_complexfloating );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_4 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 225;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 225;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_source_name_9 = par_p;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_astype );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_args_element_name_6 != NULL );
    frame_function->f_lineno = 226;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 226;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_len_arg_4 = par_p;

    tmp_assign_source_6 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 228;
        goto frame_exception_exit_1;
    }
    assert( var_N == NULL );
    var_N = tmp_assign_source_6;

    tmp_compare_left_3 = var_N;

    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 229;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_diag );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_diag );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "diag" );
        exception_tb = NULL;

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_ones );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = PyTuple_New( 1 );
    tmp_left_name_4 = var_N;

    tmp_right_name_4 = const_int_pos_2;
    tmp_tuple_element_2 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_2 );
    tmp_source_name_11 = par_p;

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_dtype );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_args_element_name_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = const_int_neg_1;
    frame_function->f_lineno = 231;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_10 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 231;
        goto frame_exception_exit_1;
    }
    assert( var_A == NULL );
    var_A = tmp_assign_source_7;

    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_2 = par_p;

    tmp_operand_name_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_5 = par_p;

    tmp_subscript_name_5 = const_int_0;
    tmp_right_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_A;

    tmp_ass_subscript_1 = const_tuple_int_0_slice_none_none_none_tuple;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_eigvals );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_eigvals );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "eigvals" );
        exception_tb = NULL;

        exception_lineno = 233;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = var_A;

    frame_function->f_lineno = 233;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto frame_exception_exit_1;
    }
    assert( var_roots == NULL );
    var_roots = tmp_assign_source_8;

    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 235;
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_array );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_2 = PyList_New( 0 );
    frame_function->f_lineno = 235;
    {
        PyObject *call_args[] = { tmp_call_arg_element_2 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_call_arg_element_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 235;
        goto frame_exception_exit_1;
    }
    assert( var_roots == NULL );
    var_roots = tmp_assign_source_9;

    branch_end_4:;
    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_hstack );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_hstack );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "hstack" );
        exception_tb = NULL;

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_roots;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_element_name_12, 0, tmp_tuple_element_3 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_args_element_name_12 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_zeros );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_13 = var_trailing_zeros;

    tmp_source_name_14 = var_roots;

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_dtype );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_12 );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_12 );

        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_12, 1, tmp_tuple_element_3 );
    frame_function->f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 238;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_roots;
        assert( old != NULL );
        var_roots = tmp_assign_source_10;
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
            if ( par_p )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_p,
                    par_p
                );

                assert( res == 0 );
            }

            if ( var_non_zero )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_non_zero,
                    var_non_zero
                );

                assert( res == 0 );
            }

            if ( var_trailing_zeros )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_trailing_zeros,
                    var_trailing_zeros
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

            if ( var_A )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_A,
                    var_A
                );

                assert( res == 0 );
            }

            if ( var_roots )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_roots,
                    var_roots
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

    tmp_return_value = var_roots;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_2_roots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)var_non_zero );
    Py_DECREF( var_non_zero );
    var_non_zero = NULL;

    Py_XDECREF( var_trailing_zeros );
    var_trailing_zeros = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_roots );
    var_roots = NULL;

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

    Py_XDECREF( par_p );
    par_p = NULL;

    Py_XDECREF( var_non_zero );
    var_non_zero = NULL;

    Py_XDECREF( var_trailing_zeros );
    var_trailing_zeros = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_roots );
    var_roots = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_2_roots );
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


static PyObject *impl_numpy$lib$polynomial$$$function_3_polyint( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_y = NULL;
    PyObject *var_val = NULL;
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
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    int tmp_cmp_Lt_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_list_element_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
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
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1ebb457a5943fc7f293df95ace0dcef8, module_numpy$lib$polynomial );
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
    tmp_int_arg_1 = par_m;

    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_m;
        assert( old != NULL );
        par_m = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_m;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 309;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_912fae8a28b8bd5ead766661045cede3;
    frame_function->f_lineno = 310;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 310;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = par_k;

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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 312;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_m;

    tmp_args_element_name_2 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_args_element_name_2 != NULL );
    frame_function->f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_k;
        assert( old != NULL );
        par_k = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 313;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_k;

    frame_function->f_lineno = 313;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 313;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_k;
        assert( old != NULL );
        par_k = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_k;

    tmp_compexpr_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 314;
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
    tmp_compexpr_left_2 = par_m;

    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 314;
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

        exception_lineno = 314;
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
    tmp_subscribed_name_1 = par_k;

    tmp_subscript_name_1 = const_int_0;
    tmp_left_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 315;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ones );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 315;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_m;

    tmp_args_element_name_5 = LOOKUP_BUILTIN( const_str_plain_float );
    assert( tmp_args_element_name_5 != NULL );
    frame_function->f_lineno = 315;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 315;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 315;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_k;
        assert( old != NULL );
        par_k = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_len_arg_2 = par_k;

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 316;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = par_m;

    tmp_cmp_Lt_2 = RICH_COMPARE_BOOL_LT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Lt_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 316;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Lt_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_7614d066b99092ed61947ba53de28328;
    frame_function->f_lineno = 317;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 318;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_isinstance_inst_1 = par_p;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 320;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
        goto frame_exception_exit_1;
    }
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_truepoly = tmp_assign_source_5;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 321;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_asarray );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_p;

    frame_function->f_lineno = 321;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_compare_left_4 = par_m;

    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_cond_value_2 = var_truepoly;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 323;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 324;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = par_p;

    frame_function->f_lineno = 324;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 324;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_6:;
    tmp_return_value = par_p;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_concatenate );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = PyTuple_New( 2 );
    tmp_source_name_5 = par_p;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___truediv__ );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_called_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_arange );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_3 = par_p;

    tmp_args_element_name_10 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = const_int_0;
    tmp_args_element_name_12 = const_int_neg_1;
    frame_function->f_lineno = 328;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_args_element_name_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 328;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_8, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_subscribed_name_2 = par_k;

    tmp_subscript_name_2 = const_int_0;
    tmp_list_element_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_8 );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_8, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 328;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 328;
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_7;

    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyint );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyint );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyint" );
        exception_tb = NULL;

        exception_lineno = 329;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_y;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_left_name_2 = par_m;

    tmp_right_name_2 = const_int_pos_1;
    tmp_tuple_element_2 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 329;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = par_k;

    tmp_dict_value_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 329;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_k;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 329;
    tmp_assign_source_8 = CALL_FUNCTION( tmp_called_name_9, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 329;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_8;

    tmp_cond_value_3 = var_truepoly;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 330;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 331;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = var_val;

    frame_function->f_lineno = 331;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_7:;
    tmp_return_value = var_val;

    Py_INCREF( tmp_return_value );
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
            if ( par_p )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_p,
                    par_p
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

            if ( var_truepoly )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_truepoly,
                    var_truepoly
                );

                assert( res == 0 );
            }

            if ( var_y )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_y,
                    var_y
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_3_polyint );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( par_k );
    par_k = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_3_polyint );
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


static PyObject *impl_numpy$lib$polynomial$$$function_4_polyder( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_n = NULL;
    PyObject *var_y = NULL;
    PyObject *var_val = NULL;
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
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7e169f60dc35951f2319fed152cafb1b, module_numpy$lib$polynomial );
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
    tmp_int_arg_1 = par_m;

    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_m;
        assert( old != NULL );
        par_m = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_m;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 387;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_c83df442e23a024511d0efec171e26a9;
    frame_function->f_lineno = 388;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 388;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_p;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 390;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_2 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        goto frame_exception_exit_1;
    }
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_truepoly = tmp_assign_source_2;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 391;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_p;

    frame_function->f_lineno = 391;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 391;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_p;

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 392;
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_4;

    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = par_p;

    tmp_left_name_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 393;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_arange );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_n;

    tmp_args_element_name_3 = const_int_0;
    tmp_args_element_name_4 = const_int_neg_1;
    frame_function->f_lineno = 393;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_5;

    tmp_compare_left_2 = par_m;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 394;
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
    tmp_assign_source_6 = par_p;

    assert( var_val == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_val = tmp_assign_source_6;

    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyder );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyder );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyder" );
        exception_tb = NULL;

        exception_lineno = 397;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_y;

    tmp_left_name_3 = par_m;

    tmp_right_name_3 = const_int_pos_1;
    tmp_args_element_name_6 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_7;

    branch_end_2:;
    tmp_cond_value_1 = var_truepoly;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 398;
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 399;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_val;

    frame_function->f_lineno = 399;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_val;
        assert( old != NULL );
        var_val = tmp_assign_source_8;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_val;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 400;
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
            if ( par_p )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_p,
                    par_p
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

            if ( var_truepoly )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_truepoly,
                    var_truepoly
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

            if ( var_y )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_y,
                    var_y
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_4_polyder );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_4_polyder );
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


static PyObject *impl_numpy$lib$polynomial$$$function_5_polyfit( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *par_cov = python_pars[ 6 ];
    PyObject *var_order = NULL;
    PyObject *var_lhs = NULL;
    PyObject *var_rhs = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_c = NULL;
    PyObject *var_resids = NULL;
    PyObject *var_rank = NULL;
    PyObject *var_s = NULL;
    PyObject *var_Vbase = NULL;
    PyObject *var_fac = NULL;
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
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
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
    PyObject *tmp_left_name_17;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_make_exception_arg_4;
    PyObject *tmp_make_exception_arg_5;
    PyObject *tmp_make_exception_arg_6;
    PyObject *tmp_make_exception_arg_7;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    PyObject *tmp_raise_type_4;
    PyObject *tmp_raise_type_5;
    PyObject *tmp_raise_type_6;
    PyObject *tmp_raise_type_7;
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
    PyObject *tmp_right_name_17;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0233cb0db773ba7a0e3356c02ae06cb2, module_numpy$lib$polynomial );
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

    tmp_left_name_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 549;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 549;
        goto frame_exception_exit_1;
    }
    assert( var_order == NULL );
    var_order = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 550;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_x;

    frame_function->f_lineno = 550;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_float_0_0;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 551;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_y;

    frame_function->f_lineno = 551;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_float_0_0;
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_y;
        assert( old != NULL );
        par_y = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_deg;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 554;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_58b9c2de86cf9b3c187794eb33218cee;
    frame_function->f_lineno = 555;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 555;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_3 = par_x;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_ndim );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 556;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 556;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_2 = const_str_digest_7776c2b4c0f21c76e792d8c463042f37;
    frame_function->f_lineno = 557;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 557;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_source_name_4 = par_x;

    tmp_compare_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_size );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 558;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 558;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_make_exception_arg_3 = const_str_digest_470eccc427becdbaa48f7e4c1af24ff5;
    frame_function->f_lineno = 559;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 559;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_source_name_5 = par_y;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_ndim );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_or_left_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 560;
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
    tmp_source_name_6 = par_y;

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ndim );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_pos_2;
    tmp_or_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 560;
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

        exception_lineno = 560;
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
    tmp_make_exception_arg_4 = const_str_digest_3943f956186dfbaba7ee5555afa1df28;
    frame_function->f_lineno = 561;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_4 };
        tmp_raise_type_4 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_4 != NULL );
    exception_type = tmp_raise_type_4;
    exception_lineno = 561;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_source_name_7 = par_x;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_y;

    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_compare_right_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_compare_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );
        Py_DECREF( tmp_compare_right_4 );

        exception_lineno = 562;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    Py_DECREF( tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_make_exception_arg_5 = const_str_digest_44e97c1c143647b689f32f77c9c8ec56;
    frame_function->f_lineno = 563;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_5 };
        tmp_raise_type_5 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_5 != NULL );
    exception_type = tmp_raise_type_5;
    exception_lineno = 563;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_5:;
    tmp_compare_left_5 = par_rcond;

    tmp_compare_right_5 = Py_None;
    tmp_is_1 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_len_arg_1 = par_x;

    tmp_left_name_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 567;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_finfo );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_finfo );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "finfo" );
        exception_tb = NULL;

        exception_lineno = 567;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = par_x;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dtype );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 567;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 567;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_source_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 567;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_eps );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 567;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 567;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_rcond;
        assert( old != NULL );
        par_rcond = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_vander );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_vander );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "vander" );
        exception_tb = NULL;

        exception_lineno = 570;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_x;

    tmp_args_element_name_5 = var_order;

    frame_function->f_lineno = 570;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 570;
        goto frame_exception_exit_1;
    }
    assert( var_lhs == NULL );
    var_lhs = tmp_assign_source_5;

    tmp_assign_source_6 = par_y;

    assert( var_rhs == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_rhs = tmp_assign_source_6;

    tmp_compare_left_6 = par_w;

    tmp_compare_right_6 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_6 != tmp_compare_right_6 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 575;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_asarray );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_w;

    frame_function->f_lineno = 575;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_left_name_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_float_0_0;
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_w;
        assert( old != NULL );
        par_w = tmp_assign_source_7;
        Py_DECREF( old );
    }

    tmp_source_name_12 = par_w;

    tmp_compare_left_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_ndim );
    if ( tmp_compare_left_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 576;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_7 = const_int_pos_1;
    tmp_cmp_NotEq_3 = RICH_COMPARE_BOOL_NE( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_NotEq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_7 );

        exception_lineno = 576;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_7 );
    if ( tmp_cmp_NotEq_3 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_make_exception_arg_6 = const_str_digest_d6d72a26db479ec8da48b32012f92cbf;
    frame_function->f_lineno = 577;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_6 };
        tmp_raise_type_6 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_6 != NULL );
    exception_type = tmp_raise_type_6;
    exception_lineno = 577;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_8:;
    tmp_source_name_13 = par_w;

    tmp_subscribed_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_shape );
    if ( tmp_subscribed_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 578;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_3 = const_int_0;
    tmp_compare_left_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    Py_DECREF( tmp_subscribed_name_3 );
    if ( tmp_compare_left_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 578;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_y;

    tmp_subscribed_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_shape );
    if ( tmp_subscribed_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 578;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_4 = const_int_0;
    tmp_compare_right_8 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    Py_DECREF( tmp_subscribed_name_4 );
    if ( tmp_compare_right_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );

        exception_lineno = 578;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_4 = RICH_COMPARE_BOOL_NE( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_8 );
        Py_DECREF( tmp_compare_right_8 );

        exception_lineno = 578;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_8 );
    Py_DECREF( tmp_compare_right_8 );
    if ( tmp_cmp_NotEq_4 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_make_exception_arg_7 = const_str_digest_cf0c975c6a453043b357f5230e9e8ede;
    frame_function->f_lineno = 579;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_7 };
        tmp_raise_type_7 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_7 != NULL );
    exception_type = tmp_raise_type_7;
    exception_lineno = 579;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_9:;
    tmp_left_name_6 = var_lhs;

    tmp_subscribed_name_5 = par_w;

    tmp_subscript_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_slice_none_none_none;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_subscript_name_5, 0, tmp_tuple_element_1 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_15 == NULL )
    {
        Py_DECREF( tmp_subscript_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 580;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_newaxis );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscript_name_5 );

        exception_lineno = 580;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_subscript_name_5, 1, tmp_tuple_element_1 );
    tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    Py_DECREF( tmp_subscript_name_5 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 580;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_6, tmp_right_name_6 );
    tmp_assign_source_8 = tmp_left_name_6;
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 580;
        goto frame_exception_exit_1;
    }
    var_lhs = tmp_assign_source_8;

    tmp_source_name_16 = var_rhs;

    tmp_compare_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_ndim );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 581;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_9 = const_int_pos_2;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        exception_lineno = 581;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_9 );
    if ( tmp_cmp_Eq_2 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_7 = var_rhs;

    tmp_subscribed_name_6 = par_w;

    tmp_subscript_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_2 = const_slice_none_none_none;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_subscript_name_6, 0, tmp_tuple_element_2 );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_17 == NULL )
    {
        Py_DECREF( tmp_subscript_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 582;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_newaxis );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscript_name_6 );

        exception_lineno = 582;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_subscript_name_6, 1, tmp_tuple_element_2 );
    tmp_right_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscript_name_6 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 582;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_9 = tmp_left_name_7;
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 582;
        goto frame_exception_exit_1;
    }
    var_rhs = tmp_assign_source_9;

    goto branch_end_10;
    branch_no_10:;
    tmp_left_name_8 = var_rhs;

    tmp_right_name_8 = par_w;

    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_8, tmp_right_name_8 );
    tmp_assign_source_10 = tmp_left_name_8;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 584;
        goto frame_exception_exit_1;
    }
    var_rhs = tmp_assign_source_10;

    branch_end_10:;
    branch_no_7:;
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 587;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_sqrt );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    tmp_left_name_9 = var_lhs;

    tmp_right_name_9 = var_lhs;

    tmp_source_name_19 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
    if ( tmp_source_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_sum );
    Py_DECREF( tmp_source_name_19 );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
    frame_function->f_lineno = 587;
    tmp_args_element_name_7 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_7, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 587;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    assert( var_scale == NULL );
    var_scale = tmp_assign_source_11;

    tmp_left_name_10 = var_lhs;

    tmp_right_name_10 = var_scale;

    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_10, tmp_right_name_10 );
    tmp_assign_source_12 = tmp_left_name_10;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 588;
        goto frame_exception_exit_1;
    }
    var_lhs = tmp_assign_source_12;

    // Tried code:
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_lstsq );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_lstsq );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "lstsq" );
        exception_tb = NULL;

        exception_lineno = 589;
        goto try_except_handler_2;
    }

    tmp_args_element_name_8 = var_lhs;

    tmp_args_element_name_9 = var_rhs;

    if ( tmp_args_element_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rhs" );
        exception_tb = NULL;

        exception_lineno = 589;
        goto try_except_handler_2;
    }

    tmp_args_element_name_10 = par_rcond;

    frame_function->f_lineno = 589;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_8, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        goto try_except_handler_2;
    }
    tmp_assign_source_13 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 589;
        goto try_except_handler_2;
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


        exception_lineno = 589;
        goto try_except_handler_2;
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


        exception_lineno = 589;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_15;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_16 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 589;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_16;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_17 = UNPACK_NEXT( tmp_unpack_4, 3 );
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


        exception_lineno = 589;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_17;

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
    tmp_assign_source_18 = tmp_tuple_unpack_1__element_1;

    assert( var_c == NULL );
    Py_INCREF( tmp_assign_source_18 );
    var_c = tmp_assign_source_18;

    tmp_assign_source_19 = tmp_tuple_unpack_1__element_2;

    assert( var_resids == NULL );
    Py_INCREF( tmp_assign_source_19 );
    var_resids = tmp_assign_source_19;

    tmp_assign_source_20 = tmp_tuple_unpack_1__element_3;

    assert( var_rank == NULL );
    Py_INCREF( tmp_assign_source_20 );
    var_rank = tmp_assign_source_20;

    tmp_assign_source_21 = tmp_tuple_unpack_1__element_4;

    assert( var_s == NULL );
    Py_INCREF( tmp_assign_source_21 );
    var_s = tmp_assign_source_21;

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

    tmp_source_name_21 = var_c;

    tmp_left_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_T );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = var_scale;

    tmp_source_name_20 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_11 );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_T );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_c;
        assert( old != NULL );
        var_c = tmp_assign_source_22;
        Py_DECREF( old );
    }

    tmp_compexpr_left_3 = var_rank;

    tmp_compexpr_right_3 = var_order;

    tmp_and_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 593;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 593;
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


        exception_lineno = 593;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
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

        exception_lineno = 593;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_source_name_22 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_22 == NULL ))
    {
        tmp_source_name_22 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_22 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 595;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_warn );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 595;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_11 = const_str_digest_288b855de22027ea51f62f6ba4203a91;
    tmp_args_element_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_RankWarning );

    if (unlikely( tmp_args_element_name_12 == NULL ))
    {
        tmp_args_element_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RankWarning );
    }

    if ( tmp_args_element_name_12 == NULL )
    {
        Py_DECREF( tmp_called_name_9 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RankWarning" );
        exception_tb = NULL;

        exception_lineno = 595;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 595;
    {
        PyObject *call_args[] = { tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 595;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_11:;
    tmp_cond_value_3 = par_full;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 597;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_return_value = PyTuple_New( 5 );
    tmp_tuple_element_3 = var_c;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_resids;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_rank;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 2, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_s;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 3, tmp_tuple_element_3 );
    tmp_tuple_element_3 = par_rcond;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_return_value, 4, tmp_tuple_element_3 );
    goto frame_return_exit_1;
    goto branch_end_12;
    branch_no_12:;
    tmp_cond_value_4 = par_cov;

    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 599;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_inv );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inv );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inv" );
        exception_tb = NULL;

        exception_lineno = 600;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_dot );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_dot );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "dot" );
        exception_tb = NULL;

        exception_lineno = 600;
        goto frame_exception_exit_1;
    }

    tmp_source_name_23 = var_lhs;

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_T );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 600;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_15 = var_lhs;

    frame_function->f_lineno = 600;
    {
        PyObject *call_args[] = { tmp_args_element_name_14, tmp_args_element_name_15 };
        tmp_args_element_name_13 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 600;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 600;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 600;
        goto frame_exception_exit_1;
    }
    assert( var_Vbase == NULL );
    var_Vbase = tmp_assign_source_23;

    tmp_left_name_12 = var_Vbase;

    tmp_source_name_24 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_24 == NULL ))
    {
        tmp_source_name_24 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_24 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 601;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_outer );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 601;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_16 = var_scale;

    tmp_args_element_name_17 = var_scale;

    frame_function->f_lineno = 601;
    {
        PyObject *call_args[] = { tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_right_name_12 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_right_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 601;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_12, tmp_right_name_12 );
    tmp_assign_source_24 = tmp_left_name_12;
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 601;
        goto frame_exception_exit_1;
    }
    var_Vbase = tmp_assign_source_24;

    tmp_left_name_13 = var_resids;

    tmp_len_arg_2 = par_x;

    tmp_left_name_15 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 606;
        goto frame_exception_exit_1;
    }
    tmp_right_name_14 = var_order;

    tmp_left_name_14 = BINARY_OPERATION_SUB( tmp_left_name_15, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_15 );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 606;
        goto frame_exception_exit_1;
    }
    tmp_right_name_15 = const_float_2_0;
    tmp_right_name_13 = BINARY_OPERATION_SUB( tmp_left_name_14, tmp_right_name_15 );
    Py_DECREF( tmp_left_name_14 );
    if ( tmp_right_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 606;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_13, tmp_right_name_13 );
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 606;
        goto frame_exception_exit_1;
    }
    assert( var_fac == NULL );
    var_fac = tmp_assign_source_25;

    tmp_source_name_25 = par_y;

    tmp_compare_left_10 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_ndim );
    if ( tmp_compare_left_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 607;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_10 = const_int_pos_1;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_10 );

        exception_lineno = 607;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_10 );
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_c;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_left_name_16 = var_Vbase;

    tmp_right_name_16 = var_fac;

    tmp_tuple_element_4 = BINARY_OPERATION_MUL( tmp_left_name_16, tmp_right_name_16 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 608;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
    goto frame_return_exit_1;
    goto branch_end_14;
    branch_no_14:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_c;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_5 );
    tmp_subscribed_name_7 = var_Vbase;

    tmp_subscript_name_7 = PyTuple_New( 3 );
    tmp_tuple_element_6 = const_slice_none_none_none;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_subscript_name_7, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = const_slice_none_none_none;
    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_subscript_name_7, 1, tmp_tuple_element_6 );
    tmp_source_name_26 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_26 == NULL ))
    {
        tmp_source_name_26 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_26 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_subscript_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 610;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_6 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_newaxis );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_subscript_name_7 );

        exception_lineno = 610;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_subscript_name_7, 2, tmp_tuple_element_6 );
    tmp_left_name_17 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    Py_DECREF( tmp_subscript_name_7 );
    if ( tmp_left_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 610;
        goto frame_exception_exit_1;
    }
    tmp_right_name_17 = var_fac;

    tmp_tuple_element_5 = BINARY_OPERATION_MUL( tmp_left_name_17, tmp_right_name_17 );
    Py_DECREF( tmp_left_name_17 );
    if ( tmp_tuple_element_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 610;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_5 );
    goto frame_return_exit_1;
    branch_end_14:;
    goto branch_end_13;
    branch_no_13:;
    tmp_return_value = var_c;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_13:;
    branch_end_12:;

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

            if ( par_cov )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cov,
                    par_cov
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

            if ( var_scale )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scale,
                    var_scale
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

            if ( var_Vbase )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_Vbase,
                    var_Vbase
                );

                assert( res == 0 );
            }

            if ( var_fac )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fac,
                    var_fac
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_5_polyfit );
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

    CHECK_OBJECT( (PyObject *)par_cov );
    Py_DECREF( par_cov );
    par_cov = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_lhs );
    Py_DECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_rhs );
    var_rhs = NULL;

    CHECK_OBJECT( (PyObject *)var_scale );
    Py_DECREF( var_scale );
    var_scale = NULL;

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

    Py_XDECREF( var_Vbase );
    var_Vbase = NULL;

    Py_XDECREF( var_fac );
    var_fac = NULL;

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

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    Py_XDECREF( par_w );
    par_w = NULL;

    CHECK_OBJECT( (PyObject *)par_cov );
    Py_DECREF( par_cov );
    par_cov = NULL;

    Py_XDECREF( var_order );
    var_order = NULL;

    Py_XDECREF( var_lhs );
    var_lhs = NULL;

    Py_XDECREF( var_rhs );
    var_rhs = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_c );
    var_c = NULL;

    Py_XDECREF( var_resids );
    var_resids = NULL;

    Py_XDECREF( var_rank );
    var_rank = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    Py_XDECREF( var_Vbase );
    var_Vbase = NULL;

    Py_XDECREF( var_fac );
    var_fac = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_5_polyfit );
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


static PyObject *impl_numpy$lib$polynomial$$$function_6_polyval( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *var_y = NULL;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_11d3362aea16d91bb4fc39e6fde357a3, module_numpy$lib$polynomial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 674;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_p;

    frame_function->f_lineno = 674;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_p;
        assert( old != NULL );
        par_p = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_isinstance_inst_1 = par_x;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 675;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 675;
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
    tmp_assign_source_2 = const_int_0;
    assert( var_y == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_y = tmp_assign_source_2;

    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 678;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_asarray );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 678;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_x;

    frame_function->f_lineno = 678;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 678;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_x;
        assert( old != NULL );
        par_x = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 679;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros_like );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_x;

    frame_function->f_lineno = 679;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 679;
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_4;

    branch_end_1:;
    tmp_len_arg_1 = par_p;

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_5;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 680;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_7;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_left_name_2 = var_y;

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 681;
        goto try_except_handler_2;
    }

    tmp_right_name_1 = par_x;

    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 681;
        goto try_except_handler_2;
    }
    tmp_subscribed_name_1 = par_p;

    tmp_subscript_name_1 = var_i;

    tmp_right_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 681;
        goto try_except_handler_2;
    }
    tmp_assign_source_8 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 681;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 680;
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

    tmp_return_value = var_y;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 682;
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
            if ( par_p )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_p,
                    par_p
                );

                assert( res == 0 );
            }

            if ( par_x )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_x,
                    par_x
                );

                assert( res == 0 );
            }

            if ( var_y )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_y,
                    var_y
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_6_polyval );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    Py_XDECREF( par_x );
    par_x = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_6_polyval );
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


static PyObject *impl_numpy$lib$polynomial$$$function_7_polyadd( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a1 = python_pars[ 0 ];
    PyObject *par_a2 = python_pars[ 1 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_diff = NULL;
    PyObject *var_val = NULL;
    PyObject *var_zr = NULL;
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
    PyObject *tmp_called_name_8;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4feca4a67e9a9a92c6ac1f1b00538e3f, module_numpy$lib$polynomial );
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
    tmp_isinstance_inst_1 = par_a1;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 728;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 728;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 728;
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
    tmp_isinstance_inst_2 = par_a2;

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 728;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 728;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_truepoly = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 729;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a1;

    frame_function->f_lineno = 729;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 729;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a1;
        assert( old != NULL );
        par_a1 = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 730;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a2;

    frame_function->f_lineno = 730;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 730;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a2;
        assert( old != NULL );
        par_a2 = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_a2;

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 731;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_a1;

    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 731;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 731;
        goto frame_exception_exit_1;
    }
    assert( var_diff == NULL );
    var_diff = tmp_assign_source_4;

    tmp_compare_left_1 = var_diff;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 732;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_2 = par_a1;

    tmp_right_name_2 = par_a2;

    tmp_assign_source_5 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 733;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_5;

    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = var_diff;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 734;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 735;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 735;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_diff;

    tmp_source_name_2 = par_a1;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 735;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 735;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 735;
        goto frame_exception_exit_1;
    }
    assert( var_zr == NULL );
    var_zr = tmp_assign_source_6;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 736;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_concatenate );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_zr;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_a1;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 736;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = par_a2;

    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_7;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 738;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_zeros );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 738;
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_abs );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "abs" );
        exception_tb = NULL;

        exception_lineno = 738;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_diff;

    frame_function->f_lineno = 738;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 738;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_a2;

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 738;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 738;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_8 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 738;
        goto frame_exception_exit_1;
    }
    assert( var_zr == NULL );
    var_zr = tmp_assign_source_8;

    tmp_left_name_4 = par_a1;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 739;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_concatenate );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 739;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_zr;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_a2;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 739;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 739;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 739;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_9;

    branch_end_2:;
    branch_end_1:;
    tmp_cond_value_1 = var_truepoly;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 740;
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
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 741;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_val;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 741;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 741;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 741;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_val;
        var_val = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_val;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 742;
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
            if ( par_a1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a1,
                    par_a1
                );

                assert( res == 0 );
            }

            if ( par_a2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a2,
                    par_a2
                );

                assert( res == 0 );
            }

            if ( var_truepoly )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_truepoly,
                    var_truepoly
                );

                assert( res == 0 );
            }

            if ( var_diff )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_diff,
                    var_diff
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

            if ( var_zr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_zr,
                    var_zr
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_7_polyadd );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    CHECK_OBJECT( (PyObject *)var_diff );
    Py_DECREF( var_diff );
    var_diff = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_diff );
    var_diff = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_7_polyadd );
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


static PyObject *impl_numpy$lib$polynomial$$$function_8_polysub( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a1 = python_pars[ 0 ];
    PyObject *par_a2 = python_pars[ 1 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_diff = NULL;
    PyObject *var_val = NULL;
    PyObject *var_zr = NULL;
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
    PyObject *tmp_called_name_8;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9af60bf673ecf3e0139d8d519a42e494, module_numpy$lib$polynomial );
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
    tmp_isinstance_inst_1 = par_a1;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 774;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 774;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 774;
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
    tmp_isinstance_inst_2 = par_a2;

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 774;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 774;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_truepoly = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 775;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a1;

    frame_function->f_lineno = 775;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 775;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a1;
        assert( old != NULL );
        par_a1 = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 776;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_a2;

    frame_function->f_lineno = 776;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 776;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_a2;
        assert( old != NULL );
        par_a2 = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_len_arg_1 = par_a2;

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 777;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = par_a1;

    tmp_right_name_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 777;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 777;
        goto frame_exception_exit_1;
    }
    assert( var_diff == NULL );
    var_diff = tmp_assign_source_4;

    tmp_compare_left_1 = var_diff;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 778;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_2 = par_a1;

    tmp_right_name_2 = par_a2;

    tmp_assign_source_5 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 779;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_5;

    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = var_diff;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 780;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 781;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 781;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_diff;

    tmp_source_name_2 = par_a1;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 781;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 781;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 781;
        goto frame_exception_exit_1;
    }
    assert( var_zr == NULL );
    var_zr = tmp_assign_source_6;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 782;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_concatenate );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 782;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_zr;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_a1;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_5, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 782;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 782;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = par_a2;

    tmp_assign_source_7 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 782;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_7;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 784;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_zeros );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        goto frame_exception_exit_1;
    }
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_abs );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abs );
    }

    if ( tmp_called_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "abs" );
        exception_tb = NULL;

        exception_lineno = 784;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_diff;

    frame_function->f_lineno = 784;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 784;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_a2;

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_6 );

        exception_lineno = 784;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 784;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_8 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 784;
        goto frame_exception_exit_1;
    }
    assert( var_zr == NULL );
    var_zr = tmp_assign_source_8;

    tmp_left_name_4 = par_a1;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 785;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_concatenate );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 785;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_zr;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_a2;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_element_name_9, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 785;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_right_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 785;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 785;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_9;

    branch_end_2:;
    branch_end_1:;
    tmp_cond_value_1 = var_truepoly;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 786;
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
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 787;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = var_val;

    if ( tmp_args_element_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 787;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 787;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 787;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_val;
        var_val = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    branch_no_3:;
    tmp_return_value = var_val;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "val" );
        exception_tb = NULL;

        exception_lineno = 788;
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
            if ( par_a1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a1,
                    par_a1
                );

                assert( res == 0 );
            }

            if ( par_a2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a2,
                    par_a2
                );

                assert( res == 0 );
            }

            if ( var_truepoly )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_truepoly,
                    var_truepoly
                );

                assert( res == 0 );
            }

            if ( var_diff )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_diff,
                    var_diff
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

            if ( var_zr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_zr,
                    var_zr
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_8_polysub );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    CHECK_OBJECT( (PyObject *)var_diff );
    Py_DECREF( var_diff );
    var_diff = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_diff );
    var_diff = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_8_polysub );
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


static PyObject *impl_numpy$lib$polynomial$$$function_9_polymul( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a1 = python_pars[ 0 ];
    PyObject *par_a2 = python_pars[ 1 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_val = NULL;
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
    PyObject *tmp_args_element_name_5;
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4121f3768067bf913adeac2e378ae9ce, module_numpy$lib$polynomial );
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
    tmp_isinstance_inst_1 = par_a1;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 840;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 840;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 840;
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
    tmp_isinstance_inst_2 = par_a2;

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 840;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 840;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_truepoly = tmp_assign_source_1;

    // Tried code:
    tmp_iter_arg_1 = PyTuple_New( 2 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 841;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = par_a1;

    frame_function->f_lineno = 841;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 841;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 0, tmp_tuple_element_1 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {
        Py_DECREF( tmp_iter_arg_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 841;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = par_a2;

    frame_function->f_lineno = 841;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_iter_arg_1 );

        exception_lineno = 841;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_iter_arg_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 841;
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


        exception_lineno = 841;
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


        exception_lineno = 841;
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

    {
        PyObject *old = par_a1;
        assert( old != NULL );
        par_a1 = tmp_assign_source_5;
        Py_INCREF( par_a1 );
        Py_DECREF( old );
    }

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_a2;
        assert( old != NULL );
        par_a2 = tmp_assign_source_6;
        Py_INCREF( par_a2 );
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

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 842;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_convolve );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 842;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_a1;

    tmp_args_element_name_4 = par_a2;

    frame_function->f_lineno = 842;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 842;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_7;

    tmp_cond_value_1 = var_truepoly;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 843;
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 844;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = var_val;

    frame_function->f_lineno = 844;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 844;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_val;
        assert( old != NULL );
        var_val = tmp_assign_source_8;
        Py_DECREF( old );
    }

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
            if ( par_a1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a1,
                    par_a1
                );

                assert( res == 0 );
            }

            if ( par_a2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a2,
                    par_a2
                );

                assert( res == 0 );
            }

            if ( var_truepoly )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_truepoly,
                    var_truepoly
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

    tmp_return_value = var_val;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_9_polymul );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    CHECK_OBJECT( (PyObject *)var_val );
    Py_DECREF( var_val );
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

    CHECK_OBJECT( (PyObject *)par_a1 );
    Py_DECREF( par_a1 );
    par_a1 = NULL;

    CHECK_OBJECT( (PyObject *)par_a2 );
    Py_DECREF( par_a2 );
    par_a2 = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_9_polymul );
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


static PyObject *impl_numpy$lib$polynomial$$$function_10_polydiv( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_u = python_pars[ 0 ];
    PyObject *par_v = python_pars[ 1 ];
    PyObject *var_truepoly = NULL;
    PyObject *var_w = NULL;
    PyObject *var_m = NULL;
    PyObject *var_n = NULL;
    PyObject *var_scale = NULL;
    PyObject *var_q = NULL;
    PyObject *var_r = NULL;
    PyObject *var_k = NULL;
    PyObject *var_d = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
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
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_left_name_13;
    PyObject *tmp_left_name_14;
    PyObject *tmp_left_name_15;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
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
    PyObject *tmp_right_name_9;
    PyObject *tmp_right_name_10;
    PyObject *tmp_right_name_11;
    PyObject *tmp_right_name_12;
    PyObject *tmp_right_name_13;
    PyObject *tmp_right_name_14;
    PyObject *tmp_right_name_15;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_sliceass_lower_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_value_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscribed_name_3;
    PyObject *tmp_subscribed_name_4;
    PyObject *tmp_subscribed_name_5;
    PyObject *tmp_subscribed_name_6;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_subscript_name_3;
    PyObject *tmp_subscript_name_4;
    PyObject *tmp_subscript_name_5;
    PyObject *tmp_subscript_name_6;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ffe2854076f9b567937641d47d5ad57d, module_numpy$lib$polynomial );
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
    tmp_isinstance_inst_1 = par_u;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 892;
        goto frame_exception_exit_1;
    }

    tmp_or_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 892;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 892;
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
    tmp_isinstance_inst_2 = par_u;

    tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_2 == NULL ))
    {
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 892;
        goto frame_exception_exit_1;
    }

    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 892;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    tmp_assign_source_1 = tmp_or_left_value_1;
    or_end_1:;
    assert( var_truepoly == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_truepoly = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 893;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_u;

    frame_function->f_lineno = 893;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 893;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_float_0_0;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 893;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_u;
        assert( old != NULL );
        par_u = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 894;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_v;

    frame_function->f_lineno = 894;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_left_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 894;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_float_0_0;
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 894;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_v;
        assert( old != NULL );
        par_v = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_subscribed_name_1 = par_u;

    tmp_subscript_name_1 = const_int_0;
    tmp_left_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 896;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_v;

    tmp_subscript_name_2 = const_int_0;
    tmp_right_name_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 896;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 896;
        goto frame_exception_exit_1;
    }
    assert( var_w == NULL );
    var_w = tmp_assign_source_4;

    tmp_len_arg_1 = par_u;

    tmp_left_name_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 897;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_1;
    tmp_assign_source_5 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 897;
        goto frame_exception_exit_1;
    }
    assert( var_m == NULL );
    var_m = tmp_assign_source_5;

    tmp_len_arg_2 = par_v;

    tmp_left_name_5 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 898;
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_assign_source_6 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 898;
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_6;

    tmp_left_name_6 = const_float_1_0;
    tmp_subscribed_name_3 = par_v;

    tmp_subscript_name_3 = const_int_0;
    tmp_right_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 899;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 899;
        goto frame_exception_exit_1;
    }
    assert( var_scale == NULL );
    var_scale = tmp_assign_source_7;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 900;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_zeros );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 900;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyTuple_New( 1 );
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_4 != NULL );
    tmp_left_name_8 = var_m;

    tmp_right_name_7 = var_n;

    tmp_left_name_7 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_7 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 900;
        goto frame_exception_exit_1;
    }
    tmp_right_name_8 = const_int_pos_1;
    tmp_args_element_name_4 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_7 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 900;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_int_pos_1;
    frame_function->f_lineno = 900;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 900;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
    tmp_source_name_2 = var_w;

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dtype );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 900;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 900;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_6 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 900;
        goto frame_exception_exit_1;
    }
    assert( var_q == NULL );
    var_q = tmp_assign_source_8;

    tmp_source_name_3 = par_u;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_copy );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 901;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 901;
    tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 901;
        goto frame_exception_exit_1;
    }
    assert( var_r == NULL );
    var_r = tmp_assign_source_9;

    tmp_range2_low_1 = const_int_0;
    tmp_left_name_10 = var_m;

    tmp_right_name_9 = var_n;

    tmp_left_name_9 = BINARY_OPERATION_SUB( tmp_left_name_10, tmp_right_name_9 );
    if ( tmp_left_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 902;
        goto frame_exception_exit_1;
    }
    tmp_right_name_10 = const_int_pos_1;
    tmp_range2_high_1 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_10 );
    Py_DECREF( tmp_left_name_9 );
    if ( tmp_range2_high_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 902;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE2( tmp_range2_low_1, tmp_range2_high_1 );
    Py_DECREF( tmp_range2_high_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 902;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 902;
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
            frame_function->f_lineno = 902;
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

    tmp_left_name_11 = var_scale;

    tmp_subscribed_name_4 = var_r;

    tmp_subscript_name_4 = var_k;

    tmp_right_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 903;
        goto try_except_handler_2;
    }
    tmp_assign_source_13 = BINARY_OPERATION_MUL( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 903;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_d;
        var_d = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_ass_subvalue_1 = var_d;

    tmp_ass_subscribed_1 = var_q;

    tmp_ass_subscript_1 = var_k;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 904;
        goto try_except_handler_2;
    }
    tmp_assign_source_14 = var_r;

    {
        PyObject *old = tmp_inplace_assign_slice_1__target;
        tmp_inplace_assign_slice_1__target = tmp_assign_source_14;
        Py_INCREF( tmp_inplace_assign_slice_1__target );
        Py_XDECREF( old );
    }

    tmp_assign_source_15 = var_k;

    {
        PyObject *old = tmp_inplace_assign_slice_1__lower;
        tmp_inplace_assign_slice_1__lower = tmp_assign_source_15;
        Py_INCREF( tmp_inplace_assign_slice_1__lower );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_left_name_13 = var_k;

    tmp_right_name_12 = var_n;

    tmp_left_name_12 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_12 );
    if ( tmp_left_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
        goto try_except_handler_3;
    }
    tmp_right_name_13 = const_int_pos_1;
    tmp_assign_source_16 = BINARY_OPERATION_ADD( tmp_left_name_12, tmp_right_name_13 );
    Py_DECREF( tmp_left_name_12 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_inplace_assign_slice_1__upper;
        tmp_inplace_assign_slice_1__upper = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_slice_source_1 = tmp_inplace_assign_slice_1__target;

    tmp_slice_lower_1 = tmp_inplace_assign_slice_1__lower;

    tmp_slice_upper_1 = tmp_inplace_assign_slice_1__upper;

    tmp_left_name_14 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
        goto try_except_handler_3;
    }
    tmp_left_name_15 = var_d;

    tmp_right_name_15 = par_v;

    tmp_right_name_14 = BINARY_OPERATION_MUL( tmp_left_name_15, tmp_right_name_15 );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_14 );

        exception_lineno = 905;
        goto try_except_handler_3;
    }
    tmp_sliceass_value_1 = BINARY_OPERATION( PyNumber_InPlaceSubtract, tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_sliceass_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 905;
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


        exception_lineno = 905;
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

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__lower );
    Py_DECREF( tmp_inplace_assign_slice_1__lower );
    tmp_inplace_assign_slice_1__lower = NULL;

    Py_XDECREF( tmp_inplace_assign_slice_1__upper );
    tmp_inplace_assign_slice_1__upper = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__target );
    Py_DECREF( tmp_inplace_assign_slice_1__target );
    tmp_inplace_assign_slice_1__target = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__lower );
    Py_DECREF( tmp_inplace_assign_slice_1__lower );
    tmp_inplace_assign_slice_1__lower = NULL;

    CHECK_OBJECT( (PyObject *)tmp_inplace_assign_slice_1__upper );
    Py_DECREF( tmp_inplace_assign_slice_1__upper );
    tmp_inplace_assign_slice_1__upper = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 902;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    loop_start_2:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 906;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_allclose );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 906;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_subscribed_name_5 = var_r;

    if ( tmp_subscribed_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;

        exception_lineno = 906;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_5 = const_int_0;
    tmp_tuple_element_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 906;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_77bffa4b7de1ff8d7cd5370bafca6dcc );
    frame_function->f_lineno = 906;
    tmp_and_left_value_1 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 906;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 906;
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
    tmp_source_name_5 = var_r;

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;

        exception_lineno = 906;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_shape );
    if ( tmp_subscribed_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 906;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_6 = const_int_neg_1;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    Py_DECREF( tmp_subscribed_name_6 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 906;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 906;
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

        exception_lineno = 906;
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
    goto loop_end_2;
    branch_no_1:;
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_2 = var_r;

    if ( tmp_slice_source_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;

        exception_lineno = 907;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_17 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 907;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_r;
        var_r = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 906;
        goto frame_exception_exit_1;
    }
    goto loop_start_2;
    loop_end_2:;
    tmp_cond_value_2 = var_truepoly;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 908;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 909;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = var_q;

    frame_function->f_lineno = 909;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 909;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_3 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_8 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 909;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_r;

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;

        exception_lineno = 909;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 909;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 909;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_3 );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_q;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_r;

    if ( tmp_tuple_element_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "r" );
        exception_tb = NULL;

        exception_lineno = 910;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_4 );
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
            if ( par_u )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_u,
                    par_u
                );

                assert( res == 0 );
            }

            if ( par_v )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_v,
                    par_v
                );

                assert( res == 0 );
            }

            if ( var_truepoly )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_truepoly,
                    var_truepoly
                );

                assert( res == 0 );
            }

            if ( var_w )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_w,
                    var_w
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

            if ( var_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    var_n
                );

                assert( res == 0 );
            }

            if ( var_scale )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_scale,
                    var_scale
                );

                assert( res == 0 );
            }

            if ( var_q )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_q,
                    var_q
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

            if ( var_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    var_k
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_10_polydiv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_u );
    Py_DECREF( par_u );
    par_u = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    CHECK_OBJECT( (PyObject *)var_truepoly );
    Py_DECREF( var_truepoly );
    var_truepoly = NULL;

    CHECK_OBJECT( (PyObject *)var_w );
    Py_DECREF( var_w );
    var_w = NULL;

    CHECK_OBJECT( (PyObject *)var_m );
    Py_DECREF( var_m );
    var_m = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_scale );
    Py_DECREF( var_scale );
    var_scale = NULL;

    CHECK_OBJECT( (PyObject *)var_q );
    Py_DECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_u );
    Py_DECREF( par_u );
    par_u = NULL;

    CHECK_OBJECT( (PyObject *)par_v );
    Py_DECREF( par_v );
    par_v = NULL;

    Py_XDECREF( var_truepoly );
    var_truepoly = NULL;

    Py_XDECREF( var_w );
    var_w = NULL;

    Py_XDECREF( var_m );
    var_m = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_scale );
    var_scale = NULL;

    Py_XDECREF( var_q );
    var_q = NULL;

    Py_XDECREF( var_r );
    var_r = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_10_polydiv );
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


static PyObject *impl_numpy$lib$polynomial$$$function_11__raise_power( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_astr = python_pars[ 0 ];
    PyObject *par_wrap = python_pars[ 1 ];
    PyObject *var_n = NULL;
    PyObject *var_line1 = NULL;
    PyObject *var_line2 = NULL;
    PyObject *var_output = NULL;
    PyObject *var_mat = NULL;
    PyObject *var_span = NULL;
    PyObject *var_power = NULL;
    PyObject *var_partstr = NULL;
    PyObject *var_toadd2 = NULL;
    PyObject *var_toadd1 = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
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
    PyObject *tmp_left_name_17;
    PyObject *tmp_left_name_18;
    PyObject *tmp_left_name_19;
    PyObject *tmp_left_name_20;
    PyObject *tmp_left_name_21;
    PyObject *tmp_left_name_22;
    PyObject *tmp_left_name_23;
    PyObject *tmp_left_name_24;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_len_arg_5;
    PyObject *tmp_len_arg_6;
    PyObject *tmp_len_arg_7;
    PyObject *tmp_len_arg_8;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
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
    PyObject *tmp_right_name_17;
    PyObject *tmp_right_name_18;
    PyObject *tmp_right_name_19;
    PyObject *tmp_right_name_20;
    PyObject *tmp_right_name_21;
    PyObject *tmp_right_name_22;
    PyObject *tmp_right_name_23;
    PyObject *tmp_right_name_24;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_lower_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
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
    tmp_assign_source_1 = const_int_0;
    assert( var_n == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_n = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_empty;
    assert( var_line1 == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var_line1 = tmp_assign_source_2;

    tmp_assign_source_3 = const_str_empty;
    assert( var_line2 == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_line2 = tmp_assign_source_3;

    tmp_assign_source_4 = const_str_space;
    assert( var_output == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_output = tmp_assign_source_4;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7c17eb625ebac3d4ac9c67d763db16ea, module_numpy$lib$polynomial );
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
    loop_start_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain__poly_mat );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__poly_mat );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_poly_mat" );
        exception_tb = NULL;

        exception_lineno = 919;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_search );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 919;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_astr;

    tmp_args_element_name_2 = var_n;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 919;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 919;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 919;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_mat;
        var_mat = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_mat;

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
    goto loop_end_1;
    branch_no_1:;
    tmp_source_name_2 = var_mat;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_span );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 922;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 922;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 922;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_span;
        var_span = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_source_name_3 = var_mat;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_groups );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 923;
    tmp_subscribed_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_assign_source_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_power;
        var_power = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_slice_source_1 = par_astr;

    tmp_slice_lower_1 = var_n;

    if ( tmp_slice_lower_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 924;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_2 = var_span;

    tmp_subscript_name_2 = const_int_0;
    tmp_slice_upper_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 924;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 924;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_partstr;
        var_partstr = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_subscribed_name_3 = var_span;

    tmp_subscript_name_3 = const_int_pos_1;
    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 925;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_partstr;

    tmp_left_name_2 = const_str_space;
    tmp_len_arg_1 = var_power;

    tmp_left_name_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 926;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_1;
    tmp_right_name_2 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 926;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 926;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 926;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_toadd2;
        var_toadd2 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_left_name_5 = const_str_space;
    tmp_len_arg_2 = var_partstr;

    tmp_left_name_6 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 927;
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_right_name_4 = BINARY_OPERATION_SUB( tmp_left_name_6, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 927;
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 927;
        goto frame_exception_exit_1;
    }
    tmp_right_name_6 = var_power;

    tmp_assign_source_11 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 927;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_toadd1;
        var_toadd1 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_len_arg_3 = var_line2;

    if ( tmp_len_arg_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line2" );
        exception_tb = NULL;

        exception_lineno = 928;
        goto frame_exception_exit_1;
    }

    tmp_left_name_7 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 928;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_4 = var_toadd2;

    tmp_right_name_7 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 928;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 928;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = par_wrap;

    tmp_or_left_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 928;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 929;
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
    tmp_len_arg_5 = var_line1;

    if ( tmp_len_arg_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line1" );
        exception_tb = NULL;

        exception_lineno = 929;
        goto frame_exception_exit_1;
    }

    tmp_left_name_8 = BUILTIN_LEN( tmp_len_arg_5 );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 929;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_6 = var_toadd1;

    tmp_right_name_8 = BUILTIN_LEN( tmp_len_arg_6 );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_8 );

        exception_lineno = 929;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_2 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 929;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = par_wrap;

    tmp_or_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 929;
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

        exception_lineno = 929;
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
    tmp_left_name_9 = var_output;

    if ( tmp_left_name_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "output" );
        exception_tb = NULL;

        exception_lineno = 930;
        goto frame_exception_exit_1;
    }

    tmp_left_name_12 = var_line1;

    if ( tmp_left_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line1" );
        exception_tb = NULL;

        exception_lineno = 930;
        goto frame_exception_exit_1;
    }

    tmp_right_name_10 = const_str_newline;
    tmp_left_name_11 = BINARY_OPERATION_ADD( tmp_left_name_12, tmp_right_name_10 );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 930;
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = var_line2;

    if ( tmp_right_name_11 == NULL )
    {
        Py_DECREF( tmp_left_name_11 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line2" );
        exception_tb = NULL;

        exception_lineno = 930;
        goto frame_exception_exit_1;
    }

    tmp_left_name_10 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_11 );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 930;
        goto frame_exception_exit_1;
    }
    tmp_right_name_12 = const_str_digest_5d29a5fa4d48aa4eec4b679b0c640190;
    tmp_right_name_9 = BINARY_OPERATION_ADD( tmp_left_name_10, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_10 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 930;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_9, tmp_right_name_9 );
    tmp_assign_source_12 = tmp_left_name_9;
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 930;
        goto frame_exception_exit_1;
    }
    var_output = tmp_assign_source_12;

    tmp_assign_source_13 = var_toadd1;

    {
        PyObject *old = var_line1;
        var_line1 = tmp_assign_source_13;
        Py_INCREF( var_line1 );
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = var_toadd2;

    {
        PyObject *old = var_line2;
        var_line2 = tmp_assign_source_14;
        Py_INCREF( var_line2 );
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_left_name_13 = var_line2;

    if ( tmp_left_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line2" );
        exception_tb = NULL;

        exception_lineno = 934;
        goto frame_exception_exit_1;
    }

    tmp_left_name_14 = var_partstr;

    tmp_left_name_15 = const_str_space;
    tmp_len_arg_7 = var_power;

    tmp_left_name_16 = BUILTIN_LEN( tmp_len_arg_7 );
    if ( tmp_left_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 934;
        goto frame_exception_exit_1;
    }
    tmp_right_name_16 = const_int_pos_1;
    tmp_right_name_15 = BINARY_OPERATION_SUB( tmp_left_name_16, tmp_right_name_16 );
    Py_DECREF( tmp_left_name_16 );
    if ( tmp_right_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 934;
        goto frame_exception_exit_1;
    }
    tmp_right_name_14 = BINARY_OPERATION_MUL( tmp_left_name_15, tmp_right_name_15 );
    Py_DECREF( tmp_right_name_15 );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 934;
        goto frame_exception_exit_1;
    }
    tmp_right_name_13 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_14 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_right_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 934;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_13, tmp_right_name_13 );
    tmp_assign_source_15 = tmp_left_name_13;
    Py_DECREF( tmp_right_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 934;
        goto frame_exception_exit_1;
    }
    var_line2 = tmp_assign_source_15;

    tmp_left_name_17 = var_line1;

    if ( tmp_left_name_17 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line1" );
        exception_tb = NULL;

        exception_lineno = 935;
        goto frame_exception_exit_1;
    }

    tmp_left_name_19 = const_str_space;
    tmp_len_arg_8 = var_partstr;

    tmp_left_name_20 = BUILTIN_LEN( tmp_len_arg_8 );
    if ( tmp_left_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 935;
        goto frame_exception_exit_1;
    }
    tmp_right_name_19 = const_int_pos_1;
    tmp_right_name_18 = BINARY_OPERATION_SUB( tmp_left_name_20, tmp_right_name_19 );
    Py_DECREF( tmp_left_name_20 );
    if ( tmp_right_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 935;
        goto frame_exception_exit_1;
    }
    tmp_left_name_18 = BINARY_OPERATION_MUL( tmp_left_name_19, tmp_right_name_18 );
    Py_DECREF( tmp_right_name_18 );
    if ( tmp_left_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 935;
        goto frame_exception_exit_1;
    }
    tmp_right_name_20 = var_power;

    tmp_right_name_17 = BINARY_OPERATION_ADD( tmp_left_name_18, tmp_right_name_20 );
    Py_DECREF( tmp_left_name_18 );
    if ( tmp_right_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 935;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_17, tmp_right_name_17 );
    tmp_assign_source_16 = tmp_left_name_17;
    Py_DECREF( tmp_right_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 935;
        goto frame_exception_exit_1;
    }
    var_line1 = tmp_assign_source_16;

    branch_end_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 918;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_left_name_21 = var_output;

    if ( tmp_left_name_21 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "output" );
        exception_tb = NULL;

        exception_lineno = 936;
        goto frame_exception_exit_1;
    }

    tmp_left_name_23 = var_line1;

    if ( tmp_left_name_23 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line1" );
        exception_tb = NULL;

        exception_lineno = 936;
        goto frame_exception_exit_1;
    }

    tmp_right_name_22 = const_str_newline;
    tmp_left_name_22 = BINARY_OPERATION_ADD( tmp_left_name_23, tmp_right_name_22 );
    if ( tmp_left_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 936;
        goto frame_exception_exit_1;
    }
    tmp_right_name_23 = var_line2;

    if ( tmp_right_name_23 == NULL )
    {
        Py_DECREF( tmp_left_name_22 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "line2" );
        exception_tb = NULL;

        exception_lineno = 936;
        goto frame_exception_exit_1;
    }

    tmp_right_name_21 = BINARY_OPERATION_ADD( tmp_left_name_22, tmp_right_name_23 );
    Py_DECREF( tmp_left_name_22 );
    if ( tmp_right_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 936;
        goto frame_exception_exit_1;
    }
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_21, tmp_right_name_21 );
    tmp_assign_source_17 = tmp_left_name_21;
    Py_DECREF( tmp_right_name_21 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 936;
        goto frame_exception_exit_1;
    }
    var_output = tmp_assign_source_17;

    tmp_left_name_24 = var_output;

    tmp_slice_source_2 = par_astr;

    tmp_slice_lower_2 = var_n;

    if ( tmp_slice_lower_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "n" );
        exception_tb = NULL;

        exception_lineno = 937;
        goto frame_exception_exit_1;
    }

    tmp_right_name_24 = LOOKUP_SLICE( tmp_slice_source_2, tmp_slice_lower_2, Py_None );
    if ( tmp_right_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 937;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_24, tmp_right_name_24 );
    Py_DECREF( tmp_right_name_24 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 937;
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
            if ( par_astr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_astr,
                    par_astr
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

            if ( var_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    var_n
                );

                assert( res == 0 );
            }

            if ( var_line1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line1,
                    var_line1
                );

                assert( res == 0 );
            }

            if ( var_line2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line2,
                    var_line2
                );

                assert( res == 0 );
            }

            if ( var_output )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_output,
                    var_output
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

            if ( var_span )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_span,
                    var_span
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

            if ( var_partstr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_partstr,
                    var_partstr
                );

                assert( res == 0 );
            }

            if ( var_toadd2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_toadd2,
                    var_toadd2
                );

                assert( res == 0 );
            }

            if ( var_toadd1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_toadd1,
                    var_toadd1
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_11__raise_power );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_astr );
    Py_DECREF( par_astr );
    par_astr = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_line1 );
    var_line1 = NULL;

    Py_XDECREF( var_line2 );
    var_line2 = NULL;

    CHECK_OBJECT( (PyObject *)var_output );
    Py_DECREF( var_output );
    var_output = NULL;

    CHECK_OBJECT( (PyObject *)var_mat );
    Py_DECREF( var_mat );
    var_mat = NULL;

    Py_XDECREF( var_span );
    var_span = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_partstr );
    var_partstr = NULL;

    Py_XDECREF( var_toadd2 );
    var_toadd2 = NULL;

    Py_XDECREF( var_toadd1 );
    var_toadd1 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_astr );
    Py_DECREF( par_astr );
    par_astr = NULL;

    CHECK_OBJECT( (PyObject *)par_wrap );
    Py_DECREF( par_wrap );
    par_wrap = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_line1 );
    var_line1 = NULL;

    Py_XDECREF( var_line2 );
    var_line2 = NULL;

    Py_XDECREF( var_output );
    var_output = NULL;

    Py_XDECREF( var_mat );
    var_mat = NULL;

    Py_XDECREF( var_span );
    var_span = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_partstr );
    var_partstr = NULL;

    Py_XDECREF( var_toadd2 );
    var_toadd2 = NULL;

    Py_XDECREF( var_toadd1 );
    var_toadd1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$function_11__raise_power );
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


NUITKA_LOCAL_MODULE PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var_coeffs = NULL;
    PyObject *var_order = NULL;
    PyObject *var_variable = NULL;
    PyObject *var___hash__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___array__ = NULL;
    PyObject *var___repr__ = NULL;
    PyObject *var___len__ = NULL;
    PyObject *var___str__ = NULL;
    PyObject *var___call__ = NULL;
    PyObject *var___neg__ = NULL;
    PyObject *var___pos__ = NULL;
    PyObject *var___mul__ = NULL;
    PyObject *var___rmul__ = NULL;
    PyObject *var___add__ = NULL;
    PyObject *var___radd__ = NULL;
    PyObject *var___pow__ = NULL;
    PyObject *var___sub__ = NULL;
    PyObject *var___rsub__ = NULL;
    PyObject *var___div__ = NULL;
    PyObject *var___truediv__ = NULL;
    PyObject *var___rdiv__ = NULL;
    PyObject *var___rtruediv__ = NULL;
    PyObject *var___eq__ = NULL;
    PyObject *var___ne__ = NULL;
    PyObject *var___setattr__ = NULL;
    PyObject *var___getattr__ = NULL;
    PyObject *var___getitem__ = NULL;
    PyObject *var___setitem__ = NULL;
    PyObject *var___iter__ = NULL;
    PyObject *var_integ = NULL;
    PyObject *var_deriv = NULL;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_d2e3016ff6c92dbac6fddfcf75daea5a;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_1ed57e39ffcca0b15b9cb6b3f4b1fee7;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = Py_None;
    assert( var_coeffs == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_coeffs = tmp_assign_source_3;

    tmp_assign_source_4 = Py_None;
    assert( var_order == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_order = tmp_assign_source_4;

    tmp_assign_source_5 = Py_None;
    assert( var_variable == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_variable = tmp_assign_source_5;

    tmp_assign_source_6 = Py_None;
    assert( var___hash__ == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var___hash__ = tmp_assign_source_6;

    tmp_defaults_1 = const_tuple_int_0_none_tuple;
    tmp_assign_source_7 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_1___init__( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_7;

    tmp_defaults_2 = const_tuple_none_tuple;
    tmp_assign_source_8 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_2___array__( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var___array__ == NULL );
    var___array__ = tmp_assign_source_8;

    tmp_assign_source_9 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_3___repr__(  );
    assert( var___repr__ == NULL );
    var___repr__ = tmp_assign_source_9;

    tmp_assign_source_10 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_4___len__(  );
    assert( var___len__ == NULL );
    var___len__ = tmp_assign_source_10;

    tmp_assign_source_11 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__(  );
    assert( var___str__ == NULL );
    var___str__ = tmp_assign_source_11;

    tmp_assign_source_12 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_6___call__(  );
    assert( var___call__ == NULL );
    var___call__ = tmp_assign_source_12;

    tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_7___neg__(  );
    assert( var___neg__ == NULL );
    var___neg__ = tmp_assign_source_13;

    tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_8___pos__(  );
    assert( var___pos__ == NULL );
    var___pos__ = tmp_assign_source_14;

    tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_9___mul__(  );
    assert( var___mul__ == NULL );
    var___mul__ = tmp_assign_source_15;

    tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_10___rmul__(  );
    assert( var___rmul__ == NULL );
    var___rmul__ = tmp_assign_source_16;

    tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_11___add__(  );
    assert( var___add__ == NULL );
    var___add__ = tmp_assign_source_17;

    tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_12___radd__(  );
    assert( var___radd__ == NULL );
    var___radd__ = tmp_assign_source_18;

    tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_13___pow__(  );
    assert( var___pow__ == NULL );
    var___pow__ = tmp_assign_source_19;

    tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_14___sub__(  );
    assert( var___sub__ == NULL );
    var___sub__ = tmp_assign_source_20;

    tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_15___rsub__(  );
    assert( var___rsub__ == NULL );
    var___rsub__ = tmp_assign_source_21;

    tmp_assign_source_22 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_16___div__(  );
    assert( var___div__ == NULL );
    var___div__ = tmp_assign_source_22;

    tmp_assign_source_23 = var___div__;

    assert( var___truediv__ == NULL );
    Py_INCREF( tmp_assign_source_23 );
    var___truediv__ = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_17___rdiv__(  );
    assert( var___rdiv__ == NULL );
    var___rdiv__ = tmp_assign_source_24;

    tmp_assign_source_25 = var___rdiv__;

    assert( var___rtruediv__ == NULL );
    Py_INCREF( tmp_assign_source_25 );
    var___rtruediv__ = tmp_assign_source_25;

    tmp_assign_source_26 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_18___eq__(  );
    assert( var___eq__ == NULL );
    var___eq__ = tmp_assign_source_26;

    tmp_assign_source_27 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_19___ne__(  );
    assert( var___ne__ == NULL );
    var___ne__ = tmp_assign_source_27;

    tmp_assign_source_28 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_20___setattr__(  );
    assert( var___setattr__ == NULL );
    var___setattr__ = tmp_assign_source_28;

    tmp_assign_source_29 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_21___getattr__(  );
    assert( var___getattr__ == NULL );
    var___getattr__ = tmp_assign_source_29;

    tmp_assign_source_30 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_22___getitem__(  );
    assert( var___getitem__ == NULL );
    var___getitem__ = tmp_assign_source_30;

    tmp_assign_source_31 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_23___setitem__(  );
    assert( var___setitem__ == NULL );
    var___setitem__ = tmp_assign_source_31;

    tmp_assign_source_32 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_24___iter__(  );
    assert( var___iter__ == NULL );
    var___iter__ = tmp_assign_source_32;

    tmp_defaults_3 = const_tuple_int_pos_1_int_0_tuple;
    tmp_assign_source_33 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_25_integ( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    assert( var_integ == NULL );
    var_integ = tmp_assign_source_33;

    tmp_defaults_4 = const_tuple_int_pos_1_tuple;
    tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_26_deriv( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    assert( var_deriv == NULL );
    var_deriv = tmp_assign_source_34;

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

    if ( var_coeffs )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_coeffs,
            var_coeffs
        );

        assert( res == 0 );
    }

    if ( var_order )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_order,
            var_order
        );

        assert( res == 0 );
    }

    if ( var_variable )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_variable,
            var_variable
        );

        assert( res == 0 );
    }

    if ( var___hash__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___hash__,
            var___hash__
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

    if ( var___array__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___array__,
            var___array__
        );

        assert( res == 0 );
    }

    if ( var___repr__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___repr__,
            var___repr__
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

    if ( var___str__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___str__,
            var___str__
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

    if ( var___neg__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___neg__,
            var___neg__
        );

        assert( res == 0 );
    }

    if ( var___pos__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___pos__,
            var___pos__
        );

        assert( res == 0 );
    }

    if ( var___mul__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___mul__,
            var___mul__
        );

        assert( res == 0 );
    }

    if ( var___rmul__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___rmul__,
            var___rmul__
        );

        assert( res == 0 );
    }

    if ( var___add__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___add__,
            var___add__
        );

        assert( res == 0 );
    }

    if ( var___radd__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___radd__,
            var___radd__
        );

        assert( res == 0 );
    }

    if ( var___pow__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___pow__,
            var___pow__
        );

        assert( res == 0 );
    }

    if ( var___sub__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___sub__,
            var___sub__
        );

        assert( res == 0 );
    }

    if ( var___rsub__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___rsub__,
            var___rsub__
        );

        assert( res == 0 );
    }

    if ( var___div__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___div__,
            var___div__
        );

        assert( res == 0 );
    }

    if ( var___truediv__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___truediv__,
            var___truediv__
        );

        assert( res == 0 );
    }

    if ( var___rdiv__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___rdiv__,
            var___rdiv__
        );

        assert( res == 0 );
    }

    if ( var___rtruediv__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___rtruediv__,
            var___rtruediv__
        );

        assert( res == 0 );
    }

    if ( var___eq__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___eq__,
            var___eq__
        );

        assert( res == 0 );
    }

    if ( var___ne__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___ne__,
            var___ne__
        );

        assert( res == 0 );
    }

    if ( var___setattr__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___setattr__,
            var___setattr__
        );

        assert( res == 0 );
    }

    if ( var___getattr__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getattr__,
            var___getattr__
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

    if ( var___setitem__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___setitem__,
            var___setitem__
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

    if ( var_integ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_integ,
            var_integ
        );

        assert( res == 0 );
    }

    if ( var_deriv )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_deriv,
            var_deriv
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var_coeffs );
    Py_DECREF( var_coeffs );
    var_coeffs = NULL;

    CHECK_OBJECT( (PyObject *)var_order );
    Py_DECREF( var_order );
    var_order = NULL;

    CHECK_OBJECT( (PyObject *)var_variable );
    Py_DECREF( var_variable );
    var_variable = NULL;

    CHECK_OBJECT( (PyObject *)var___hash__ );
    Py_DECREF( var___hash__ );
    var___hash__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var___array__ );
    Py_DECREF( var___array__ );
    var___array__ = NULL;

    CHECK_OBJECT( (PyObject *)var___repr__ );
    Py_DECREF( var___repr__ );
    var___repr__ = NULL;

    CHECK_OBJECT( (PyObject *)var___len__ );
    Py_DECREF( var___len__ );
    var___len__ = NULL;

    CHECK_OBJECT( (PyObject *)var___str__ );
    Py_DECREF( var___str__ );
    var___str__ = NULL;

    CHECK_OBJECT( (PyObject *)var___call__ );
    Py_DECREF( var___call__ );
    var___call__ = NULL;

    CHECK_OBJECT( (PyObject *)var___neg__ );
    Py_DECREF( var___neg__ );
    var___neg__ = NULL;

    CHECK_OBJECT( (PyObject *)var___pos__ );
    Py_DECREF( var___pos__ );
    var___pos__ = NULL;

    CHECK_OBJECT( (PyObject *)var___mul__ );
    Py_DECREF( var___mul__ );
    var___mul__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rmul__ );
    Py_DECREF( var___rmul__ );
    var___rmul__ = NULL;

    CHECK_OBJECT( (PyObject *)var___add__ );
    Py_DECREF( var___add__ );
    var___add__ = NULL;

    CHECK_OBJECT( (PyObject *)var___radd__ );
    Py_DECREF( var___radd__ );
    var___radd__ = NULL;

    CHECK_OBJECT( (PyObject *)var___pow__ );
    Py_DECREF( var___pow__ );
    var___pow__ = NULL;

    CHECK_OBJECT( (PyObject *)var___sub__ );
    Py_DECREF( var___sub__ );
    var___sub__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rsub__ );
    Py_DECREF( var___rsub__ );
    var___rsub__ = NULL;

    CHECK_OBJECT( (PyObject *)var___div__ );
    Py_DECREF( var___div__ );
    var___div__ = NULL;

    CHECK_OBJECT( (PyObject *)var___truediv__ );
    Py_DECREF( var___truediv__ );
    var___truediv__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rdiv__ );
    Py_DECREF( var___rdiv__ );
    var___rdiv__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rtruediv__ );
    Py_DECREF( var___rtruediv__ );
    var___rtruediv__ = NULL;

    CHECK_OBJECT( (PyObject *)var___eq__ );
    Py_DECREF( var___eq__ );
    var___eq__ = NULL;

    CHECK_OBJECT( (PyObject *)var___ne__ );
    Py_DECREF( var___ne__ );
    var___ne__ = NULL;

    CHECK_OBJECT( (PyObject *)var___setattr__ );
    Py_DECREF( var___setattr__ );
    var___setattr__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getattr__ );
    Py_DECREF( var___getattr__ );
    var___getattr__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getitem__ );
    Py_DECREF( var___getitem__ );
    var___getitem__ = NULL;

    CHECK_OBJECT( (PyObject *)var___setitem__ );
    Py_DECREF( var___setitem__ );
    var___setitem__ = NULL;

    CHECK_OBJECT( (PyObject *)var___iter__ );
    Py_DECREF( var___iter__ );
    var___iter__ = NULL;

    CHECK_OBJECT( (PyObject *)var_integ );
    Py_DECREF( var_integ );
    var_integ = NULL;

    CHECK_OBJECT( (PyObject *)var_deriv );
    Py_DECREF( var_deriv );
    var_deriv = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_c_or_r = python_pars[ 1 ];
    PyObject *par_r = python_pars[ 2 ];
    PyObject *par_variable = python_pars[ 3 ];
    PyObject *var_key = NULL;
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
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
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
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
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
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2c949f2d9b6bbd87ac2cec62e7bc4419, module_numpy$lib$polynomial );
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
    tmp_isinstance_inst_1 = par_c_or_r;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1046;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1046;
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
    tmp_source_name_2 = par_c_or_r;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1047;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1047;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1047;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1047;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1047;
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
            frame_function->f_lineno = 1047;
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
        PyObject *old = var_key;
        var_key = tmp_assign_source_3;
        Py_INCREF( var_key );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = par_c_or_r;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_3 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1048;
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = var_key;

    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1048;
        goto try_except_handler_2;
    }
    tmp_source_name_4 = par_self;

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_4 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 1048;
        goto try_except_handler_2;
    }
    tmp_ass_subscript_1 = var_key;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1048;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1047;
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

    tmp_compare_left_1 = par_variable;

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_ass_subvalue_2 = par_variable;

    tmp_source_name_5 = par_self;

    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_5 );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1050;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_2 = const_str_plain_variable;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1050;
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_cond_value_1 = par_r;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1052;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly" );
        exception_tb = NULL;

        exception_lineno = 1053;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_c_or_r;

    frame_function->f_lineno = 1053;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1053;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c_or_r;
        assert( old != NULL );
        par_c_or_r = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_atleast_1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "atleast_1d" );
        exception_tb = NULL;

        exception_lineno = 1054;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_c_or_r;

    frame_function->f_lineno = 1054;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1054;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c_or_r;
        assert( old != NULL );
        par_c_or_r = tmp_assign_source_5;
        Py_DECREF( old );
    }

    tmp_source_name_6 = par_c_or_r;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1055;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1055;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 1055;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_1 = const_str_digest_e43f3bd915f6ace2e523b3a24994fdbc;
    frame_function->f_lineno = 1056;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1056;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_trim_zeros );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_trim_zeros );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "trim_zeros" );
        exception_tb = NULL;

        exception_lineno = 1057;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_c_or_r;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_550850c0300eb7076f24d8318a86fb89 );
    frame_function->f_lineno = 1057;
    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1057;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c_or_r;
        assert( old != NULL );
        par_c_or_r = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_len_arg_2 = par_c_or_r;

    tmp_compare_left_3 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1058;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_3 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_3 );

        exception_lineno = 1058;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_3 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1059;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_array );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1059;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = LIST_COPY( const_list_float_0_0_list );
    frame_function->f_lineno = 1059;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1059;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_c_or_r;
        assert( old != NULL );
        par_c_or_r = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_no_5:;
    tmp_ass_subvalue_3 = par_c_or_r;

    tmp_source_name_8 = par_self;

    tmp_ass_subscribed_3 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_8 );
    if ( tmp_ass_subscribed_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1060;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_3 = const_str_plain_coeffs;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscribed_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1060;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_3 = par_c_or_r;

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1061;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_ass_subvalue_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_ass_subvalue_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1061;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    tmp_ass_subscribed_4 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_9 );
    if ( tmp_ass_subscribed_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_4 );

        exception_lineno = 1061;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_4 = const_str_plain_order;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4 );
    Py_DECREF( tmp_ass_subscribed_4 );
    Py_DECREF( tmp_ass_subvalue_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1061;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_4 = par_variable;

    tmp_compare_right_4 = Py_None;
    tmp_is_1 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_8 = const_str_plain_x;
    {
        PyObject *old = par_variable;
        assert( old != NULL );
        par_variable = tmp_assign_source_8;
        Py_INCREF( par_variable );
        Py_DECREF( old );
    }

    branch_no_6:;
    tmp_ass_subvalue_5 = par_variable;

    tmp_source_name_10 = par_self;

    tmp_ass_subscribed_5 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_10 );
    if ( tmp_ass_subscribed_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1064;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_5 = const_str_plain_variable;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5 );
    Py_DECREF( tmp_ass_subscribed_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1064;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_c_or_r )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_c_or_r,
                    par_c_or_r
                );

                assert( res == 0 );
            }

            if ( par_r )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_r,
                    par_r
                );

                assert( res == 0 );
            }

            if ( par_variable )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_variable,
                    par_variable
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_c_or_r );
    par_c_or_r = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    Py_XDECREF( par_variable );
    par_variable = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

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

    Py_XDECREF( par_c_or_r );
    par_c_or_r = NULL;

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    Py_XDECREF( par_variable );
    par_variable = NULL;

    Py_XDECREF( var_key );
    var_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_1___init__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_2___array__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_t = python_pars[ 1 ];
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a5ba9eec3c1492d7db53ee7926486d7a, module_numpy$lib$polynomial );
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
    tmp_cond_value_1 = par_t;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1067;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1068;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1068;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 1068;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_t;

    frame_function->f_lineno = 1068;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1068;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1070;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_asarray );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1070;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_coeffs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 1070;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1070;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1070;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_t )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_t,
                    par_t
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_2___array__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

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

    CHECK_OBJECT( (PyObject *)par_t );
    Py_DECREF( par_t );
    par_t = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_2___array__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_3___repr__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_vals = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a7c8c71306895accf94d97afbdada2e5, module_numpy$lib$polynomial );
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

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1073;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1073;
        goto frame_exception_exit_1;
    }
    assert( var_vals == NULL );
    var_vals = tmp_assign_source_1;

    tmp_sliceslicedel_index_lower_1 = 6;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_vals;

    tmp_assign_source_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1074;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_vals;
        assert( old != NULL );
        var_vals = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_left_name_1 = const_str_digest_8e8cc082af63fdab10d5a5ad0df80a3b;
    tmp_right_name_1 = var_vals;

    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1075;
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

            if ( var_vals )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vals,
                    var_vals
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_3___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_vals );
    Py_DECREF( var_vals );
    var_vals = NULL;

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

    Py_XDECREF( var_vals );
    var_vals = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_3___repr__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_4___len__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4b7fa8dea597a4404af82b6624eb9e46, module_numpy$lib$polynomial );
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

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_order );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1078;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_4___len__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_4___len__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_thestr = NULL;
    PyObject *var_var = NULL;
    PyObject *var_coeffs = NULL;
    PyObject *var_N = NULL;
    PyObject *var_fmt_float = NULL;
    PyObject *var_k = NULL;
    PyObject *var_coefstr = NULL;
    PyObject *var_power = NULL;
    PyObject *var_newstr = NULL;
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
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_args_element_name_12;
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
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Eq_2;
    int tmp_cmp_Eq_3;
    int tmp_cmp_Eq_4;
    int tmp_cmp_Eq_5;
    int tmp_cmp_Eq_6;
    int tmp_cmp_Eq_7;
    int tmp_cmp_Eq_8;
    int tmp_cmp_Gt_1;
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
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
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
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
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
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    PyObject *tmp_tuple_element_7;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_plain_0;
    assert( var_thestr == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_thestr = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_08ddd1e55e212c0a54dd1359e0a58fc9, module_numpy$lib$polynomial );
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

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_variable );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1082;
        goto frame_exception_exit_1;
    }
    assert( var_var == NULL );
    var_var = tmp_assign_source_2;

    tmp_source_name_2 = par_self;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1085;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_subscribed_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1085;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_logical_or );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 1085;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_accumulate );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 1085;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_coeffs );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 1085;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_args_element_name_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 1085;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1085;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_subscript_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 1085;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1085;
        goto frame_exception_exit_1;
    }
    assert( var_coeffs == NULL );
    var_coeffs = tmp_assign_source_3;

    tmp_len_arg_1 = var_coeffs;

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1086;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1086;
        goto frame_exception_exit_1;
    }
    assert( var_N == NULL );
    var_N = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__$$$function_1_fmt_float(  );
    assert( var_fmt_float == NULL );
    var_fmt_float = tmp_assign_source_5;

    tmp_len_arg_2 = var_coeffs;

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1094;
        goto frame_exception_exit_1;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1094;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1094;
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
            frame_function->f_lineno = 1094;
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
        PyObject *old = var_k;
        var_k = tmp_assign_source_8;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_iscomplex );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_iscomplex );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "iscomplex" );
        exception_tb = NULL;

        exception_lineno = 1095;
        goto try_except_handler_2;
    }

    tmp_subscribed_name_2 = var_coeffs;

    tmp_subscript_name_2 = var_k;

    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1095;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1095;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1095;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1095;
        goto try_except_handler_2;
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
    tmp_called_name_3 = var_fmt_float;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_real );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_real );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "real" );
        exception_tb = NULL;

        exception_lineno = 1096;
        goto try_except_handler_2;
    }

    tmp_subscribed_name_3 = var_coeffs;

    tmp_subscript_name_3 = var_k;

    tmp_args_element_name_4 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_3, tmp_subscript_name_3 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1096;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1096;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1096;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1096;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1096;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_coefstr;
        var_coefstr = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_real );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_real );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "real" );
        exception_tb = NULL;

        exception_lineno = 1097;
        goto try_except_handler_2;
    }

    tmp_subscribed_name_4 = var_coeffs;

    tmp_subscript_name_4 = var_k;

    tmp_args_element_name_5 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_4, tmp_subscript_name_4 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1097;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1097;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_compare_left_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1097;
        goto try_except_handler_2;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 1097;
        goto try_except_handler_2;
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
    tmp_left_name_2 = const_str_digest_539b940ce8b78f070990007c87f8234f;
    tmp_called_name_6 = var_fmt_float;

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_imag );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_imag );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "imag" );
        exception_tb = NULL;

        exception_lineno = 1098;
        goto try_except_handler_2;
    }

    tmp_subscribed_name_5 = var_coeffs;

    tmp_subscript_name_5 = var_k;

    tmp_args_element_name_7 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_5, tmp_subscript_name_5 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1098;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1098;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_args_element_name_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1098;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1098;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_right_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1098;
        goto try_except_handler_2;
    }
    tmp_assign_source_10 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1098;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_coefstr;
        var_coefstr = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_left_name_3 = const_str_digest_d31b1f7cd665ec833fe85cdeb11902cb;
    tmp_right_name_3 = PyTuple_New( 2 );
    tmp_called_name_8 = var_fmt_float;

    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_real );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_real );
    }

    if ( tmp_called_name_9 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "real" );
        exception_tb = NULL;

        exception_lineno = 1100;
        goto try_except_handler_2;
    }

    tmp_subscribed_name_6 = var_coeffs;

    tmp_subscript_name_6 = var_k;

    tmp_args_element_name_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_6, tmp_subscript_name_6 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1100;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1100;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_args_element_name_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1100;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1100;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1100;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 0, tmp_tuple_element_1 );
    tmp_called_name_10 = var_fmt_float;

    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_imag );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_imag );
    }

    if ( tmp_called_name_11 == NULL )
    {
        Py_DECREF( tmp_right_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "imag" );
        exception_tb = NULL;

        exception_lineno = 1101;
        goto try_except_handler_2;
    }

    tmp_subscribed_name_7 = var_coeffs;

    tmp_subscript_name_7 = var_k;

    tmp_args_element_name_11 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_7, tmp_subscript_name_7 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1101;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1101;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_args_element_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1101;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1101;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_3 );

        exception_lineno = 1101;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_3, 1, tmp_tuple_element_1 );
    tmp_assign_source_11 = BINARY_OPERATION_REMAINDER( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1100;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_coefstr;
        var_coefstr = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    branch_end_2:;
    branch_end_1:;
    tmp_left_name_4 = var_N;

    tmp_right_name_4 = var_k;

    tmp_assign_source_12 = BINARY_OPERATION_SUB( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1103;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_power;
        var_power = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_power;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Eq_2 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1104;
        goto try_except_handler_2;
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
    tmp_compare_left_3 = var_coefstr;

    if ( tmp_compare_left_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1105;
        goto try_except_handler_2;
    }

    tmp_compare_right_3 = const_str_plain_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1105;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_NotEq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_left_name_5 = const_str_digest_eee7b0934fe224b34ba6722d84ccd2bf;
    tmp_right_name_5 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_coefstr;

    if ( tmp_tuple_element_2 == NULL )
    {
        Py_DECREF( tmp_right_name_5 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1106;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_2 );
    tmp_assign_source_13 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1106;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_compare_left_4 = var_k;

    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_3 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1108;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_14 = const_str_plain_0;
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_14;
        Py_INCREF( var_newstr );
        Py_XDECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_assign_source_15 = const_str_empty;
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_15;
        Py_INCREF( var_newstr );
        Py_XDECREF( old );
    }

    branch_end_5:;
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_compare_left_5 = var_power;

    tmp_compare_right_5 = const_int_pos_1;
    tmp_cmp_Eq_4 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_cmp_Eq_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1112;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_compare_left_6 = var_coefstr;

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1113;
        goto try_except_handler_2;
    }

    tmp_compare_right_6 = const_str_plain_0;
    tmp_cmp_Eq_5 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1113;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_assign_source_16 = const_str_empty;
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_16;
        Py_INCREF( var_newstr );
        Py_XDECREF( old );
    }

    goto branch_end_7;
    branch_no_7:;
    tmp_compare_left_7 = var_coefstr;

    if ( tmp_compare_left_7 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1115;
        goto try_except_handler_2;
    }

    tmp_compare_right_7 = const_str_plain_b;
    tmp_cmp_Eq_6 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_cmp_Eq_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1115;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_6 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assign_source_17 = var_var;

    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_17;
        Py_INCREF( var_newstr );
        Py_XDECREF( old );
    }

    goto branch_end_8;
    branch_no_8:;
    tmp_left_name_6 = const_str_digest_9b2a32a10f34854554acce4f0a1e5df6;
    tmp_right_name_6 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_coefstr;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_right_name_6 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1118;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_var;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_right_name_6, 1, tmp_tuple_element_3 );
    tmp_assign_source_18 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1118;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    branch_end_8:;
    branch_end_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_compare_left_8 = var_coefstr;

    if ( tmp_compare_left_8 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1120;
        goto try_except_handler_2;
    }

    tmp_compare_right_8 = const_str_plain_0;
    tmp_cmp_Eq_7 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_cmp_Eq_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1120;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_7 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assign_source_19 = const_str_empty;
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_19;
        Py_INCREF( var_newstr );
        Py_XDECREF( old );
    }

    goto branch_end_9;
    branch_no_9:;
    tmp_compare_left_9 = var_coefstr;

    if ( tmp_compare_left_9 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1122;
        goto try_except_handler_2;
    }

    tmp_compare_right_9 = const_str_plain_b;
    tmp_cmp_Eq_8 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_9, tmp_compare_right_9 );
    if ( tmp_cmp_Eq_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1122;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_8 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_left_name_7 = const_str_digest_e830032217724d27845e33581eb30139;
    tmp_right_name_7 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_var;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_7, 0, tmp_tuple_element_4 );
    tmp_tuple_element_4 = var_power;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_right_name_7, 1, tmp_tuple_element_4 );
    tmp_assign_source_20 = BINARY_OPERATION_REMAINDER( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1123;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    goto branch_end_10;
    branch_no_10:;
    tmp_left_name_8 = const_str_digest_692dc77e7651117b5059c24a0fc8e6ef;
    tmp_right_name_8 = PyTuple_New( 3 );
    tmp_tuple_element_5 = var_coefstr;

    if ( tmp_tuple_element_5 == NULL )
    {
        Py_DECREF( tmp_right_name_8 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "coefstr" );
        exception_tb = NULL;

        exception_lineno = 1125;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_8, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_var;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_8, 1, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_power;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_right_name_8, 2, tmp_tuple_element_5 );
    tmp_assign_source_21 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1125;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_newstr;
        var_newstr = tmp_assign_source_21;
        Py_XDECREF( old );
    }

    branch_end_10:;
    branch_end_9:;
    branch_end_6:;
    branch_end_3:;
    tmp_compare_left_10 = var_k;

    tmp_compare_right_10 = const_int_0;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_10, tmp_compare_right_10 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1127;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_compare_left_11 = var_newstr;

    if ( tmp_compare_left_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 1128;
        goto try_except_handler_2;
    }

    tmp_compare_right_11 = const_str_empty;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_11, tmp_compare_right_11 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1128;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_source_name_6 = var_newstr;

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 1129;
        goto try_except_handler_2;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_startswith );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1129;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 1129;
    tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, &PyTuple_GET_ITEM( const_tuple_str_chr_45_tuple, 0 ) );

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1129;
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 1129;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_left_name_9 = const_str_digest_ff5e3b1ae0d95ffe8b3d72657a27de19;
    tmp_right_name_9 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_thestr;

    if ( tmp_tuple_element_6 == NULL )
    {
        Py_DECREF( tmp_right_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "thestr" );
        exception_tb = NULL;

        exception_lineno = 1130;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_right_name_9, 0, tmp_tuple_element_6 );
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_slice_source_1 = var_newstr;

    if ( tmp_slice_source_1 == NULL )
    {
        Py_DECREF( tmp_right_name_9 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 1130;
        goto try_except_handler_2;
    }

    tmp_tuple_element_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_tuple_element_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_9 );

        exception_lineno = 1130;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_right_name_9, 1, tmp_tuple_element_6 );
    tmp_assign_source_22 = BINARY_OPERATION_REMAINDER( tmp_left_name_9, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1130;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_thestr;
        var_thestr = tmp_assign_source_22;
        Py_XDECREF( old );
    }

    goto branch_end_13;
    branch_no_13:;
    tmp_left_name_10 = const_str_digest_37eb5527e8de3a4de5a4da95d734d451;
    tmp_right_name_10 = PyTuple_New( 2 );
    tmp_tuple_element_7 = var_thestr;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_right_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "thestr" );
        exception_tb = NULL;

        exception_lineno = 1132;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_right_name_10, 0, tmp_tuple_element_7 );
    tmp_tuple_element_7 = var_newstr;

    if ( tmp_tuple_element_7 == NULL )
    {
        Py_DECREF( tmp_right_name_10 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 1132;
        goto try_except_handler_2;
    }

    Py_INCREF( tmp_tuple_element_7 );
    PyTuple_SET_ITEM( tmp_right_name_10, 1, tmp_tuple_element_7 );
    tmp_assign_source_23 = BINARY_OPERATION_REMAINDER( tmp_left_name_10, tmp_right_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1132;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_thestr;
        var_thestr = tmp_assign_source_23;
        Py_XDECREF( old );
    }

    branch_end_13:;
    branch_no_12:;
    goto branch_end_11;
    branch_no_11:;
    tmp_assign_source_24 = var_newstr;

    if ( tmp_assign_source_24 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "newstr" );
        exception_tb = NULL;

        exception_lineno = 1134;
        goto try_except_handler_2;
    }

    {
        PyObject *old = var_thestr;
        var_thestr = tmp_assign_source_24;
        Py_INCREF( var_thestr );
        Py_XDECREF( old );
    }

    branch_end_11:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1094;
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

    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain__raise_power );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__raise_power );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_raise_power" );
        exception_tb = NULL;

        exception_lineno = 1135;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = var_thestr;

    if ( tmp_args_element_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "thestr" );
        exception_tb = NULL;

        exception_lineno = 1135;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1135;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1135;
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

            if ( var_thestr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_thestr,
                    var_thestr
                );

                assert( res == 0 );
            }

            if ( var_var )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_var,
                    var_var
                );

                assert( res == 0 );
            }

            if ( var_coeffs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coeffs,
                    var_coeffs
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

            if ( var_fmt_float )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fmt_float,
                    var_fmt_float
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

            if ( var_coefstr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coefstr,
                    var_coefstr
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

            if ( var_newstr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_newstr,
                    var_newstr
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    Py_XDECREF( var_thestr );
    var_thestr = NULL;

    CHECK_OBJECT( (PyObject *)var_var );
    Py_DECREF( var_var );
    var_var = NULL;

    CHECK_OBJECT( (PyObject *)var_coeffs );
    Py_DECREF( var_coeffs );
    var_coeffs = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_fmt_float );
    Py_DECREF( var_fmt_float );
    var_fmt_float = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_coefstr );
    var_coefstr = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_newstr );
    var_newstr = NULL;

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

    Py_XDECREF( var_thestr );
    var_thestr = NULL;

    Py_XDECREF( var_var );
    var_var = NULL;

    Py_XDECREF( var_coeffs );
    var_coeffs = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_fmt_float );
    var_fmt_float = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_coefstr );
    var_coefstr = NULL;

    Py_XDECREF( var_power );
    var_power = NULL;

    Py_XDECREF( var_newstr );
    var_newstr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__$$$function_1_fmt_float( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_q = python_pars[ 0 ];
    PyObject *var_s = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_58a1b367b90adf6a1bcdb27514289d10, module_numpy$lib$polynomial );
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
    tmp_left_name_1 = const_str_digest_2e159b87ee53f6cabc8ee285b77f805b;
    tmp_right_name_1 = par_q;

    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1089;
        goto frame_exception_exit_1;
    }
    assert( var_s == NULL );
    var_s = tmp_assign_source_1;

    tmp_source_name_1 = var_s;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_endswith );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1090;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1090;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_digest_63e450e710f10ffa31b2603b90b1a06b_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1090;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1090;
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
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -5;
    tmp_slice_source_1 = var_s;

    tmp_assign_source_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1091;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_s;
        assert( old != NULL );
        var_s = tmp_assign_source_2;
        Py_DECREF( old );
    }

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
            if ( par_q )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_q,
                    par_q
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

    tmp_return_value = var_s;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__$$$function_1_fmt_float );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    CHECK_OBJECT( (PyObject *)var_s );
    Py_DECREF( var_s );
    var_s = NULL;

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

    CHECK_OBJECT( (PyObject *)par_q );
    Py_DECREF( par_q );
    par_q = NULL;

    Py_XDECREF( var_s );
    var_s = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__$$$function_1_fmt_float );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_6___call__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5bd9e9da0aab9670e3d5ba97bd481793, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyval );

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

        exception_lineno = 1138;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1138;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_val;

    frame_function->f_lineno = 1138;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1138;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_6___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_6___call__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_7___neg__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7f73a5aa57bfd230c7e50d0e11cab895, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1141;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1141;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1141;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1141;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1141;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_7___neg__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_7___neg__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_8___pos__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_8___pos__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_8___pos__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_9___mul__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dc5aefb732a9582ded9baecba6be15d9, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 1147;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 1147;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1147;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1147;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1148;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1148;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_other;

    tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1148;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1148;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1148;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1150;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_other;

    frame_function->f_lineno = 1150;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1150;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1151;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polymul );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polymul );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polymul" );
        exception_tb = NULL;

        exception_lineno = 1151;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1151;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_other;

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coeffs );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 1151;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1151;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1151;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1151;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1151;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_9___mul__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_9___mul__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_10___rmul__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_50720cb05fb31d3fb6ea730e417bba13, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 1154;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 1154;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1154;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1154;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1155;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = par_other;

    tmp_source_name_1 = par_self;

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1155;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1155;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1155;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1155;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1157;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_other;

    frame_function->f_lineno = 1157;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1157;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1158;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polymul );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polymul );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polymul" );
        exception_tb = NULL;

        exception_lineno = 1158;
        goto frame_exception_exit_1;
    }

    tmp_source_name_2 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1158;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_other;

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coeffs );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 1158;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1158;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1158;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1158;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1158;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_10___rmul__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_10___rmul__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_11___add__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e19cfea33d4655c3dc632daebd66cddb, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1161;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 1161;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1161;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1162;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyadd );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyadd );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyadd" );
        exception_tb = NULL;

        exception_lineno = 1162;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1162;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 1162;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1162;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1162;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1162;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1162;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_11___add__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_11___add__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_12___radd__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_66d5af7e92baf4603552bf7f96dd0e1d, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1165;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 1165;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1165;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1166;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyadd );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyadd );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyadd" );
        exception_tb = NULL;

        exception_lineno = 1166;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1166;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 1166;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1166;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1166;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1166;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1166;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_12___radd__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_12___radd__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_13___pow__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    PyObject *var_res = NULL;
    PyObject *var__ = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    int tmp_or_left_truth_2;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_left_value_2;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_or_right_value_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_range_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1ca2dec18f61e9d74fe26947a86fb6cc, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 1169;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_val;

    frame_function->f_lineno = 1169;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1169;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1169;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1169;
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
    tmp_int_arg_1 = par_val;

    tmp_compexpr_left_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1169;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = par_val;

    tmp_or_left_value_2 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1169;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_2 = CHECK_IF_TRUE( tmp_or_left_value_2 );
    if ( tmp_or_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_2 );

        exception_lineno = 1169;
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
    Py_DECREF( tmp_or_left_value_2 );
    tmp_compexpr_left_2 = par_val;

    tmp_compexpr_right_2 = const_int_0;
    tmp_or_right_value_2 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1169;
        goto frame_exception_exit_1;
    }
    tmp_or_right_value_1 = tmp_or_right_value_2;
    goto or_end_2;
    or_left_2:;
    tmp_or_right_value_1 = tmp_or_left_value_2;
    or_end_2:;
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

        exception_lineno = 1169;
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
    tmp_make_exception_arg_1 = const_str_digest_0fd0577caa73fdd5d0bda8d20ce51418;
    frame_function->f_lineno = 1170;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1170;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = LIST_COPY( const_list_int_pos_1_list );
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_range_arg_1 = par_val;

    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1172;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1172;
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
            frame_function->f_lineno = 1172;
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
        PyObject *old = var__;
        var__ = tmp_assign_source_4;
        Py_INCREF( var__ );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polymul );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polymul );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polymul" );
        exception_tb = NULL;

        exception_lineno = 1173;
        goto try_except_handler_2;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1173;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_res;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;

        exception_lineno = 1173;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 1173;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1173;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_res;
        var_res = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1172;
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

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1174;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_res;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "res" );
        exception_tb = NULL;

        exception_lineno = 1174;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 1174;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1174;
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

            if ( par_val )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_val,
                    par_val
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

            if ( var__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__,
                    var__
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_13___pow__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_13___pow__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_14___sub__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_72fe6510b0d282886c390f3ffaaadb0b, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1177;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 1177;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1177;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1178;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polysub );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polysub );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polysub" );
        exception_tb = NULL;

        exception_lineno = 1178;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1178;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 1178;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1178;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1178;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1178;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1178;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_14___sub__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_14___sub__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_15___rsub__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8a53d3ab375e5f2bd2f28dbd788ba399, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1181;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 1181;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1181;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1182;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polysub );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polysub );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polysub" );
        exception_tb = NULL;

        exception_lineno = 1182;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_other;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1182;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 1182;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1182;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1182;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1182;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1182;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_15___rsub__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_15___rsub__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_16___div__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c1a9e3dbfd0a0eae7275cab4652fdd16, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 1185;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 1185;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1185;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1185;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1186;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1186;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_other;

    tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1186;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1186;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1186;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1188;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_other;

    frame_function->f_lineno = 1188;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1188;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polydiv );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polydiv );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polydiv" );
        exception_tb = NULL;

        exception_lineno = 1189;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_self;

    tmp_args_element_name_5 = par_other;

    frame_function->f_lineno = 1189;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1189;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_16___div__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_16___div__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_17___rdiv__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7816978eb1f0eba3dd1c8d5f20b602b1, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_isscalar );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "isscalar" );
        exception_tb = NULL;

        exception_lineno = 1194;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 1194;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1194;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 1194;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1195;
        goto frame_exception_exit_1;
    }

    tmp_left_name_1 = par_other;

    tmp_source_name_1 = par_self;

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1195;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1195;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1195;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1195;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1197;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_other;

    frame_function->f_lineno = 1197;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1197;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_other;
        assert( old != NULL );
        par_other = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polydiv );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polydiv );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polydiv" );
        exception_tb = NULL;

        exception_lineno = 1198;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_other;

    tmp_args_element_name_5 = par_self;

    frame_function->f_lineno = 1198;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1198;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_17___rdiv__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_17___rdiv__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_18___eq__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7efaaeb72ecb47ecfae49ee2e20810fa, module_numpy$lib$polynomial );
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
    tmp_source_name_2 = par_self;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1203;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1203;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_coeffs );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 1203;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_shape );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 1203;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 1203;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_6 = par_self;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_coeffs );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1205;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_other;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_coeffs );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 1205;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1205;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_all );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1205;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1205;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1205;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_18___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_18___eq__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_19___ne__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
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
    PyObject *tmp_operand_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_60757909784b1d7a0b8894d9aacdbcc7, module_numpy$lib$polynomial );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___eq__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1208;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 1208;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1208;
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1208;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_19___ne__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_19___ne__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_20___setattr__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_val = python_pars[ 2 ];
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_895f0384ae7bee0c974ed2e9233c1fd8, module_numpy$lib$polynomial );
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
    tmp_make_exception_arg_1 = const_str_digest_7bf6668dbb7b9c33d53ed1c615ea8bfa;
    frame_function->f_lineno = 1211;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1211;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_20___setattr__ );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_20___setattr__ );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;

}


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_21___getattr__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
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
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c51c85bfe6831ca91f24de0e9286b9b9, module_numpy$lib$polynomial );
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
    tmp_compare_left_1 = par_key;

    tmp_compare_right_1 = LIST_COPY( const_list_str_plain_r_str_plain_roots_list );
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_roots );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_roots );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "roots" );
        exception_tb = NULL;

        exception_lineno = 1215;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1215;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1215;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1215;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = par_key;

    tmp_compare_right_2 = LIST_COPY( const_list_str_plain_c_str_plain_coef_str_plain_coefficients_list );
    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_2 == -1) );
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = par_self;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coeffs );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1217;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_compare_left_3 = par_key;

    tmp_compare_right_3 = LIST_COPY( const_list_str_plain_o_list );
    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_3 == -1) );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = par_self;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_order );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1219;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    // Tried code:
    tmp_source_name_4 = par_self;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_4 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1222;
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = par_key;

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1222;
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_21___getattr__ );
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
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1223;
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
    tmp_left_name_1 = const_str_digest_c5104c95b26caa2770b936f43693659b;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_5 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 1225;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_key;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1225;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1224;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_AttributeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1225;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_4:;
    // End of try:
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_21___getattr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_21___getattr__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_22___getitem__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_val = python_pars[ 1 ];
    PyObject *var_ind = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_42f215f447ef744885b4f84447f2e86d, module_numpy$lib$polynomial );
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

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_order );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1228;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_val;

    tmp_assign_source_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1228;
        goto frame_exception_exit_1;
    }
    assert( var_ind == NULL );
    var_ind = tmp_assign_source_1;

    tmp_compare_left_1 = par_val;

    tmp_source_name_2 = par_self;

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_order );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1229;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 1229;
        goto frame_exception_exit_1;
    }
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
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = par_val;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1231;
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
    tmp_return_value = const_int_0;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_3 = par_self;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coeffs );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1233;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = var_ind;

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1233;
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

            if ( par_val )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_val,
                    par_val
                );

                assert( res == 0 );
            }

            if ( var_ind )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ind,
                    var_ind
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_22___getitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    CHECK_OBJECT( (PyObject *)var_ind );
    Py_DECREF( var_ind );
    var_ind = NULL;

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

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_22___getitem__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_23___setitem__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_key = python_pars[ 1 ];
    PyObject *par_val = python_pars[ 2 ];
    PyObject *var_ind = NULL;
    PyObject *var_zr = NULL;
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
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscribed_3;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subscript_3;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_ass_subvalue_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_df03cf39507d2efdb944de5714b6206a, module_numpy$lib$polynomial );
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

    tmp_left_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_order );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1236;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_key;

    tmp_assign_source_1 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1236;
        goto frame_exception_exit_1;
    }
    assert( var_ind == NULL );
    var_ind = tmp_assign_source_1;

    tmp_compare_left_1 = par_key;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1237;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_make_exception_arg_1 = const_str_digest_f21e02642cb931dff513acf416b301f5;
    frame_function->f_lineno = 1238;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 1238;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_2 = par_key;

    tmp_source_name_2 = par_self;

    tmp_compare_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_order );
    if ( tmp_compare_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1239;
        goto frame_exception_exit_1;
    }
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 1239;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1240;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1240;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = par_key;

    tmp_source_name_4 = par_self;

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_order );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 1240;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 1240;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_coeffs );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 1240;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_dtype );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 1240;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1240;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1240;
        goto frame_exception_exit_1;
    }
    assert( var_zr == NULL );
    var_zr = tmp_assign_source_2;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NX );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NX" );
        exception_tb = NULL;

        exception_lineno = 1241;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_concatenate );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1241;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_zr;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_element_name_3, 0, tmp_tuple_element_1 );
    tmp_source_name_8 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_coeffs );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 1241;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_3, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 1241;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1241;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_9 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_ass_subvalue_1 );

        exception_lineno = 1241;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_1 = const_str_plain_coeffs;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1241;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = par_key;

    tmp_source_name_10 = par_self;

    tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_10 );
    if ( tmp_ass_subscribed_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1242;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_2 = const_str_plain_order;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subscribed_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1242;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = const_int_0;
    {
        PyObject *old = var_ind;
        assert( old != NULL );
        var_ind = tmp_assign_source_3;
        Py_INCREF( var_ind );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_ass_subvalue_3 = par_val;

    tmp_source_name_11 = par_self;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_11 );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1244;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_str_plain_coeffs;
    tmp_ass_subscribed_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_ass_subscribed_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1244;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscript_3 = var_ind;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subscribed_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1244;
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

            if ( par_key )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_key,
                    par_key
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

            if ( var_ind )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ind,
                    var_ind
                );

                assert( res == 0 );
            }

            if ( var_zr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_zr,
                    var_zr
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_23___setitem__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    CHECK_OBJECT( (PyObject *)var_ind );
    Py_DECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

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

    CHECK_OBJECT( (PyObject *)par_key );
    Py_DECREF( par_key );
    par_key = NULL;

    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    Py_XDECREF( var_ind );
    var_ind = NULL;

    Py_XDECREF( var_zr );
    var_zr = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_23___setitem__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_24___iter__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c9fc2fea2da5796a939898e67598dd25, module_numpy$lib$polynomial );
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

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1248;
        goto frame_exception_exit_1;
    }
    tmp_return_value = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1248;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_24___iter__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_24___iter__ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_25_integ( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_223271ff15fda2824c1284c46bb74907, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1261;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyint );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyint );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyint" );
        exception_tb = NULL;

        exception_lineno = 1261;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_1 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 1261;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_m;

    tmp_dict_key_1 = const_str_plain_m;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_k;

    tmp_dict_key_2 = const_str_plain_k;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 1261;
    tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1261;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1261;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1261;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_25_integ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_25_integ );
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


static PyObject *impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_26_deriv( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
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
    PyObject *tmp_dict_value_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ec44886496687bc2b67d7df4ade6b52a, module_numpy$lib$polynomial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_poly1d );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "poly1d" );
        exception_tb = NULL;

        exception_lineno = 1274;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyder );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_polyder );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "polyder" );
        exception_tb = NULL;

        exception_lineno = 1274;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_source_name_1 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coeffs );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 1274;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_m;

    tmp_dict_key_1 = const_str_plain_m;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 1274;
    tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1274;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 1274;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1274;
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_26_deriv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$lib$polynomial$$$class_2_poly1d$$$function_26_deriv );
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



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_10___rmul__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_10___rmul__,
        const_str_plain___rmul__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_50720cb05fb31d3fb6ea730e417bba13,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_11___add__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_11___add__,
        const_str_plain___add__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e19cfea33d4655c3dc632daebd66cddb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_12___radd__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_12___radd__,
        const_str_plain___radd__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_66d5af7e92baf4603552bf7f96dd0e1d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_13___pow__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_13___pow__,
        const_str_plain___pow__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1ca2dec18f61e9d74fe26947a86fb6cc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_14___sub__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_14___sub__,
        const_str_plain___sub__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_72fe6510b0d282886c390f3ffaaadb0b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_15___rsub__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_15___rsub__,
        const_str_plain___rsub__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8a53d3ab375e5f2bd2f28dbd788ba399,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_16___div__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_16___div__,
        const_str_plain___div__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1a9e3dbfd0a0eae7275cab4652fdd16,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_17___rdiv__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_17___rdiv__,
        const_str_plain___rdiv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7816978eb1f0eba3dd1c8d5f20b602b1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_18___eq__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_18___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7efaaeb72ecb47ecfae49ee2e20810fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_19___ne__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_19___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_60757909784b1d7a0b8894d9aacdbcc7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_1___init__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2c949f2d9b6bbd87ac2cec62e7bc4419,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_20___setattr__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_20___setattr__,
        const_str_plain___setattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_895f0384ae7bee0c974ed2e9233c1fd8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_21___getattr__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_21___getattr__,
        const_str_plain___getattr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c51c85bfe6831ca91f24de0e9286b9b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_22___getitem__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_22___getitem__,
        const_str_plain___getitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_42f215f447ef744885b4f84447f2e86d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_23___setitem__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_23___setitem__,
        const_str_plain___setitem__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_df03cf39507d2efdb944de5714b6206a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_24___iter__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_24___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c9fc2fea2da5796a939898e67598dd25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_25_integ( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_25_integ,
        const_str_plain_integ,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_223271ff15fda2824c1284c46bb74907,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_cec87595b4737c124889189ff15d0b22
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_26_deriv( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_26_deriv,
        const_str_plain_deriv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ec44886496687bc2b67d7df4ade6b52a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_ab2bc23826697fad0288f5ff4e6158d3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_2___array__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_2___array__,
        const_str_plain___array__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a5ba9eec3c1492d7db53ee7926486d7a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_3___repr__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_3___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a7c8c71306895accf94d97afbdada2e5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_4___len__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_4___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4b7fa8dea597a4404af82b6624eb9e46,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_08ddd1e55e212c0a54dd1359e0a58fc9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__$$$function_1_fmt_float(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_5___str__$$$function_1_fmt_float,
        const_str_plain_fmt_float,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_58a1b367b90adf6a1bcdb27514289d10,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_6___call__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_6___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5bd9e9da0aab9670e3d5ba97bd481793,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_7___neg__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_7___neg__,
        const_str_plain___neg__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7f73a5aa57bfd230c7e50d0e11cab895,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_8___pos__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_8___pos__,
        const_str_plain___pos__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b718dc0b2e8b422bcb5bd0db8fdb544b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$class_2_poly1d$$$function_9___mul__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$class_2_poly1d$$$function_9___mul__,
        const_str_plain___mul__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dc5aefb732a9582ded9baecba6be15d9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_10_polydiv(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_10_polydiv,
        const_str_plain_polydiv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ffe2854076f9b567937641d47d5ad57d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_ae8ef7cff1c65112641662cfd4904c7d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_11__raise_power( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_11__raise_power,
        const_str_plain__raise_power,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7c17eb625ebac3d4ac9c67d763db16ea,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_1_poly(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_1_poly,
        const_str_plain_poly,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3dfc7be51bdfe1fe88b34aea758acc0e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_09c158c60390ce109dd1bc7de9f8a49c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_2_roots(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_2_roots,
        const_str_plain_roots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a38f5dff5105aedc29830ea93203faff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_ca3b9b4a9fef02910aa9e18b690ebb47
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_3_polyint( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_3_polyint,
        const_str_plain_polyint,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1ebb457a5943fc7f293df95ace0dcef8,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_ac4e5511907cabbe407110fccb6e5898
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_4_polyder( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_4_polyder,
        const_str_plain_polyder,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7e169f60dc35951f2319fed152cafb1b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_125ec7974471c7c212f84a3304bc12c3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_5_polyfit( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_5_polyfit,
        const_str_plain_polyfit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0233cb0db773ba7a0e3356c02ae06cb2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_0ddcb33b72d63396a5ce5d79e1bd425b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_6_polyval(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_6_polyval,
        const_str_plain_polyval,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_11d3362aea16d91bb4fc39e6fde357a3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_d025b8cc434c4be4e6c06e89082ea183
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_7_polyadd(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_7_polyadd,
        const_str_plain_polyadd,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4feca4a67e9a9a92c6ac1f1b00538e3f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_0db5f082e757bf000893d1070c5314d6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_8_polysub(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_8_polysub,
        const_str_plain_polysub,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9af60bf673ecf3e0139d8d519a42e494,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_b73629cbd250f78988da03d69fd963c8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$polynomial$$$function_9_polymul(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$polynomial$$$function_9_polymul,
        const_str_plain_polymul,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4121f3768067bf913adeac2e378ae9ce,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$polynomial,
        const_str_digest_4aa5fb15c76d22fba6c2db6cceed9a4d
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$polynomial =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.polynomial",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$polynomial )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$polynomial );
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

    // puts( "in initnumpy$lib$polynomial" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$polynomial = Py_InitModule4(
        "numpy.lib.polynomial",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$polynomial = PyModule_Create( &mdef_numpy$lib$polynomial );
#endif

    moduledict_numpy$lib$polynomial = (PyDictObject *)((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;

    CHECK_OBJECT( module_numpy$lib$polynomial );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d2e3016ff6c92dbac6fddfcf75daea5a, module_numpy$lib$polynomial );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib$polynomial );

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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
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
    PyObject *tmp_import_globals_21;
    PyObject *tmp_import_globals_22;
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
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_8d57b7b6e72d04b87b3e2a50f3755912;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_dff86e29a4436a81b6306b0416211f76;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_75a84415d4dfb7e31ed742c0fa94f09b_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_51276285eb3cf0d1736d7a471fb58437, module_numpy$lib$polynomial );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 11;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 12;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_import_name_from_1 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_core );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_NX, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_4, tmp_import_globals_4, const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_isscalar );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_isscalar, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_5, tmp_import_globals_5, const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_abs );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_abs, tmp_assign_source_11 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_6, tmp_import_globals_6, const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_finfo );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_finfo, tmp_assign_source_12 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_7, tmp_import_globals_7, const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_atleast_1d );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_atleast_1d, tmp_assign_source_13 );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_8, tmp_import_globals_8, const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_hstack );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_hstack, tmp_assign_source_14 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_9, tmp_import_globals_9, const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, const_int_0 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_dot );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_dot, tmp_assign_source_15 );
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_10, tmp_import_globals_10, const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, const_int_0 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_array );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_array, tmp_assign_source_16 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_11, tmp_import_globals_11, const_tuple_502d6c2cb5555551858002d0fc4182f3_tuple, const_int_0 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_ones );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_ones, tmp_assign_source_17 );
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_4dee642e949d4b9ad453719dec9278da, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_diag_str_plain_vander_tuple, const_int_0 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_diag );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_diag, tmp_assign_source_18 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_4dee642e949d4b9ad453719dec9278da, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_diag_str_plain_vander_tuple, const_int_0 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_vander );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_vander, tmp_assign_source_19 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_ade38aed73decbd99585ad80f3adae97, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_plain_trim_zeros_str_plain_sort_complex_tuple, const_int_0 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_trim_zeros );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_trim_zeros, tmp_assign_source_20 );
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_ade38aed73decbd99585ad80f3adae97, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_trim_zeros_str_plain_sort_complex_tuple, const_int_0 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_sort_complex );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_sort_complex, tmp_assign_source_21 );
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_f06b0863ac057f993e0b6697d72eaf86, tmp_import_globals_16, tmp_import_globals_16, const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, const_int_0 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_iscomplex );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_iscomplex, tmp_assign_source_22 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_f06b0863ac057f993e0b6697d72eaf86, tmp_import_globals_17, tmp_import_globals_17, const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, const_int_0 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_real );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_real, tmp_assign_source_23 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_digest_f06b0863ac057f993e0b6697d72eaf86, tmp_import_globals_18, tmp_import_globals_18, const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, const_int_0 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_imag );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_imag, tmp_assign_source_24 );
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_digest_f06b0863ac057f993e0b6697d72eaf86, tmp_import_globals_19, tmp_import_globals_19, const_tuple_26aa10fce6aa7dc63d36b6a4c87c5c8c_tuple, const_int_0 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_mintypecode );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_mintypecode, tmp_assign_source_25 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8, tmp_import_globals_20, tmp_import_globals_20, const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple, const_int_0 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_eigvals );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_eigvals, tmp_assign_source_26 );
    tmp_import_globals_21 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8, tmp_import_globals_21, tmp_import_globals_21, const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple, const_int_0 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_lstsq );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_lstsq, tmp_assign_source_27 );
    tmp_import_globals_22 = ((PyModuleObject *)module_numpy$lib$polynomial)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8, tmp_import_globals_22, tmp_import_globals_22, const_tuple_str_plain_eigvals_str_plain_lstsq_str_plain_inv_tuple, const_int_0 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_inv );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_inv, tmp_assign_source_28 );
    // Tried code:
    tmp_assign_source_29 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_UserWarning );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_UserWarning );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_assign_source_29 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "UserWarning" );
        exception_tb = NULL;

        exception_lineno = 22;
        goto try_except_handler_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_29, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_29;

    tmp_assign_source_30 = impl_numpy$lib$polynomial$$$class_1_RankWarning( NULL );
    assert( tmp_assign_source_30 != NULL );
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_30;

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
    tmp_assign_source_31 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_31 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_31;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_RankWarning;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 22;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_32 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_32;

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
    tmp_assign_source_33 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_RankWarning, tmp_assign_source_33 );
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

    tmp_assign_source_34 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_1_poly(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly, tmp_assign_source_34 );
    tmp_assign_source_35 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_2_roots(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_roots, tmp_assign_source_35 );
    tmp_defaults_1 = const_tuple_int_pos_1_none_tuple;
    tmp_assign_source_36 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_3_polyint( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyint, tmp_assign_source_36 );
    tmp_defaults_2 = const_tuple_int_pos_1_tuple;
    tmp_assign_source_37 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_4_polyder( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyder, tmp_assign_source_37 );
    tmp_defaults_3 = const_tuple_none_false_none_false_tuple;
    tmp_assign_source_38 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_5_polyfit( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyfit, tmp_assign_source_38 );
    tmp_assign_source_39 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_6_polyval(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyval, tmp_assign_source_39 );
    tmp_assign_source_40 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_7_polyadd(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polyadd, tmp_assign_source_40 );
    tmp_assign_source_41 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_8_polysub(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polysub, tmp_assign_source_41 );
    tmp_assign_source_42 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_9_polymul(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polymul, tmp_assign_source_42 );
    tmp_assign_source_43 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_10_polydiv(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_polydiv, tmp_assign_source_43 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 912;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_compile );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 912;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 912;
    tmp_assign_source_44 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_digest_890a188d39e55adb81cbf78ea2c7a2e8_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 912;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain__poly_mat, tmp_assign_source_44 );
    tmp_defaults_4 = const_tuple_int_pos_70_tuple;
    tmp_assign_source_45 = MAKE_FUNCTION_numpy$lib$polynomial$$$function_11__raise_power( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain__raise_power, tmp_assign_source_45 );
    tmp_assign_source_46 = PyTuple_New( 1 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_46, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_46;

    tmp_assign_source_47 = impl_numpy$lib$polynomial$$$class_2_poly1d( NULL );
    assert( tmp_assign_source_47 != NULL );
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_47;

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
    tmp_assign_source_48 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 940;
        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    tmp_assign_source_48 = SELECT_METACLASS( tmp_bases_name_2, GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_48;

    tmp_called_name_3 = tmp_class_creation_2__metaclass;

    tmp_args_element_name_4 = const_str_plain_poly1d;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    frame_module->f_lineno = 940;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_49 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 940;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_49;

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
    tmp_assign_source_50 = tmp_class_creation_2__class;

    UPDATE_STRING_DICT0( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_poly1d, tmp_assign_source_50 );
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

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 1278;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_simplefilter );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1278;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = const_str_plain_always;
    tmp_args_element_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$polynomial, (Nuitka_StringObject *)const_str_plain_RankWarning );

    if (unlikely( tmp_args_element_name_8 == NULL ))
    {
        tmp_args_element_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RankWarning );
    }

    if ( tmp_args_element_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "RankWarning" );
        exception_tb = NULL;

        exception_lineno = 1278;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 1278;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1278;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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

    return MOD_RETURN_VALUE( module_numpy$lib$polynomial );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
