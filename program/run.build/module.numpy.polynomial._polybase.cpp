/* Generated code for Python source for module 'numpy.polynomial._polybase'
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

/* The _module_numpy$polynomial$_polybase is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial$_polybase;
PyDictObject *moduledict_numpy$polynomial$_polybase;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
static PyObject *const_str_digest_b42beed796d24bd6809cc4eec294d8d4;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain___radd__;
extern PyObject *const_int_pos_100;
static PyObject *const_tuple_efb99f319903cc1e133aba640e0df28e_tuple;
static PyObject *const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple;
extern PyObject *const_list_int_0_list;
extern PyObject *const_tuple_str_plain_self_str_plain_other_tuple;
static PyObject *const_str_plain_has_samewindow;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_c1173a617796a82a0814a08106680f7a_tuple;
extern PyObject *const_str_plain_window;
extern PyObject *const_str_plain_cls;
extern PyObject *const_str_plain_as_series;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple;
extern PyObject *const_str_plain___add__;
static PyObject *const_str_plain_basis;
extern PyObject *const_str_plain_maxpower;
extern PyObject *const_str_plain__der;
extern PyObject *const_str_plain___sub__;
static PyObject *const_str_digest_ebed222bae14d5baea3d6e14020bd482;
extern PyObject *const_str_plain_trimcoef;
static PyObject *const_str_plain_rnew;
extern PyObject *const_str_plain__fit;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_e7f38fd6b94eee09ef46595bfaa612f6;
extern PyObject *const_str_plain__pow;
extern PyObject *const_str_plain___repr__;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain___ne__;
extern PyObject *const_str_plain_np;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_Number;
extern PyObject *const_str_plain_abstractmethod;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_ideg;
static PyObject *const_str_digest_5c3873fd0d998cd8e83d826364b73c58;
extern PyObject *const_str_plain_ABCPolyBase;
extern PyObject *const_str_plain_w;
extern PyObject *const_float_1_0;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_3d71454922bd253639ef60b0947a48ef;
static PyObject *const_str_digest_ef48f7ae9a091820ceb23e5c5c670243;
extern PyObject *const_str_plain_off;
static PyObject *const_str_digest_98e31202befde89b11571b0707e8d968;
extern PyObject *const_dict_ee9b50b2ea01af7ea63a79da3e3468b3;
extern PyObject *const_int_pos_1000;
static PyObject *const_str_plain_fit;
extern PyObject *const_str_plain_mapparms;
static PyObject *const_str_plain_othercoef;
extern PyObject *const_str_plain_rcond;
static PyObject *const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple;
extern PyObject *const_str_plain_format;
extern PyObject *const_str_plain___mul__;
extern PyObject *const_str_plain_integ;
static PyObject *const_tuple_str_plain_self_str_plain_dict_tuple;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_digest_55d9eb6c088724632d5321a71831e4a8;
extern PyObject *const_str_plain_status;
static PyObject *const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple;
static PyObject *const_str_plain_form;
extern PyObject *const_str_plain___eq__;
extern PyObject *const_str_plain_numbers;
extern PyObject *const_list_int_pos_1_list;
extern PyObject *const_str_plain___str__;
extern PyObject *const_str_plain_xnew;
extern PyObject *const_str_plain___getstate__;
extern PyObject *const_str_plain_kind;
static PyObject *const_str_digest_67732dba2209beca762664be526ce3ff;
extern PyObject *const_str_plain___rfloordiv__;
static PyObject *const_str_plain_abstractproperty;
static PyObject *const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain_lbnd;
static PyObject *const_tuple_07471bd0a9d392cf7751549f090c291f_tuple;
static PyObject *const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple;
extern PyObject *const_str_plain_abc;
extern PyObject *const_str_plain_domain;
static PyObject *const_str_plain_cutdeg;
static PyObject *const_tuple_str_plain_self_str_plain_deg_tuple;
static PyObject *const_str_digest_acf557064045411a8e7be3ebc065dd9c;
static PyObject *const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple;
extern PyObject *const_str_plain___floordiv__;
static PyObject *const_str_digest_5dae058d009b7a6670aa297718f6267e;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___setstate__;
static PyObject *const_str_plain_has_samecoef;
static PyObject *const_str_plain__get_coefficients;
static PyObject *const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple;
extern PyObject *const_str_plain___rdiv__;
static PyObject *const_str_digest_2840a70f92a629f3a4870b2cdbc33511;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___mod__;
static PyObject *const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple;
extern PyObject *const_str_plain___module__;
static PyObject *const_str_digest_10042ca87e4ab2b5b839d8b6298c44c1;
extern PyObject *const_str_plain___div__;
extern PyObject *const_str_plain__mul;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain___metaclass__;
extern PyObject *const_str_plain__line;
static PyObject *const_tuple_str_plain_self_str_plain_ret_tuple;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain___init__;
extern PyObject *const_tuple_str_plain_Number_tuple;
extern PyObject *const_int_pos_2;
static PyObject *const_str_digest_8f0d4dcf823408b98925ed1444c1d1eb;
extern PyObject *const_tuple_none_none_tuple;
static PyObject *const_str_plain_has_samedomain;
extern PyObject *const_str_plain___array_priority__;
extern PyObject *const_str_plain__sub;
extern PyObject *const_str_plain__div;
extern PyObject *const_str_plain___rtruediv__;
static PyObject *const_str_digest_78fa2448fcb3c239d1a740c0b7d98b19;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple;
static PyObject *const_str_digest_b245160a1e9321f457c87c4934f565c8;
static PyObject *const_str_digest_058dc8328bcd097c8ca82772f5b011b9;
static PyObject *const_str_digest_c552a162a573bebaa10322a24f45277b;
extern PyObject *const_str_plain___pos__;
static PyObject *const_str_plain_fromroots;
static PyObject *const_str_digest_f8e029e75f7a514fa730097cbce45802;
static PyObject *const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain___hash__;
static PyObject *const_str_plain_has_sametype;
extern PyObject *const_str_plain___divmod__;
extern PyObject *const_str_plain___truediv__;
extern PyObject *const_str_plain_all;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain_coef;
static PyObject *const_str_plain_degree;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_pu;
extern PyObject *const_str_plain__add;
extern PyObject *const_str_plain_scl;
extern PyObject *const_str_plain_rem;
static PyObject *const_str_digest_64ef2c5ae273200dd6a59733c0c92917;
extern PyObject *const_str_plain__int;
extern PyObject *const_str_plain_other;
extern PyObject *const_str_plain_truncate;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_ret;
static PyObject *const_str_digest_a6e37a6cdce92a6b25f46856f4f04658;
extern PyObject *const_str_plain_res;
static PyObject *const_tuple_str_plain_self_str_plain_roots_tuple;
static PyObject *const_str_digest_3f3e88a2b5ee9a848a5e07299875e4e1;
extern PyObject *const_str_plain_nickname;
extern PyObject *const_str_plain_m;
extern PyObject *const_str_plain_n;
static PyObject *const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_e;
extern PyObject *const_str_plain__val;
extern PyObject *const_str_plain_mapdomain;
static PyObject *const_str_digest_2b9498cf29ec706ed018bb8515699045;
static PyObject *const_str_digest_a621aebae32306063eedea7c4a7bdebd;
extern PyObject *const_str_plain_trim;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_digest_a7636f57d1f8f80548278378b7bf84e2;
static PyObject *const_str_digest_7aad98442226938245bb06c8fd0bcdbf;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain___rmul__;
extern PyObject *const_str_plain_deriv;
extern PyObject *const_str_plain_roots;
extern PyObject *const_str_plain___rdivmod__;
extern PyObject *const_str_plain___neg__;
extern PyObject *const_str_plain_full;
static PyObject *const_list_str_plain_ABCPolyBase_list;
extern PyObject *const_str_plain_deg;
extern PyObject *const_str_plain__fromroots;
extern PyObject *const_str_plain_cast;
extern PyObject *const_str_plain__roots;
static PyObject *const_str_digest_070d2df2cae1dff89fa1d1b4ead50a9e;
extern PyObject *const_str_plain_convert;
static PyObject *const_str_plain_series;
extern PyObject *const_str_plain_quo;
static PyObject *const_str_plain_isize;
extern PyObject *const_str_plain___rmod__;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
static PyObject *const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___pow__;
static PyObject *const_tuple_int_pos_100_none_tuple;
extern PyObject *const_tuple_str_plain_polyutils_tuple;
extern PyObject *const_str_plain___len__;
static PyObject *const_str_digest_5c1672ce023f467aa593f17c1716b98a;
extern PyObject *const_tuple_none_none_none_tuple;
static PyObject *const_str_digest_71dffe55807a4844520f7d312dc1cdd9;
static PyObject *const_tuple_d191ce86201e61965aeff10c517a6f57_tuple;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_a8b047c55fad201071d372dfb7ac4cca;
static PyObject *const_tuple_none_none_false_none_none_tuple;
static PyObject *const_str_digest_5cff95afec2fedfa77694f6d8c7142ca;
extern PyObject *const_str_empty;
static PyObject *const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple;
static PyObject *const_str_digest_151b92710a27f5234231f69b96a29708;
static PyObject *const_str_digest_c6764a6d39f227f5a7a04f77b96f3b53;
extern PyObject *const_str_plain_polyutils;
extern PyObject *const_str_plain___rsub__;
static PyObject *const_tuple_a6334f3be40d0f7326867a3610feb525_tuple;
extern PyObject *const_str_plain_identity;
static PyObject *const_str_digest_f9e681268eb7ba80eeee2a207dad54b2;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_b6697fa852b58bbd73e9a86b2370791e;
static PyObject *const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple;
extern PyObject *const_str_plain_bool;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain__polybase;
static PyObject *const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple;
extern PyObject *const_str_plain_getdomain;
static PyObject *const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_ABCMeta;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b42beed796d24bd6809cc4eec294d8d4 = UNSTREAM_STRING( &constant_bin[ 1488442 ], 111, 0 );
    const_tuple_efb99f319903cc1e133aba640e0df28e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple, 1, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple, 2, const_str_plain_kind ); Py_INCREF( const_str_plain_kind );
    PyTuple_SET_ITEM( const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple, 3, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    const_str_plain_has_samewindow = UNSTREAM_STRING( &constant_bin[ 1488553 ], 14, 1 );
    const_tuple_c1173a617796a82a0814a08106680f7a_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_c1173a617796a82a0814a08106680f7a_tuple, 0, const_str_plain_ABCMeta ); Py_INCREF( const_str_plain_ABCMeta );
    PyTuple_SET_ITEM( const_tuple_c1173a617796a82a0814a08106680f7a_tuple, 1, const_str_plain_abstractmethod ); Py_INCREF( const_str_plain_abstractmethod );
    const_str_plain_abstractproperty = UNSTREAM_STRING( &constant_bin[ 1488567 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_c1173a617796a82a0814a08106680f7a_tuple, 2, const_str_plain_abstractproperty ); Py_INCREF( const_str_plain_abstractproperty );
    const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_str_plain_basis = UNSTREAM_STRING( &constant_bin[ 1487977 ], 5, 1 );
    const_str_digest_ebed222bae14d5baea3d6e14020bd482 = UNSTREAM_STRING( &constant_bin[ 1488583 ], 26, 0 );
    const_str_plain_rnew = UNSTREAM_STRING( &constant_bin[ 1488609 ], 4, 1 );
    const_str_digest_e7f38fd6b94eee09ef46595bfaa612f6 = UNSTREAM_STRING( &constant_bin[ 1488613 ], 785, 0 );
    const_str_digest_5c3873fd0d998cd8e83d826364b73c58 = UNSTREAM_STRING( &constant_bin[ 1489398 ], 958, 0 );
    const_str_digest_3d71454922bd253639ef60b0947a48ef = UNSTREAM_STRING( &constant_bin[ 1490356 ], 659, 0 );
    const_str_digest_ef48f7ae9a091820ceb23e5c5c670243 = UNSTREAM_STRING( &constant_bin[ 1491015 ], 1442, 0 );
    const_str_digest_98e31202befde89b11571b0707e8d968 = UNSTREAM_STRING( &constant_bin[ 1492457 ], 319, 0 );
    const_str_plain_fit = UNSTREAM_STRING( &constant_bin[ 108847 ], 3, 1 );
    const_str_plain_othercoef = UNSTREAM_STRING( &constant_bin[ 1492776 ], 9, 1 );
    const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 1, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 3, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 4, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 5, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 6, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 7, const_str_plain_rnew ); Py_INCREF( const_str_plain_rnew );
    PyTuple_SET_ITEM( const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 8, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_tuple_str_plain_self_str_plain_dict_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dict_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_dict_tuple, 1, const_str_plain_dict ); Py_INCREF( const_str_plain_dict );
    const_str_digest_55d9eb6c088724632d5321a71831e4a8 = UNSTREAM_STRING( &constant_bin[ 1492785 ], 14, 0 );
    const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 3, const_str_plain_lbnd ); Py_INCREF( const_str_plain_lbnd );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 4, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 5, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 6, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_str_plain_form = UNSTREAM_STRING( &constant_bin[ 794 ], 4, 1 );
    const_str_digest_67732dba2209beca762664be526ce3ff = UNSTREAM_STRING( &constant_bin[ 1492799 ], 14, 0 );
    const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 1, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 2, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 3, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 4, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 5, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple, 2, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple, 3, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    const_tuple_07471bd0a9d392cf7751549f090c291f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_07471bd0a9d392cf7751549f090c291f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_07471bd0a9d392cf7751549f090c291f_tuple, 1, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_07471bd0a9d392cf7751549f090c291f_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_07471bd0a9d392cf7751549f090c291f_tuple, 3, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    const_str_plain_series = UNSTREAM_STRING( &constant_bin[ 2931 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple, 1, const_str_plain_series ); Py_INCREF( const_str_plain_series );
    PyTuple_SET_ITEM( const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple, 3, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    const_str_plain_cutdeg = UNSTREAM_STRING( &constant_bin[ 1492813 ], 6, 1 );
    const_tuple_str_plain_self_str_plain_deg_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_deg_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_deg_tuple, 1, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    const_str_digest_acf557064045411a8e7be3ebc065dd9c = UNSTREAM_STRING( &constant_bin[ 1492819 ], 822, 0 );
    const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple, 1, const_str_plain_size ); Py_INCREF( const_str_plain_size );
    const_str_plain_isize = UNSTREAM_STRING( &constant_bin[ 1493641 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple, 2, const_str_plain_isize ); Py_INCREF( const_str_plain_isize );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple, 3, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_str_digest_5dae058d009b7a6670aa297718f6267e = UNSTREAM_STRING( &constant_bin[ 1493646 ], 258, 0 );
    const_str_plain_has_samecoef = UNSTREAM_STRING( &constant_bin[ 1493904 ], 12, 1 );
    const_str_plain__get_coefficients = UNSTREAM_STRING( &constant_bin[ 1493916 ], 17, 1 );
    const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 1, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 2, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 3, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    PyTuple_SET_ITEM( const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 4, const_str_plain_ideg ); Py_INCREF( const_str_plain_ideg );
    const_str_digest_2840a70f92a629f3a4870b2cdbc33511 = UNSTREAM_STRING( &constant_bin[ 1493933 ], 23, 0 );
    const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple, 1, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple, 2, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple, 3, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    const_str_digest_10042ca87e4ab2b5b839d8b6298c44c1 = UNSTREAM_STRING( &constant_bin[ 1493956 ], 284, 0 );
    const_tuple_str_plain_self_str_plain_ret_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ret_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_ret_tuple, 1, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_digest_8f0d4dcf823408b98925ed1444c1d1eb = UNSTREAM_STRING( &constant_bin[ 1494240 ], 32, 0 );
    const_str_plain_has_samedomain = UNSTREAM_STRING( &constant_bin[ 1494272 ], 14, 1 );
    const_str_digest_78fa2448fcb3c239d1a740c0b7d98b19 = UNSTREAM_STRING( &constant_bin[ 1494286 ], 1011, 0 );
    const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 2, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_str_digest_b245160a1e9321f457c87c4934f565c8 = UNSTREAM_STRING( &constant_bin[ 1495297 ], 811, 0 );
    const_str_digest_058dc8328bcd097c8ca82772f5b011b9 = UNSTREAM_STRING( &constant_bin[ 1496108 ], 1036, 0 );
    const_str_digest_c552a162a573bebaa10322a24f45277b = UNSTREAM_STRING( &constant_bin[ 1497144 ], 639, 0 );
    const_str_plain_fromroots = UNSTREAM_STRING( &constant_bin[ 1497783 ], 9, 1 );
    const_str_digest_f8e029e75f7a514fa730097cbce45802 = UNSTREAM_STRING( &constant_bin[ 1497792 ], 14, 0 );
    const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 2, const_str_plain_quo ); Py_INCREF( const_str_plain_quo );
    PyTuple_SET_ITEM( const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 3, const_str_plain_rem ); Py_INCREF( const_str_plain_rem );
    PyTuple_SET_ITEM( const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_plain_has_sametype = UNSTREAM_STRING( &constant_bin[ 1497806 ], 12, 1 );
    const_str_plain_degree = UNSTREAM_STRING( &constant_bin[ 1045572 ], 6, 1 );
    const_str_digest_64ef2c5ae273200dd6a59733c0c92917 = UNSTREAM_STRING( &constant_bin[ 1497818 ], 651, 0 );
    const_str_digest_a6e37a6cdce92a6b25f46856f4f04658 = UNSTREAM_STRING( &constant_bin[ 1498469 ], 3192, 0 );
    const_tuple_str_plain_self_str_plain_roots_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_roots_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_roots_tuple, 1, const_str_plain_roots ); Py_INCREF( const_str_plain_roots );
    const_str_digest_3f3e88a2b5ee9a848a5e07299875e4e1 = UNSTREAM_STRING( &constant_bin[ 1501661 ], 423, 0 );
    const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple, 2, const_str_plain_form ); Py_INCREF( const_str_plain_form );
    const_str_digest_2b9498cf29ec706ed018bb8515699045 = UNSTREAM_STRING( &constant_bin[ 1502084 ], 300, 0 );
    const_str_digest_a621aebae32306063eedea7c4a7bdebd = UNSTREAM_STRING( &constant_bin[ 1502384 ], 47, 0 );
    const_str_digest_7aad98442226938245bb06c8fd0bcdbf = UNSTREAM_STRING( &constant_bin[ 1502431 ], 722, 0 );
    const_list_str_plain_ABCPolyBase_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_ABCPolyBase_list, 0, const_str_plain_ABCPolyBase ); Py_INCREF( const_str_plain_ABCPolyBase );
    const_str_digest_070d2df2cae1dff89fa1d1b4ead50a9e = UNSTREAM_STRING( &constant_bin[ 1503153 ], 1226, 0 );
    const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 2, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 3, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 4, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    PyTuple_SET_ITEM( const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 5, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_tuple_int_pos_100_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100_none_tuple, 0, const_int_pos_100 ); Py_INCREF( const_int_pos_100 );
    PyTuple_SET_ITEM( const_tuple_int_pos_100_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_digest_5c1672ce023f467aa593f17c1716b98a = UNSTREAM_STRING( &constant_bin[ 1504379 ], 198, 0 );
    const_str_digest_71dffe55807a4844520f7d312dc1cdd9 = UNSTREAM_STRING( &constant_bin[ 1504577 ], 36, 0 );
    const_tuple_d191ce86201e61965aeff10c517a6f57_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_d191ce86201e61965aeff10c517a6f57_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_d191ce86201e61965aeff10c517a6f57_tuple, 1, const_str_plain_format ); Py_INCREF( const_str_plain_format );
    PyTuple_SET_ITEM( const_tuple_d191ce86201e61965aeff10c517a6f57_tuple, 2, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_d191ce86201e61965aeff10c517a6f57_tuple, 3, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_str_digest_a8b047c55fad201071d372dfb7ac4cca = UNSTREAM_STRING( &constant_bin[ 1504613 ], 31, 0 );
    const_tuple_none_none_false_none_none_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_none_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_none_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_none_false_none_none_tuple, 4, Py_None ); Py_INCREF( Py_None );
    const_str_digest_5cff95afec2fedfa77694f6d8c7142ca = UNSTREAM_STRING( &constant_bin[ 1504644 ], 963, 0 );
    const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple, 1, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple, 2, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    const_str_digest_151b92710a27f5234231f69b96a29708 = UNSTREAM_STRING( &constant_bin[ 1505607 ], 319, 0 );
    const_str_digest_c6764a6d39f227f5a7a04f77b96f3b53 = UNSTREAM_STRING( &constant_bin[ 1505926 ], 327, 0 );
    const_tuple_a6334f3be40d0f7326867a3610feb525_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 2, const_str_plain_othercoef ); Py_INCREF( const_str_plain_othercoef );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 3, const_str_plain_quo ); Py_INCREF( const_str_plain_quo );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 4, const_str_plain_rem ); Py_INCREF( const_str_plain_rem );
    PyTuple_SET_ITEM( const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 5, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_str_digest_f9e681268eb7ba80eeee2a207dad54b2 = UNSTREAM_STRING( &constant_bin[ 1506253 ], 68, 0 );
    const_str_digest_b6697fa852b58bbd73e9a86b2370791e = UNSTREAM_STRING( &constant_bin[ 1506321 ], 36, 0 );
    const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple = PyTuple_New( 13 );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 2, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 3, const_str_plain_deg ); Py_INCREF( const_str_plain_deg );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 4, const_str_plain_domain ); Py_INCREF( const_str_plain_domain );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 5, const_str_plain_rcond ); Py_INCREF( const_str_plain_rcond );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 6, const_str_plain_full ); Py_INCREF( const_str_plain_full );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 7, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 8, const_str_plain_window ); Py_INCREF( const_str_plain_window );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 9, const_str_plain_xnew ); Py_INCREF( const_str_plain_xnew );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 10, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 11, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 12, const_str_plain_status ); Py_INCREF( const_str_plain_status );
    const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 1, const_str_plain_other ); Py_INCREF( const_str_plain_other );
    PyTuple_SET_ITEM( const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 2, const_str_plain_othercoef ); Py_INCREF( const_str_plain_othercoef );
    PyTuple_SET_ITEM( const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 3, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );
    PyTuple_SET_ITEM( const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 4, const_str_plain_e ); Py_INCREF( const_str_plain_e );
    const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 1, const_str_plain_m ); Py_INCREF( const_str_plain_m );
    PyTuple_SET_ITEM( const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 2, const_str_plain_off ); Py_INCREF( const_str_plain_off );
    PyTuple_SET_ITEM( const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 3, const_str_plain_scl ); Py_INCREF( const_str_plain_scl );
    PyTuple_SET_ITEM( const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 4, const_str_plain_coef ); Py_INCREF( const_str_plain_coef );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$polynomial$_polybase( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_2dbf602fdd6a23a6d8d2588eeff4e58e;
static PyCodeObject *codeobj_92eba166a6c42a2ead91913fb0a99ac0;
static PyCodeObject *codeobj_d00e707f19839747cb15fec314349ab2;
static PyCodeObject *codeobj_1111887ba666da2306967d03573fcc86;
static PyCodeObject *codeobj_eb7825935c95194a150298c38b823731;
static PyCodeObject *codeobj_df06141252fe8e42331fa270840ce018;
static PyCodeObject *codeobj_52174b5574f9ac9df4ebf206a68a436e;
static PyCodeObject *codeobj_324951ce42c3b0834aa9bfc6e44d76c6;
static PyCodeObject *codeobj_668c6f1a4215c2fb4b859cdf4e353702;
static PyCodeObject *codeobj_fc7d7820fc1e8f5ea2e919d830676148;
static PyCodeObject *codeobj_b4aef6d21091e94862c5fca95931b4f6;
static PyCodeObject *codeobj_0bc389874eeee8db697bb4c1e3a10c38;
static PyCodeObject *codeobj_a7b8660214ebc34bc4a026ff95004ab3;
static PyCodeObject *codeobj_4bcfa00520e8c52382d8fb1dabdfe6ca;
static PyCodeObject *codeobj_37f9964a9faf856134135c4b592e7f5a;
static PyCodeObject *codeobj_c1bbe9474c48432d604f317320001741;
static PyCodeObject *codeobj_89ab0d315c24c7a4ab8dbcb7a4b93e6d;
static PyCodeObject *codeobj_1f2352523168a8948e0fdc6b47a4cf17;
static PyCodeObject *codeobj_9f6359c5e67b7628000c76a7ee8bc3b9;
static PyCodeObject *codeobj_78c9e3deb5108a625af3110f1c35fa6c;
static PyCodeObject *codeobj_d61e606fd45895a2fe8f5c8c3cd06b74;
static PyCodeObject *codeobj_9307f0d808db63b1869e3422be33c006;
static PyCodeObject *codeobj_d005315163298bb71821bf4825b24fc7;
static PyCodeObject *codeobj_d7eaa845a66d33b26570846d0eec9998;
static PyCodeObject *codeobj_8c89a14807349796e51650e90a3509db;
static PyCodeObject *codeobj_4265356bc95faac6052efbea381c1d6d;
static PyCodeObject *codeobj_1ae48e902b64ace274a7717334d96168;
static PyCodeObject *codeobj_d612018f277e45fa890733cf86b2ca28;
static PyCodeObject *codeobj_bdb9331fbde6d8cf7606d440a71a7bcf;
static PyCodeObject *codeobj_c8abe00267d70a5b2e820dbd187811cb;
static PyCodeObject *codeobj_9b163e94a5e3f0ed301985ec4a8bdee7;
static PyCodeObject *codeobj_2feda23cbbb869dff73da58395f07117;
static PyCodeObject *codeobj_105ee80b57314b083c662bb0fd40c928;
static PyCodeObject *codeobj_aa1bc9e62cbe4d8495b8406590f8cb32;
static PyCodeObject *codeobj_b687f4dededf9bac43cf0cb3249cc277;
static PyCodeObject *codeobj_bb606110de77c0f483229ed816aec1dc;
static PyCodeObject *codeobj_a8607b1c59513998ceefb971c2c50494;
static PyCodeObject *codeobj_d7ccd2ba08345212f89e35f785ddc4d7;
static PyCodeObject *codeobj_1e718a9aa0f4819704900420f1bf7621;
static PyCodeObject *codeobj_43944934f00cc2564dffc9cc806d039d;
static PyCodeObject *codeobj_0362580929e6ad5cf2c826df216f9275;
static PyCodeObject *codeobj_b0e86ec813a9ffeadebdcdb57338fd61;
static PyCodeObject *codeobj_b602afd529ff2f86f6eef8ce1d34e7cb;
static PyCodeObject *codeobj_103eb3165b496420e1c74ded98bdab43;
static PyCodeObject *codeobj_d18d53a70a996889507b9a000758813c;
static PyCodeObject *codeobj_402085c94dd88b92b5dbc95b4ee8739a;
static PyCodeObject *codeobj_14d2452fea42da6878d8da7f796e6b79;
static PyCodeObject *codeobj_68dabcb2b67de7b3f160eab9af783ea1;
static PyCodeObject *codeobj_d5d0d3ed720c7606409d9ef170be195b;
static PyCodeObject *codeobj_2eaaf553800800fe7229dd39a5dfb315;
static PyCodeObject *codeobj_48c8a7b01afc27d31790e2fa8f20f937;
static PyCodeObject *codeobj_d0315b7f684ad851143dd94922e6ba8f;
static PyCodeObject *codeobj_b444c10234a30b272a217ebda9b1d539;
static PyCodeObject *codeobj_4fbff2df7ddc0030f2dbcb27d1cbb272;
static PyCodeObject *codeobj_b3a5d77505ba48ab7de433c863507e5b;
static PyCodeObject *codeobj_7cfe91b235313fda4363b02b2d5c7940;
static PyCodeObject *codeobj_7f44bbcea722647170deb6d8e8f85e00;
static PyCodeObject *codeobj_c9083308382465f869c3aad1f4960335;
static PyCodeObject *codeobj_0cf55c8666cf3f06d50f8499b0b05ebb;
static PyCodeObject *codeobj_fb6cb8fe37a92c4f03a2f64c7a81db9f;
static PyCodeObject *codeobj_f07d4ff064fffd55efcd40cfc5a1dff5;
static PyCodeObject *codeobj_4ab7f983bc6249cf990b87bcb3a8a187;
static PyCodeObject *codeobj_e1fbf66bc44c7fa5d7b964c3fc569fb8;
static PyCodeObject *codeobj_699f5eb3b1a6006dbdda91e94473a41f;
static PyCodeObject *codeobj_189d274098273a7ae4ec1a7085f772be;
static PyCodeObject *codeobj_0f469c3ac1acc83e3f36ceb7987d1b02;
static PyCodeObject *codeobj_83fbf8a083e2b11e4e28fe3fa37d38ba;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f9e681268eb7ba80eeee2a207dad54b2;
    codeobj_2dbf602fdd6a23a6d8d2588eeff4e58e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ABCPolyBase, 19, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_92eba166a6c42a2ead91913fb0a99ac0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___add__, 309, const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d00e707f19839747cb15fec314349ab2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 290, const_tuple_str_plain_self_str_plain_arg_str_plain_off_str_plain_scl_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1111887ba666da2306967d03573fcc86 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___div__, 339, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_eb7825935c95194a150298c38b823731 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___divmod__, 364, const_tuple_a6334f3be40d0f7326867a3610feb525_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_df06141252fe8e42331fa270840ce018 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___eq__, 437, const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_52174b5574f9ac9df4ebf206a68a436e = MAKE_CODEOBJ( module_filename_obj, const_str_plain___floordiv__, 352, const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_324951ce42c3b0834aa9bfc6e44d76c6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___getstate__, 278, const_tuple_str_plain_self_str_plain_ret_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_668c6f1a4215c2fb4b859cdf4e353702 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 246, const_tuple_07471bd0a9d392cf7751549f090c291f_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fc7d7820fc1e8f5ea2e919d830676148 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 295, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b4aef6d21091e94862c5fca95931b4f6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___len__, 298, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0bc389874eeee8db697bb4c1e3a10c38 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___mod__, 358, const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a7b8660214ebc34bc4a026ff95004ab3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___mul__, 329, const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4bcfa00520e8c52382d8fb1dabdfe6ca = MAKE_CODEOBJ( module_filename_obj, const_str_plain___ne__, 445, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_37f9964a9faf856134135c4b592e7f5a = MAKE_CODEOBJ( module_filename_obj, const_str_plain___neg__, 303, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c1bbe9474c48432d604f317320001741 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___pos__, 306, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_89ab0d315c24c7a4ab8dbcb7a4b93e6d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___pow__, 376, const_tuple_str_plain_self_str_plain_other_str_plain_coef_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f2352523168a8948e0fdc6b47a4cf17 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___radd__, 381, const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9f6359c5e67b7628000c76a7ee8bc3b9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rdiv__, 402, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_78c9e3deb5108a625af3110f1c35fa6c = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rdivmod__, 423, const_tuple_e31494ef5bd70d2798c8bcdcd1840a8e_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d61e606fd45895a2fe8f5c8c3cd06b74 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___repr__, 262, const_tuple_021b98d542c6bb6f4264462f89e29b99_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9307f0d808db63b1869e3422be33c006 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rfloordiv__, 411, const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d005315163298bb71821bf4825b24fc7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rmod__, 417, const_tuple_str_plain_self_str_plain_other_str_plain_res_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d7eaa845a66d33b26570846d0eec9998 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rmul__, 395, const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_8c89a14807349796e51650e90a3509db = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rsub__, 388, const_tuple_str_plain_self_str_plain_other_str_plain_coef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4265356bc95faac6052efbea381c1d6d = MAKE_CODEOBJ( module_filename_obj, const_str_plain___rtruediv__, 406, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1ae48e902b64ace274a7717334d96168 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___setstate__, 285, const_tuple_str_plain_self_str_plain_dict_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d612018f277e45fa890733cf86b2ca28 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___str__, 270, const_tuple_d191ce86201e61965aeff10c517a6f57_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bdb9331fbde6d8cf7606d440a71a7bcf = MAKE_CODEOBJ( module_filename_obj, const_str_plain___sub__, 319, const_tuple_00c77c5cbd1f12b805a231555a05bcc6_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c8abe00267d70a5b2e820dbd187811cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain___truediv__, 343, const_tuple_str_plain_self_str_plain_other_str_plain_form_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9b163e94a5e3f0ed301985ec4a8bdee7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__add, 85, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2feda23cbbb869dff73da58395f07117 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__der, 113, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_105ee80b57314b083c662bb0fd40c928 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__div, 97, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_aa1bc9e62cbe4d8495b8406590f8cb32 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fit, 117, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b687f4dededf9bac43cf0cb3249cc277 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__fromroots, 129, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bb606110de77c0f483229ed816aec1dc = MAKE_CODEOBJ( module_filename_obj, const_str_plain__get_coefficients, 210, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a8607b1c59513998ceefb971c2c50494 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__int, 109, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d7ccd2ba08345212f89e35f785ddc4d7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__line, 121, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1e718a9aa0f4819704900420f1bf7621 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__mul, 93, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_43944934f00cc2564dffc9cc806d039d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__polybase, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0362580929e6ad5cf2c826df216f9275 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__pow, 101, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b0e86ec813a9ffeadebdcdb57338fd61 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__roots, 125, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b602afd529ff2f86f6eef8ce1d34e7cb = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sub, 89, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_103eb3165b496420e1c74ded98bdab43 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__val, 105, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d18d53a70a996889507b9a000758813c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_basis, 886, const_tuple_d2dde1468ae7b92aa5a0d98665cb72a2_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_402085c94dd88b92b5dbc95b4ee8739a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cast, 925, const_tuple_cb9d9cdba1cbefbb9f0c6cc1b67846b9_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_14d2452fea42da6878d8da7f796e6b79 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_convert, 553, const_tuple_305e5419bc196084d84d34a30e4f9fe4_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_68dabcb2b67de7b3f160eab9af783ea1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_copy, 452, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d5d0d3ed720c7606409d9ef170be195b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_cutdeg, 476, const_tuple_str_plain_self_str_plain_deg_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2eaaf553800800fe7229dd39a5dfb315 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_degree, 463, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_48c8a7b01afc27d31790e2fa8f20f937 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_deriv, 655, const_tuple_fcd4ff3295cfeac02e58675ce57c8b9f_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d0315b7f684ad851143dd94922e6ba8f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_domain, 73, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b444c10234a30b272a217ebda9b1d539 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fit, 724, const_tuple_799a5b8bdfaa1de9a0e206d14a775955_tuple, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4fbff2df7ddc0030f2dbcb27d1cbb272 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fromroots, 812, const_tuple_c8dd4de20ca9cb9f79e5264ad5d7c3c5_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b3a5d77505ba48ab7de433c863507e5b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_samecoef, 133, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7cfe91b235313fda4363b02b2d5c7940 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_samedomain, 156, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7f44bbcea722647170deb6d8e8f85e00 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_sametype, 192, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c9083308382465f869c3aad1f4960335 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_has_samewindow, 174, const_tuple_str_plain_self_str_plain_other_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0cf55c8666cf3f06d50f8499b0b05ebb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_identity, 853, const_tuple_07fa05e38cce3dba4ed200d4aa71ff12_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fb6cb8fe37a92c4f03a2f64c7a81db9f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_integ, 622, const_tuple_b41743dc51d2e0ecf55b567fc74dc471_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f07d4ff064fffd55efcd40cfc5a1dff5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_linspace, 692, const_tuple_efb99f319903cc1e133aba640e0df28e_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4ab7f983bc6249cf990b87bcb3a8a187 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mapparms, 593, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e1fbf66bc44c7fa5d7b964c3fc569fb8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nickname, 81, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_699f5eb3b1a6006dbdda91e94473a41f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_roots, 677, const_tuple_str_plain_self_str_plain_roots_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_189d274098273a7ae4ec1a7085f772be = MAKE_CODEOBJ( module_filename_obj, const_str_plain_trim, 501, const_tuple_str_plain_self_str_plain_tol_str_plain_coef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0f469c3ac1acc83e3f36ceb7987d1b02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_truncate, 524, const_tuple_str_plain_self_str_plain_size_str_plain_isize_str_plain_coef_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_83fbf8a083e2b11e4e28fe3fa37d38ba = MAKE_CODEOBJ( module_filename_obj, const_str_plain_window, 77, const_tuple_str_plain_self_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_10__int(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_11__der(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_12__fit(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_13__line(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_14__roots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_15__fromroots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_16_has_samecoef(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_17_has_samedomain(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_18_has_samewindow(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_19_has_sametype(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_1_domain(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_20__get_coefficients(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_21___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_22___repr__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_23___str__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_24___getstate__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_25___setstate__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_26___call__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_27___iter__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_28___len__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_29___neg__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_2_window(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_30___pos__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_31___add__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_32___sub__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_33___mul__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_34___div__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_35___truediv__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_36___floordiv__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_37___mod__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_38___divmod__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_39___pow__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_3_nickname(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_40___radd__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_41___rsub__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_42___rmul__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_43___rdiv__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_44___rtruediv__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_45___rfloordiv__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_46___rmod__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_47___rdivmod__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_48___eq__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_49___ne__(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_4__add(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_50_copy(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_51_degree(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_52_cutdeg(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_53_trim( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_54_truncate(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_55_convert( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_56_mapparms(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_57_integ( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_58_deriv( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_59_roots(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_5__sub(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_60_linspace( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_61_fit( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_62_fromroots( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_63_identity( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_64_basis( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_65_cast( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_6__mul(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_7__div(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_8__pow(  );


static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_9__val(  );


// The module function definitions.
NUITKA_LOCAL_MODULE PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___metaclass__ = NULL;
    PyObject *var___hash__ = NULL;
    PyObject *var___array_priority__ = NULL;
    PyObject *var_maxpower = NULL;
    PyObject *var_domain = NULL;
    PyObject *var_window = NULL;
    PyObject *var_nickname = NULL;
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
    PyObject *var_has_samecoef = NULL;
    PyObject *var_has_samedomain = NULL;
    PyObject *var_has_samewindow = NULL;
    PyObject *var_has_sametype = NULL;
    PyObject *var__get_coefficients = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___repr__ = NULL;
    PyObject *var___str__ = NULL;
    PyObject *var___getstate__ = NULL;
    PyObject *var___setstate__ = NULL;
    PyObject *var___call__ = NULL;
    PyObject *var___iter__ = NULL;
    PyObject *var___len__ = NULL;
    PyObject *var___neg__ = NULL;
    PyObject *var___pos__ = NULL;
    PyObject *var___add__ = NULL;
    PyObject *var___sub__ = NULL;
    PyObject *var___mul__ = NULL;
    PyObject *var___div__ = NULL;
    PyObject *var___truediv__ = NULL;
    PyObject *var___floordiv__ = NULL;
    PyObject *var___mod__ = NULL;
    PyObject *var___divmod__ = NULL;
    PyObject *var___pow__ = NULL;
    PyObject *var___radd__ = NULL;
    PyObject *var___rsub__ = NULL;
    PyObject *var___rmul__ = NULL;
    PyObject *var___rdiv__ = NULL;
    PyObject *var___rtruediv__ = NULL;
    PyObject *var___rfloordiv__ = NULL;
    PyObject *var___rmod__ = NULL;
    PyObject *var___rdivmod__ = NULL;
    PyObject *var___eq__ = NULL;
    PyObject *var___ne__ = NULL;
    PyObject *var_copy = NULL;
    PyObject *var_degree = NULL;
    PyObject *var_cutdeg = NULL;
    PyObject *var_trim = NULL;
    PyObject *var_truncate = NULL;
    PyObject *var_convert = NULL;
    PyObject *var_mapparms = NULL;
    PyObject *var_integ = NULL;
    PyObject *var_deriv = NULL;
    PyObject *var_roots = NULL;
    PyObject *var_linspace = NULL;
    PyObject *var_fit = NULL;
    PyObject *var_fromroots = NULL;
    PyObject *var_identity = NULL;
    PyObject *var_basis = NULL;
    PyObject *var_cast = NULL;
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
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_element_name_20;
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
    PyObject *tmp_assign_source_70;
    PyObject *tmp_assign_source_71;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_digest_ebed222bae14d5baea3d6e14020bd482;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_ef48f7ae9a091820ceb23e5c5c670243;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2dbf602fdd6a23a6d8d2588eeff4e58e, module_numpy$polynomial$_polybase );
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
    tmp_assign_source_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_ABCMeta );

    if (unlikely( tmp_assign_source_3 == NULL ))
    {
        tmp_assign_source_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABCMeta );
    }

    if ( tmp_assign_source_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ABCMeta" );
        exception_tb = NULL;

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    assert( var___metaclass__ == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var___metaclass__ = tmp_assign_source_3;

    tmp_assign_source_4 = Py_None;
    assert( var___hash__ == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var___hash__ = tmp_assign_source_4;

    tmp_assign_source_5 = const_int_pos_1000;
    assert( var___array_priority__ == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var___array_priority__ = tmp_assign_source_5;

    tmp_assign_source_6 = const_int_pos_100;
    assert( var_maxpower == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_maxpower = tmp_assign_source_6;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractproperty );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractproperty );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractproperty" );
        exception_tb = NULL;

        exception_lineno = 73;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_1_domain(  );
    frame_function->f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    assert( var_domain == NULL );
    var_domain = tmp_assign_source_7;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractproperty );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractproperty );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractproperty" );
        exception_tb = NULL;

        exception_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_2_window(  );
    frame_function->f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    assert( var_window == NULL );
    var_window = tmp_assign_source_8;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractproperty );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractproperty );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractproperty" );
        exception_tb = NULL;

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_3_nickname(  );
    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    assert( var_nickname == NULL );
    var_nickname = tmp_assign_source_9;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_4__add(  );
    frame_function->f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    assert( var__add == NULL );
    var__add = tmp_assign_source_10;

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_5__sub(  );
    frame_function->f_lineno = 89;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto frame_exception_exit_1;
    }
    assert( var__sub == NULL );
    var__sub = tmp_assign_source_11;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_6__mul(  );
    frame_function->f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    assert( var__mul == NULL );
    var__mul = tmp_assign_source_12;

    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_7 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_7__div(  );
    frame_function->f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto frame_exception_exit_1;
    }
    assert( var__div == NULL );
    var__div = tmp_assign_source_13;

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_8__pow(  );
    frame_function->f_lineno = 101;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    assert( var__pow == NULL );
    var__pow = tmp_assign_source_14;

    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_9 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_9__val(  );
    frame_function->f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    assert( var__val == NULL );
    var__val = tmp_assign_source_15;

    tmp_called_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_10 == NULL ))
    {
        tmp_called_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_10__int(  );
    frame_function->f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    assert( var__int == NULL );
    var__int = tmp_assign_source_16;

    tmp_called_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_11 == NULL ))
    {
        tmp_called_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_11__der(  );
    frame_function->f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    assert( var__der == NULL );
    var__der = tmp_assign_source_17;

    tmp_called_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_12 == NULL ))
    {
        tmp_called_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_12 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_12__fit(  );
    frame_function->f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    assert( var__fit == NULL );
    var__fit = tmp_assign_source_18;

    tmp_called_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_13 == NULL ))
    {
        tmp_called_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_13__line(  );
    frame_function->f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_13, call_args );
    }

    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    assert( var__line == NULL );
    var__line = tmp_assign_source_19;

    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 125;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_14 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_14__roots(  );
    frame_function->f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_14, call_args );
    }

    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    assert( var__roots == NULL );
    var__roots = tmp_assign_source_20;

    tmp_called_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod );

    if (unlikely( tmp_called_name_15 == NULL ))
    {
        tmp_called_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_abstractmethod );
    }

    if ( tmp_called_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "abstractmethod" );
        exception_tb = NULL;

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_15 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_15__fromroots(  );
    frame_function->f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_15 };
        tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_15 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    assert( var__fromroots == NULL );
    var__fromroots = tmp_assign_source_21;

    tmp_assign_source_22 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_16_has_samecoef(  );
    assert( var_has_samecoef == NULL );
    var_has_samecoef = tmp_assign_source_22;

    tmp_assign_source_23 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_17_has_samedomain(  );
    assert( var_has_samedomain == NULL );
    var_has_samedomain = tmp_assign_source_23;

    tmp_assign_source_24 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_18_has_samewindow(  );
    assert( var_has_samewindow == NULL );
    var_has_samewindow = tmp_assign_source_24;

    tmp_assign_source_25 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_19_has_sametype(  );
    assert( var_has_sametype == NULL );
    var_has_sametype = tmp_assign_source_25;

    tmp_assign_source_26 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_20__get_coefficients(  );
    assert( var__get_coefficients == NULL );
    var__get_coefficients = tmp_assign_source_26;

    tmp_defaults_1 = const_tuple_none_none_tuple;
    tmp_assign_source_27 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_21___init__( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_27;

    tmp_assign_source_28 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_22___repr__(  );
    assert( var___repr__ == NULL );
    var___repr__ = tmp_assign_source_28;

    tmp_assign_source_29 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_23___str__(  );
    assert( var___str__ == NULL );
    var___str__ = tmp_assign_source_29;

    tmp_assign_source_30 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_24___getstate__(  );
    assert( var___getstate__ == NULL );
    var___getstate__ = tmp_assign_source_30;

    tmp_assign_source_31 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_25___setstate__(  );
    assert( var___setstate__ == NULL );
    var___setstate__ = tmp_assign_source_31;

    tmp_assign_source_32 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_26___call__(  );
    assert( var___call__ == NULL );
    var___call__ = tmp_assign_source_32;

    tmp_assign_source_33 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_27___iter__(  );
    assert( var___iter__ == NULL );
    var___iter__ = tmp_assign_source_33;

    tmp_assign_source_34 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_28___len__(  );
    assert( var___len__ == NULL );
    var___len__ = tmp_assign_source_34;

    tmp_assign_source_35 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_29___neg__(  );
    assert( var___neg__ == NULL );
    var___neg__ = tmp_assign_source_35;

    tmp_assign_source_36 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_30___pos__(  );
    assert( var___pos__ == NULL );
    var___pos__ = tmp_assign_source_36;

    tmp_assign_source_37 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_31___add__(  );
    assert( var___add__ == NULL );
    var___add__ = tmp_assign_source_37;

    tmp_assign_source_38 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_32___sub__(  );
    assert( var___sub__ == NULL );
    var___sub__ = tmp_assign_source_38;

    tmp_assign_source_39 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_33___mul__(  );
    assert( var___mul__ == NULL );
    var___mul__ = tmp_assign_source_39;

    tmp_assign_source_40 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_34___div__(  );
    assert( var___div__ == NULL );
    var___div__ = tmp_assign_source_40;

    tmp_assign_source_41 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_35___truediv__(  );
    assert( var___truediv__ == NULL );
    var___truediv__ = tmp_assign_source_41;

    tmp_assign_source_42 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_36___floordiv__(  );
    assert( var___floordiv__ == NULL );
    var___floordiv__ = tmp_assign_source_42;

    tmp_assign_source_43 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_37___mod__(  );
    assert( var___mod__ == NULL );
    var___mod__ = tmp_assign_source_43;

    tmp_assign_source_44 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_38___divmod__(  );
    assert( var___divmod__ == NULL );
    var___divmod__ = tmp_assign_source_44;

    tmp_assign_source_45 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_39___pow__(  );
    assert( var___pow__ == NULL );
    var___pow__ = tmp_assign_source_45;

    tmp_assign_source_46 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_40___radd__(  );
    assert( var___radd__ == NULL );
    var___radd__ = tmp_assign_source_46;

    tmp_assign_source_47 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_41___rsub__(  );
    assert( var___rsub__ == NULL );
    var___rsub__ = tmp_assign_source_47;

    tmp_assign_source_48 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_42___rmul__(  );
    assert( var___rmul__ == NULL );
    var___rmul__ = tmp_assign_source_48;

    tmp_assign_source_49 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_43___rdiv__(  );
    assert( var___rdiv__ == NULL );
    var___rdiv__ = tmp_assign_source_49;

    tmp_assign_source_50 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_44___rtruediv__(  );
    assert( var___rtruediv__ == NULL );
    var___rtruediv__ = tmp_assign_source_50;

    tmp_assign_source_51 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_45___rfloordiv__(  );
    assert( var___rfloordiv__ == NULL );
    var___rfloordiv__ = tmp_assign_source_51;

    tmp_assign_source_52 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_46___rmod__(  );
    assert( var___rmod__ == NULL );
    var___rmod__ = tmp_assign_source_52;

    tmp_assign_source_53 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_47___rdivmod__(  );
    assert( var___rdivmod__ == NULL );
    var___rdivmod__ = tmp_assign_source_53;

    tmp_assign_source_54 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_48___eq__(  );
    assert( var___eq__ == NULL );
    var___eq__ = tmp_assign_source_54;

    tmp_assign_source_55 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_49___ne__(  );
    assert( var___ne__ == NULL );
    var___ne__ = tmp_assign_source_55;

    tmp_assign_source_56 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_50_copy(  );
    assert( var_copy == NULL );
    var_copy = tmp_assign_source_56;

    tmp_assign_source_57 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_51_degree(  );
    assert( var_degree == NULL );
    var_degree = tmp_assign_source_57;

    tmp_assign_source_58 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_52_cutdeg(  );
    assert( var_cutdeg == NULL );
    var_cutdeg = tmp_assign_source_58;

    tmp_defaults_2 = const_tuple_int_0_tuple;
    tmp_assign_source_59 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_53_trim( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var_trim == NULL );
    var_trim = tmp_assign_source_59;

    tmp_assign_source_60 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_54_truncate(  );
    assert( var_truncate == NULL );
    var_truncate = tmp_assign_source_60;

    tmp_defaults_3 = const_tuple_none_none_none_tuple;
    tmp_assign_source_61 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_55_convert( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    assert( var_convert == NULL );
    var_convert = tmp_assign_source_61;

    tmp_assign_source_62 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_56_mapparms(  );
    assert( var_mapparms == NULL );
    var_mapparms = tmp_assign_source_62;

    tmp_defaults_4 = PyTuple_New( 3 );
    tmp_tuple_element_1 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_defaults_4, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = Py_None;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_4, 2, tmp_tuple_element_1 );
    tmp_assign_source_63 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_57_integ( tmp_defaults_4 );
    assert( var_integ == NULL );
    var_integ = tmp_assign_source_63;

    tmp_defaults_5 = const_tuple_int_pos_1_tuple;
    tmp_assign_source_64 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_58_deriv( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    assert( var_deriv == NULL );
    var_deriv = tmp_assign_source_64;

    tmp_assign_source_65 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_59_roots(  );
    assert( var_roots == NULL );
    var_roots = tmp_assign_source_65;

    tmp_defaults_6 = const_tuple_int_pos_100_none_tuple;
    tmp_assign_source_66 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_60_linspace( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    assert( var_linspace == NULL );
    var_linspace = tmp_assign_source_66;

    tmp_called_name_16 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_16 != NULL );
    tmp_defaults_7 = const_tuple_none_none_false_none_none_tuple;
    tmp_args_element_name_16 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_61_fit( INCREASE_REFCOUNT( tmp_defaults_7 ) );
    frame_function->f_lineno = 724;
    {
        PyObject *call_args[] = { tmp_args_element_name_16 };
        tmp_assign_source_67 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_16, call_args );
    }

    Py_DECREF( tmp_args_element_name_16 );
    if ( tmp_assign_source_67 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 724;
        goto frame_exception_exit_1;
    }
    assert( var_fit == NULL );
    var_fit = tmp_assign_source_67;

    tmp_called_name_17 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_17 != NULL );
    tmp_defaults_8 = PyTuple_New( 2 );
    tmp_tuple_element_2 = PyList_New( 0 );
    PyTuple_SET_ITEM( tmp_defaults_8, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = Py_None;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_defaults_8, 1, tmp_tuple_element_2 );
    tmp_args_element_name_17 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_62_fromroots( tmp_defaults_8 );
    frame_function->f_lineno = 812;
    {
        PyObject *call_args[] = { tmp_args_element_name_17 };
        tmp_assign_source_68 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_assign_source_68 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 812;
        goto frame_exception_exit_1;
    }
    assert( var_fromroots == NULL );
    var_fromroots = tmp_assign_source_68;

    tmp_called_name_18 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_18 != NULL );
    tmp_defaults_9 = const_tuple_none_none_tuple;
    tmp_args_element_name_18 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_63_identity( INCREASE_REFCOUNT( tmp_defaults_9 ) );
    frame_function->f_lineno = 853;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_assign_source_69 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_18, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_assign_source_69 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 853;
        goto frame_exception_exit_1;
    }
    assert( var_identity == NULL );
    var_identity = tmp_assign_source_69;

    tmp_called_name_19 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_19 != NULL );
    tmp_defaults_10 = const_tuple_none_none_tuple;
    tmp_args_element_name_19 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_64_basis( INCREASE_REFCOUNT( tmp_defaults_10 ) );
    frame_function->f_lineno = 886;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_assign_source_70 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_19, call_args );
    }

    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_assign_source_70 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 886;
        goto frame_exception_exit_1;
    }
    assert( var_basis == NULL );
    var_basis = tmp_assign_source_70;

    tmp_called_name_20 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_20 != NULL );
    tmp_defaults_11 = const_tuple_none_none_tuple;
    tmp_args_element_name_20 = MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_65_cast( INCREASE_REFCOUNT( tmp_defaults_11 ) );
    frame_function->f_lineno = 925;
    {
        PyObject *call_args[] = { tmp_args_element_name_20 };
        tmp_assign_source_71 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_20, call_args );
    }

    Py_DECREF( tmp_args_element_name_20 );
    if ( tmp_assign_source_71 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 925;
        goto frame_exception_exit_1;
    }
    assert( var_cast == NULL );
    var_cast = tmp_assign_source_71;


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

            if ( var___metaclass__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___metaclass__,
                    var___metaclass__
                );

                assert( res == 0 );
            }

            if ( var___hash__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___hash__,
                    var___hash__
                );

                assert( res == 0 );
            }

            if ( var___array_priority__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___array_priority__,
                    var___array_priority__
                );

                assert( res == 0 );
            }

            if ( var_maxpower )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxpower,
                    var_maxpower
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

            if ( var_nickname )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nickname,
                    var_nickname
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

            if ( var_has_samecoef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_has_samecoef,
                    var_has_samecoef
                );

                assert( res == 0 );
            }

            if ( var_has_samedomain )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_has_samedomain,
                    var_has_samedomain
                );

                assert( res == 0 );
            }

            if ( var_has_samewindow )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_has_samewindow,
                    var_has_samewindow
                );

                assert( res == 0 );
            }

            if ( var_has_sametype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_has_sametype,
                    var_has_sametype
                );

                assert( res == 0 );
            }

            if ( var__get_coefficients )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__get_coefficients,
                    var__get_coefficients
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

            if ( var___repr__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___repr__,
                    var___repr__
                );

                assert( res == 0 );
            }

            if ( var___str__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___str__,
                    var___str__
                );

                assert( res == 0 );
            }

            if ( var___getstate__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___getstate__,
                    var___getstate__
                );

                assert( res == 0 );
            }

            if ( var___setstate__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___setstate__,
                    var___setstate__
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

            if ( var___iter__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___iter__,
                    var___iter__
                );

                assert( res == 0 );
            }

            if ( var___len__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___len__,
                    var___len__
                );

                assert( res == 0 );
            }

            if ( var___neg__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___neg__,
                    var___neg__
                );

                assert( res == 0 );
            }

            if ( var___pos__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___pos__,
                    var___pos__
                );

                assert( res == 0 );
            }

            if ( var___add__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___add__,
                    var___add__
                );

                assert( res == 0 );
            }

            if ( var___sub__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___sub__,
                    var___sub__
                );

                assert( res == 0 );
            }

            if ( var___mul__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___mul__,
                    var___mul__
                );

                assert( res == 0 );
            }

            if ( var___div__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___div__,
                    var___div__
                );

                assert( res == 0 );
            }

            if ( var___truediv__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___truediv__,
                    var___truediv__
                );

                assert( res == 0 );
            }

            if ( var___floordiv__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___floordiv__,
                    var___floordiv__
                );

                assert( res == 0 );
            }

            if ( var___mod__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___mod__,
                    var___mod__
                );

                assert( res == 0 );
            }

            if ( var___divmod__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___divmod__,
                    var___divmod__
                );

                assert( res == 0 );
            }

            if ( var___pow__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___pow__,
                    var___pow__
                );

                assert( res == 0 );
            }

            if ( var___radd__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___radd__,
                    var___radd__
                );

                assert( res == 0 );
            }

            if ( var___rsub__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___rsub__,
                    var___rsub__
                );

                assert( res == 0 );
            }

            if ( var___rmul__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___rmul__,
                    var___rmul__
                );

                assert( res == 0 );
            }

            if ( var___rdiv__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___rdiv__,
                    var___rdiv__
                );

                assert( res == 0 );
            }

            if ( var___rtruediv__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___rtruediv__,
                    var___rtruediv__
                );

                assert( res == 0 );
            }

            if ( var___rfloordiv__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___rfloordiv__,
                    var___rfloordiv__
                );

                assert( res == 0 );
            }

            if ( var___rmod__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___rmod__,
                    var___rmod__
                );

                assert( res == 0 );
            }

            if ( var___rdivmod__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___rdivmod__,
                    var___rdivmod__
                );

                assert( res == 0 );
            }

            if ( var___eq__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___eq__,
                    var___eq__
                );

                assert( res == 0 );
            }

            if ( var___ne__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___ne__,
                    var___ne__
                );

                assert( res == 0 );
            }

            if ( var_copy )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_copy,
                    var_copy
                );

                assert( res == 0 );
            }

            if ( var_degree )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_degree,
                    var_degree
                );

                assert( res == 0 );
            }

            if ( var_cutdeg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cutdeg,
                    var_cutdeg
                );

                assert( res == 0 );
            }

            if ( var_trim )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_trim,
                    var_trim
                );

                assert( res == 0 );
            }

            if ( var_truncate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_truncate,
                    var_truncate
                );

                assert( res == 0 );
            }

            if ( var_convert )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_convert,
                    var_convert
                );

                assert( res == 0 );
            }

            if ( var_mapparms )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mapparms,
                    var_mapparms
                );

                assert( res == 0 );
            }

            if ( var_integ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_integ,
                    var_integ
                );

                assert( res == 0 );
            }

            if ( var_deriv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deriv,
                    var_deriv
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

            if ( var_linspace )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_linspace,
                    var_linspace
                );

                assert( res == 0 );
            }

            if ( var_fit )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fit,
                    var_fit
                );

                assert( res == 0 );
            }

            if ( var_fromroots )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fromroots,
                    var_fromroots
                );

                assert( res == 0 );
            }

            if ( var_identity )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_identity,
                    var_identity
                );

                assert( res == 0 );
            }

            if ( var_basis )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_basis,
                    var_basis
                );

                assert( res == 0 );
            }

            if ( var_cast )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cast,
                    var_cast
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

    if ( var___metaclass__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___metaclass__,
            var___metaclass__
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

    if ( var___array_priority__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___array_priority__,
            var___array_priority__
        );

        assert( res == 0 );
    }

    if ( var_maxpower )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_maxpower,
            var_maxpower
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

    if ( var_nickname )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_nickname,
            var_nickname
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

    if ( var_has_samecoef )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_has_samecoef,
            var_has_samecoef
        );

        assert( res == 0 );
    }

    if ( var_has_samedomain )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_has_samedomain,
            var_has_samedomain
        );

        assert( res == 0 );
    }

    if ( var_has_samewindow )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_has_samewindow,
            var_has_samewindow
        );

        assert( res == 0 );
    }

    if ( var_has_sametype )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_has_sametype,
            var_has_sametype
        );

        assert( res == 0 );
    }

    if ( var__get_coefficients )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__get_coefficients,
            var__get_coefficients
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

    if ( var___repr__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___repr__,
            var___repr__
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

    if ( var___getstate__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___getstate__,
            var___getstate__
        );

        assert( res == 0 );
    }

    if ( var___setstate__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___setstate__,
            var___setstate__
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

    if ( var___iter__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___iter__,
            var___iter__
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

    if ( var___add__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___add__,
            var___add__
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

    if ( var___mul__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___mul__,
            var___mul__
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

    if ( var___floordiv__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___floordiv__,
            var___floordiv__
        );

        assert( res == 0 );
    }

    if ( var___mod__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___mod__,
            var___mod__
        );

        assert( res == 0 );
    }

    if ( var___divmod__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___divmod__,
            var___divmod__
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

    if ( var___radd__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___radd__,
            var___radd__
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

    if ( var___rmul__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___rmul__,
            var___rmul__
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

    if ( var___rfloordiv__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___rfloordiv__,
            var___rfloordiv__
        );

        assert( res == 0 );
    }

    if ( var___rmod__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___rmod__,
            var___rmod__
        );

        assert( res == 0 );
    }

    if ( var___rdivmod__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___rdivmod__,
            var___rdivmod__
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

    if ( var_copy )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_copy,
            var_copy
        );

        assert( res == 0 );
    }

    if ( var_degree )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_degree,
            var_degree
        );

        assert( res == 0 );
    }

    if ( var_cutdeg )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_cutdeg,
            var_cutdeg
        );

        assert( res == 0 );
    }

    if ( var_trim )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_trim,
            var_trim
        );

        assert( res == 0 );
    }

    if ( var_truncate )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_truncate,
            var_truncate
        );

        assert( res == 0 );
    }

    if ( var_convert )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_convert,
            var_convert
        );

        assert( res == 0 );
    }

    if ( var_mapparms )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_mapparms,
            var_mapparms
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

    if ( var_roots )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_roots,
            var_roots
        );

        assert( res == 0 );
    }

    if ( var_linspace )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_linspace,
            var_linspace
        );

        assert( res == 0 );
    }

    if ( var_fit )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_fit,
            var_fit
        );

        assert( res == 0 );
    }

    if ( var_fromroots )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_fromroots,
            var_fromroots
        );

        assert( res == 0 );
    }

    if ( var_identity )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_identity,
            var_identity
        );

        assert( res == 0 );
    }

    if ( var_basis )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_basis,
            var_basis
        );

        assert( res == 0 );
    }

    if ( var_cast )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_cast,
            var_cast
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___metaclass__ );
    Py_DECREF( var___metaclass__ );
    var___metaclass__ = NULL;

    CHECK_OBJECT( (PyObject *)var___hash__ );
    Py_DECREF( var___hash__ );
    var___hash__ = NULL;

    CHECK_OBJECT( (PyObject *)var___array_priority__ );
    Py_DECREF( var___array_priority__ );
    var___array_priority__ = NULL;

    CHECK_OBJECT( (PyObject *)var_maxpower );
    Py_DECREF( var_maxpower );
    var_maxpower = NULL;

    CHECK_OBJECT( (PyObject *)var_domain );
    Py_DECREF( var_domain );
    var_domain = NULL;

    CHECK_OBJECT( (PyObject *)var_window );
    Py_DECREF( var_window );
    var_window = NULL;

    CHECK_OBJECT( (PyObject *)var_nickname );
    Py_DECREF( var_nickname );
    var_nickname = NULL;

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

    CHECK_OBJECT( (PyObject *)var_has_samecoef );
    Py_DECREF( var_has_samecoef );
    var_has_samecoef = NULL;

    CHECK_OBJECT( (PyObject *)var_has_samedomain );
    Py_DECREF( var_has_samedomain );
    var_has_samedomain = NULL;

    CHECK_OBJECT( (PyObject *)var_has_samewindow );
    Py_DECREF( var_has_samewindow );
    var_has_samewindow = NULL;

    CHECK_OBJECT( (PyObject *)var_has_sametype );
    Py_DECREF( var_has_sametype );
    var_has_sametype = NULL;

    CHECK_OBJECT( (PyObject *)var__get_coefficients );
    Py_DECREF( var__get_coefficients );
    var__get_coefficients = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var___repr__ );
    Py_DECREF( var___repr__ );
    var___repr__ = NULL;

    CHECK_OBJECT( (PyObject *)var___str__ );
    Py_DECREF( var___str__ );
    var___str__ = NULL;

    CHECK_OBJECT( (PyObject *)var___getstate__ );
    Py_DECREF( var___getstate__ );
    var___getstate__ = NULL;

    CHECK_OBJECT( (PyObject *)var___setstate__ );
    Py_DECREF( var___setstate__ );
    var___setstate__ = NULL;

    CHECK_OBJECT( (PyObject *)var___call__ );
    Py_DECREF( var___call__ );
    var___call__ = NULL;

    CHECK_OBJECT( (PyObject *)var___iter__ );
    Py_DECREF( var___iter__ );
    var___iter__ = NULL;

    CHECK_OBJECT( (PyObject *)var___len__ );
    Py_DECREF( var___len__ );
    var___len__ = NULL;

    CHECK_OBJECT( (PyObject *)var___neg__ );
    Py_DECREF( var___neg__ );
    var___neg__ = NULL;

    CHECK_OBJECT( (PyObject *)var___pos__ );
    Py_DECREF( var___pos__ );
    var___pos__ = NULL;

    CHECK_OBJECT( (PyObject *)var___add__ );
    Py_DECREF( var___add__ );
    var___add__ = NULL;

    CHECK_OBJECT( (PyObject *)var___sub__ );
    Py_DECREF( var___sub__ );
    var___sub__ = NULL;

    CHECK_OBJECT( (PyObject *)var___mul__ );
    Py_DECREF( var___mul__ );
    var___mul__ = NULL;

    CHECK_OBJECT( (PyObject *)var___div__ );
    Py_DECREF( var___div__ );
    var___div__ = NULL;

    CHECK_OBJECT( (PyObject *)var___truediv__ );
    Py_DECREF( var___truediv__ );
    var___truediv__ = NULL;

    CHECK_OBJECT( (PyObject *)var___floordiv__ );
    Py_DECREF( var___floordiv__ );
    var___floordiv__ = NULL;

    CHECK_OBJECT( (PyObject *)var___mod__ );
    Py_DECREF( var___mod__ );
    var___mod__ = NULL;

    CHECK_OBJECT( (PyObject *)var___divmod__ );
    Py_DECREF( var___divmod__ );
    var___divmod__ = NULL;

    CHECK_OBJECT( (PyObject *)var___pow__ );
    Py_DECREF( var___pow__ );
    var___pow__ = NULL;

    CHECK_OBJECT( (PyObject *)var___radd__ );
    Py_DECREF( var___radd__ );
    var___radd__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rsub__ );
    Py_DECREF( var___rsub__ );
    var___rsub__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rmul__ );
    Py_DECREF( var___rmul__ );
    var___rmul__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rdiv__ );
    Py_DECREF( var___rdiv__ );
    var___rdiv__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rtruediv__ );
    Py_DECREF( var___rtruediv__ );
    var___rtruediv__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rfloordiv__ );
    Py_DECREF( var___rfloordiv__ );
    var___rfloordiv__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rmod__ );
    Py_DECREF( var___rmod__ );
    var___rmod__ = NULL;

    CHECK_OBJECT( (PyObject *)var___rdivmod__ );
    Py_DECREF( var___rdivmod__ );
    var___rdivmod__ = NULL;

    CHECK_OBJECT( (PyObject *)var___eq__ );
    Py_DECREF( var___eq__ );
    var___eq__ = NULL;

    CHECK_OBJECT( (PyObject *)var___ne__ );
    Py_DECREF( var___ne__ );
    var___ne__ = NULL;

    CHECK_OBJECT( (PyObject *)var_copy );
    Py_DECREF( var_copy );
    var_copy = NULL;

    CHECK_OBJECT( (PyObject *)var_degree );
    Py_DECREF( var_degree );
    var_degree = NULL;

    CHECK_OBJECT( (PyObject *)var_cutdeg );
    Py_DECREF( var_cutdeg );
    var_cutdeg = NULL;

    CHECK_OBJECT( (PyObject *)var_trim );
    Py_DECREF( var_trim );
    var_trim = NULL;

    CHECK_OBJECT( (PyObject *)var_truncate );
    Py_DECREF( var_truncate );
    var_truncate = NULL;

    CHECK_OBJECT( (PyObject *)var_convert );
    Py_DECREF( var_convert );
    var_convert = NULL;

    CHECK_OBJECT( (PyObject *)var_mapparms );
    Py_DECREF( var_mapparms );
    var_mapparms = NULL;

    CHECK_OBJECT( (PyObject *)var_integ );
    Py_DECREF( var_integ );
    var_integ = NULL;

    CHECK_OBJECT( (PyObject *)var_deriv );
    Py_DECREF( var_deriv );
    var_deriv = NULL;

    CHECK_OBJECT( (PyObject *)var_roots );
    Py_DECREF( var_roots );
    var_roots = NULL;

    CHECK_OBJECT( (PyObject *)var_linspace );
    Py_DECREF( var_linspace );
    var_linspace = NULL;

    CHECK_OBJECT( (PyObject *)var_fit );
    Py_DECREF( var_fit );
    var_fit = NULL;

    CHECK_OBJECT( (PyObject *)var_fromroots );
    Py_DECREF( var_fromroots );
    var_fromroots = NULL;

    CHECK_OBJECT( (PyObject *)var_identity );
    Py_DECREF( var_identity );
    var_identity = NULL;

    CHECK_OBJECT( (PyObject *)var_basis );
    Py_DECREF( var_basis );
    var_basis = NULL;

    CHECK_OBJECT( (PyObject *)var_cast );
    Py_DECREF( var_cast );
    var_cast = NULL;

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

    Py_XDECREF( var___metaclass__ );
    var___metaclass__ = NULL;

    Py_XDECREF( var___hash__ );
    var___hash__ = NULL;

    Py_XDECREF( var___array_priority__ );
    var___array_priority__ = NULL;

    Py_XDECREF( var_maxpower );
    var_maxpower = NULL;

    Py_XDECREF( var_domain );
    var_domain = NULL;

    Py_XDECREF( var_window );
    var_window = NULL;

    Py_XDECREF( var_nickname );
    var_nickname = NULL;

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

    Py_XDECREF( var_has_samecoef );
    var_has_samecoef = NULL;

    Py_XDECREF( var_has_samedomain );
    var_has_samedomain = NULL;

    Py_XDECREF( var_has_samewindow );
    var_has_samewindow = NULL;

    Py_XDECREF( var_has_sametype );
    var_has_sametype = NULL;

    Py_XDECREF( var__get_coefficients );
    var__get_coefficients = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var___repr__ );
    var___repr__ = NULL;

    Py_XDECREF( var___str__ );
    var___str__ = NULL;

    Py_XDECREF( var___getstate__ );
    var___getstate__ = NULL;

    Py_XDECREF( var___setstate__ );
    var___setstate__ = NULL;

    Py_XDECREF( var___call__ );
    var___call__ = NULL;

    Py_XDECREF( var___iter__ );
    var___iter__ = NULL;

    Py_XDECREF( var___len__ );
    var___len__ = NULL;

    Py_XDECREF( var___neg__ );
    var___neg__ = NULL;

    Py_XDECREF( var___pos__ );
    var___pos__ = NULL;

    Py_XDECREF( var___add__ );
    var___add__ = NULL;

    Py_XDECREF( var___sub__ );
    var___sub__ = NULL;

    Py_XDECREF( var___mul__ );
    var___mul__ = NULL;

    Py_XDECREF( var___div__ );
    var___div__ = NULL;

    Py_XDECREF( var___truediv__ );
    var___truediv__ = NULL;

    Py_XDECREF( var___floordiv__ );
    var___floordiv__ = NULL;

    Py_XDECREF( var___mod__ );
    var___mod__ = NULL;

    Py_XDECREF( var___divmod__ );
    var___divmod__ = NULL;

    Py_XDECREF( var___pow__ );
    var___pow__ = NULL;

    Py_XDECREF( var___radd__ );
    var___radd__ = NULL;

    Py_XDECREF( var___rsub__ );
    var___rsub__ = NULL;

    Py_XDECREF( var___rmul__ );
    var___rmul__ = NULL;

    Py_XDECREF( var___rdiv__ );
    var___rdiv__ = NULL;

    Py_XDECREF( var___rtruediv__ );
    var___rtruediv__ = NULL;

    Py_XDECREF( var___rfloordiv__ );
    var___rfloordiv__ = NULL;

    Py_XDECREF( var___rmod__ );
    var___rmod__ = NULL;

    Py_XDECREF( var___rdivmod__ );
    var___rdivmod__ = NULL;

    Py_XDECREF( var___eq__ );
    var___eq__ = NULL;

    Py_XDECREF( var___ne__ );
    var___ne__ = NULL;

    Py_XDECREF( var_copy );
    var_copy = NULL;

    Py_XDECREF( var_degree );
    var_degree = NULL;

    Py_XDECREF( var_cutdeg );
    var_cutdeg = NULL;

    Py_XDECREF( var_trim );
    var_trim = NULL;

    Py_XDECREF( var_truncate );
    var_truncate = NULL;

    Py_XDECREF( var_convert );
    var_convert = NULL;

    Py_XDECREF( var_mapparms );
    var_mapparms = NULL;

    Py_XDECREF( var_integ );
    var_integ = NULL;

    Py_XDECREF( var_deriv );
    var_deriv = NULL;

    Py_XDECREF( var_roots );
    var_roots = NULL;

    Py_XDECREF( var_linspace );
    var_linspace = NULL;

    Py_XDECREF( var_fit );
    var_fit = NULL;

    Py_XDECREF( var_fromroots );
    var_fromroots = NULL;

    Py_XDECREF( var_identity );
    var_identity = NULL;

    Py_XDECREF( var_basis );
    var_basis = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_1_domain( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_1_domain );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_1_domain );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_2_window( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_2_window );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_2_window );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_3_nickname( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_3_nickname );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_3_nickname );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_4__add( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_4__add );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_4__add );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_5__sub( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_5__sub );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_5__sub );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_6__mul( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_6__mul );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_6__mul );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_7__div( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_7__div );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_7__div );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_8__pow( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_8__pow );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_8__pow );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_9__val( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_9__val );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_9__val );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_10__int( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_10__int );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_10__int );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_11__der( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_11__der );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_11__der );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_12__fit( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_12__fit );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_12__fit );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_13__line( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_13__line );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_13__line );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_14__roots( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_14__roots );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_14__roots );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_15__fromroots( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_15__fromroots );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_15__fromroots );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_16_has_samecoef( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b3a5d77505ba48ab7de433c863507e5b, module_numpy$polynomial$_polybase );
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

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_other;

    tmp_len_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_len_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_2 );
    Py_DECREF( tmp_len_arg_2 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 149;
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
    goto branch_end_1;
    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 151;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_all );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_coef );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_other;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_coef );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 151;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 151;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 151;
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
    tmp_return_value = Py_False;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = Py_True;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_16_has_samecoef );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_16_has_samecoef );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_17_has_samedomain( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7cfe91b235313fda4363b02b2d5c7940, module_numpy$polynomial$_polybase );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_other;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 172;
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


        exception_lineno = 172;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_17_has_samedomain );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_17_has_samedomain );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_18_has_samewindow( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c9083308382465f869c3aad1f4960335, module_numpy$polynomial$_polybase );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 190;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_all );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_window );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_other;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 190;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 190;
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


        exception_lineno = 190;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_18_has_samewindow );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_18_has_samewindow );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_19_has_sametype( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7f44bbcea722647170deb6d8e8f85e00, module_numpy$polynomial$_polybase );
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
    tmp_isinstance_inst_1 = par_other;

    tmp_source_name_1 = par_self;

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_19_has_sametype );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_19_has_sametype );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_20__get_coefficients( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
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
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_make_exception_arg_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    PyObject *tmp_raise_type_3;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bb606110de77c0f483229ed816aec1dc, module_numpy$polynomial$_polybase );
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
    tmp_isinstance_inst_1 = par_other;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_ABCPolyBase );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ABCPolyBase );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ABCPolyBase" );
        exception_tb = NULL;

        exception_lineno = 236;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 236;
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
    tmp_isinstance_inst_2 = par_other;

    tmp_source_name_1 = par_self;

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 237;
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
    tmp_make_exception_arg_1 = const_str_digest_2840a70f92a629f3a4870b2cdbc33511;
    frame_function->f_lineno = 238;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 238;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
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
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 239;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 239;
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
    tmp_make_exception_arg_2 = const_str_digest_67732dba2209beca762664be526ce3ff;
    frame_function->f_lineno = 240;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 240;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_all );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_other;

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_window );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 241;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 241;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 241;
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
    tmp_make_exception_arg_3 = const_str_digest_55d9eb6c088724632d5321a71831e4a8;
    frame_function->f_lineno = 242;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 242;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    branch_end_3:;
    branch_end_2:;
    tmp_source_name_8 = par_other;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_coef );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 243;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
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

    tmp_return_value = par_other;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_20__get_coefficients );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_20__get_coefficients );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_21___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_coef = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_window = python_pars[ 3 ];
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_NotEq_1;
    int tmp_cmp_NotEq_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    bool tmp_isnot_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_iterator_name_3;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
    PyObject *tmp_list_element_2;
    PyObject *tmp_list_element_3;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_668c6f1a4215c2fb4b859cdf4e353702, module_numpy$polynomial$_polybase );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 247;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_list_element_1 = par_coef;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
    frame_function->f_lineno = 247;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 247;
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


        exception_lineno = 247;
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
        PyObject *old = par_coef;
        assert( old != NULL );
        par_coef = tmp_assign_source_3;
        Py_INCREF( par_coef );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    tmp_assattr_name_1 = par_coef;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_coef, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        goto frame_exception_exit_1;
    }
    tmp_compare_left_1 = par_domain;

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
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 251;
        goto try_except_handler_3;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_as_series );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_3;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = PyList_New( 1 );
    tmp_list_element_2 = par_domain;

    Py_INCREF( tmp_list_element_2 );
    PyList_SET_ITEM( tmp_tuple_element_2, 0, tmp_list_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
    frame_function->f_lineno = 251;
    tmp_iter_arg_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_3;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 251;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_4;

    tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 0 );
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


        exception_lineno = 251;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_5;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

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

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_6 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_6;
        Py_INCREF( par_domain );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_1 );
    Py_DECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_len_arg_1 = par_domain;

    tmp_compare_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_2;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 252;
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
    tmp_make_exception_arg_1 = const_str_digest_71dffe55807a4844520f7d312dc1cdd9;
    frame_function->f_lineno = 253;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 253;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_2:;
    tmp_assattr_name_2 = par_domain;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_domain, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 254;
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    tmp_compare_left_3 = par_window;

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
    // Tried code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 257;
        goto try_except_handler_4;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_as_series );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto try_except_handler_4;
    }
    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_3 = PyList_New( 1 );
    tmp_list_element_3 = par_window;

    Py_INCREF( tmp_list_element_3 );
    PyList_SET_ITEM( tmp_tuple_element_3, 0, tmp_list_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_3 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
    frame_function->f_lineno = 257;
    tmp_iter_arg_3 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto try_except_handler_4;
    }
    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 257;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_3__source_iter == NULL );
    tmp_tuple_unpack_3__source_iter = tmp_assign_source_7;

    tmp_unpack_3 = tmp_tuple_unpack_3__source_iter;

    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_3, 0 );
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


        exception_lineno = 257;
        goto try_except_handler_4;
    }
    assert( tmp_tuple_unpack_3__element_1 == NULL );
    tmp_tuple_unpack_3__element_1 = tmp_assign_source_8;

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

    Py_XDECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    tmp_assign_source_9 = tmp_tuple_unpack_3__element_1;

    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_9;
        Py_INCREF( par_window );
        Py_DECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__source_iter );
    Py_DECREF( tmp_tuple_unpack_3__source_iter );
    tmp_tuple_unpack_3__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_3__element_1 );
    Py_DECREF( tmp_tuple_unpack_3__element_1 );
    tmp_tuple_unpack_3__element_1 = NULL;

    tmp_len_arg_2 = par_window;

    tmp_compare_left_4 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_compare_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_4 = const_int_pos_2;
    tmp_cmp_NotEq_2 = RICH_COMPARE_BOOL_NE( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_NotEq_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_4 );

        exception_lineno = 258;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_4 );
    if ( tmp_cmp_NotEq_2 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_b6697fa852b58bbd73e9a86b2370791e;
    frame_function->f_lineno = 259;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 259;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_4:;
    tmp_assattr_name_3 = par_window;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_window, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 260;
        goto frame_exception_exit_1;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    par_coef
                );

                assert( res == 0 );
            }

            if ( par_domain )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_domain,
                    par_domain
                );

                assert( res == 0 );
            }

            if ( par_window )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_window,
                    par_window
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_21___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_coef );
    Py_DECREF( par_coef );
    par_coef = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

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

    CHECK_OBJECT( (PyObject *)par_coef );
    Py_DECREF( par_coef );
    par_coef = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_21___init__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_22___repr__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_coef = NULL;
    PyObject *var_domain = NULL;
    PyObject *var_window = NULL;
    PyObject *var_name = NULL;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
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
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d61e606fd45895a2fe8f5c8c3cd06b74, module_numpy$polynomial$_polybase );
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
    tmp_sliceslicedel_index_lower_1 = 6;
    tmp_slice_index_upper_1 = -1;
    tmp_source_name_1 = par_self;

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_1 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 264;
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

    tmp_sliceslicedel_index_lower_2 = 6;
    tmp_slice_index_upper_2 = -1;
    tmp_source_name_2 = par_self;

    tmp_operand_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_2 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_slice_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    Py_DECREF( tmp_slice_source_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 265;
        goto frame_exception_exit_1;
    }
    assert( var_domain == NULL );
    var_domain = tmp_assign_source_2;

    tmp_sliceslicedel_index_lower_3 = 6;
    tmp_slice_index_upper_3 = -1;
    tmp_source_name_3 = par_self;

    tmp_operand_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_operand_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto frame_exception_exit_1;
    }
    tmp_slice_source_3 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_3 );
    Py_DECREF( tmp_operand_name_3 );
    if ( tmp_slice_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_3, tmp_sliceslicedel_index_lower_3, tmp_slice_index_upper_3 );
    Py_DECREF( tmp_slice_source_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 266;
        goto frame_exception_exit_1;
    }
    assert( var_window == NULL );
    var_window = tmp_assign_source_3;

    tmp_source_name_5 = par_self;

    tmp_source_name_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_4;

    tmp_left_name_1 = const_str_digest_f8e029e75f7a514fa730097cbce45802;
    tmp_right_name_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = var_name;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_coef;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_domain;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_window;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
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

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_22___repr__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    CHECK_OBJECT( (PyObject *)var_domain );
    Py_DECREF( var_domain );
    var_domain = NULL;

    CHECK_OBJECT( (PyObject *)var_window );
    Py_DECREF( var_window );
    var_window = NULL;

    CHECK_OBJECT( (PyObject *)var_name );
    Py_DECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_domain );
    var_domain = NULL;

    Py_XDECREF( var_window );
    var_window = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_22___repr__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_23___str__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_coef = NULL;
    PyObject *var_name = NULL;
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
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d612018f277e45fa890733cf86b2ca28, module_numpy$polynomial$_polybase );
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

    tmp_str_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_nickname );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_2;

    tmp_left_name_1 = const_str_digest_a7636f57d1f8f80548278378b7bf84e2;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_name;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_coef;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
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

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_23___str__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    CHECK_OBJECT( (PyObject *)var_name );
    Py_DECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_23___str__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_24___getstate__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *var_ret = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_frame_locals;
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
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_324951ce42c3b0834aa9bfc6e44d76c6, module_numpy$polynomial$_polybase );
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

    tmp_source_name_1 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_copy );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 279;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_1;

    tmp_source_name_4 = par_self;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_coef );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_copy );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 280;
    tmp_ass_subvalue_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = var_ret;

    tmp_ass_subscript_1 = const_str_plain_coef;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_domain );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_copy );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 281;
    tmp_ass_subvalue_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_ass_subvalue_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_2 = var_ret;

    tmp_ass_subscript_2 = const_str_plain_domain;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    Py_DECREF( tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_window );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_copy );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 282;
    tmp_ass_subvalue_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_ass_subvalue_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_3 = var_ret;

    tmp_ass_subscript_3 = const_str_plain_window;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3 );
    Py_DECREF( tmp_ass_subvalue_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
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

    tmp_return_value = var_ret;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_24___getstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_ret );
    Py_DECREF( var_ret );
    var_ret = NULL;

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

    Py_XDECREF( var_ret );
    var_ret = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_24___getstate__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_25___setstate__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_dict = python_pars[ 1 ];
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1ae48e902b64ace274a7717334d96168, module_numpy$polynomial$_polybase );
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
    tmp_assattr_name_1 = par_dict;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE_DICT_SLOT( tmp_assattr_target_1, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 286;
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

            if ( par_dict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dict,
                    par_dict
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_25___setstate__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_dict );
    Py_DECREF( par_dict );
    par_dict = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dict );
    Py_DECREF( par_dict );
    par_dict = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_25___setstate__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_26___call__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_arg = python_pars[ 1 ];
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d00e707f19839747cb15fec314349ab2, module_numpy$polynomial$_polybase );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 291;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mapparms );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        goto try_except_handler_2;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 291;
        goto try_except_handler_2;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 291;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 291;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 291;
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


        exception_lineno = 291;
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


        exception_lineno = 291;
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

    assert( var_off == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_off = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    assert( var_scl == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_scl = tmp_assign_source_5;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_left_name_1 = var_off;

    tmp_left_name_2 = var_scl;

    tmp_right_name_2 = par_arg;

    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_arg;
        assert( old != NULL );
        par_arg = tmp_assign_source_6;
        Py_DECREF( old );
    }

    tmp_source_name_4 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__val );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_arg;

    tmp_source_name_5 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_coef );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 293;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 293;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 293;
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

            if ( par_arg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arg,
                    par_arg
                );

                assert( res == 0 );
            }

            if ( var_off )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_off,
                    var_off
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_26___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arg );
    Py_DECREF( par_arg );
    par_arg = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_26___call__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_27___iter__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fc7d7820fc1e8f5ea2e919d830676148, module_numpy$polynomial$_polybase );
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

    tmp_iter_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
        goto frame_exception_exit_1;
    }
    tmp_return_value = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 296;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_27___iter__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_27___iter__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_28___len__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b4aef6d21091e94862c5fca95931b4f6, module_numpy$polynomial$_polybase );
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

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 299;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_28___len__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_28___len__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_29___neg__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_operand_name_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_37f9964a9faf856134135c4b592e7f5a, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_window );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 304;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 304;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_29___neg__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_29___neg__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_30___pos__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_30___pos__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_30___pos__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_31___add__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_othercoef = NULL;
    PyObject *var_coef = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_92eba166a6c42a2ead91913fb0a99ac0, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__get_coefficients );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 311;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        goto try_except_handler_2;
    }
    assert( var_othercoef == NULL );
    var_othercoef = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__add );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        goto try_except_handler_2;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 312;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_othercoef;

    frame_function->f_lineno = 312;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 312;
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_2;

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


        exception_lineno = 313;
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
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    tmp_raise_type_1 = var_e;

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 314;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_source_name_4 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_coef;

    tmp_source_name_5 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 317;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 317;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 317;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 317;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_othercoef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_othercoef,
                    var_othercoef
                );

                assert( res == 0 );
            }

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
                );

                assert( res == 0 );
            }

            if ( var_e )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_e,
                    var_e
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_31___add__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_31___add__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_32___sub__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_othercoef = NULL;
    PyObject *var_coef = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bdb9331fbde6d8cf7606d440a71a7bcf, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__get_coefficients );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 321;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto try_except_handler_2;
    }
    assert( var_othercoef == NULL );
    var_othercoef = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__sub );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto try_except_handler_2;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 322;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_othercoef;

    frame_function->f_lineno = 322;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 322;
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_2;

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


        exception_lineno = 323;
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
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    tmp_raise_type_1 = var_e;

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 324;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_source_name_4 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_coef;

    tmp_source_name_5 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 327;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 327;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 327;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 327;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_othercoef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_othercoef,
                    var_othercoef
                );

                assert( res == 0 );
            }

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
                );

                assert( res == 0 );
            }

            if ( var_e )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_e,
                    var_e
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_32___sub__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_32___sub__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_33___mul__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_othercoef = NULL;
    PyObject *var_coef = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_raise_type_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a7b8660214ebc34bc4a026ff95004ab3, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__get_coefficients );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 331;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 331;
        goto try_except_handler_2;
    }
    assert( var_othercoef == NULL );
    var_othercoef = tmp_assign_source_1;

    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__mul );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        goto try_except_handler_2;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 332;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = var_othercoef;

    frame_function->f_lineno = 332;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 332;
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_2;

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


        exception_lineno = 333;
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
    tmp_assign_source_3 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_e = tmp_assign_source_3;

    tmp_raise_type_1 = var_e;

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 334;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:
    try_end_1:;
    tmp_source_name_4 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_coef;

    tmp_source_name_5 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 337;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 337;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 337;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_othercoef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_othercoef,
                    var_othercoef
                );

                assert( res == 0 );
            }

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
                );

                assert( res == 0 );
            }

            if ( var_e )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_e,
                    var_e
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_33___mul__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_33___mul__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_34___div__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1111887ba666da2306967d03573fcc86, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___floordiv__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 341;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 341;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_34___div__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_34___div__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_35___truediv__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_type_arg_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c8abe00267d70a5b2e820dbd187811cb, module_numpy$polynomial$_polybase );
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
    tmp_isinstance_inst_1 = par_other;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_Number );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Number );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Number" );
        exception_tb = NULL;

        exception_lineno = 347;
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_or_left_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
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
    tmp_isinstance_inst_2 = par_other;

    tmp_isinstance_cls_2 = LOOKUP_BUILTIN( const_str_plain_bool );
    assert( tmp_isinstance_cls_2 != NULL );
    tmp_or_right_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
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


        exception_lineno = 347;
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
    tmp_left_name_1 = const_str_digest_a621aebae32306063eedea7c4a7bdebd;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_type_arg_1 = par_self;

    tmp_tuple_element_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_tuple_element_1 != NULL );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_type_arg_2 = par_other;

    tmp_tuple_element_1 = BUILTIN_TYPE1( tmp_type_arg_2 );
    assert( tmp_tuple_element_1 != NULL );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 349;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 349;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___floordiv__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 350;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 350;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_35___truediv__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_35___truediv__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_36___floordiv__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_52174b5574f9ac9df4ebf206a68a436e, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___divmod__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 353;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 353;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_1 = var_res;

    tmp_compare_right_1 = Py_NotImplemented;
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
    tmp_return_value = var_res;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = var_res;

    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 356;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_36___floordiv__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_36___floordiv__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_37___mod__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0bc389874eeee8db697bb4c1e3a10c38, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___divmod__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 359;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_1 = var_res;

    tmp_compare_right_1 = Py_NotImplemented;
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
    tmp_return_value = var_res;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = var_res;

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_37___mod__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_37___mod__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_38___divmod__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_othercoef = NULL;
    PyObject *var_quo = NULL;
    PyObject *var_rem = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_eb7825935c95194a150298c38b823731, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__get_coefficients );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 366;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        goto try_except_handler_2;
    }
    assert( var_othercoef == NULL );
    var_othercoef = tmp_assign_source_1;

    // Tried code:
    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__div );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto try_except_handler_3;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 367;
        goto try_except_handler_3;
    }
    tmp_args_element_name_3 = var_othercoef;

    frame_function->f_lineno = 367;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto try_except_handler_3;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto try_except_handler_3;
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


        exception_lineno = 367;
        goto try_except_handler_3;
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


        exception_lineno = 367;
        goto try_except_handler_3;
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
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_ZeroDivisionError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 368;
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
    tmp_assign_source_5 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_e = tmp_assign_source_5;

    tmp_raise_type_1 = var_e;

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 369;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:
    try_end_2:;
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    assert( var_quo == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_quo = tmp_assign_source_6;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    assert( var_rem == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_rem = tmp_assign_source_7;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_4 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_quo;

    tmp_source_name_5 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 372;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 372;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 372;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_quo;
        assert( old != NULL );
        var_quo = tmp_assign_source_8;
        Py_DECREF( old );
    }

    tmp_source_name_7 = par_self;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_rem;

    tmp_source_name_8 = par_self;

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_domain );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = par_self;

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_window );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );
        Py_DECREF( tmp_args_element_name_8 );

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 373;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_8 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rem;
        assert( old != NULL );
        var_rem = tmp_assign_source_9;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_othercoef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_othercoef,
                    var_othercoef
                );

                assert( res == 0 );
            }

            if ( var_quo )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_quo,
                    var_quo
                );

                assert( res == 0 );
            }

            if ( var_rem )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rem,
                    var_rem
                );

                assert( res == 0 );
            }

            if ( var_e )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_e,
                    var_e
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

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_quo;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_rem;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_38___divmod__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_quo );
    var_quo = NULL;

    Py_XDECREF( var_rem );
    var_rem = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_othercoef );
    var_othercoef = NULL;

    Py_XDECREF( var_quo );
    var_quo = NULL;

    Py_XDECREF( var_rem );
    var_rem = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_38___divmod__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_39___pow__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_coef = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_89ab0d315c24c7a4ab8dbcb7a4b93e6d, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__pow );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_source_name_2 = par_self;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_other;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_3 = par_self;

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_maxpower );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_maxpower;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 377;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

    tmp_source_name_4 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_coef;

    tmp_source_name_5 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 378;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_2;


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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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

    tmp_return_value = var_res;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_39___pow__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_39___pow__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_40___radd__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_coef = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1f2352523168a8948e0fdc6b47a4cf17, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__add );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_other;

    tmp_source_name_2 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 383;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 383;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 383;
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

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
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_coef;

    tmp_source_name_4 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 386;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 386;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 386;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_40___radd__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_40___radd__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_41___rsub__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_coef = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8c89a14807349796e51650e90a3509db, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__sub );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_other;

    tmp_source_name_2 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 390;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 390;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 390;
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

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
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_coef;

    tmp_source_name_4 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 393;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_41___rsub__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_41___rsub__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_42___rmul__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_coef = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d7eaa845a66d33b26570846d0eec9998, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__mul );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_other;

    tmp_source_name_2 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 397;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 397;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 397;
        goto try_except_handler_2;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

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
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    // End of try:
    try_end_1:;
    tmp_source_name_3 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_coef;

    tmp_source_name_4 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 400;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_42___rmul__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_42___rmul__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_43___rdiv__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9f6359c5e67b7628000c76a7ee8bc3b9, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___rfloordiv__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 404;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 404;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_43___rdiv__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_43___rdiv__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_44___rtruediv__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_44___rtruediv__ );
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
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_44___rtruediv__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_45___rfloordiv__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9307f0d808db63b1869e3422be33c006, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___rdivmod__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 412;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 412;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_1 = var_res;

    tmp_compare_right_1 = Py_NotImplemented;
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
    tmp_return_value = var_res;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = var_res;

    tmp_subscript_name_1 = const_int_0;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_45___rfloordiv__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_45___rfloordiv__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_46___rmod__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d005315163298bb71821bf4825b24fc7, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___rdivmod__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 418;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 418;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_compare_left_1 = var_res;

    tmp_compare_right_1 = Py_NotImplemented;
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
    tmp_return_value = var_res;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_subscribed_name_1 = var_res;

    tmp_subscript_name_1 = const_int_pos_1;
    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 421;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_46___rmod__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_46___rmod__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_47___rdivmod__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_quo = NULL;
    PyObject *var_rem = NULL;
    PyObject *var_e = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_raise_type_1;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_78c9e3deb5108a625af3110f1c35fa6c, module_numpy$polynomial$_polybase );
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
    tmp_source_name_1 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__div );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        goto try_except_handler_3;
    }
    tmp_args_element_name_1 = par_other;

    tmp_source_name_2 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 425;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 425;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
        goto try_except_handler_3;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 425;
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


        exception_lineno = 425;
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


        exception_lineno = 425;
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
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_ZeroDivisionError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 426;
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
    tmp_assign_source_4 = PyThreadState_GET()->exc_value;
    assert( var_e == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_e = tmp_assign_source_4;

    tmp_raise_type_1 = var_e;

    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 427;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = Py_NotImplemented;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_end_1:;
    // End of try:
    try_end_2:;
    tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;

    assert( var_quo == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_quo = tmp_assign_source_5;

    tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;

    assert( var_rem == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_rem = tmp_assign_source_6;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_3 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_quo;

    tmp_source_name_4 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 430;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 430;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 430;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 430;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_quo;
        assert( old != NULL );
        var_quo = tmp_assign_source_7;
        Py_DECREF( old );
    }

    tmp_source_name_6 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_6 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_rem;

    tmp_source_name_7 = par_self;

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_domain );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 431;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = par_self;

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_window );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 431;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 431;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 431;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rem;
        assert( old != NULL );
        var_rem = tmp_assign_source_8;
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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
                );

                assert( res == 0 );
            }

            if ( var_quo )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_quo,
                    var_quo
                );

                assert( res == 0 );
            }

            if ( var_rem )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rem,
                    var_rem
                );

                assert( res == 0 );
            }

            if ( var_e )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_e,
                    var_e
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

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_quo;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_rem;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_47___rdivmod__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_quo );
    var_quo = NULL;

    Py_XDECREF( var_rem );
    var_rem = NULL;

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

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

    Py_XDECREF( var_quo );
    var_quo = NULL;

    Py_XDECREF( var_rem );
    var_rem = NULL;

    Py_XDECREF( var_e );
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_47___rdivmod__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_48___eq__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_other = python_pars[ 1 ];
    PyObject *var_res = NULL;
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
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_left_4;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    PyObject *tmp_compexpr_right_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
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
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_df06141252fe8e42331fa270840ce018, module_numpy$polynomial$_polybase );
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
    tmp_isinstance_inst_1 = par_other;

    tmp_source_name_1 = par_self;

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 438;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_1 = BUILTIN_ISINSTANCE( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 439;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 439;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 439;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_other;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_compexpr_left_1 );

        exception_lineno = 439;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 439;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 442;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_and_left_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 442;
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 440;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_all );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 440;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 440;
        goto frame_exception_exit_1;
    }
    tmp_source_name_7 = par_other;

    tmp_compexpr_right_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_window );
    if ( tmp_compexpr_right_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_compexpr_left_2 );

        exception_lineno = 440;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_DECREF( tmp_compexpr_right_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 440;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 442;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_and_left_value_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_and_left_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_3 = CHECK_IF_TRUE( tmp_and_left_value_3 );
    if ( tmp_and_left_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_3 );

        exception_lineno = 442;
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
    tmp_source_name_9 = par_self;

    tmp_source_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_coef );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_shape );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_compexpr_left_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        goto frame_exception_exit_1;
    }
    tmp_source_name_11 = par_other;

    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_coef );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 441;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_3 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_shape );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_compexpr_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compexpr_left_3 );

        exception_lineno = 441;
        goto frame_exception_exit_1;
    }
    tmp_and_left_value_4 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    Py_DECREF( tmp_compexpr_left_3 );
    Py_DECREF( tmp_compexpr_right_3 );
    if ( tmp_and_left_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 441;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_4 = CHECK_IF_TRUE( tmp_and_left_value_4 );
    if ( tmp_and_left_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_4 );

        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_4 == 1 )
    {
        goto and_right_4;
    }
    else
    {
        goto and_left_4;
    }
    and_right_4:;
    Py_DECREF( tmp_and_left_value_4 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 442;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_all );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = par_self;

    tmp_compexpr_left_4 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_coef );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    tmp_source_name_14 = par_other;

    tmp_compexpr_right_4 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_coef );
    if ( tmp_compexpr_right_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_compexpr_left_4 );

        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = RICH_COMPARE_EQ( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    Py_DECREF( tmp_compexpr_right_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 442;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_and_right_value_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_and_right_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 442;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_3 = tmp_and_right_value_4;
    goto and_end_4;
    and_left_4:;
    tmp_and_right_value_3 = tmp_and_left_value_4;
    and_end_4:;
    tmp_and_right_value_2 = tmp_and_right_value_3;
    goto and_end_3;
    and_left_3:;
    tmp_and_right_value_2 = tmp_and_left_value_3;
    and_end_3:;
    tmp_and_right_value_1 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_and_right_value_1 = tmp_and_left_value_2;
    and_end_2:;
    tmp_assign_source_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    Py_INCREF( tmp_and_left_value_1 );
    tmp_assign_source_1 = tmp_and_left_value_1;
    and_end_1:;
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;


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

            if ( par_other )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_other,
                    par_other
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

    tmp_return_value = var_res;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_48___eq__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_other );
    Py_DECREF( par_other );
    par_other = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_48___eq__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_49___ne__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4bcfa00520e8c52382d8fb1dabdfe6ca, module_numpy$polynomial$_polybase );
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


        exception_lineno = 446;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_other;

    frame_function->f_lineno = 446;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_operand_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 446;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_49___ne__ );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_49___ne__ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_50_copy( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_called_name_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_68dabcb2b67de7b3f160eab9af783ea1, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 461;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 461;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_window );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 461;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 461;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 461;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_50_copy );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_50_copy );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_51_degree( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2eaaf553800800fe7229dd39a5dfb315, module_numpy$polynomial$_polybase );
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
    tmp_len_arg_1 = par_self;

    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 474;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 474;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_51_degree );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_51_degree );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_52_cutdeg( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_deg = python_pars[ 1 ];
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d5d0d3ed720c7606409d9ef170be195b, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_truncate );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 499;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = par_deg;

    tmp_right_name_1 = const_int_pos_1;
    tmp_args_element_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 499;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 499;
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


        exception_lineno = 499;
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

            if ( par_deg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deg,
                    par_deg
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_52_cutdeg );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_52_cutdeg );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_53_trim( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_tol = python_pars[ 1 ];
    PyObject *var_coef = NULL;
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
    PyObject *tmp_frame_locals;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_189d274098273a7ae4ec1a7085f772be, module_numpy$polynomial$_polybase );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_trimcoef );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_tol;

    frame_function->f_lineno = 521;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_1;

    tmp_source_name_3 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_coef;

    tmp_source_name_4 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 522;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_window );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 522;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 522;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 522;
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

            if ( par_tol )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tol,
                    par_tol
                );

                assert( res == 0 );
            }

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_53_trim );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_53_trim );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_54_truncate( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_size = python_pars[ 1 ];
    PyObject *var_isize = NULL;
    PyObject *var_coef = NULL;
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
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_upper_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0f469c3ac1acc83e3f36ceb7987d1b02, module_numpy$polynomial$_polybase );
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
    tmp_int_arg_1 = par_size;

    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 544;
        goto frame_exception_exit_1;
    }
    assert( var_isize == NULL );
    var_isize = tmp_assign_source_1;

    tmp_compexpr_left_1 = var_isize;

    tmp_compexpr_right_1 = par_size;

    tmp_or_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 545;
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
    tmp_compexpr_left_2 = var_isize;

    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_or_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 545;
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

        exception_lineno = 545;
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
    tmp_make_exception_arg_1 = const_str_digest_a8b047c55fad201071d372dfb7ac4cca;
    frame_function->f_lineno = 546;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 546;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_compare_left_1 = var_isize;

    tmp_source_name_1 = par_self;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_coef );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 547;
        goto frame_exception_exit_1;
    }
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 547;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_2 = par_self;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 548;
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_3 = par_self;

    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coef );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    tmp_slice_upper_1 = var_isize;

    tmp_assign_source_3 = LOOKUP_SLICE( tmp_slice_source_1, Py_None, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 550;
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_3;

    branch_end_2:;
    tmp_source_name_4 = par_self;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_coef;

    tmp_source_name_5 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 551;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 551;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 551;
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

            if ( par_size )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_size,
                    par_size
                );

                assert( res == 0 );
            }

            if ( var_isize )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_isize,
                    var_isize
                );

                assert( res == 0 );
            }

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_54_truncate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    CHECK_OBJECT( (PyObject *)var_isize );
    Py_DECREF( var_isize );
    var_isize = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_size );
    Py_DECREF( par_size );
    par_size = NULL;

    Py_XDECREF( var_isize );
    var_isize = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_54_truncate );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_55_convert( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_domain = python_pars[ 1 ];
    PyObject *par_kind = python_pars[ 2 ];
    PyObject *par_window = python_pars[ 3 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
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
    bool tmp_is_2;
    bool tmp_is_3;
    PyObject *tmp_kw_name_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_14d2452fea42da6878d8da7f796e6b79, module_numpy$polynomial$_polybase );
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
    tmp_compare_left_1 = par_kind;

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
    tmp_source_name_1 = par_self;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 586;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_kind;
        assert( old != NULL );
        par_kind = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_domain;

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
    tmp_source_name_2 = par_kind;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 588;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_compare_left_3 = par_window;

    tmp_compare_right_3 = Py_None;
    tmp_is_3 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_3 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = par_kind;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 590;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_called_name_1 = par_self;

    tmp_source_name_4 = par_kind;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_identity );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_domain;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = par_window;

    tmp_dict_key_1 = const_str_plain_window;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 591;
    tmp_args_element_name_1 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 591;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 591;
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

            if ( par_domain )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_domain,
                    par_domain
                );

                assert( res == 0 );
            }

            if ( par_kind )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kind,
                    par_kind
                );

                assert( res == 0 );
            }

            if ( par_window )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_window,
                    par_window
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_55_convert );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_kind );
    Py_DECREF( par_kind );
    par_kind = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

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

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_kind );
    par_kind = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_55_convert );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_56_mapparms( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4ab7f983bc6249cf990b87bcb3a8a187, module_numpy$polynomial$_polybase );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 620;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mapparms );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 620;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 620;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 620;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 620;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 620;
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_56_mapparms );
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_56_mapparms );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_57_integ( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *par_k = python_pars[ 2 ];
    PyObject *par_lbnd = python_pars[ 3 ];
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_coef = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fb6cb8fe37a92c4f03a2f64c7a81db9f, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mapparms );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 647;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 647;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 647;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 647;
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


        exception_lineno = 647;
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


        exception_lineno = 647;
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

    assert( var_off == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_off = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    assert( var_scl == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_scl = tmp_assign_source_5;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_compare_left_1 = par_lbnd;

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
    tmp_assign_source_6 = const_int_0;
    {
        PyObject *old = par_lbnd;
        assert( old != NULL );
        par_lbnd = tmp_assign_source_6;
        Py_INCREF( par_lbnd );
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_left_name_1 = var_off;

    tmp_left_name_2 = var_scl;

    tmp_right_name_2 = par_lbnd;

    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 651;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_lbnd;
        assert( old != NULL );
        par_lbnd = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_end_1:;
    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__int );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coef );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 652;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_m;

    tmp_args_element_name_3 = par_k;

    tmp_args_element_name_4 = par_lbnd;

    tmp_left_name_3 = const_float_1_0;
    tmp_right_name_3 = var_scl;

    tmp_args_element_name_5 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 652;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 652;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_8;

    tmp_source_name_4 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = var_coef;

    tmp_source_name_5 = par_self;

    tmp_args_element_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 653;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 653;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 653;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_7 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
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

            if ( par_lbnd )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lbnd,
                    par_lbnd
                );

                assert( res == 0 );
            }

            if ( var_off )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_off,
                    var_off
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

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_57_integ );
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

    CHECK_OBJECT( (PyObject *)par_lbnd );
    Py_DECREF( par_lbnd );
    par_lbnd = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    Py_XDECREF( par_lbnd );
    par_lbnd = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_57_integ );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_58_deriv( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_m = python_pars[ 1 ];
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_coef = NULL;
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
    PyObject *tmp_args_element_name_6;
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
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_48c8a7b01afc27d31790e2fa8f20f937, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_mapparms );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 673;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 673;
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


        exception_lineno = 673;
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


        exception_lineno = 673;
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

    assert( var_off == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_off = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    assert( var_scl == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_scl = tmp_assign_source_5;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_2 = par_self;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__der );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_coef );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 674;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_m;

    tmp_args_element_name_3 = var_scl;

    frame_function->f_lineno = 674;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 674;
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_6;

    tmp_source_name_4 = par_self;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_4 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 675;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_coef;

    tmp_source_name_5 = par_self;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 675;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = par_self;

    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_window );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_element_name_5 );

        exception_lineno = 675;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 675;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_5 );
    Py_DECREF( tmp_args_element_name_6 );
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

            if ( var_off )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_off,
                    var_off
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

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_58_deriv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_m );
    Py_DECREF( par_m );
    par_m = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_58_deriv );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_59_roots( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_699f5eb3b1a6006dbdda91e94473a41f, module_numpy$polynomial$_polybase );
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

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__roots );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 689;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = par_self;

    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_coef );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 689;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 689;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 689;
        goto frame_exception_exit_1;
    }
    assert( var_roots == NULL );
    var_roots = tmp_assign_source_1;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 690;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mapdomain );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 690;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_roots;

    tmp_source_name_4 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_window );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 690;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = par_self;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_domain );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 690;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 690;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 690;
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_59_roots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)var_roots );
    Py_DECREF( var_roots );
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_59_roots );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_60_linspace( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *var_x = NULL;
    PyObject *var_y = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f07d4ff064fffd55efcd40cfc5a1dff5, module_numpy$polynomial$_polybase );
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
    tmp_compare_left_1 = par_domain;

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
    tmp_source_name_1 = par_self;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 719;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 720;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_linspace );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 720;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_1 = par_domain;

    tmp_subscript_name_1 = const_int_0;
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 720;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_2 = par_domain;

    tmp_subscript_name_2 = const_int_pos_1;
    tmp_args_element_name_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 720;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_n;

    frame_function->f_lineno = 720;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 720;
        goto frame_exception_exit_1;
    }
    assert( var_x == NULL );
    var_x = tmp_assign_source_2;

    tmp_called_name_2 = par_self;

    tmp_args_element_name_4 = var_x;

    frame_function->f_lineno = 721;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 721;
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_3;


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

            if ( par_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    par_n
                );

                assert( res == 0 );
            }

            if ( par_domain )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_domain,
                    par_domain
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

            if ( var_y )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_y,
                    var_y
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

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_x;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_y;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_60_linspace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

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

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_60_linspace );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_61_fit( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_x = python_pars[ 1 ];
    PyObject *par_y = python_pars[ 2 ];
    PyObject *par_deg = python_pars[ 3 ];
    PyObject *par_domain = python_pars[ 4 ];
    PyObject *par_rcond = python_pars[ 5 ];
    PyObject *par_full = python_pars[ 6 ];
    PyObject *par_w = python_pars[ 7 ];
    PyObject *par_window = python_pars[ 8 ];
    PyObject *var_xnew = NULL;
    PyObject *var_res = NULL;
    PyObject *var_coef = NULL;
    PyObject *var_status = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
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
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b444c10234a30b272a217ebda9b1d539, module_numpy$polynomial$_polybase );
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
    tmp_compare_left_1 = par_domain;

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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 796;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getdomain );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 796;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_x;

    frame_function->f_lineno = 796;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 796;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_1;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_type_arg_1 = par_domain;

    tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compexpr_left_1 != NULL );
    tmp_compexpr_right_1 = LOOKUP_BUILTIN( const_str_plain_list );
    assert( tmp_compexpr_right_1 != NULL );
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
    tmp_len_arg_1 = par_domain;

    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 797;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 797;
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

        exception_lineno = 797;
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
    tmp_source_name_2 = par_cls;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_domain );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 798;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_compare_left_2 = par_window;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_3 = par_cls;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_window );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 801;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 803;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_mapdomain );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 803;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_x;

    tmp_args_element_name_3 = par_domain;

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "domain" );
        exception_tb = NULL;

        exception_lineno = 803;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_window;

    frame_function->f_lineno = 803;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 803;
        goto frame_exception_exit_1;
    }
    assert( var_xnew == NULL );
    var_xnew = tmp_assign_source_4;

    tmp_source_name_5 = par_cls;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain__fit );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 804;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = var_xnew;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_y;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_deg;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = par_w;

    tmp_dict_key_1 = const_str_plain_w;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_rcond;

    tmp_dict_key_2 = const_str_plain_rcond;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_full;

    tmp_dict_key_3 = const_str_plain_full;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 804;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 804;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_5;

    tmp_cond_value_2 = par_full;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 805;
        goto frame_exception_exit_1;
    }
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
    tmp_iter_arg_1 = var_res;

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 806;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 806;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 806;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;

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
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;

    assert( var_coef == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_coef = tmp_assign_source_9;

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;

    assert( var_status == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_status = tmp_assign_source_10;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_return_value = PyTuple_New( 2 );
    tmp_called_name_4 = par_cls;

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_coef;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_4 = par_domain;

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "domain" );
        exception_tb = NULL;

        exception_lineno = 807;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_domain;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_window;

    tmp_dict_key_5 = const_str_plain_window;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 807;
    tmp_tuple_element_2 = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 807;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_status;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_11 = var_res;

    assert( var_coef == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_coef = tmp_assign_source_11;

    tmp_called_name_5 = par_cls;

    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_coef;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_kw_name_3 = _PyDict_NewPresized( 2 );
    tmp_dict_value_6 = par_domain;

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_args_name_3 );
        Py_DECREF( tmp_kw_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "domain" );
        exception_tb = NULL;

        exception_lineno = 810;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_domain;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = par_window;

    tmp_dict_key_7 = const_str_plain_window;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_7, tmp_dict_value_7 );
    frame_function->f_lineno = 810;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 810;
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
            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
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

            if ( par_domain )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_domain,
                    par_domain
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

            if ( par_window )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_window,
                    par_window
                );

                assert( res == 0 );
            }

            if ( var_xnew )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_xnew,
                    var_xnew
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

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
                );

                assert( res == 0 );
            }

            if ( var_status )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_status,
                    var_status
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_61_fit );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

    CHECK_OBJECT( (PyObject *)var_xnew );
    Py_DECREF( var_xnew );
    var_xnew = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_rcond );
    Py_DECREF( par_rcond );
    par_rcond = NULL;

    CHECK_OBJECT( (PyObject *)par_full );
    Py_DECREF( par_full );
    par_full = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    Py_XDECREF( var_xnew );
    var_xnew = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    Py_XDECREF( var_status );
    var_status = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_61_fit );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_62_fromroots( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_roots = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_window = python_pars[ 3 ];
    PyObject *var_deg = NULL;
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_rnew = NULL;
    PyObject *var_coef = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_assign_source_12;
    PyObject *tmp_assign_source_13;
    PyObject *tmp_assign_source_14;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
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
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_list_element_1;
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
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4fbff2df7ddc0030f2dbcb27d1cbb272, module_numpy$polynomial$_polybase );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 838;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_as_series );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 838;
        goto try_except_handler_2;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = PyList_New( 1 );
    tmp_list_element_1 = par_roots;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_tuple_element_1, 0, tmp_list_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_ee9b50b2ea01af7ea63a79da3e3468b3 );
    frame_function->f_lineno = 838;
    tmp_iter_arg_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 838;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 838;
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


        exception_lineno = 838;
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

    tmp_compare_left_1 = par_domain;

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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 840;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_getdomain );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 840;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_roots;

    frame_function->f_lineno = 840;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 840;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_4;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_type_arg_1 = par_domain;

    tmp_compexpr_left_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compexpr_left_1 != NULL );
    tmp_compexpr_right_1 = LOOKUP_BUILTIN( const_str_plain_list );
    assert( tmp_compexpr_right_1 != NULL );
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
    tmp_len_arg_1 = par_domain;

    tmp_compexpr_left_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 841;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_0;
    tmp_and_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 841;
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

        exception_lineno = 841;
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
    tmp_source_name_3 = par_cls;

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_domain );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 842;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_compare_left_2 = par_window;

    tmp_compare_right_2 = Py_None;
    tmp_is_2 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_2 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_4 = par_cls;

    tmp_assign_source_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_window );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 845;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_6;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_len_arg_2 = par_roots;

    tmp_assign_source_7 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 847;
        goto frame_exception_exit_1;
    }
    assert( var_deg == NULL );
    var_deg = tmp_assign_source_7;

    // Tried code:
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pu );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pu" );
        exception_tb = NULL;

        exception_lineno = 848;
        goto try_except_handler_3;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_mapparms );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 848;
        goto try_except_handler_3;
    }
    tmp_args_element_name_2 = par_domain;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "domain" );
        exception_tb = NULL;

        exception_lineno = 848;
        goto try_except_handler_3;
    }

    tmp_args_element_name_3 = par_window;

    frame_function->f_lineno = 848;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 848;
        goto try_except_handler_3;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 848;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__source_iter == NULL );
    tmp_tuple_unpack_2__source_iter = tmp_assign_source_8;

    tmp_unpack_2 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 0 );
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


        exception_lineno = 848;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__element_1 == NULL );
    tmp_tuple_unpack_2__element_1 = tmp_assign_source_9;

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_10 = UNPACK_NEXT( tmp_unpack_3, 1 );
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


        exception_lineno = 848;
        goto try_except_handler_3;
    }
    assert( tmp_tuple_unpack_2__element_2 == NULL );
    tmp_tuple_unpack_2__element_2 = tmp_assign_source_10;

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

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_11 = tmp_tuple_unpack_2__element_1;

    assert( var_off == NULL );
    Py_INCREF( tmp_assign_source_11 );
    var_off = tmp_assign_source_11;

    tmp_assign_source_12 = tmp_tuple_unpack_2__element_2;

    assert( var_scl == NULL );
    Py_INCREF( tmp_assign_source_12 );
    var_scl = tmp_assign_source_12;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_1 );
    Py_DECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_2 );
    Py_DECREF( tmp_tuple_unpack_2__element_2 );
    tmp_tuple_unpack_2__element_2 = NULL;

    tmp_left_name_1 = var_off;

    tmp_left_name_2 = var_scl;

    tmp_right_name_2 = par_roots;

    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 849;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 849;
        goto frame_exception_exit_1;
    }
    assert( var_rnew == NULL );
    var_rnew = tmp_assign_source_13;

    tmp_source_name_6 = par_cls;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain__fromroots );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 850;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_rnew;

    frame_function->f_lineno = 850;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_left_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 850;
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = var_scl;

    tmp_right_name_4 = var_deg;

    tmp_right_name_3 = POWER_OPERATION( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 850;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 850;
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_14;

    tmp_called_name_5 = par_cls;

    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_coef;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_domain;

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "domain" );
        exception_tb = NULL;

        exception_lineno = 851;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_domain;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_window;

    tmp_dict_key_2 = const_str_plain_window;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 851;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 851;
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

            if ( par_roots )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_roots,
                    par_roots
                );

                assert( res == 0 );
            }

            if ( par_domain )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_domain,
                    par_domain
                );

                assert( res == 0 );
            }

            if ( par_window )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_window,
                    par_window
                );

                assert( res == 0 );
            }

            if ( var_deg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deg,
                    var_deg
                );

                assert( res == 0 );
            }

            if ( var_off )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_off,
                    var_off
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

            if ( var_rnew )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rnew,
                    var_rnew
                );

                assert( res == 0 );
            }

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_62_fromroots );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_roots );
    Py_DECREF( par_roots );
    par_roots = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

    CHECK_OBJECT( (PyObject *)var_deg );
    Py_DECREF( var_deg );
    var_deg = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_rnew );
    Py_DECREF( var_rnew );
    var_rnew = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_roots );
    Py_DECREF( par_roots );
    par_roots = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    Py_XDECREF( var_deg );
    var_deg = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_rnew );
    var_rnew = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_62_fromroots );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_63_identity( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_domain = python_pars[ 1 ];
    PyObject *par_window = python_pars[ 2 ];
    PyObject *var_off = NULL;
    PyObject *var_scl = NULL;
    PyObject *var_coef = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_return_value;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0cf55c8666cf3f06d50f8499b0b05ebb, module_numpy$polynomial$_polybase );
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
    tmp_compare_left_1 = par_domain;

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
    tmp_source_name_1 = par_cls;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 879;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_window;

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
    tmp_source_name_2 = par_cls;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_window );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 881;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    // Tried code:
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu );

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

        exception_lineno = 882;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_mapparms );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 882;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_window;

    tmp_args_element_name_2 = par_domain;

    frame_function->f_lineno = 882;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 882;
        goto try_except_handler_2;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 882;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_1, 0 );
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


        exception_lineno = 882;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_2, 1 );
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


        exception_lineno = 882;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;

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
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    assert( var_off == NULL );
    Py_INCREF( tmp_assign_source_6 );
    var_off = tmp_assign_source_6;

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    assert( var_scl == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_scl = tmp_assign_source_7;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_source_name_4 = par_cls;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain__line );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 883;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_off;

    tmp_args_element_name_4 = var_scl;

    frame_function->f_lineno = 883;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 883;
        goto frame_exception_exit_1;
    }
    assert( var_coef == NULL );
    var_coef = tmp_assign_source_8;

    tmp_called_name_3 = par_cls;

    tmp_args_element_name_5 = var_coef;

    tmp_args_element_name_6 = par_domain;

    tmp_args_element_name_7 = par_window;

    frame_function->f_lineno = 884;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_3, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 884;
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

            if ( par_domain )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_domain,
                    par_domain
                );

                assert( res == 0 );
            }

            if ( par_window )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_window,
                    par_window
                );

                assert( res == 0 );
            }

            if ( var_off )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_off,
                    var_off
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

            if ( var_coef )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_coef,
                    var_coef
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_63_identity );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

    CHECK_OBJECT( (PyObject *)var_off );
    Py_DECREF( var_off );
    var_off = NULL;

    CHECK_OBJECT( (PyObject *)var_scl );
    Py_DECREF( var_scl );
    var_scl = NULL;

    CHECK_OBJECT( (PyObject *)var_coef );
    Py_DECREF( var_coef );
    var_coef = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    Py_XDECREF( var_off );
    var_off = NULL;

    Py_XDECREF( var_scl );
    var_scl = NULL;

    Py_XDECREF( var_coef );
    var_coef = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_63_identity );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_64_basis( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_deg = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_window = python_pars[ 3 ];
    PyObject *var_ideg = NULL;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d18d53a70a996889507b9a000758813c, module_numpy$polynomial$_polybase );
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
    tmp_compare_left_1 = par_domain;

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
    tmp_source_name_1 = par_cls;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 916;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_window;

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
    tmp_source_name_2 = par_cls;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_window );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 918;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_int_arg_1 = par_deg;

    tmp_assign_source_3 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 919;
        goto frame_exception_exit_1;
    }
    assert( var_ideg == NULL );
    var_ideg = tmp_assign_source_3;

    tmp_compexpr_left_1 = var_ideg;

    tmp_compexpr_right_1 = par_deg;

    tmp_or_left_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 921;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 921;
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
    tmp_compexpr_left_2 = var_ideg;

    tmp_compexpr_right_2 = const_int_0;
    tmp_or_right_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 921;
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

        exception_lineno = 921;
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
    tmp_make_exception_arg_1 = const_str_digest_8f0d4dcf823408b98925ed1444c1d1eb;
    frame_function->f_lineno = 922;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 922;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_called_name_1 = par_cls;

    tmp_left_name_2 = LIST_COPY( const_list_int_0_list );
    tmp_right_name_1 = var_ideg;

    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = LIST_COPY( const_list_int_pos_1_list );
    tmp_args_element_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_domain;

    tmp_args_element_name_3 = par_window;

    frame_function->f_lineno = 923;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 923;
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

            if ( par_deg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_deg,
                    par_deg
                );

                assert( res == 0 );
            }

            if ( par_domain )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_domain,
                    par_domain
                );

                assert( res == 0 );
            }

            if ( par_window )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_window,
                    par_window
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_64_basis );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

    CHECK_OBJECT( (PyObject *)var_ideg );
    Py_DECREF( var_ideg );
    var_ideg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_deg );
    Py_DECREF( par_deg );
    par_deg = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    Py_XDECREF( var_ideg );
    var_ideg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_64_basis );
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


static PyObject *impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_65_cast( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_series = python_pars[ 1 ];
    PyObject *par_domain = python_pars[ 2 ];
    PyObject *par_window = python_pars[ 3 ];
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_402085c94dd88b92b5dbc95b4ee8739a, module_numpy$polynomial$_polybase );
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
    tmp_compare_left_1 = par_domain;

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
    tmp_source_name_1 = par_cls;

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_domain );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 962;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_domain;
        assert( old != NULL );
        par_domain = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_compare_left_2 = par_window;

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
    tmp_source_name_2 = par_cls;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_window );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 964;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_window;
        assert( old != NULL );
        par_window = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_3 = par_series;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_convert );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 965;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_domain;

    tmp_args_element_name_2 = par_cls;

    tmp_args_element_name_3 = par_window;

    frame_function->f_lineno = 965;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 965;
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

            if ( par_series )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_series,
                    par_series
                );

                assert( res == 0 );
            }

            if ( par_domain )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_domain,
                    par_domain
                );

                assert( res == 0 );
            }

            if ( par_window )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_window,
                    par_window
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
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_65_cast );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_series );
    Py_DECREF( par_series );
    par_series = NULL;

    CHECK_OBJECT( (PyObject *)par_domain );
    Py_DECREF( par_domain );
    par_domain = NULL;

    CHECK_OBJECT( (PyObject *)par_window );
    Py_DECREF( par_window );
    par_window = NULL;

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

    CHECK_OBJECT( (PyObject *)par_series );
    Py_DECREF( par_series );
    par_series = NULL;

    Py_XDECREF( par_domain );
    par_domain = NULL;

    Py_XDECREF( par_window );
    par_window = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_65_cast );
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



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_10__int(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_10__int,
        const_str_plain__int,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a8607b1c59513998ceefb971c2c50494,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_11__der(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_11__der,
        const_str_plain__der,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2feda23cbbb869dff73da58395f07117,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_12__fit(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_12__fit,
        const_str_plain__fit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_aa1bc9e62cbe4d8495b8406590f8cb32,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_13__line(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_13__line,
        const_str_plain__line,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d7ccd2ba08345212f89e35f785ddc4d7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_14__roots(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_14__roots,
        const_str_plain__roots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b0e86ec813a9ffeadebdcdb57338fd61,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_15__fromroots(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_15__fromroots,
        const_str_plain__fromroots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b687f4dededf9bac43cf0cb3249cc277,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_16_has_samecoef(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_16_has_samecoef,
        const_str_plain_has_samecoef,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b3a5d77505ba48ab7de433c863507e5b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_c6764a6d39f227f5a7a04f77b96f3b53
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_17_has_samedomain(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_17_has_samedomain,
        const_str_plain_has_samedomain,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7cfe91b235313fda4363b02b2d5c7940,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_98e31202befde89b11571b0707e8d968
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_18_has_samewindow(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_18_has_samewindow,
        const_str_plain_has_samewindow,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c9083308382465f869c3aad1f4960335,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_151b92710a27f5234231f69b96a29708
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_19_has_sametype(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_19_has_sametype,
        const_str_plain_has_sametype,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7f44bbcea722647170deb6d8e8f85e00,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_5dae058d009b7a6670aa297718f6267e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_1_domain(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_1_domain,
        const_str_plain_domain,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d0315b7f684ad851143dd94922e6ba8f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_20__get_coefficients(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_20__get_coefficients,
        const_str_plain__get_coefficients,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bb606110de77c0f483229ed816aec1dc,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_3d71454922bd253639ef60b0947a48ef
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_21___init__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_21___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_668c6f1a4215c2fb4b859cdf4e353702,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_22___repr__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_22___repr__,
        const_str_plain___repr__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d61e606fd45895a2fe8f5c8c3cd06b74,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_23___str__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_23___str__,
        const_str_plain___str__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d612018f277e45fa890733cf86b2ca28,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_24___getstate__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_24___getstate__,
        const_str_plain___getstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_324951ce42c3b0834aa9bfc6e44d76c6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_25___setstate__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_25___setstate__,
        const_str_plain___setstate__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1ae48e902b64ace274a7717334d96168,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_26___call__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_26___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d00e707f19839747cb15fec314349ab2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_27___iter__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_27___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fc7d7820fc1e8f5ea2e919d830676148,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_28___len__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_28___len__,
        const_str_plain___len__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b4aef6d21091e94862c5fca95931b4f6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_29___neg__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_29___neg__,
        const_str_plain___neg__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_37f9964a9faf856134135c4b592e7f5a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_2_window(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_2_window,
        const_str_plain_window,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_83fbf8a083e2b11e4e28fe3fa37d38ba,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_30___pos__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_30___pos__,
        const_str_plain___pos__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c1bbe9474c48432d604f317320001741,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_31___add__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_31___add__,
        const_str_plain___add__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_92eba166a6c42a2ead91913fb0a99ac0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_32___sub__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_32___sub__,
        const_str_plain___sub__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bdb9331fbde6d8cf7606d440a71a7bcf,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_33___mul__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_33___mul__,
        const_str_plain___mul__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a7b8660214ebc34bc4a026ff95004ab3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_34___div__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_34___div__,
        const_str_plain___div__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1111887ba666da2306967d03573fcc86,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_35___truediv__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_35___truediv__,
        const_str_plain___truediv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c8abe00267d70a5b2e820dbd187811cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_36___floordiv__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_36___floordiv__,
        const_str_plain___floordiv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_52174b5574f9ac9df4ebf206a68a436e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_37___mod__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_37___mod__,
        const_str_plain___mod__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0bc389874eeee8db697bb4c1e3a10c38,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_38___divmod__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_38___divmod__,
        const_str_plain___divmod__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_eb7825935c95194a150298c38b823731,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_39___pow__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_39___pow__,
        const_str_plain___pow__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_89ab0d315c24c7a4ab8dbcb7a4b93e6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_3_nickname(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_3_nickname,
        const_str_plain_nickname,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e1fbf66bc44c7fa5d7b964c3fc569fb8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_40___radd__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_40___radd__,
        const_str_plain___radd__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f2352523168a8948e0fdc6b47a4cf17,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_41___rsub__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_41___rsub__,
        const_str_plain___rsub__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8c89a14807349796e51650e90a3509db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_42___rmul__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_42___rmul__,
        const_str_plain___rmul__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d7eaa845a66d33b26570846d0eec9998,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_43___rdiv__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_43___rdiv__,
        const_str_plain___rdiv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9f6359c5e67b7628000c76a7ee8bc3b9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_44___rtruediv__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_44___rtruediv__,
        const_str_plain___rtruediv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4265356bc95faac6052efbea381c1d6d,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_45___rfloordiv__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_45___rfloordiv__,
        const_str_plain___rfloordiv__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9307f0d808db63b1869e3422be33c006,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_46___rmod__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_46___rmod__,
        const_str_plain___rmod__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d005315163298bb71821bf4825b24fc7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_47___rdivmod__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_47___rdivmod__,
        const_str_plain___rdivmod__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_78c9e3deb5108a625af3110f1c35fa6c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_48___eq__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_48___eq__,
        const_str_plain___eq__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_df06141252fe8e42331fa270840ce018,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_49___ne__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_49___ne__,
        const_str_plain___ne__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4bcfa00520e8c52382d8fb1dabdfe6ca,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_4__add(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_4__add,
        const_str_plain__add,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9b163e94a5e3f0ed301985ec4a8bdee7,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_50_copy(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_50_copy,
        const_str_plain_copy,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_68dabcb2b67de7b3f160eab9af783ea1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_b42beed796d24bd6809cc4eec294d8d4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_51_degree(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_51_degree,
        const_str_plain_degree,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2eaaf553800800fe7229dd39a5dfb315,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_5c1672ce023f467aa593f17c1716b98a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_52_cutdeg(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_52_cutdeg,
        const_str_plain_cutdeg,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d5d0d3ed720c7606409d9ef170be195b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_7aad98442226938245bb06c8fd0bcdbf
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_53_trim( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_53_trim,
        const_str_plain_trim,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_189d274098273a7ae4ec1a7085f772be,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_64ef2c5ae273200dd6a59733c0c92917
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_54_truncate(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_54_truncate,
        const_str_plain_truncate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0f469c3ac1acc83e3f36ceb7987d1b02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_c552a162a573bebaa10322a24f45277b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_55_convert( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_55_convert,
        const_str_plain_convert,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_14d2452fea42da6878d8da7f796e6b79,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_058dc8328bcd097c8ca82772f5b011b9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_56_mapparms(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_56_mapparms,
        const_str_plain_mapparms,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4ab7f983bc6249cf990b87bcb3a8a187,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_5cff95afec2fedfa77694f6d8c7142ca
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_57_integ( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_57_integ,
        const_str_plain_integ,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fb6cb8fe37a92c4f03a2f64c7a81db9f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_e7f38fd6b94eee09ef46595bfaa612f6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_58_deriv( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_58_deriv,
        const_str_plain_deriv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_48c8a7b01afc27d31790e2fa8f20f937,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_3f3e88a2b5ee9a848a5e07299875e4e1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_59_roots(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_59_roots,
        const_str_plain_roots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_699f5eb3b1a6006dbdda91e94473a41f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_2b9498cf29ec706ed018bb8515699045
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_5__sub(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_5__sub,
        const_str_plain__sub,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b602afd529ff2f86f6eef8ce1d34e7cb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_60_linspace( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_60_linspace,
        const_str_plain_linspace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f07d4ff064fffd55efcd40cfc5a1dff5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_5c3873fd0d998cd8e83d826364b73c58
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_61_fit( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_61_fit,
        const_str_plain_fit,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b444c10234a30b272a217ebda9b1d539,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_a6e37a6cdce92a6b25f46856f4f04658
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_62_fromroots( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_62_fromroots,
        const_str_plain_fromroots,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4fbff2df7ddc0030f2dbcb27d1cbb272,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_b245160a1e9321f457c87c4934f565c8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_63_identity( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_63_identity,
        const_str_plain_identity,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0cf55c8666cf3f06d50f8499b0b05ebb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_acf557064045411a8e7be3ebc065dd9c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_64_basis( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_64_basis,
        const_str_plain_basis,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d18d53a70a996889507b9a000758813c,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_78fa2448fcb3c239d1a740c0b7d98b19
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_65_cast( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_65_cast,
        const_str_plain_cast,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_402085c94dd88b92b5dbc95b4ee8739a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        const_str_digest_070d2df2cae1dff89fa1d1b4ead50a9e
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_6__mul(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_6__mul,
        const_str_plain__mul,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1e718a9aa0f4819704900420f1bf7621,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_7__div(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_7__div,
        const_str_plain__div,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_105ee80b57314b083c662bb0fd40c928,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_8__pow(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_8__pow,
        const_str_plain__pow,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0362580929e6ad5cf2c826df216f9275,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_9__val(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase$$$function_9__val,
        const_str_plain__val,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_103eb3165b496420e1c74ded98bdab43,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$polynomial$_polybase,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$polynomial$_polybase =
{
    PyModuleDef_HEAD_INIT,
    "numpy.polynomial._polybase",   /* m_name */
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

MOD_INIT_DECL( numpy$polynomial$_polybase )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$polynomial$_polybase );
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

    // puts( "in initnumpy$polynomial$_polybase" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$polynomial$_polybase = Py_InitModule4(
        "numpy.polynomial._polybase",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$polynomial$_polybase = PyModule_Create( &mdef_numpy$polynomial$_polybase );
#endif

    moduledict_numpy$polynomial$_polybase = (PyDictObject *)((PyModuleObject *)module_numpy$polynomial$_polybase)->md_dict;

    CHECK_OBJECT( module_numpy$polynomial$_polybase );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_ebed222bae14d5baea3d6e14020bd482, module_numpy$polynomial$_polybase );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$polynomial$_polybase );

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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_key_name_1;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_10042ca87e4ab2b5b839d8b6298c44c1;
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f9e681268eb7ba80eeee2a207dad54b2;
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_43944934f00cc2564dffc9cc806d039d, module_numpy$polynomial$_polybase );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$polynomial$_polybase)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_abc, tmp_import_globals_1, tmp_import_globals_1, const_tuple_c1173a617796a82a0814a08106680f7a_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ABCMeta );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_ABCMeta, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$polynomial$_polybase)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_abc, tmp_import_globals_2, tmp_import_globals_2, const_tuple_c1173a617796a82a0814a08106680f7a_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_abstractmethod );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractmethod, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$polynomial$_polybase)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_abc, tmp_import_globals_3, tmp_import_globals_3, const_tuple_c1173a617796a82a0814a08106680f7a_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_abstractproperty );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_abstractproperty, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$polynomial$_polybase)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_numbers, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_Number_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Number );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_Number, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$polynomial$_polybase)->md_dict;
    frame_module->f_lineno = 14;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_0 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$polynomial$_polybase)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_empty, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_polyutils_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_polyutils );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_pu, tmp_assign_source_11 );
    tmp_assign_source_12 = LIST_COPY( const_list_str_plain_ABCPolyBase_list );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    tmp_assign_source_13 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_13;

    // Tried code:
    tmp_assign_source_14 = impl_numpy$polynomial$_polybase$$$class_1_ABCPolyBase( NULL );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_14;

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
    tmp_assign_source_15 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_15 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_15;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_ABCPolyBase;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 19;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_16;

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
    tmp_assign_source_17 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_numpy$polynomial$_polybase, (Nuitka_StringObject *)const_str_plain_ABCPolyBase, tmp_assign_source_17 );
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


    return MOD_RETURN_VALUE( module_numpy$polynomial$_polybase );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
