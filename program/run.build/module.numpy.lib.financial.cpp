/* Generated code for Python source for module 'numpy.lib.financial'
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

/* The _module_numpy$lib$financial is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$lib$financial;
PyDictObject *moduledict_numpy$lib$financial;

/* The module constants used, if any. */
static PyObject *const_str_plain_guess;
static PyObject *const_tuple_str_plain_rate_str_plain_values_tuple;
static PyObject *const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple;
extern PyObject *const_int_pos_100;
static PyObject *const_str_plain_denom;
static PyObject *const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple;
extern PyObject *const_str_plain_nan;
static PyObject *const_str_plain_reinvest_rate;
static PyObject *const_str_plain_finance_rate;
static PyObject *const_dict_76c15249d8e349cb6091e9dfd954b04f;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_financial;
static PyObject *const_str_digest_a4c8b8e0a87bad3cbe7e13dbb57ba500;
extern PyObject *const_dict_54f4aa72cf3f950a22814f798a2888e8;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_divide;
extern PyObject *const_str_plain_axis;
static PyObject *const_str_plain_per;
extern PyObject *const_str_plain_size;
extern PyObject *const_str_plain_numpy;
extern PyObject *const_str_plain_begin;
extern PyObject *const_str_plain_t1;
static PyObject *const_str_plain_pmt;
extern PyObject *const_str_plain_t2;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_zeros;
extern PyObject *const_str_plain_close;
static PyObject *const_str_plain_mirr;
static PyObject *const_list_628571dee9b51b244ba04656b2ff981a_list;
static PyObject *const_str_digest_5b3835c2166df5da5838f5dfcb2fe151;
extern PyObject *const_str_plain_asarray;
static PyObject *const_tuple_str_plain_when_str_plain_x_tuple;
extern PyObject *const_str_plain_temp;
extern PyObject *const_str_plain_sum;
extern PyObject *const_str_plain_argmin;
extern PyObject *const_str_plain_raise;
extern PyObject *const_str_plain___exit__;
static PyObject *const_tuple_a6525faea1c0d6d9acf07158f54c8e0e_tuple;
extern PyObject *const_str_plain_broadcast;
static PyObject *const_tuple_6ebc2121c31df815e56515eecc906863_tuple;
extern PyObject *const_int_neg_1;
static PyObject *const_str_plain_ipmt;
extern PyObject *const_str_plain_abs;
static PyObject *const_str_plain_rn;
extern PyObject *const_str_plain_errstate;
static PyObject *const_str_digest_7a0ea3e39355393eebad4b4715fc9424;
static PyObject *const_tuple_18045545bee572042406755350a450f5_tuple;
extern PyObject *const_str_plain_map;
static PyObject *const_str_plain_npv;
static PyObject *const_str_plain__g_div_gp;
static PyObject *const_str_plain__when_to_num;
static PyObject *const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_1472e5fec476efc2c264b7175d056214;
static PyObject *const_str_plain_zer;
extern PyObject *const_int_pos_2;
extern PyObject *const_int_pos_1;
extern PyObject *const_float_0_0;
static PyObject *const_str_plain_rate;
extern PyObject *const_str_plain_np;
extern PyObject *const_slice_none_none_int_neg_1;
static PyObject *const_tuple_d7869242414be3cfc42a57ceacf2c61e_tuple;
static PyObject *const_str_digest_3e2116c0d3c9c83df8b43aa8ac4bdb79;
extern PyObject *const_str_plain_item;
extern PyObject *const_str_plain_iter;
static PyObject *const_tuple_str_plain_end_float_0_1_float_1e_minus_06_int_pos_100_tuple;
static PyObject *const_str_plain_neg;
static PyObject *const_str_plain__rbl;
static PyObject *const_str_digest_c1d31faee37f467929726be840cb6a00;
extern PyObject *const_str_plain_total;
extern PyObject *const_str_plain_fact;
static PyObject *const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple;
static PyObject *const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple;
static PyObject *const_float_0_1;
extern PyObject *const_str_plain_where;
extern PyObject *const_str_plain_values;
static PyObject *const_str_digest_4d0398ef5cd12a598a12e7548fa749c6;
static PyObject *const_str_plain_rnp1;
static PyObject *const_str_digest_0b0dc31831a33dd0b62397cd04bf2e6d;
static PyObject *const_str_digest_27f7fcd87f82a60d41011e980adb5e1c;
extern PyObject *const_str_plain_all;
static PyObject *const_str_plain_ppmt;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_tol;
extern PyObject *const_str_plain___enter__;
static PyObject *const_str_digest_4104ba4082dd8133344f05cc68681928;
extern PyObject *const_str_plain_A;
extern PyObject *const_str_plain_B;
extern PyObject *const_str_plain_broadcast_arrays;
static PyObject *const_str_digest_6600ad7a3a6c077fa0b55aa1505195fe;
extern PyObject *const_str_plain_fv;
extern PyObject *const_str_plain_res;
static PyObject *const_str_plain_when;
static PyObject *const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple;
extern PyObject *const_str_plain_shape;
static PyObject *const_float_1e_minus_06;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_e;
static PyObject *const_str_plain_irr;
extern PyObject *const_str_plain_logical_and;
extern PyObject *const_str_plain_b;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_y;
extern PyObject *const_str_plain_z;
static PyObject *const_str_plain_beginning;
extern PyObject *const_str_plain_w;
extern PyObject *const_str_plain_p;
static PyObject *const_str_plain_numer;
extern PyObject *const_str_plain_r;
extern PyObject *const_str_plain_log;
static PyObject *const_tuple_int_0_str_plain_end_tuple;
static PyObject *const_str_plain_miter;
extern PyObject *const_str_plain_diff;
extern PyObject *const_str_plain_double;
static PyObject *const_str_plain__convert_when;
extern PyObject *const_str_plain_finish;
extern PyObject *const_str_plain_mask;
extern PyObject *const_str_plain_copyto;
extern PyObject *const_str_plain_any;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_start;
static PyObject *const_tuple_str_plain_end_tuple;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_plain_nper;
extern PyObject *const_int_0;
static PyObject *const_str_digest_18f337534aba44e1b826ad11aa53b9b6;
static PyObject *const_str_digest_a8a5ed4ddc16835cff524dec84afa6df;
static PyObject *const_dict_d3ecefd5681df557c4934269caf154b0;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_str_plain_division;
static PyObject *const_str_plain_use_zero_rate;
static PyObject *const_tuple_str_plain_values_str_plain_res_str_plain_mask_str_plain_rate_tuple;
static PyObject *const_str_plain_total_pmt;
extern PyObject *const_str_plain_end;
static PyObject *const_str_digest_615e7133c2050edc26acca793638caf8;
extern PyObject *const_str_plain_pv;
extern PyObject *const_str_plain_imag;
static PyObject *const_str_plain_maxiter;
extern PyObject *const_str_plain_roots;
extern PyObject *const_str_plain_pos;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_float_0_0_str_plain_end_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_guess = UNSTREAM_STRING( &constant_bin[ 220981 ], 5, 1 );
    const_tuple_str_plain_rate_str_plain_values_tuple = PyTuple_New( 2 );
    const_str_plain_rate = UNSTREAM_STRING( &constant_bin[ 1922 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_rate_str_plain_values_tuple, 0, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    PyTuple_SET_ITEM( const_tuple_str_plain_rate_str_plain_values_tuple, 1, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple = PyTuple_New( 13 );
    const_str_plain_nper = UNSTREAM_STRING( &constant_bin[ 928288 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 0, const_str_plain_nper ); Py_INCREF( const_str_plain_nper );
    const_str_plain_pmt = UNSTREAM_STRING( &constant_bin[ 928292 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 1, const_str_plain_pmt ); Py_INCREF( const_str_plain_pmt );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 2, const_str_plain_pv ); Py_INCREF( const_str_plain_pv );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 3, const_str_plain_fv ); Py_INCREF( const_str_plain_fv );
    const_str_plain_when = UNSTREAM_STRING( &constant_bin[ 4461 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 4, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 5, const_str_plain_guess ); Py_INCREF( const_str_plain_guess );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 6, const_str_plain_tol ); Py_INCREF( const_str_plain_tol );
    const_str_plain_maxiter = UNSTREAM_STRING( &constant_bin[ 928295 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 7, const_str_plain_maxiter ); Py_INCREF( const_str_plain_maxiter );
    const_str_plain_rn = UNSTREAM_STRING( &constant_bin[ 3893 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 8, const_str_plain_rn ); Py_INCREF( const_str_plain_rn );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 9, const_str_plain_iter ); Py_INCREF( const_str_plain_iter );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 10, const_str_plain_close ); Py_INCREF( const_str_plain_close );
    const_str_plain_rnp1 = UNSTREAM_STRING( &constant_bin[ 928302 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 11, const_str_plain_rnp1 ); Py_INCREF( const_str_plain_rnp1 );
    PyTuple_SET_ITEM( const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 12, const_str_plain_diff ); Py_INCREF( const_str_plain_diff );
    const_str_plain_denom = UNSTREAM_STRING( &constant_bin[ 928306 ], 5, 1 );
    const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple, 0, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    const_str_plain_per = UNSTREAM_STRING( &constant_bin[ 617 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple, 1, const_str_plain_per ); Py_INCREF( const_str_plain_per );
    PyTuple_SET_ITEM( const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple, 2, const_str_plain_nper ); Py_INCREF( const_str_plain_nper );
    PyTuple_SET_ITEM( const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple, 3, const_str_plain_pv ); Py_INCREF( const_str_plain_pv );
    PyTuple_SET_ITEM( const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple, 4, const_str_plain_fv ); Py_INCREF( const_str_plain_fv );
    PyTuple_SET_ITEM( const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple, 5, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    const_str_plain_total_pmt = UNSTREAM_STRING( &constant_bin[ 928311 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple, 6, const_str_plain_total_pmt ); Py_INCREF( const_str_plain_total_pmt );
    const_str_plain_ipmt = UNSTREAM_STRING( &constant_bin[ 928320 ], 4, 1 );
    PyTuple_SET_ITEM( const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple, 7, const_str_plain_ipmt ); Py_INCREF( const_str_plain_ipmt );
    const_str_plain_reinvest_rate = UNSTREAM_STRING( &constant_bin[ 928324 ], 13, 1 );
    const_str_plain_finance_rate = UNSTREAM_STRING( &constant_bin[ 928337 ], 12, 1 );
    const_dict_76c15249d8e349cb6091e9dfd954b04f = _PyDict_NewPresized( 9 );
    PyDict_SetItem( const_dict_76c15249d8e349cb6091e9dfd954b04f, const_int_0, const_int_0 );
    PyDict_SetItem( const_dict_76c15249d8e349cb6091e9dfd954b04f, const_int_pos_1, const_int_pos_1 );
    PyDict_SetItem( const_dict_76c15249d8e349cb6091e9dfd954b04f, const_str_plain_begin, const_int_pos_1 );
    PyDict_SetItem( const_dict_76c15249d8e349cb6091e9dfd954b04f, const_str_plain_b, const_int_pos_1 );
    PyDict_SetItem( const_dict_76c15249d8e349cb6091e9dfd954b04f, const_str_plain_e, const_int_0 );
    PyDict_SetItem( const_dict_76c15249d8e349cb6091e9dfd954b04f, const_str_plain_start, const_int_pos_1 );
    PyDict_SetItem( const_dict_76c15249d8e349cb6091e9dfd954b04f, const_str_plain_finish, const_int_0 );
    PyDict_SetItem( const_dict_76c15249d8e349cb6091e9dfd954b04f, const_str_plain_end, const_int_0 );
    const_str_plain_beginning = UNSTREAM_STRING( &constant_bin[ 194609 ], 9, 1 );
    PyDict_SetItem( const_dict_76c15249d8e349cb6091e9dfd954b04f, const_str_plain_beginning, const_int_pos_1 );
    assert( PyDict_Size( const_dict_76c15249d8e349cb6091e9dfd954b04f ) == 9 );
    const_str_digest_a4c8b8e0a87bad3cbe7e13dbb57ba500 = UNSTREAM_STRING( &constant_bin[ 928349 ], 571, 0 );
    const_str_plain_mirr = UNSTREAM_STRING( &constant_bin[ 501569 ], 4, 1 );
    const_list_628571dee9b51b244ba04656b2ff981a_list = PyList_New( 10 );
    PyList_SET_ITEM( const_list_628571dee9b51b244ba04656b2ff981a_list, 0, const_str_plain_fv ); Py_INCREF( const_str_plain_fv );
    PyList_SET_ITEM( const_list_628571dee9b51b244ba04656b2ff981a_list, 1, const_str_plain_pmt ); Py_INCREF( const_str_plain_pmt );
    PyList_SET_ITEM( const_list_628571dee9b51b244ba04656b2ff981a_list, 2, const_str_plain_nper ); Py_INCREF( const_str_plain_nper );
    PyList_SET_ITEM( const_list_628571dee9b51b244ba04656b2ff981a_list, 3, const_str_plain_ipmt ); Py_INCREF( const_str_plain_ipmt );
    const_str_plain_ppmt = UNSTREAM_STRING( &constant_bin[ 928920 ], 4, 1 );
    PyList_SET_ITEM( const_list_628571dee9b51b244ba04656b2ff981a_list, 4, const_str_plain_ppmt ); Py_INCREF( const_str_plain_ppmt );
    PyList_SET_ITEM( const_list_628571dee9b51b244ba04656b2ff981a_list, 5, const_str_plain_pv ); Py_INCREF( const_str_plain_pv );
    PyList_SET_ITEM( const_list_628571dee9b51b244ba04656b2ff981a_list, 6, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    const_str_plain_irr = UNSTREAM_STRING( &constant_bin[ 467216 ], 3, 1 );
    PyList_SET_ITEM( const_list_628571dee9b51b244ba04656b2ff981a_list, 7, const_str_plain_irr ); Py_INCREF( const_str_plain_irr );
    const_str_plain_npv = UNSTREAM_STRING( &constant_bin[ 928924 ], 3, 1 );
    PyList_SET_ITEM( const_list_628571dee9b51b244ba04656b2ff981a_list, 8, const_str_plain_npv ); Py_INCREF( const_str_plain_npv );
    PyList_SET_ITEM( const_list_628571dee9b51b244ba04656b2ff981a_list, 9, const_str_plain_mirr ); Py_INCREF( const_str_plain_mirr );
    const_str_digest_5b3835c2166df5da5838f5dfcb2fe151 = UNSTREAM_STRING( &constant_bin[ 928927 ], 1402, 0 );
    const_tuple_str_plain_when_str_plain_x_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_when_str_plain_x_tuple, 0, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    PyTuple_SET_ITEM( const_tuple_str_plain_when_str_plain_x_tuple, 1, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    const_tuple_a6525faea1c0d6d9acf07158f54c8e0e_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_a6525faea1c0d6d9acf07158f54c8e0e_tuple, 0, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    PyTuple_SET_ITEM( const_tuple_a6525faea1c0d6d9acf07158f54c8e0e_tuple, 1, const_str_plain_per ); Py_INCREF( const_str_plain_per );
    PyTuple_SET_ITEM( const_tuple_a6525faea1c0d6d9acf07158f54c8e0e_tuple, 2, const_str_plain_nper ); Py_INCREF( const_str_plain_nper );
    PyTuple_SET_ITEM( const_tuple_a6525faea1c0d6d9acf07158f54c8e0e_tuple, 3, const_str_plain_pv ); Py_INCREF( const_str_plain_pv );
    PyTuple_SET_ITEM( const_tuple_a6525faea1c0d6d9acf07158f54c8e0e_tuple, 4, const_str_plain_fv ); Py_INCREF( const_str_plain_fv );
    PyTuple_SET_ITEM( const_tuple_a6525faea1c0d6d9acf07158f54c8e0e_tuple, 5, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    PyTuple_SET_ITEM( const_tuple_a6525faea1c0d6d9acf07158f54c8e0e_tuple, 6, const_str_plain_total ); Py_INCREF( const_str_plain_total );
    const_tuple_6ebc2121c31df815e56515eecc906863_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 0, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 1, const_str_plain_pmt ); Py_INCREF( const_str_plain_pmt );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 2, const_str_plain_pv ); Py_INCREF( const_str_plain_pv );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 3, const_str_plain_fv ); Py_INCREF( const_str_plain_fv );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 4, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    const_str_plain_use_zero_rate = UNSTREAM_STRING( &constant_bin[ 930329 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 5, const_str_plain_use_zero_rate ); Py_INCREF( const_str_plain_use_zero_rate );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 6, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 7, const_str_plain_A ); Py_INCREF( const_str_plain_A );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 8, const_str_plain_B ); Py_INCREF( const_str_plain_B );
    const_str_plain_miter = UNSTREAM_STRING( &constant_bin[ 96949 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 9, const_str_plain_miter ); Py_INCREF( const_str_plain_miter );
    const_str_plain_zer = UNSTREAM_STRING( &constant_bin[ 83833 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 10, const_str_plain_zer ); Py_INCREF( const_str_plain_zer );
    const_str_digest_7a0ea3e39355393eebad4b4715fc9424 = UNSTREAM_STRING( &constant_bin[ 930342 ], 254, 0 );
    const_tuple_18045545bee572042406755350a450f5_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_18045545bee572042406755350a450f5_tuple, 0, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_18045545bee572042406755350a450f5_tuple, 1, const_str_plain_finance_rate ); Py_INCREF( const_str_plain_finance_rate );
    PyTuple_SET_ITEM( const_tuple_18045545bee572042406755350a450f5_tuple, 2, const_str_plain_reinvest_rate ); Py_INCREF( const_str_plain_reinvest_rate );
    PyTuple_SET_ITEM( const_tuple_18045545bee572042406755350a450f5_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_18045545bee572042406755350a450f5_tuple, 4, const_str_plain_pos ); Py_INCREF( const_str_plain_pos );
    const_str_plain_neg = UNSTREAM_STRING( &constant_bin[ 17683 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_18045545bee572042406755350a450f5_tuple, 5, const_str_plain_neg ); Py_INCREF( const_str_plain_neg );
    const_str_plain_numer = UNSTREAM_STRING( &constant_bin[ 2396 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_18045545bee572042406755350a450f5_tuple, 6, const_str_plain_numer ); Py_INCREF( const_str_plain_numer );
    PyTuple_SET_ITEM( const_tuple_18045545bee572042406755350a450f5_tuple, 7, const_str_plain_denom ); Py_INCREF( const_str_plain_denom );
    const_str_plain__g_div_gp = UNSTREAM_STRING( &constant_bin[ 930596 ], 9, 1 );
    const_str_plain__when_to_num = UNSTREAM_STRING( &constant_bin[ 930605 ], 12, 1 );
    const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple, 0, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    PyTuple_SET_ITEM( const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple, 1, const_str_plain_nper ); Py_INCREF( const_str_plain_nper );
    PyTuple_SET_ITEM( const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple, 2, const_str_plain_pmt ); Py_INCREF( const_str_plain_pmt );
    PyTuple_SET_ITEM( const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple, 3, const_str_plain_fv ); Py_INCREF( const_str_plain_fv );
    PyTuple_SET_ITEM( const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple, 4, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    PyTuple_SET_ITEM( const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple, 5, const_str_plain_temp ); Py_INCREF( const_str_plain_temp );
    PyTuple_SET_ITEM( const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple, 6, const_str_plain_miter ); Py_INCREF( const_str_plain_miter );
    PyTuple_SET_ITEM( const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple, 7, const_str_plain_zer ); Py_INCREF( const_str_plain_zer );
    PyTuple_SET_ITEM( const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple, 8, const_str_plain_fact ); Py_INCREF( const_str_plain_fact );
    const_str_digest_1472e5fec476efc2c264b7175d056214 = UNSTREAM_STRING( &constant_bin[ 930617 ], 1331, 0 );
    const_tuple_d7869242414be3cfc42a57ceacf2c61e_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_d7869242414be3cfc42a57ceacf2c61e_tuple, 0, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    PyTuple_SET_ITEM( const_tuple_d7869242414be3cfc42a57ceacf2c61e_tuple, 1, const_str_plain_per ); Py_INCREF( const_str_plain_per );
    PyTuple_SET_ITEM( const_tuple_d7869242414be3cfc42a57ceacf2c61e_tuple, 2, const_str_plain_pmt ); Py_INCREF( const_str_plain_pmt );
    PyTuple_SET_ITEM( const_tuple_d7869242414be3cfc42a57ceacf2c61e_tuple, 3, const_str_plain_pv ); Py_INCREF( const_str_plain_pv );
    PyTuple_SET_ITEM( const_tuple_d7869242414be3cfc42a57ceacf2c61e_tuple, 4, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    const_str_digest_3e2116c0d3c9c83df8b43aa8ac4bdb79 = UNSTREAM_STRING( &constant_bin[ 931948 ], 305, 0 );
    const_tuple_str_plain_end_float_0_1_float_1e_minus_06_int_pos_100_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_end_float_0_1_float_1e_minus_06_int_pos_100_tuple, 0, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    const_float_0_1 = UNSTREAM_FLOAT( &constant_bin[ 932253 ] );
    PyTuple_SET_ITEM( const_tuple_str_plain_end_float_0_1_float_1e_minus_06_int_pos_100_tuple, 1, const_float_0_1 ); Py_INCREF( const_float_0_1 );
    const_float_1e_minus_06 = UNSTREAM_FLOAT( &constant_bin[ 932261 ] );
    PyTuple_SET_ITEM( const_tuple_str_plain_end_float_0_1_float_1e_minus_06_int_pos_100_tuple, 2, const_float_1e_minus_06 ); Py_INCREF( const_float_1e_minus_06 );
    PyTuple_SET_ITEM( const_tuple_str_plain_end_float_0_1_float_1e_minus_06_int_pos_100_tuple, 3, const_int_pos_100 ); Py_INCREF( const_int_pos_100 );
    const_str_plain__rbl = UNSTREAM_STRING( &constant_bin[ 932269 ], 4, 1 );
    const_str_digest_c1d31faee37f467929726be840cb6a00 = UNSTREAM_STRING( &constant_bin[ 932273 ], 61, 0 );
    const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple, 0, const_str_plain_r ); Py_INCREF( const_str_plain_r );
    PyTuple_SET_ITEM( const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple, 1, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple, 2, const_str_plain_p ); Py_INCREF( const_str_plain_p );
    PyTuple_SET_ITEM( const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple, 3, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple, 5, const_str_plain_w ); Py_INCREF( const_str_plain_w );
    PyTuple_SET_ITEM( const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple, 6, const_str_plain_t1 ); Py_INCREF( const_str_plain_t1 );
    PyTuple_SET_ITEM( const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple, 7, const_str_plain_t2 ); Py_INCREF( const_str_plain_t2 );
    const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple, 0, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    PyTuple_SET_ITEM( const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple, 1, const_str_plain_nper ); Py_INCREF( const_str_plain_nper );
    PyTuple_SET_ITEM( const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple, 2, const_str_plain_pmt ); Py_INCREF( const_str_plain_pmt );
    PyTuple_SET_ITEM( const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple, 3, const_str_plain_pv ); Py_INCREF( const_str_plain_pv );
    PyTuple_SET_ITEM( const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple, 4, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    PyTuple_SET_ITEM( const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple, 5, const_str_plain_temp ); Py_INCREF( const_str_plain_temp );
    PyTuple_SET_ITEM( const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple, 6, const_str_plain_miter ); Py_INCREF( const_str_plain_miter );
    PyTuple_SET_ITEM( const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple, 7, const_str_plain_zer ); Py_INCREF( const_str_plain_zer );
    PyTuple_SET_ITEM( const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple, 8, const_str_plain_fact ); Py_INCREF( const_str_plain_fact );
    const_str_digest_4d0398ef5cd12a598a12e7548fa749c6 = UNSTREAM_STRING( &constant_bin[ 932334 ], 2696, 0 );
    const_str_digest_0b0dc31831a33dd0b62397cd04bf2e6d = UNSTREAM_STRING( &constant_bin[ 935030 ], 518, 0 );
    const_str_digest_27f7fcd87f82a60d41011e980adb5e1c = UNSTREAM_STRING( &constant_bin[ 935548 ], 2587, 0 );
    const_str_digest_4104ba4082dd8133344f05cc68681928 = UNSTREAM_STRING( &constant_bin[ 938135 ], 2011, 0 );
    const_str_digest_6600ad7a3a6c077fa0b55aa1505195fe = UNSTREAM_STRING( &constant_bin[ 940146 ], 2694, 0 );
    const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple, 0, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    PyTuple_SET_ITEM( const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple, 1, const_str_plain_nper ); Py_INCREF( const_str_plain_nper );
    PyTuple_SET_ITEM( const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple, 2, const_str_plain_pv ); Py_INCREF( const_str_plain_pv );
    PyTuple_SET_ITEM( const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple, 3, const_str_plain_fv ); Py_INCREF( const_str_plain_fv );
    PyTuple_SET_ITEM( const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple, 4, const_str_plain_when ); Py_INCREF( const_str_plain_when );
    PyTuple_SET_ITEM( const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple, 5, const_str_plain_temp ); Py_INCREF( const_str_plain_temp );
    PyTuple_SET_ITEM( const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple, 6, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple, 7, const_str_plain_z ); Py_INCREF( const_str_plain_z );
    PyTuple_SET_ITEM( const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple, 8, const_str_plain_fact ); Py_INCREF( const_str_plain_fact );
    const_tuple_int_0_str_plain_end_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_int_0_str_plain_end_tuple, 0, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_int_0_str_plain_end_tuple, 1, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    const_str_plain__convert_when = UNSTREAM_STRING( &constant_bin[ 942840 ], 13, 1 );
    const_tuple_str_plain_end_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_end_tuple, 0, const_str_plain_end ); Py_INCREF( const_str_plain_end );
    const_str_digest_18f337534aba44e1b826ad11aa53b9b6 = UNSTREAM_STRING( &constant_bin[ 942853 ], 2701, 0 );
    const_str_digest_a8a5ed4ddc16835cff524dec84afa6df = UNSTREAM_STRING( &constant_bin[ 940116 ], 19, 0 );
    const_dict_d3ecefd5681df557c4934269caf154b0 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_d3ecefd5681df557c4934269caf154b0, const_str_plain_divide, const_str_plain_raise );
    assert( PyDict_Size( const_dict_d3ecefd5681df557c4934269caf154b0 ) == 1 );
    const_tuple_str_plain_values_str_plain_res_str_plain_mask_str_plain_rate_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_values_str_plain_res_str_plain_mask_str_plain_rate_tuple, 0, const_str_plain_values ); Py_INCREF( const_str_plain_values );
    PyTuple_SET_ITEM( const_tuple_str_plain_values_str_plain_res_str_plain_mask_str_plain_rate_tuple, 1, const_str_plain_res ); Py_INCREF( const_str_plain_res );
    PyTuple_SET_ITEM( const_tuple_str_plain_values_str_plain_res_str_plain_mask_str_plain_rate_tuple, 2, const_str_plain_mask ); Py_INCREF( const_str_plain_mask );
    PyTuple_SET_ITEM( const_tuple_str_plain_values_str_plain_res_str_plain_mask_str_plain_rate_tuple, 3, const_str_plain_rate ); Py_INCREF( const_str_plain_rate );
    const_str_digest_615e7133c2050edc26acca793638caf8 = UNSTREAM_STRING( &constant_bin[ 945554 ], 1238, 0 );
    const_tuple_float_0_0_str_plain_end_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_float_0_0_str_plain_end_tuple, 0, const_float_0_0 ); Py_INCREF( const_float_0_0 );
    PyTuple_SET_ITEM( const_tuple_float_0_0_str_plain_end_tuple, 1, const_str_plain_end ); Py_INCREF( const_str_plain_end );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$lib$financial( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_5c5af0b564d343a4138280937cc890c4;
static PyCodeObject *codeobj_5d37f769789b9d58efd965c9e1eba3e4;
static PyCodeObject *codeobj_0b222058570f3c055ea73a72804dc8fa;
static PyCodeObject *codeobj_2b3f755fe191595cbbaa8a35de1cd173;
static PyCodeObject *codeobj_f305acf933059ae631fea99106c59a91;
static PyCodeObject *codeobj_836bdf39de8bac9a6b95427d7b5e36b7;
static PyCodeObject *codeobj_dba817e3f53d13128245fb807fb1225b;
static PyCodeObject *codeobj_1f8cc6eaec8b4efb43fc32c0fa5a5ac4;
static PyCodeObject *codeobj_f4fbd783fafb563b33c652a02a6bbf12;
static PyCodeObject *codeobj_57b312856f4cbaba01ff296f44f91fef;
static PyCodeObject *codeobj_c216ed9d06ec1cf0e004f2b28dff222b;
static PyCodeObject *codeobj_b60d344e5914fa3f5cda63be6341d2a9;
static PyCodeObject *codeobj_3b92b09d71be111453acc4601be20660;
static PyCodeObject *codeobj_f04c99bd0c33b2b96a9c6af4b37ad9db;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c1d31faee37f467929726be840cb6a00;
    codeobj_5c5af0b564d343a4138280937cc890c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__convert_when, 25, const_tuple_str_plain_when_str_plain_x_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5d37f769789b9d58efd965c9e1eba3e4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__g_div_gp, 517, const_tuple_32ed624f387eef67363fd61f18d4ace5_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0b222058570f3c055ea73a72804dc8fa = MAKE_CODEOBJ( module_filename_obj, const_str_plain__rbl, 381, const_tuple_d7869242414be3cfc42a57ceacf2c61e_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2b3f755fe191595cbbaa8a35de1cd173 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_financial, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f305acf933059ae631fea99106c59a91 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fv, 36, const_tuple_4d4d49cbd624818a25d6b8950585d944_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_836bdf39de8bac9a6b95427d7b5e36b7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ipmt, 286, const_tuple_c0345e0c76b0cf10d01683085e495ac5_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_dba817e3f53d13128245fb807fb1225b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_irr, 591, const_tuple_str_plain_values_str_plain_res_str_plain_mask_str_plain_rate_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_1f8cc6eaec8b4efb43fc32c0fa5a5ac4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_mirr, 708, const_tuple_18045545bee572042406755350a450f5_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f4fbd783fafb563b33c652a02a6bbf12 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_nper, 218, const_tuple_6ebc2121c31df815e56515eecc906863_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_57b312856f4cbaba01ff296f44f91fef = MAKE_CODEOBJ( module_filename_obj, const_str_plain_npv, 663, const_tuple_str_plain_rate_str_plain_values_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c216ed9d06ec1cf0e004f2b28dff222b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pmt, 126, const_tuple_2188d8ee7e535a8def3decd999fc89f8_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_b60d344e5914fa3f5cda63be6341d2a9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ppmt, 390, const_tuple_a6525faea1c0d6d9acf07158f54c8e0e_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3b92b09d71be111453acc4601be20660 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_pv, 418, const_tuple_0ad59a94fd5d9270cd843f710c865575_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f04c99bd0c33b2b96a9c6af4b37ad9db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rate, 531, const_tuple_d7fe2ca91b3015cb8df02f82dae62f15_tuple, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_10_rate( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_11_irr(  );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_12_npv(  );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_13_mirr(  );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_1__convert_when(  );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_2_fv( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_3_pmt( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_4_nper( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_5_ipmt( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_6__rbl(  );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_7_ppmt( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_8_pv( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_9__g_div_gp(  );


// The module function definitions.
static PyObject *impl_numpy$lib$financial$$$function_1__convert_when( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_when = python_pars[ 0 ];
    PyObject *var_x = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_outline_return_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5c5af0b564d343a4138280937cc890c4, module_numpy$lib$financial );
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
    tmp_isinstance_inst_1 = par_when;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 28;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndarray );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
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
    tmp_return_value = par_when;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    // Tried code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__when_to_num );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__when_to_num );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_when_to_num" );
        exception_tb = NULL;

        exception_lineno = 31;
        goto try_except_handler_2;
    }

    tmp_subscript_name_1 = par_when;

    tmp_return_value = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_2;
    }
    goto frame_return_exit_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_1__convert_when );
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
    tmp_compare_right_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_KeyError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_1, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_1 );

        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_iter_arg_1 = par_when;

    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_3;
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
            PyThreadState_GET()->frame->f_lineno = 33;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_x;
        var_x = tmp_assign_source_4;
        Py_INCREF( var_x );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__when_to_num );

    if (unlikely( tmp_subscribed_name_2 == NULL ))
    {
        tmp_subscribed_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__when_to_num );
    }

    if ( tmp_subscribed_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_when_to_num" );
        exception_tb = NULL;

        exception_lineno = 33;
        goto try_except_handler_3;
    }

    tmp_subscript_name_2 = var_x;

    tmp_append_value_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_3;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_3;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_3;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_1__convert_when );
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_1__convert_when );
    return NULL;
    outline_result_1:;
    tmp_return_value = tmp_outline_return_value_1;
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
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
            if ( par_when )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_when,
                    par_when
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_1__convert_when );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_1__convert_when );
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


static PyObject *impl_numpy$lib$financial$$$function_2_fv( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[ 0 ];
    PyObject *par_nper = python_pars[ 1 ];
    PyObject *par_pmt = python_pars[ 2 ];
    PyObject *par_pv = python_pars[ 3 ];
    PyObject *par_when = python_pars[ 4 ];
    PyObject *var_temp = NULL;
    PyObject *var_miter = NULL;
    PyObject *var_zer = NULL;
    PyObject *var_fact = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
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
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f305acf933059ae631fea99106c59a91, module_numpy$lib$financial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__convert_when );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_when );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_convert_when" );
        exception_tb = NULL;

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_when;

    frame_function->f_lineno = 117;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_1;
        Py_DECREF( old );
    }

    // Tried code:
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 118;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = PyList_New( 5 );
    tmp_list_element_1 = par_rate;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_nper;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_1 );
    tmp_list_element_1 = par_pmt;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 2, tmp_list_element_1 );
    tmp_list_element_1 = par_pv;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 3, tmp_list_element_1 );
    tmp_list_element_1 = par_when;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 4, tmp_list_element_1 );
    frame_function->f_lineno = 118;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
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


        exception_lineno = 118;
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


        exception_lineno = 118;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 118;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_4, 3 );
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


        exception_lineno = 118;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_5, 4 );
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


        exception_lineno = 118;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_5 == NULL );
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_rate;
        assert( old != NULL );
        par_rate = tmp_assign_source_8;
        Py_INCREF( par_rate );
        Py_DECREF( old );
    }

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_nper;
        assert( old != NULL );
        par_nper = tmp_assign_source_9;
        Py_INCREF( par_nper );
        Py_DECREF( old );
    }

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;

    {
        PyObject *old = par_pmt;
        assert( old != NULL );
        par_pmt = tmp_assign_source_10;
        Py_INCREF( par_pmt );
        Py_DECREF( old );
    }

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;

    {
        PyObject *old = par_pv;
        assert( old != NULL );
        par_pv = tmp_assign_source_11;
        Py_INCREF( par_pv );
        Py_DECREF( old );
    }

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;

    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_12;
        Py_INCREF( par_when );
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_4 );
    Py_DECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_5 );
    Py_DECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    tmp_left_name_2 = const_int_pos_1;
    tmp_right_name_1 = par_rate;

    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = par_nper;

    tmp_assign_source_13 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    assert( var_temp == NULL );
    var_temp = tmp_assign_source_13;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_broadcast );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_rate;

    tmp_args_element_name_5 = par_nper;

    tmp_args_element_name_6 = par_pmt;

    tmp_args_element_name_7 = par_pv;

    tmp_args_element_name_8 = par_when;

    frame_function->f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    assert( var_miter == NULL );
    var_miter = tmp_assign_source_14;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = var_miter;

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    assert( var_zer == NULL );
    var_zer = tmp_assign_source_15;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_where );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = par_rate;

    tmp_compexpr_right_1 = var_zer;

    tmp_args_element_name_10 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = par_nper;

    tmp_right_name_3 = var_zer;

    tmp_args_element_name_11 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = const_int_pos_1;
    tmp_left_name_8 = par_rate;

    tmp_right_name_5 = par_when;

    tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_left_name_9 = var_temp;

    tmp_right_name_7 = const_int_pos_1;
    tmp_right_name_6 = BINARY_OPERATION_SUB( tmp_left_name_9, tmp_right_name_7 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_right_name_8 = par_rate;

    tmp_left_name_4 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_5, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_right_name_9 = var_zer;

    tmp_args_element_name_12 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 123;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    assert( var_fact == NULL );
    var_fact = tmp_assign_source_16;

    tmp_left_name_11 = par_pv;

    tmp_right_name_10 = var_temp;

    tmp_left_name_10 = BINARY_OPERATION_MUL( tmp_left_name_11, tmp_right_name_10 );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_left_name_12 = par_pmt;

    tmp_right_name_12 = var_fact;

    tmp_right_name_11 = BINARY_OPERATION_MUL( tmp_left_name_12, tmp_right_name_12 );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_10 );

        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = BINARY_OPERATION_ADD( tmp_left_name_10, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_10 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_return_value = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
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
            if ( par_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rate,
                    par_rate
                );

                assert( res == 0 );
            }

            if ( par_nper )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nper,
                    par_nper
                );

                assert( res == 0 );
            }

            if ( par_pmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pmt,
                    par_pmt
                );

                assert( res == 0 );
            }

            if ( par_pv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pv,
                    par_pv
                );

                assert( res == 0 );
            }

            if ( par_when )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_when,
                    par_when
                );

                assert( res == 0 );
            }

            if ( var_temp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_temp,
                    var_temp
                );

                assert( res == 0 );
            }

            if ( var_miter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_miter,
                    var_miter
                );

                assert( res == 0 );
            }

            if ( var_zer )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_zer,
                    var_zer
                );

                assert( res == 0 );
            }

            if ( var_fact )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fact,
                    var_fact
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_2_fv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pmt );
    Py_DECREF( par_pmt );
    par_pmt = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    CHECK_OBJECT( (PyObject *)var_temp );
    Py_DECREF( var_temp );
    var_temp = NULL;

    CHECK_OBJECT( (PyObject *)var_miter );
    Py_DECREF( var_miter );
    var_miter = NULL;

    CHECK_OBJECT( (PyObject *)var_zer );
    Py_DECREF( var_zer );
    var_zer = NULL;

    CHECK_OBJECT( (PyObject *)var_fact );
    Py_DECREF( var_fact );
    var_fact = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pmt );
    Py_DECREF( par_pmt );
    par_pmt = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_temp );
    var_temp = NULL;

    Py_XDECREF( var_miter );
    var_miter = NULL;

    Py_XDECREF( var_zer );
    var_zer = NULL;

    Py_XDECREF( var_fact );
    var_fact = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_2_fv );
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


static PyObject *impl_numpy$lib$financial$$$function_3_pmt( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[ 0 ];
    PyObject *par_nper = python_pars[ 1 ];
    PyObject *par_pv = python_pars[ 2 ];
    PyObject *par_fv = python_pars[ 3 ];
    PyObject *par_when = python_pars[ 4 ];
    PyObject *var_temp = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_z = NULL;
    PyObject *var_fact = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
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
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_left_name_9;
    PyObject *tmp_left_name_10;
    PyObject *tmp_left_name_11;
    PyObject *tmp_left_name_12;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c216ed9d06ec1cf0e004f2b28dff222b, module_numpy$lib$financial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__convert_when );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_when );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_convert_when" );
        exception_tb = NULL;

        exception_lineno = 209;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_when;

    frame_function->f_lineno = 209;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 209;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_1;
        Py_DECREF( old );
    }

    // Tried code:
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 210;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = PyList_New( 5 );
    tmp_list_element_1 = par_rate;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_nper;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_1 );
    tmp_list_element_1 = par_pv;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 2, tmp_list_element_1 );
    tmp_list_element_1 = par_fv;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 3, tmp_list_element_1 );
    tmp_list_element_1 = par_when;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 4, tmp_list_element_1 );
    frame_function->f_lineno = 210;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 210;
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


        exception_lineno = 210;
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


        exception_lineno = 210;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 210;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_4, 3 );
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


        exception_lineno = 210;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_5, 4 );
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


        exception_lineno = 210;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_5 == NULL );
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_rate;
        assert( old != NULL );
        par_rate = tmp_assign_source_8;
        Py_INCREF( par_rate );
        Py_DECREF( old );
    }

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_nper;
        assert( old != NULL );
        par_nper = tmp_assign_source_9;
        Py_INCREF( par_nper );
        Py_DECREF( old );
    }

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;

    {
        PyObject *old = par_pv;
        assert( old != NULL );
        par_pv = tmp_assign_source_10;
        Py_INCREF( par_pv );
        Py_DECREF( old );
    }

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;

    {
        PyObject *old = par_fv;
        assert( old != NULL );
        par_fv = tmp_assign_source_11;
        Py_INCREF( par_fv );
        Py_DECREF( old );
    }

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;

    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_12;
        Py_INCREF( par_when );
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_4 );
    Py_DECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_5 );
    Py_DECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    tmp_left_name_2 = const_int_pos_1;
    tmp_right_name_1 = par_rate;

    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = par_nper;

    tmp_assign_source_13 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
    }
    assert( var_temp == NULL );
    var_temp = tmp_assign_source_13;

    tmp_compexpr_left_1 = par_rate;

    tmp_compexpr_right_1 = const_float_0_0;
    tmp_assign_source_14 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto frame_exception_exit_1;
    }
    assert( var_mask == NULL );
    var_mask = tmp_assign_source_14;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 213;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_copyto );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_rate;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_float_1_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_mask;

    tmp_dict_key_1 = const_str_plain_where;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 213;
    tmp_unused = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_broadcast );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_rate;

    tmp_args_element_name_6 = par_nper;

    tmp_args_element_name_7 = par_pv;

    tmp_args_element_name_8 = par_fv;

    tmp_args_element_name_9 = par_when;

    frame_function->f_lineno = 214;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 214;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 214;
        goto frame_exception_exit_1;
    }
    assert( var_z == NULL );
    var_z = tmp_assign_source_15;

    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_where );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_2 = var_mask;

    tmp_compexpr_right_2 = var_z;

    tmp_args_element_name_10 = RICH_COMPARE_NE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = par_nper;

    tmp_right_name_3 = var_z;

    tmp_args_element_name_11 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = const_int_pos_1;
    tmp_left_name_8 = par_rate;

    tmp_right_name_5 = par_when;

    tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_left_name_9 = var_temp;

    tmp_right_name_7 = const_int_pos_1;
    tmp_right_name_6 = BINARY_OPERATION_SUB( tmp_left_name_9, tmp_right_name_7 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_right_name_8 = par_rate;

    tmp_left_name_4 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_5, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    tmp_right_name_9 = var_z;

    tmp_args_element_name_12 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 215;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 215;
        goto frame_exception_exit_1;
    }
    assert( var_fact == NULL );
    var_fact = tmp_assign_source_16;

    tmp_left_name_11 = par_fv;

    tmp_left_name_12 = par_pv;

    tmp_right_name_11 = var_temp;

    tmp_right_name_10 = BINARY_OPERATION_MUL( tmp_left_name_12, tmp_right_name_11 );
    if ( tmp_right_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_left_name_10 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
        goto frame_exception_exit_1;
    }
    tmp_right_name_12 = var_fact;

    tmp_return_value = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_10, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_10 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 216;
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
            if ( par_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rate,
                    par_rate
                );

                assert( res == 0 );
            }

            if ( par_nper )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nper,
                    par_nper
                );

                assert( res == 0 );
            }

            if ( par_pv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pv,
                    par_pv
                );

                assert( res == 0 );
            }

            if ( par_fv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fv,
                    par_fv
                );

                assert( res == 0 );
            }

            if ( par_when )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_when,
                    par_when
                );

                assert( res == 0 );
            }

            if ( var_temp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_temp,
                    var_temp
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

            if ( var_z )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_z,
                    var_z
                );

                assert( res == 0 );
            }

            if ( var_fact )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fact,
                    var_fact
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_3_pmt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    CHECK_OBJECT( (PyObject *)var_temp );
    Py_DECREF( var_temp );
    var_temp = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    CHECK_OBJECT( (PyObject *)var_z );
    Py_DECREF( var_z );
    var_z = NULL;

    CHECK_OBJECT( (PyObject *)var_fact );
    Py_DECREF( var_fact );
    var_fact = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_temp );
    var_temp = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_fact );
    var_fact = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_3_pmt );
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


static PyObject *impl_numpy$lib$financial$$$function_4_nper( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[ 0 ];
    PyObject *par_pmt = python_pars[ 1 ];
    PyObject *par_pv = python_pars[ 2 ];
    PyObject *par_fv = python_pars[ 3 ];
    PyObject *par_when = python_pars[ 4 ];
    PyObject *var_use_zero_rate = NULL;
    PyObject *var_z = NULL;
    PyObject *var_A = NULL;
    PyObject *var_B = NULL;
    PyObject *var_miter = NULL;
    PyObject *var_zer = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__indicator = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
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
    PyObject *tmp_left_name_18;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_operand_name_3;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f4fbd783fafb563b33c652a02a6bbf12, module_numpy$lib$financial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__convert_when );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_when );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_convert_when" );
        exception_tb = NULL;

        exception_lineno = 267;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_when;

    frame_function->f_lineno = 267;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_1;
        Py_DECREF( old );
    }

    // Tried code:
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 268;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = PyList_New( 5 );
    tmp_list_element_1 = par_rate;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_pmt;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_1 );
    tmp_list_element_1 = par_pv;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 2, tmp_list_element_1 );
    tmp_list_element_1 = par_fv;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 3, tmp_list_element_1 );
    tmp_list_element_1 = par_when;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 4, tmp_list_element_1 );
    frame_function->f_lineno = 268;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
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


        exception_lineno = 268;
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


        exception_lineno = 268;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 268;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_4, 3 );
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


        exception_lineno = 268;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_5, 4 );
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


        exception_lineno = 268;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_5 == NULL );
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_rate;
        assert( old != NULL );
        par_rate = tmp_assign_source_8;
        Py_INCREF( par_rate );
        Py_DECREF( old );
    }

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_pmt;
        assert( old != NULL );
        par_pmt = tmp_assign_source_9;
        Py_INCREF( par_pmt );
        Py_DECREF( old );
    }

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;

    {
        PyObject *old = par_pv;
        assert( old != NULL );
        par_pv = tmp_assign_source_10;
        Py_INCREF( par_pv );
        Py_DECREF( old );
    }

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;

    {
        PyObject *old = par_fv;
        assert( old != NULL );
        par_fv = tmp_assign_source_11;
        Py_INCREF( par_fv );
        Py_DECREF( old );
    }

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;

    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_12;
        Py_INCREF( par_when );
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_4 );
    Py_DECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_5 );
    Py_DECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    tmp_assign_source_13 = Py_False;
    assert( var_use_zero_rate == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_use_zero_rate = tmp_assign_source_13;

    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 271;
        goto try_except_handler_3;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_errstate );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        goto try_except_handler_3;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_d3ecefd5681df557c4934269caf154b0 );
    frame_function->f_lineno = 271;
    tmp_assign_source_14 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_3, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        goto try_except_handler_3;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_14;

    tmp_source_name_3 = tmp_with_1__source;

    tmp_assign_source_15 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___exit__ );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        goto try_except_handler_3;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_15;

    tmp_source_name_4 = tmp_with_1__source;

    tmp_called_name_4 = LOOKUP_SPECIAL( tmp_source_name_4, const_str_plain___enter__ );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 271;
    tmp_assign_source_16 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        goto try_except_handler_3;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_16;

    tmp_assign_source_17 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_17 );
    tmp_with_1__indicator = tmp_assign_source_17;

    // Tried code:
    // Tried code:
    // Tried code:
    tmp_left_name_2 = par_pmt;

    tmp_left_name_3 = const_float_1_0;
    tmp_left_name_4 = par_rate;

    tmp_right_name_3 = par_when;

    tmp_right_name_2 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto try_except_handler_6;
    }
    tmp_right_name_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto try_except_handler_6;
    }
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto try_except_handler_6;
    }
    tmp_right_name_4 = par_rate;

    tmp_assign_source_18 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 273;
        goto try_except_handler_6;
    }
    assert( var_z == NULL );
    var_z = tmp_assign_source_18;

    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
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
    tmp_compare_right_1 = PyExc_FloatingPointError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 274;
        goto try_except_handler_5;
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
    tmp_assign_source_19 = Py_True;
    {
        PyObject *old = var_use_zero_rate;
        assert( old != NULL );
        var_use_zero_rate = tmp_assign_source_19;
        Py_INCREF( var_use_zero_rate );
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_5;
    branch_end_1:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_4_nper );
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyExc_BaseException;
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 271;
        goto try_except_handler_4;
    }
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assign_source_20 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        assert( old != NULL );
        tmp_with_1__indicator = tmp_assign_source_20;
        Py_INCREF( tmp_with_1__indicator );
        Py_DECREF( old );
    }

    tmp_called_name_5 = tmp_with_1__exit;

    tmp_args_element_name_4 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_5 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_6 = PyThreadState_GET()->exc_traceback;
    frame_function->f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_4;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 272;
        goto try_except_handler_4;
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
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_4;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_4;
    branch_end_2:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_4_nper );
    return NULL;
    // End of try:
    try_end_3:;
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

    tmp_compare_left_3 = tmp_with_1__indicator;

    tmp_compare_right_3 = Py_True;
    tmp_is_1 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_6 = tmp_with_1__exit;

    frame_function->f_lineno = 272;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_4 );
        Py_XDECREF( exception_keeper_value_4 );
        Py_XDECREF( exception_keeper_tb_4 );

        exception_lineno = 272;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_3;
    // End of try:
    try_end_4:;
    tmp_compare_left_4 = tmp_with_1__indicator;

    tmp_compare_right_4 = Py_True;
    tmp_is_2 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_2 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_called_name_7 = tmp_with_1__exit;

    frame_function->f_lineno = 272;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_7, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    branch_no_5:;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT( (PyObject *)tmp_with_1__source );
    Py_DECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__enter );
    Py_DECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_with_1__exit );
    Py_DECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    tmp_cond_value_2 = var_use_zero_rate;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "use_zero_rate" );
        exception_tb = NULL;

        exception_lineno = 277;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
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
    tmp_operand_name_1 = par_fv;

    tmp_left_name_6 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = par_pv;

    tmp_left_name_5 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_6 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = par_pmt;

    tmp_right_name_7 = const_float_0_0;
    tmp_right_name_6 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 278;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_5, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 278;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_6;
    branch_no_6:;
    tmp_left_name_9 = par_fv;

    tmp_right_name_8 = par_pv;

    tmp_operand_name_2 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_8 );
    if ( tmp_operand_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    tmp_left_name_8 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_left_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    tmp_left_name_10 = par_pmt;

    tmp_right_name_10 = const_float_0_0;
    tmp_right_name_9 = BINARY_OPERATION_ADD( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_8 );

        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_8, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_8 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    assert( var_A == NULL );
    var_A = tmp_assign_source_21;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_log );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_operand_name_3 = par_fv;

    tmp_left_name_13 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_3 );
    if ( tmp_left_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_right_name_11 = var_z;

    if ( tmp_right_name_11 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_left_name_13 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "z" );
        exception_tb = NULL;

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_left_name_12 = BINARY_OPERATION_ADD( tmp_left_name_13, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_13 );
    if ( tmp_left_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_left_name_14 = par_pv;

    tmp_right_name_13 = var_z;

    if ( tmp_right_name_13 == NULL )
    {
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_left_name_12 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "z" );
        exception_tb = NULL;

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_right_name_12 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_13 );
    if ( tmp_right_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );
        Py_DECREF( tmp_left_name_12 );

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_12, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_12 );
    Py_DECREF( tmp_right_name_12 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 281;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_left_name_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_left_name_11 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_log );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_left_name_15 = const_float_1_0;
    tmp_right_name_15 = par_rate;

    tmp_args_element_name_8 = BINARY_OPERATION_ADD( tmp_left_name_15, tmp_right_name_15 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_11 );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 281;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_right_name_14 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_right_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_11, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_11 );
    Py_DECREF( tmp_right_name_14 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    assert( var_B == NULL );
    var_B = tmp_assign_source_22;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 282;
        goto frame_exception_exit_1;
    }

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_broadcast );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = par_rate;

    tmp_args_element_name_10 = par_pmt;

    tmp_args_element_name_11 = par_pv;

    tmp_args_element_name_12 = par_fv;

    tmp_args_element_name_13 = par_when;

    frame_function->f_lineno = 282;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12, tmp_args_element_name_13 };
        tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 282;
        goto frame_exception_exit_1;
    }
    assert( var_miter == NULL );
    var_miter = tmp_assign_source_23;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_zeros );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = var_miter;

    tmp_args_element_name_14 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_shape );
    if ( tmp_args_element_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );

        exception_lineno = 283;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_14 };
        tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_element_name_14 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        goto frame_exception_exit_1;
    }
    assert( var_zer == NULL );
    var_zer = tmp_assign_source_24;

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 284;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_where );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = par_rate;

    tmp_compexpr_right_1 = var_zer;

    tmp_args_element_name_15 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_args_element_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );

        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    tmp_left_name_17 = var_A;

    tmp_right_name_16 = var_zer;

    tmp_args_element_name_16 = BINARY_OPERATION_ADD( tmp_left_name_17, tmp_right_name_16 );
    if ( tmp_args_element_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_15 );

        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    tmp_left_name_18 = var_B;

    tmp_right_name_17 = var_zer;

    tmp_args_element_name_17 = BINARY_OPERATION_ADD( tmp_left_name_18, tmp_right_name_17 );
    if ( tmp_args_element_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_12 );
        Py_DECREF( tmp_args_element_name_15 );
        Py_DECREF( tmp_args_element_name_16 );

        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 284;
    {
        PyObject *call_args[] = { tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_left_name_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    Py_DECREF( tmp_args_element_name_15 );
    Py_DECREF( tmp_args_element_name_16 );
    Py_DECREF( tmp_args_element_name_17 );
    if ( tmp_left_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    tmp_right_name_18 = const_float_0_0;
    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_16, tmp_right_name_18 );
    Py_DECREF( tmp_left_name_16 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_6:;

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
            if ( par_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rate,
                    par_rate
                );

                assert( res == 0 );
            }

            if ( par_pmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pmt,
                    par_pmt
                );

                assert( res == 0 );
            }

            if ( par_pv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pv,
                    par_pv
                );

                assert( res == 0 );
            }

            if ( par_fv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fv,
                    par_fv
                );

                assert( res == 0 );
            }

            if ( par_when )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_when,
                    par_when
                );

                assert( res == 0 );
            }

            if ( var_use_zero_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_use_zero_rate,
                    var_use_zero_rate
                );

                assert( res == 0 );
            }

            if ( var_z )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_z,
                    var_z
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

            if ( var_B )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_B,
                    var_B
                );

                assert( res == 0 );
            }

            if ( var_miter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_miter,
                    var_miter
                );

                assert( res == 0 );
            }

            if ( var_zer )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_zer,
                    var_zer
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_4_nper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_pmt );
    Py_DECREF( par_pmt );
    par_pmt = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_use_zero_rate );
    var_use_zero_rate = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_miter );
    var_miter = NULL;

    Py_XDECREF( var_zer );
    var_zer = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_pmt );
    Py_DECREF( par_pmt );
    par_pmt = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_use_zero_rate );
    var_use_zero_rate = NULL;

    Py_XDECREF( var_z );
    var_z = NULL;

    Py_XDECREF( var_A );
    var_A = NULL;

    Py_XDECREF( var_B );
    var_B = NULL;

    Py_XDECREF( var_miter );
    var_miter = NULL;

    Py_XDECREF( var_zer );
    var_zer = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_4_nper );
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


static PyObject *impl_numpy$lib$financial$$$function_5_ipmt( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[ 0 ];
    PyObject *par_per = python_pars[ 1 ];
    PyObject *par_nper = python_pars[ 2 ];
    PyObject *par_pv = python_pars[ 3 ];
    PyObject *par_fv = python_pars[ 4 ];
    PyObject *par_when = python_pars[ 5 ];
    PyObject *var_total_pmt = NULL;
    PyObject *var_ipmt = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
    PyObject *tmp_tuple_unpack_1__element_6 = NULL;
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
    PyObject *tmp_args_element_name_23;
    PyObject *tmp_args_element_name_24;
    PyObject *tmp_args_element_name_25;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_left_3;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_compexpr_right_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    PyObject *tmp_unpack_6;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_836bdf39de8bac9a6b95427d7b5e36b7, module_numpy$lib$financial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__convert_when );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_when );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_convert_when" );
        exception_tb = NULL;

        exception_lineno = 369;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_when;

    frame_function->f_lineno = 369;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 369;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_1;
        Py_DECREF( old );
    }

    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 370;
        goto try_except_handler_2;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_broadcast_arrays );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = par_rate;

    tmp_args_element_name_3 = par_per;

    tmp_args_element_name_4 = par_nper;

    tmp_args_element_name_5 = par_pv;

    tmp_args_element_name_6 = par_fv;

    tmp_args_element_name_7 = par_when;

    frame_function->f_lineno = 371;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 371;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 370;
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


        exception_lineno = 370;
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


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_4, 3 );
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


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_5, 4 );
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


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_5 == NULL );
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;

    tmp_unpack_6 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_6, 5 );
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


        exception_lineno = 370;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_6 == NULL );
    tmp_tuple_unpack_1__element_6 = tmp_assign_source_8;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 6)" );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_9 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_rate;
        assert( old != NULL );
        par_rate = tmp_assign_source_9;
        Py_INCREF( par_rate );
        Py_DECREF( old );
    }

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_per;
        assert( old != NULL );
        par_per = tmp_assign_source_10;
        Py_INCREF( par_per );
        Py_DECREF( old );
    }

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_3;

    {
        PyObject *old = par_nper;
        assert( old != NULL );
        par_nper = tmp_assign_source_11;
        Py_INCREF( par_nper );
        Py_DECREF( old );
    }

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_4;

    {
        PyObject *old = par_pv;
        assert( old != NULL );
        par_pv = tmp_assign_source_12;
        Py_INCREF( par_pv );
        Py_DECREF( old );
    }

    tmp_assign_source_13 = tmp_tuple_unpack_1__element_5;

    {
        PyObject *old = par_fv;
        assert( old != NULL );
        par_fv = tmp_assign_source_13;
        Py_INCREF( par_fv );
        Py_DECREF( old );
    }

    tmp_assign_source_14 = tmp_tuple_unpack_1__element_6;

    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_14;
        Py_INCREF( par_when );
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_4 );
    Py_DECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_5 );
    Py_DECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_6 );
    Py_DECREF( tmp_tuple_unpack_1__element_6 );
    tmp_tuple_unpack_1__element_6 = NULL;

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_pmt );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pmt );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pmt" );
        exception_tb = NULL;

        exception_lineno = 372;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = par_rate;

    tmp_args_element_name_9 = par_nper;

    tmp_args_element_name_10 = par_pv;

    tmp_args_element_name_11 = par_fv;

    tmp_args_element_name_12 = par_when;

    frame_function->f_lineno = 372;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 372;
        goto frame_exception_exit_1;
    }
    assert( var_total_pmt == NULL );
    var_total_pmt = tmp_assign_source_15;

    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__rbl );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__rbl );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_rbl" );
        exception_tb = NULL;

        exception_lineno = 373;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = par_rate;

    tmp_args_element_name_14 = par_per;

    tmp_args_element_name_15 = var_total_pmt;

    tmp_args_element_name_16 = par_pv;

    tmp_args_element_name_17 = par_when;

    frame_function->f_lineno = 373;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_4, call_args );
    }

    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = par_rate;

    tmp_assign_source_16 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 373;
        goto frame_exception_exit_1;
    }
    assert( var_ipmt == NULL );
    var_ipmt = tmp_assign_source_16;

    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 375;
        goto try_except_handler_3;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_where );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto try_except_handler_3;
    }
    tmp_compexpr_left_1 = par_when;

    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_args_element_name_18 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_args_element_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 375;
        goto try_except_handler_3;
    }
    tmp_left_name_2 = var_ipmt;

    tmp_left_name_3 = const_int_pos_1;
    tmp_right_name_3 = par_rate;

    tmp_right_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_18 );

        exception_lineno = 375;
        goto try_except_handler_3;
    }
    tmp_args_element_name_19 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_18 );

        exception_lineno = 375;
        goto try_except_handler_3;
    }
    tmp_args_element_name_20 = var_ipmt;

    frame_function->f_lineno = 375;
    {
        PyObject *call_args[] = { tmp_args_element_name_18, tmp_args_element_name_19, tmp_args_element_name_20 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_18 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 375;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_ipmt;
        assert( old != NULL );
        var_ipmt = tmp_assign_source_17;
        Py_DECREF( old );
    }

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 376;
        goto try_except_handler_3;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_where );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto try_except_handler_3;
    }
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 376;
        goto try_except_handler_3;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_logical_and );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 376;
        goto try_except_handler_3;
    }
    tmp_compexpr_left_2 = par_when;

    tmp_compexpr_right_2 = const_int_pos_1;
    tmp_args_element_name_22 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_args_element_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 376;
        goto try_except_handler_3;
    }
    tmp_compexpr_left_3 = par_per;

    tmp_compexpr_right_3 = const_int_pos_1;
    tmp_args_element_name_23 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_args_element_name_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_called_name_7 );
        Py_DECREF( tmp_args_element_name_22 );

        exception_lineno = 376;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 376;
    {
        PyObject *call_args[] = { tmp_args_element_name_22, tmp_args_element_name_23 };
        tmp_args_element_name_21 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_22 );
    Py_DECREF( tmp_args_element_name_23 );
    if ( tmp_args_element_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 376;
        goto try_except_handler_3;
    }
    tmp_args_element_name_24 = const_float_0_0;
    tmp_args_element_name_25 = var_ipmt;

    frame_function->f_lineno = 376;
    {
        PyObject *call_args[] = { tmp_args_element_name_21, tmp_args_element_name_24, tmp_args_element_name_25 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_21 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 376;
        goto try_except_handler_3;
    }
    {
        PyObject *old = var_ipmt;
        assert( old != NULL );
        var_ipmt = tmp_assign_source_18;
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
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_IndexError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
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
    goto frame_exception_exit_1;
    branch_no_1:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_5_ipmt );
    return NULL;
    // End of try:
    try_end_2:;
    tmp_return_value = var_ipmt;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ipmt" );
        exception_tb = NULL;

        exception_lineno = 379;
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
            if ( par_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rate,
                    par_rate
                );

                assert( res == 0 );
            }

            if ( par_per )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_per,
                    par_per
                );

                assert( res == 0 );
            }

            if ( par_nper )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nper,
                    par_nper
                );

                assert( res == 0 );
            }

            if ( par_pv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pv,
                    par_pv
                );

                assert( res == 0 );
            }

            if ( par_fv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fv,
                    par_fv
                );

                assert( res == 0 );
            }

            if ( par_when )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_when,
                    par_when
                );

                assert( res == 0 );
            }

            if ( var_total_pmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_total_pmt,
                    var_total_pmt
                );

                assert( res == 0 );
            }

            if ( var_ipmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ipmt,
                    var_ipmt
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_5_ipmt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_per );
    Py_DECREF( par_per );
    par_per = NULL;

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    CHECK_OBJECT( (PyObject *)var_total_pmt );
    Py_DECREF( var_total_pmt );
    var_total_pmt = NULL;

    Py_XDECREF( var_ipmt );
    var_ipmt = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_per );
    Py_DECREF( par_per );
    par_per = NULL;

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_total_pmt );
    var_total_pmt = NULL;

    Py_XDECREF( var_ipmt );
    var_ipmt = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_5_ipmt );
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


static PyObject *impl_numpy$lib$financial$$$function_6__rbl( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[ 0 ];
    PyObject *par_per = python_pars[ 1 ];
    PyObject *par_pmt = python_pars[ 2 ];
    PyObject *par_pv = python_pars[ 3 ];
    PyObject *par_when = python_pars[ 4 ];
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0b222058570f3c055ea73a72804dc8fa, module_numpy$lib$financial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_fv );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fv );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "fv" );
        exception_tb = NULL;

        exception_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_rate;

    tmp_left_name_1 = par_per;

    tmp_right_name_1 = const_int_pos_1;
    tmp_args_element_name_2 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_pmt;

    tmp_args_element_name_4 = par_pv;

    tmp_args_element_name_5 = par_when;

    frame_function->f_lineno = 388;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
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
            if ( par_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rate,
                    par_rate
                );

                assert( res == 0 );
            }

            if ( par_per )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_per,
                    par_per
                );

                assert( res == 0 );
            }

            if ( par_pmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pmt,
                    par_pmt
                );

                assert( res == 0 );
            }

            if ( par_pv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pv,
                    par_pv
                );

                assert( res == 0 );
            }

            if ( par_when )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_when,
                    par_when
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_6__rbl );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_per );
    Py_DECREF( par_per );
    par_per = NULL;

    CHECK_OBJECT( (PyObject *)par_pmt );
    Py_DECREF( par_pmt );
    par_pmt = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_per );
    Py_DECREF( par_per );
    par_per = NULL;

    CHECK_OBJECT( (PyObject *)par_pmt );
    Py_DECREF( par_pmt );
    par_pmt = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_6__rbl );
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


static PyObject *impl_numpy$lib$financial$$$function_7_ppmt( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[ 0 ];
    PyObject *par_per = python_pars[ 1 ];
    PyObject *par_nper = python_pars[ 2 ];
    PyObject *par_pv = python_pars[ 3 ];
    PyObject *par_fv = python_pars[ 4 ];
    PyObject *par_when = python_pars[ 5 ];
    PyObject *var_total = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_b60d344e5914fa3f5cda63be6341d2a9, module_numpy$lib$financial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_pmt );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_pmt );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "pmt" );
        exception_tb = NULL;

        exception_lineno = 415;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_rate;

    tmp_args_element_name_2 = par_nper;

    tmp_args_element_name_3 = par_pv;

    tmp_args_element_name_4 = par_fv;

    tmp_args_element_name_5 = par_when;

    frame_function->f_lineno = 415;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 415;
        goto frame_exception_exit_1;
    }
    assert( var_total == NULL );
    var_total = tmp_assign_source_1;

    tmp_left_name_1 = var_total;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_ipmt );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ipmt );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ipmt" );
        exception_tb = NULL;

        exception_lineno = 416;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_6 = par_rate;

    tmp_args_element_name_7 = par_per;

    tmp_args_element_name_8 = par_nper;

    tmp_args_element_name_9 = par_pv;

    tmp_args_element_name_10 = par_fv;

    tmp_args_element_name_11 = par_when;

    frame_function->f_lineno = 416;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_2, call_args );
    }

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
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
            if ( par_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rate,
                    par_rate
                );

                assert( res == 0 );
            }

            if ( par_per )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_per,
                    par_per
                );

                assert( res == 0 );
            }

            if ( par_nper )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nper,
                    par_nper
                );

                assert( res == 0 );
            }

            if ( par_pv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pv,
                    par_pv
                );

                assert( res == 0 );
            }

            if ( par_fv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fv,
                    par_fv
                );

                assert( res == 0 );
            }

            if ( par_when )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_when,
                    par_when
                );

                assert( res == 0 );
            }

            if ( var_total )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_total,
                    var_total
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_7_ppmt );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_per );
    Py_DECREF( par_per );
    par_per = NULL;

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    CHECK_OBJECT( (PyObject *)var_total );
    Py_DECREF( var_total );
    var_total = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_per );
    Py_DECREF( par_per );
    par_per = NULL;

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_total );
    var_total = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_7_ppmt );
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


static PyObject *impl_numpy$lib$financial$$$function_8_pv( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[ 0 ];
    PyObject *par_nper = python_pars[ 1 ];
    PyObject *par_pmt = python_pars[ 2 ];
    PyObject *par_fv = python_pars[ 3 ];
    PyObject *par_when = python_pars[ 4 ];
    PyObject *var_temp = NULL;
    PyObject *var_miter = NULL;
    PyObject *var_zer = NULL;
    PyObject *var_fact = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
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
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
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
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3b92b09d71be111453acc4601be20660, module_numpy$lib$financial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__convert_when );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_when );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_convert_when" );
        exception_tb = NULL;

        exception_lineno = 504;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_when;

    frame_function->f_lineno = 504;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 504;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_1;
        Py_DECREF( old );
    }

    // Tried code:
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 505;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 505;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = PyList_New( 5 );
    tmp_list_element_1 = par_rate;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_nper;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_1 );
    tmp_list_element_1 = par_pmt;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 2, tmp_list_element_1 );
    tmp_list_element_1 = par_fv;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 3, tmp_list_element_1 );
    tmp_list_element_1 = par_when;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 4, tmp_list_element_1 );
    frame_function->f_lineno = 505;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 505;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 505;
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


        exception_lineno = 505;
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


        exception_lineno = 505;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 505;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_4, 3 );
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


        exception_lineno = 505;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_5, 4 );
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


        exception_lineno = 505;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_5 == NULL );
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_rate;
        assert( old != NULL );
        par_rate = tmp_assign_source_8;
        Py_INCREF( par_rate );
        Py_DECREF( old );
    }

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_nper;
        assert( old != NULL );
        par_nper = tmp_assign_source_9;
        Py_INCREF( par_nper );
        Py_DECREF( old );
    }

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;

    {
        PyObject *old = par_pmt;
        assert( old != NULL );
        par_pmt = tmp_assign_source_10;
        Py_INCREF( par_pmt );
        Py_DECREF( old );
    }

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;

    {
        PyObject *old = par_fv;
        assert( old != NULL );
        par_fv = tmp_assign_source_11;
        Py_INCREF( par_fv );
        Py_DECREF( old );
    }

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;

    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_12;
        Py_INCREF( par_when );
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_4 );
    Py_DECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_5 );
    Py_DECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    tmp_left_name_2 = const_int_pos_1;
    tmp_right_name_1 = par_rate;

    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 506;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = par_nper;

    tmp_assign_source_13 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 506;
        goto frame_exception_exit_1;
    }
    assert( var_temp == NULL );
    var_temp = tmp_assign_source_13;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 507;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_broadcast );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 507;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_rate;

    tmp_args_element_name_5 = par_nper;

    tmp_args_element_name_6 = par_pmt;

    tmp_args_element_name_7 = par_fv;

    tmp_args_element_name_8 = par_when;

    frame_function->f_lineno = 507;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 507;
        goto frame_exception_exit_1;
    }
    assert( var_miter == NULL );
    var_miter = tmp_assign_source_14;

    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 508;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_zeros );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 508;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = var_miter;

    tmp_args_element_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shape );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 508;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 508;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_15 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 508;
        goto frame_exception_exit_1;
    }
    assert( var_zer == NULL );
    var_zer = tmp_assign_source_15;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 509;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_where );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_1 = par_rate;

    tmp_compexpr_right_1 = var_zer;

    tmp_args_element_name_10 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = par_nper;

    tmp_right_name_3 = var_zer;

    tmp_args_element_name_11 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = const_int_pos_1;
    tmp_left_name_8 = par_rate;

    tmp_right_name_5 = par_when;

    tmp_right_name_4 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    tmp_left_name_9 = var_temp;

    tmp_right_name_7 = const_int_pos_1;
    tmp_right_name_6 = BINARY_OPERATION_SUB( tmp_left_name_9, tmp_right_name_7 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = BINARY_OPERATION_MUL( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_left_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    tmp_right_name_8 = par_rate;

    tmp_left_name_4 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_5, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_5 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    tmp_right_name_9 = var_zer;

    tmp_args_element_name_12 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_args_element_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_element_name_10 );
        Py_DECREF( tmp_args_element_name_11 );

        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 509;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    Py_DECREF( tmp_args_element_name_12 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 509;
        goto frame_exception_exit_1;
    }
    assert( var_fact == NULL );
    var_fact = tmp_assign_source_16;

    tmp_left_name_11 = par_fv;

    tmp_left_name_12 = par_pmt;

    tmp_right_name_11 = var_fact;

    tmp_right_name_10 = BINARY_OPERATION_MUL( tmp_left_name_12, tmp_right_name_11 );
    if ( tmp_right_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 510;
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = BINARY_OPERATION_ADD( tmp_left_name_11, tmp_right_name_10 );
    Py_DECREF( tmp_right_name_10 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 510;
        goto frame_exception_exit_1;
    }
    tmp_left_name_10 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 510;
        goto frame_exception_exit_1;
    }
    tmp_right_name_12 = var_temp;

    tmp_return_value = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_10, tmp_right_name_12 );
    Py_DECREF( tmp_left_name_10 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 510;
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
            if ( par_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rate,
                    par_rate
                );

                assert( res == 0 );
            }

            if ( par_nper )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nper,
                    par_nper
                );

                assert( res == 0 );
            }

            if ( par_pmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pmt,
                    par_pmt
                );

                assert( res == 0 );
            }

            if ( par_fv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fv,
                    par_fv
                );

                assert( res == 0 );
            }

            if ( par_when )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_when,
                    par_when
                );

                assert( res == 0 );
            }

            if ( var_temp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_temp,
                    var_temp
                );

                assert( res == 0 );
            }

            if ( var_miter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_miter,
                    var_miter
                );

                assert( res == 0 );
            }

            if ( var_zer )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_zer,
                    var_zer
                );

                assert( res == 0 );
            }

            if ( var_fact )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fact,
                    var_fact
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_8_pv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pmt );
    Py_DECREF( par_pmt );
    par_pmt = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    CHECK_OBJECT( (PyObject *)var_temp );
    Py_DECREF( var_temp );
    var_temp = NULL;

    CHECK_OBJECT( (PyObject *)var_miter );
    Py_DECREF( var_miter );
    var_miter = NULL;

    CHECK_OBJECT( (PyObject *)var_zer );
    Py_DECREF( var_zer );
    var_zer = NULL;

    CHECK_OBJECT( (PyObject *)var_fact );
    Py_DECREF( var_fact );
    var_fact = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pmt );
    Py_DECREF( par_pmt );
    par_pmt = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    Py_XDECREF( var_temp );
    var_temp = NULL;

    Py_XDECREF( var_miter );
    var_miter = NULL;

    Py_XDECREF( var_zer );
    var_zer = NULL;

    Py_XDECREF( var_fact );
    var_fact = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_8_pv );
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


static PyObject *impl_numpy$lib$financial$$$function_9__g_div_gp( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_r = python_pars[ 0 ];
    PyObject *par_n = python_pars[ 1 ];
    PyObject *par_p = python_pars[ 2 ];
    PyObject *par_x = python_pars[ 3 ];
    PyObject *par_y = python_pars[ 4 ];
    PyObject *par_w = python_pars[ 5 ];
    PyObject *var_t1 = NULL;
    PyObject *var_t2 = NULL;
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
    PyObject *tmp_left_name_25;
    PyObject *tmp_left_name_26;
    PyObject *tmp_left_name_27;
    PyObject *tmp_left_name_28;
    PyObject *tmp_left_name_29;
    PyObject *tmp_left_name_30;
    PyObject *tmp_left_name_31;
    PyObject *tmp_left_name_32;
    PyObject *tmp_left_name_33;
    PyObject *tmp_left_name_34;
    PyObject *tmp_left_name_35;
    PyObject *tmp_left_name_36;
    PyObject *tmp_left_name_37;
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
    PyObject *tmp_right_name_25;
    PyObject *tmp_right_name_26;
    PyObject *tmp_right_name_27;
    PyObject *tmp_right_name_28;
    PyObject *tmp_right_name_29;
    PyObject *tmp_right_name_30;
    PyObject *tmp_right_name_31;
    PyObject *tmp_right_name_32;
    PyObject *tmp_right_name_33;
    PyObject *tmp_right_name_34;
    PyObject *tmp_right_name_35;
    PyObject *tmp_right_name_36;
    PyObject *tmp_right_name_37;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5d37f769789b9d58efd965c9e1eba3e4, module_numpy$lib$financial );
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
    tmp_left_name_2 = par_r;

    tmp_right_name_1 = const_int_pos_1;
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = par_n;

    tmp_assign_source_1 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 518;
        goto frame_exception_exit_1;
    }
    assert( var_t1 == NULL );
    var_t1 = tmp_assign_source_1;

    tmp_left_name_4 = par_r;

    tmp_right_name_3 = const_int_pos_1;
    tmp_left_name_3 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 519;
        goto frame_exception_exit_1;
    }
    tmp_left_name_5 = par_n;

    tmp_right_name_5 = const_int_pos_1;
    tmp_right_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_3 );

        exception_lineno = 519;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 519;
        goto frame_exception_exit_1;
    }
    assert( var_t2 == NULL );
    var_t2 = tmp_assign_source_2;

    tmp_left_name_8 = par_y;

    tmp_left_name_9 = var_t1;

    tmp_right_name_7 = par_x;

    tmp_right_name_6 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_7 );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = BINARY_OPERATION_ADD( tmp_left_name_8, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_left_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    tmp_left_name_12 = par_p;

    tmp_left_name_13 = var_t1;

    tmp_right_name_10 = const_int_pos_1;
    tmp_right_name_9 = BINARY_OPERATION_SUB( tmp_left_name_13, tmp_right_name_10 );
    if ( tmp_right_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    tmp_left_name_11 = BINARY_OPERATION_MUL( tmp_left_name_12, tmp_right_name_9 );
    Py_DECREF( tmp_right_name_9 );
    if ( tmp_left_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    tmp_left_name_15 = par_r;

    tmp_right_name_12 = par_w;

    tmp_left_name_14 = BINARY_OPERATION_MUL( tmp_left_name_15, tmp_right_name_12 );
    if ( tmp_left_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    tmp_right_name_13 = const_int_pos_1;
    tmp_right_name_11 = BINARY_OPERATION_ADD( tmp_left_name_14, tmp_right_name_13 );
    Py_DECREF( tmp_left_name_14 );
    if ( tmp_right_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );
        Py_DECREF( tmp_left_name_11 );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    tmp_left_name_10 = BINARY_OPERATION_MUL( tmp_left_name_11, tmp_right_name_11 );
    Py_DECREF( tmp_left_name_11 );
    Py_DECREF( tmp_right_name_11 );
    if ( tmp_left_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    tmp_right_name_14 = par_r;

    tmp_right_name_8 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_10, tmp_right_name_14 );
    Py_DECREF( tmp_left_name_10 );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_7 );

        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_8 );
    Py_DECREF( tmp_left_name_7 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_left_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
        goto frame_exception_exit_1;
    }
    tmp_left_name_20 = par_n;

    tmp_right_name_16 = var_t2;

    tmp_left_name_19 = BINARY_OPERATION_MUL( tmp_left_name_20, tmp_right_name_16 );
    if ( tmp_left_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_right_name_17 = par_x;

    tmp_left_name_18 = BINARY_OPERATION_MUL( tmp_left_name_19, tmp_right_name_17 );
    Py_DECREF( tmp_left_name_19 );
    if ( tmp_left_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_23 = par_p;

    tmp_left_name_24 = var_t1;

    tmp_right_name_20 = const_int_pos_1;
    tmp_right_name_19 = BINARY_OPERATION_SUB( tmp_left_name_24, tmp_right_name_20 );
    if ( tmp_right_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_18 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_22 = BINARY_OPERATION_MUL( tmp_left_name_23, tmp_right_name_19 );
    Py_DECREF( tmp_right_name_19 );
    if ( tmp_left_name_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_18 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_26 = par_r;

    tmp_right_name_22 = par_w;

    tmp_left_name_25 = BINARY_OPERATION_MUL( tmp_left_name_26, tmp_right_name_22 );
    if ( tmp_left_name_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_18 );
        Py_DECREF( tmp_left_name_22 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_right_name_23 = const_int_pos_1;
    tmp_right_name_21 = BINARY_OPERATION_ADD( tmp_left_name_25, tmp_right_name_23 );
    Py_DECREF( tmp_left_name_25 );
    if ( tmp_right_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_18 );
        Py_DECREF( tmp_left_name_22 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_21 = BINARY_OPERATION_MUL( tmp_left_name_22, tmp_right_name_21 );
    Py_DECREF( tmp_left_name_22 );
    Py_DECREF( tmp_right_name_21 );
    if ( tmp_left_name_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_18 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_27 = par_r;

    tmp_right_name_25 = const_int_pos_2;
    tmp_right_name_24 = POWER_OPERATION( tmp_left_name_27, tmp_right_name_25 );
    if ( tmp_right_name_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_18 );
        Py_DECREF( tmp_left_name_21 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_right_name_18 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_21, tmp_right_name_24 );
    Py_DECREF( tmp_left_name_21 );
    Py_DECREF( tmp_right_name_24 );
    if ( tmp_right_name_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_18 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_17 = BINARY_OPERATION_SUB( tmp_left_name_18, tmp_right_name_18 );
    Py_DECREF( tmp_left_name_18 );
    Py_DECREF( tmp_right_name_18 );
    if ( tmp_left_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_31 = par_n;

    tmp_right_name_27 = par_p;

    tmp_left_name_30 = BINARY_OPERATION_MUL( tmp_left_name_31, tmp_right_name_27 );
    if ( tmp_left_name_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_17 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_right_name_28 = var_t2;

    tmp_left_name_29 = BINARY_OPERATION_MUL( tmp_left_name_30, tmp_right_name_28 );
    Py_DECREF( tmp_left_name_30 );
    if ( tmp_left_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_17 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_33 = par_r;

    tmp_right_name_30 = par_w;

    tmp_left_name_32 = BINARY_OPERATION_MUL( tmp_left_name_33, tmp_right_name_30 );
    if ( tmp_left_name_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_17 );
        Py_DECREF( tmp_left_name_29 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_right_name_31 = const_int_pos_1;
    tmp_right_name_29 = BINARY_OPERATION_ADD( tmp_left_name_32, tmp_right_name_31 );
    Py_DECREF( tmp_left_name_32 );
    if ( tmp_right_name_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_17 );
        Py_DECREF( tmp_left_name_29 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_28 = BINARY_OPERATION_MUL( tmp_left_name_29, tmp_right_name_29 );
    Py_DECREF( tmp_left_name_29 );
    Py_DECREF( tmp_right_name_29 );
    if ( tmp_left_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_17 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_right_name_32 = par_r;

    tmp_right_name_26 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_28, tmp_right_name_32 );
    Py_DECREF( tmp_left_name_28 );
    if ( tmp_right_name_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_17 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_16 = BINARY_OPERATION_ADD( tmp_left_name_17, tmp_right_name_26 );
    Py_DECREF( tmp_left_name_17 );
    Py_DECREF( tmp_right_name_26 );
    if ( tmp_left_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_left_name_36 = par_p;

    tmp_left_name_37 = var_t1;

    tmp_right_name_35 = const_int_pos_1;
    tmp_right_name_34 = BINARY_OPERATION_SUB( tmp_left_name_37, tmp_right_name_35 );
    if ( tmp_right_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_16 );

        exception_lineno = 522;
        goto frame_exception_exit_1;
    }
    tmp_left_name_35 = BINARY_OPERATION_MUL( tmp_left_name_36, tmp_right_name_34 );
    Py_DECREF( tmp_right_name_34 );
    if ( tmp_left_name_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_16 );

        exception_lineno = 522;
        goto frame_exception_exit_1;
    }
    tmp_right_name_36 = par_w;

    tmp_left_name_34 = BINARY_OPERATION_MUL( tmp_left_name_35, tmp_right_name_36 );
    Py_DECREF( tmp_left_name_35 );
    if ( tmp_left_name_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_16 );

        exception_lineno = 522;
        goto frame_exception_exit_1;
    }
    tmp_right_name_37 = par_r;

    tmp_right_name_33 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_34, tmp_right_name_37 );
    Py_DECREF( tmp_left_name_34 );
    if ( tmp_right_name_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );
        Py_DECREF( tmp_left_name_16 );

        exception_lineno = 522;
        goto frame_exception_exit_1;
    }
    tmp_right_name_15 = BINARY_OPERATION_ADD( tmp_left_name_16, tmp_right_name_33 );
    Py_DECREF( tmp_left_name_16 );
    Py_DECREF( tmp_right_name_33 );
    if ( tmp_right_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_6 );

        exception_lineno = 521;
        goto frame_exception_exit_1;
    }
    tmp_return_value = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_6, tmp_right_name_15 );
    Py_DECREF( tmp_left_name_6 );
    Py_DECREF( tmp_right_name_15 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 520;
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
            if ( par_r )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_r,
                    par_r
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

            if ( par_y )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_y,
                    par_y
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

            if ( var_t1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_t1,
                    var_t1
                );

                assert( res == 0 );
            }

            if ( var_t2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_t2,
                    var_t2
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_9__g_div_gp );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    CHECK_OBJECT( (PyObject *)var_t1 );
    Py_DECREF( var_t1 );
    var_t1 = NULL;

    CHECK_OBJECT( (PyObject *)var_t2 );
    Py_DECREF( var_t2 );
    var_t2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_r );
    Py_DECREF( par_r );
    par_r = NULL;

    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_p );
    Py_DECREF( par_p );
    par_p = NULL;

    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    CHECK_OBJECT( (PyObject *)par_y );
    Py_DECREF( par_y );
    par_y = NULL;

    CHECK_OBJECT( (PyObject *)par_w );
    Py_DECREF( par_w );
    par_w = NULL;

    Py_XDECREF( var_t1 );
    var_t1 = NULL;

    Py_XDECREF( var_t2 );
    var_t2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_9__g_div_gp );
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


static PyObject *impl_numpy$lib$financial$$$function_10_rate( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_nper = python_pars[ 0 ];
    PyObject *par_pmt = python_pars[ 1 ];
    PyObject *par_pv = python_pars[ 2 ];
    PyObject *par_fv = python_pars[ 3 ];
    PyObject *par_when = python_pars[ 4 ];
    PyObject *par_guess = python_pars[ 5 ];
    PyObject *par_tol = python_pars[ 6 ];
    PyObject *par_maxiter = python_pars[ 7 ];
    PyObject *var_rn = NULL;
    PyObject *var_iter = NULL;
    PyObject *var_close = NULL;
    PyObject *var_rnp1 = NULL;
    PyObject *var_diff = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__element_5 = NULL;
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
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_list_element_1;
    PyObject *tmp_operand_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    PyObject *tmp_unpack_5;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f04c99bd0c33b2b96a9c6af4b37ad9db, module_numpy$lib$financial );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__convert_when );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__convert_when );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_convert_when" );
        exception_tb = NULL;

        exception_lineno = 574;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_when;

    frame_function->f_lineno = 574;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 574;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_1;
        Py_DECREF( old );
    }

    // Tried code:
    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_map );
    assert( tmp_called_name_2 != NULL );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 575;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        goto try_except_handler_2;
    }
    tmp_args_element_name_3 = PyList_New( 5 );
    tmp_list_element_1 = par_nper;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 0, tmp_list_element_1 );
    tmp_list_element_1 = par_pmt;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 1, tmp_list_element_1 );
    tmp_list_element_1 = par_pv;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 2, tmp_list_element_1 );
    tmp_list_element_1 = par_fv;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 3, tmp_list_element_1 );
    tmp_list_element_1 = par_when;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_3, 4, tmp_list_element_1 );
    frame_function->f_lineno = 575;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 575;
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


        exception_lineno = 575;
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


        exception_lineno = 575;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_3, 2 );
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


        exception_lineno = 575;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_4, 3 );
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


        exception_lineno = 575;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_6;

    tmp_unpack_5 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_7 = UNPACK_NEXT( tmp_unpack_5, 4 );
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


        exception_lineno = 575;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_5 == NULL );
    tmp_tuple_unpack_1__element_5 = tmp_assign_source_7;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 5)" );
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

    Py_XDECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = par_nper;
        assert( old != NULL );
        par_nper = tmp_assign_source_8;
        Py_INCREF( par_nper );
        Py_DECREF( old );
    }

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = par_pmt;
        assert( old != NULL );
        par_pmt = tmp_assign_source_9;
        Py_INCREF( par_pmt );
        Py_DECREF( old );
    }

    tmp_assign_source_10 = tmp_tuple_unpack_1__element_3;

    {
        PyObject *old = par_pv;
        assert( old != NULL );
        par_pv = tmp_assign_source_10;
        Py_INCREF( par_pv );
        Py_DECREF( old );
    }

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_4;

    {
        PyObject *old = par_fv;
        assert( old != NULL );
        par_fv = tmp_assign_source_11;
        Py_INCREF( par_fv );
        Py_DECREF( old );
    }

    tmp_assign_source_12 = tmp_tuple_unpack_1__element_5;

    {
        PyObject *old = par_when;
        assert( old != NULL );
        par_when = tmp_assign_source_12;
        Py_INCREF( par_when );
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

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_4 );
    Py_DECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_5 );
    Py_DECREF( tmp_tuple_unpack_1__element_5 );
    tmp_tuple_unpack_1__element_5 = NULL;

    tmp_assign_source_13 = par_guess;

    assert( var_rn == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_rn = tmp_assign_source_13;

    tmp_assign_source_14 = const_int_0;
    assert( var_iter == NULL );
    Py_INCREF( tmp_assign_source_14 );
    var_iter = tmp_assign_source_14;

    tmp_assign_source_15 = Py_False;
    assert( var_close == NULL );
    Py_INCREF( tmp_assign_source_15 );
    var_close = tmp_assign_source_15;

    loop_start_1:;
    tmp_compexpr_left_1 = var_iter;

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "iter" );
        exception_tb = NULL;

        exception_lineno = 579;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = par_maxiter;

    tmp_and_left_value_1 = RICH_COMPARE_LT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 579;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 579;
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
    tmp_operand_name_1 = var_close;

    if ( tmp_operand_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "close" );
        exception_tb = NULL;

        exception_lineno = 579;
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 579;
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

        exception_lineno = 579;
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
    goto loop_end_1;
    branch_no_1:;
    tmp_left_name_1 = var_rn;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rn" );
        exception_tb = NULL;

        exception_lineno = 580;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__g_div_gp );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__g_div_gp );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_g_div_gp" );
        exception_tb = NULL;

        exception_lineno = 580;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = var_rn;

    if ( tmp_args_element_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rn" );
        exception_tb = NULL;

        exception_lineno = 580;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_nper;

    tmp_args_element_name_6 = par_pmt;

    tmp_args_element_name_7 = par_pv;

    tmp_args_element_name_8 = par_fv;

    tmp_args_element_name_9 = par_when;

    frame_function->f_lineno = 580;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
    }

    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 580;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 580;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rnp1;
        var_rnp1 = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_4 != NULL );
    tmp_left_name_2 = var_rnp1;

    tmp_right_name_2 = var_rn;

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rn" );
        exception_tb = NULL;

        exception_lineno = 581;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 581;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 581;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 581;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_diff;
        var_diff = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 582;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_all );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 582;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_left_2 = var_diff;

    tmp_compexpr_right_2 = par_tol;

    tmp_args_element_name_11 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 582;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 582;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_18 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 582;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_close;
        var_close = tmp_assign_source_18;
        Py_XDECREF( old );
    }

    tmp_left_name_3 = var_iter;

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "iter" );
        exception_tb = NULL;

        exception_lineno = 583;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = const_int_pos_1;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_3, tmp_right_name_3 );
    tmp_assign_source_19 = tmp_left_name_3;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 583;
        goto frame_exception_exit_1;
    }
    var_iter = tmp_assign_source_19;

    tmp_assign_source_20 = var_rnp1;

    {
        PyObject *old = var_rn;
        var_rn = tmp_assign_source_20;
        Py_INCREF( var_rn );
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 579;
        goto frame_exception_exit_1;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_cond_value_2 = var_close;

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "close" );
        exception_tb = NULL;

        exception_lineno = 585;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 585;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 587;
        goto frame_exception_exit_1;
    }

    tmp_left_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_nan );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = var_rn;

    if ( tmp_right_name_4 == NULL )
    {
        Py_DECREF( tmp_left_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rn" );
        exception_tb = NULL;

        exception_lineno = 587;
        goto frame_exception_exit_1;
    }

    tmp_return_value = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 587;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_return_value = var_rn;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "rn" );
        exception_tb = NULL;

        exception_lineno = 589;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
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
            if ( par_nper )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nper,
                    par_nper
                );

                assert( res == 0 );
            }

            if ( par_pmt )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pmt,
                    par_pmt
                );

                assert( res == 0 );
            }

            if ( par_pv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pv,
                    par_pv
                );

                assert( res == 0 );
            }

            if ( par_fv )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fv,
                    par_fv
                );

                assert( res == 0 );
            }

            if ( par_when )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_when,
                    par_when
                );

                assert( res == 0 );
            }

            if ( par_guess )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_guess,
                    par_guess
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

            if ( par_maxiter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxiter,
                    par_maxiter
                );

                assert( res == 0 );
            }

            if ( var_rn )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rn,
                    var_rn
                );

                assert( res == 0 );
            }

            if ( var_iter )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_iter,
                    var_iter
                );

                assert( res == 0 );
            }

            if ( var_close )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_close,
                    var_close
                );

                assert( res == 0 );
            }

            if ( var_rnp1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rnp1,
                    var_rnp1
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_10_rate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pmt );
    Py_DECREF( par_pmt );
    par_pmt = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    CHECK_OBJECT( (PyObject *)par_guess );
    Py_DECREF( par_guess );
    par_guess = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    Py_XDECREF( var_rn );
    var_rn = NULL;

    Py_XDECREF( var_iter );
    var_iter = NULL;

    Py_XDECREF( var_close );
    var_close = NULL;

    Py_XDECREF( var_rnp1 );
    var_rnp1 = NULL;

    Py_XDECREF( var_diff );
    var_diff = NULL;

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

    CHECK_OBJECT( (PyObject *)par_nper );
    Py_DECREF( par_nper );
    par_nper = NULL;

    CHECK_OBJECT( (PyObject *)par_pmt );
    Py_DECREF( par_pmt );
    par_pmt = NULL;

    CHECK_OBJECT( (PyObject *)par_pv );
    Py_DECREF( par_pv );
    par_pv = NULL;

    CHECK_OBJECT( (PyObject *)par_fv );
    Py_DECREF( par_fv );
    par_fv = NULL;

    CHECK_OBJECT( (PyObject *)par_when );
    Py_DECREF( par_when );
    par_when = NULL;

    CHECK_OBJECT( (PyObject *)par_guess );
    Py_DECREF( par_guess );
    par_guess = NULL;

    CHECK_OBJECT( (PyObject *)par_tol );
    Py_DECREF( par_tol );
    par_tol = NULL;

    CHECK_OBJECT( (PyObject *)par_maxiter );
    Py_DECREF( par_maxiter );
    par_maxiter = NULL;

    Py_XDECREF( var_rn );
    var_rn = NULL;

    Py_XDECREF( var_iter );
    var_iter = NULL;

    Py_XDECREF( var_close );
    var_close = NULL;

    Py_XDECREF( var_rnp1 );
    var_rnp1 = NULL;

    Py_XDECREF( var_diff );
    var_diff = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_10_rate );
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


static PyObject *impl_numpy$lib$financial$$$function_11_irr( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[ 0 ];
    PyObject *var_res = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_rate = NULL;
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
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    PyObject *tmp_frame_locals;
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
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_dba817e3f53d13128245fb807fb1225b, module_numpy$lib$financial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 652;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_roots );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 652;
        goto frame_exception_exit_1;
    }
    tmp_subscribed_name_1 = par_values;

    tmp_subscript_name_1 = const_slice_none_none_int_neg_1;
    tmp_args_element_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 652;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 652;
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


        exception_lineno = 652;
        goto frame_exception_exit_1;
    }
    assert( var_res == NULL );
    var_res = tmp_assign_source_1;

    tmp_source_name_2 = var_res;

    tmp_compexpr_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_imag );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_1 = const_int_0;
    tmp_left_name_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = var_res;

    tmp_compexpr_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_real );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 653;
        goto frame_exception_exit_1;
    }
    tmp_compexpr_right_2 = const_int_0;
    tmp_right_name_1 = RICH_COMPARE_GT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 653;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_And, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 653;
        goto frame_exception_exit_1;
    }
    assert( var_mask == NULL );
    var_mask = tmp_assign_source_2;

    tmp_source_name_4 = var_res;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_size );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 654;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 654;
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
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 655;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_nan );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 655;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_subscribed_name_2 = var_res;

    tmp_subscript_name_2 = var_mask;

    tmp_source_name_6 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_real );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 656;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_res;
        assert( old != NULL );
        var_res = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_left_name_3 = const_float_1_0;
    tmp_right_name_2 = var_res;

    tmp_left_name_2 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 659;
        goto frame_exception_exit_1;
    }
    tmp_right_name_3 = const_int_pos_1;
    tmp_assign_source_4 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 659;
        goto frame_exception_exit_1;
    }
    assert( var_rate == NULL );
    var_rate = tmp_assign_source_4;

    tmp_source_name_7 = var_rate;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_item );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        goto frame_exception_exit_1;
    }
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_8 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 660;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_argmin );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 660;
        goto frame_exception_exit_1;
    }
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_9 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 660;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_abs );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 660;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = var_rate;

    frame_function->f_lineno = 660;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_args_element_name_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 660;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 660;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 660;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 660;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 660;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rate;
        assert( old != NULL );
        var_rate = tmp_assign_source_5;
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
            if ( par_values )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_values,
                    par_values
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

            if ( var_mask )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mask,
                    var_mask
                );

                assert( res == 0 );
            }

            if ( var_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rate,
                    var_rate
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

    tmp_return_value = var_rate;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_11_irr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    CHECK_OBJECT( (PyObject *)var_res );
    Py_DECREF( var_res );
    var_res = NULL;

    CHECK_OBJECT( (PyObject *)var_mask );
    Py_DECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_rate );
    var_rate = NULL;

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

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    Py_XDECREF( var_res );
    var_res = NULL;

    Py_XDECREF( var_mask );
    var_mask = NULL;

    Py_XDECREF( var_rate );
    var_rate = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_11_irr );
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


static PyObject *impl_numpy$lib$financial$$$function_12_npv( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_rate = python_pars[ 0 ];
    PyObject *par_values = python_pars[ 1 ];
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
    PyObject *tmp_called_name_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_57b312856f4cbaba01ff296f44f91fef, module_numpy$lib$financial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 705;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 705;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_values;

    frame_function->f_lineno = 705;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 705;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_values;
        assert( old != NULL );
        par_values = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_left_name_1 = par_values;

    tmp_left_name_3 = const_int_pos_1;
    tmp_right_name_2 = par_rate;

    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 706;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_3 == NULL )
    {
        Py_DECREF( tmp_left_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 706;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_arange );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 706;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = const_int_0;
    tmp_len_arg_1 = par_values;

    tmp_args_element_name_3 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 706;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 706;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_right_name_3 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 706;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = POWER_OPERATION( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 706;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 706;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sum );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 706;
        goto frame_exception_exit_1;
    }
    tmp_kw_name_1 = PyDict_Copy( const_dict_54f4aa72cf3f950a22814f798a2888e8 );
    frame_function->f_lineno = 706;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 706;
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
            if ( par_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rate,
                    par_rate
                );

                assert( res == 0 );
            }

            if ( par_values )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_values,
                    par_values
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_12_npv );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

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

    CHECK_OBJECT( (PyObject *)par_rate );
    Py_DECREF( par_rate );
    par_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_12_npv );
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


static PyObject *impl_numpy$lib$financial$$$function_13_mirr( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_values = python_pars[ 0 ];
    PyObject *par_finance_rate = python_pars[ 1 ];
    PyObject *par_reinvest_rate = python_pars[ 2 ];
    PyObject *var_n = NULL;
    PyObject *var_pos = NULL;
    PyObject *var_neg = NULL;
    PyObject *var_numer = NULL;
    PyObject *var_denom = NULL;
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
    PyObject *tmp_args_name_1;
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
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
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
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_1f8cc6eaec8b4efb43fc32c0fa5a5ac4, module_numpy$lib$financial );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 729;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_asarray );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 729;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_values;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_np );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "np" );
        exception_tb = NULL;

        exception_lineno = 729;
        goto frame_exception_exit_1;
    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_double );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 729;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 729;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 729;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_values;
        assert( old != NULL );
        par_values = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_source_name_3 = par_values;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_size );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 730;
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_2;

    tmp_compexpr_left_1 = par_values;

    tmp_compexpr_right_1 = const_int_0;
    tmp_assign_source_3 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 731;
        goto frame_exception_exit_1;
    }
    assert( var_pos == NULL );
    var_pos = tmp_assign_source_3;

    tmp_compexpr_left_2 = par_values;

    tmp_compexpr_right_2 = const_int_0;
    tmp_assign_source_4 = RICH_COMPARE_LT( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 732;
        goto frame_exception_exit_1;
    }
    assert( var_neg == NULL );
    var_neg = tmp_assign_source_4;

    tmp_source_name_4 = var_pos;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_any );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 733;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 733;
    tmp_and_left_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 733;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 733;
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
    tmp_source_name_5 = var_neg;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_any );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 733;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 733;
    tmp_and_right_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 733;
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

        exception_lineno = 733;
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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 734;
        goto frame_exception_exit_1;
    }

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_nan );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 734;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 735;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_abs );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 735;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_npv );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_npv );
    }

    if ( tmp_called_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "npv" );
        exception_tb = NULL;

        exception_lineno = 735;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_reinvest_rate;

    tmp_left_name_1 = par_values;

    tmp_right_name_1 = var_pos;

    tmp_args_element_name_3 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 735;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 735;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 735;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 735;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 735;
        goto frame_exception_exit_1;
    }
    assert( var_numer == NULL );
    var_numer = tmp_assign_source_5;

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np );

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

        exception_lineno = 736;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_abs );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        goto frame_exception_exit_1;
    }
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_npv );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_npv );
    }

    if ( tmp_called_name_7 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "npv" );
        exception_tb = NULL;

        exception_lineno = 736;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_finance_rate;

    tmp_left_name_2 = par_values;

    tmp_right_name_2 = var_neg;

    tmp_args_element_name_6 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 736;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 736;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_args_element_name_4 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );

        exception_lineno = 736;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 736;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 736;
        goto frame_exception_exit_1;
    }
    assert( var_denom == NULL );
    var_denom = tmp_assign_source_6;

    tmp_left_name_6 = var_numer;

    tmp_right_name_3 = var_denom;

    tmp_left_name_5 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_6, tmp_right_name_3 );
    if ( tmp_left_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 737;
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = const_float_1_0;
    tmp_left_name_8 = var_n;

    tmp_right_name_6 = const_int_pos_1;
    tmp_right_name_5 = BINARY_OPERATION_SUB( tmp_left_name_8, tmp_right_name_6 );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 737;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_7, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_5 );

        exception_lineno = 737;
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = POWER_OPERATION( tmp_left_name_5, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_5 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 737;
        goto frame_exception_exit_1;
    }
    tmp_left_name_9 = const_int_pos_1;
    tmp_right_name_8 = par_reinvest_rate;

    tmp_right_name_7 = BINARY_OPERATION_ADD( tmp_left_name_9, tmp_right_name_8 );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_4 );

        exception_lineno = 737;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_7 );
    Py_DECREF( tmp_left_name_4 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 737;
        goto frame_exception_exit_1;
    }
    tmp_right_name_9 = const_int_pos_1;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_9 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 737;
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
            if ( par_values )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_values,
                    par_values
                );

                assert( res == 0 );
            }

            if ( par_finance_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_finance_rate,
                    par_finance_rate
                );

                assert( res == 0 );
            }

            if ( par_reinvest_rate )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_reinvest_rate,
                    par_reinvest_rate
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

            if ( var_pos )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_pos,
                    var_pos
                );

                assert( res == 0 );
            }

            if ( var_neg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_neg,
                    var_neg
                );

                assert( res == 0 );
            }

            if ( var_numer )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_numer,
                    var_numer
                );

                assert( res == 0 );
            }

            if ( var_denom )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_denom,
                    var_denom
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
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_13_mirr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    CHECK_OBJECT( (PyObject *)par_finance_rate );
    Py_DECREF( par_finance_rate );
    par_finance_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_reinvest_rate );
    Py_DECREF( par_reinvest_rate );
    par_reinvest_rate = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    CHECK_OBJECT( (PyObject *)var_pos );
    Py_DECREF( var_pos );
    var_pos = NULL;

    CHECK_OBJECT( (PyObject *)var_neg );
    Py_DECREF( var_neg );
    var_neg = NULL;

    Py_XDECREF( var_numer );
    var_numer = NULL;

    Py_XDECREF( var_denom );
    var_denom = NULL;

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

    CHECK_OBJECT( (PyObject *)par_values );
    Py_DECREF( par_values );
    par_values = NULL;

    CHECK_OBJECT( (PyObject *)par_finance_rate );
    Py_DECREF( par_finance_rate );
    par_finance_rate = NULL;

    CHECK_OBJECT( (PyObject *)par_reinvest_rate );
    Py_DECREF( par_reinvest_rate );
    par_reinvest_rate = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_pos );
    var_pos = NULL;

    Py_XDECREF( var_neg );
    var_neg = NULL;

    Py_XDECREF( var_numer );
    var_numer = NULL;

    Py_XDECREF( var_denom );
    var_denom = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$lib$financial$$$function_13_mirr );
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



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_10_rate( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_10_rate,
        const_str_plain_rate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f04c99bd0c33b2b96a9c6af4b37ad9db,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_1472e5fec476efc2c264b7175d056214
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_11_irr(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_11_irr,
        const_str_plain_irr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_dba817e3f53d13128245fb807fb1225b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_4104ba4082dd8133344f05cc68681928
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_12_npv(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_12_npv,
        const_str_plain_npv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_57b312856f4cbaba01ff296f44f91fef,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_615e7133c2050edc26acca793638caf8
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_13_mirr(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_13_mirr,
        const_str_plain_mirr,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_1f8cc6eaec8b4efb43fc32c0fa5a5ac4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_0b0dc31831a33dd0b62397cd04bf2e6d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_1__convert_when(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_1__convert_when,
        const_str_plain__convert_when,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5c5af0b564d343a4138280937cc890c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_2_fv( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_2_fv,
        const_str_plain_fv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f305acf933059ae631fea99106c59a91,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_4d0398ef5cd12a598a12e7548fa749c6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_3_pmt( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_3_pmt,
        const_str_plain_pmt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c216ed9d06ec1cf0e004f2b28dff222b,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_6600ad7a3a6c077fa0b55aa1505195fe
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_4_nper( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_4_nper,
        const_str_plain_nper,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f4fbd783fafb563b33c652a02a6bbf12,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_5b3835c2166df5da5838f5dfcb2fe151
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_5_ipmt( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_5_ipmt,
        const_str_plain_ipmt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_836bdf39de8bac9a6b95427d7b5e36b7,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_27f7fcd87f82a60d41011e980adb5e1c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_6__rbl(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_6__rbl,
        const_str_plain__rbl,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0b222058570f3c055ea73a72804dc8fa,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_3e2116c0d3c9c83df8b43aa8ac4bdb79
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_7_ppmt( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_7_ppmt,
        const_str_plain_ppmt,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_b60d344e5914fa3f5cda63be6341d2a9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_a4c8b8e0a87bad3cbe7e13dbb57ba500
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_8_pv( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_8_pv,
        const_str_plain_pv,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3b92b09d71be111453acc4601be20660,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        const_str_digest_18f337534aba44e1b826ad11aa53b9b6
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$lib$financial$$$function_9__g_div_gp(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$lib$financial$$$function_9__g_div_gp,
        const_str_plain__g_div_gp,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5d37f769789b9d58efd965c9e1eba3e4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$lib$financial,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$lib$financial =
{
    PyModuleDef_HEAD_INIT,
    "numpy.lib.financial",   /* m_name */
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

MOD_INIT_DECL( numpy$lib$financial )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$lib$financial );
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

    // puts( "in initnumpy$lib$financial" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$lib$financial = Py_InitModule4(
        "numpy.lib.financial",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$lib$financial = PyModule_Create( &mdef_numpy$lib$financial );
#endif

    moduledict_numpy$lib$financial = (PyDictObject *)((PyModuleObject *)module_numpy$lib$financial)->md_dict;

    CHECK_OBJECT( module_numpy$lib$financial );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a8a5ed4ddc16835cff524dec84afa6df, module_numpy$lib$financial );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$lib$financial );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_import_globals_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_7a0ea3e39355393eebad4b4715fc9424;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c1d31faee37f467929726be840cb6a00;
    UPDATE_STRING_DICT0( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_2b3f755fe191595cbbaa8a35de1cd173, module_numpy$lib$financial );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$lib$financial)->md_dict;
    frame_module->f_lineno = 13;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_numpy, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_np, tmp_assign_source_6 );

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
    tmp_assign_source_7 = LIST_COPY( const_list_628571dee9b51b244ba04656b2ff981a_list );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    tmp_assign_source_8 = PyDict_Copy( const_dict_76c15249d8e349cb6091e9dfd954b04f );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__when_to_num, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_numpy$lib$financial$$$function_1__convert_when(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__convert_when, tmp_assign_source_9 );
    tmp_defaults_1 = const_tuple_str_plain_end_tuple;
    tmp_assign_source_10 = MAKE_FUNCTION_numpy$lib$financial$$$function_2_fv( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_fv, tmp_assign_source_10 );
    tmp_defaults_2 = const_tuple_int_0_str_plain_end_tuple;
    tmp_assign_source_11 = MAKE_FUNCTION_numpy$lib$financial$$$function_3_pmt( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_pmt, tmp_assign_source_11 );
    tmp_defaults_3 = const_tuple_int_0_str_plain_end_tuple;
    tmp_assign_source_12 = MAKE_FUNCTION_numpy$lib$financial$$$function_4_nper( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_nper, tmp_assign_source_12 );
    tmp_defaults_4 = const_tuple_float_0_0_str_plain_end_tuple;
    tmp_assign_source_13 = MAKE_FUNCTION_numpy$lib$financial$$$function_5_ipmt( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_ipmt, tmp_assign_source_13 );
    tmp_assign_source_14 = MAKE_FUNCTION_numpy$lib$financial$$$function_6__rbl(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__rbl, tmp_assign_source_14 );
    tmp_defaults_5 = const_tuple_float_0_0_str_plain_end_tuple;
    tmp_assign_source_15 = MAKE_FUNCTION_numpy$lib$financial$$$function_7_ppmt( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_ppmt, tmp_assign_source_15 );
    tmp_defaults_6 = const_tuple_float_0_0_str_plain_end_tuple;
    tmp_assign_source_16 = MAKE_FUNCTION_numpy$lib$financial$$$function_8_pv( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_pv, tmp_assign_source_16 );
    tmp_assign_source_17 = MAKE_FUNCTION_numpy$lib$financial$$$function_9__g_div_gp(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain__g_div_gp, tmp_assign_source_17 );
    tmp_defaults_7 = const_tuple_str_plain_end_float_0_1_float_1e_minus_06_int_pos_100_tuple;
    tmp_assign_source_18 = MAKE_FUNCTION_numpy$lib$financial$$$function_10_rate( INCREASE_REFCOUNT( tmp_defaults_7 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_rate, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_numpy$lib$financial$$$function_11_irr(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_irr, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_numpy$lib$financial$$$function_12_npv(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_npv, tmp_assign_source_20 );
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$lib$financial$$$function_13_mirr(  );
    UPDATE_STRING_DICT1( moduledict_numpy$lib$financial, (Nuitka_StringObject *)const_str_plain_mirr, tmp_assign_source_21 );

    return MOD_RETURN_VALUE( module_numpy$lib$financial );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
