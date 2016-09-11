/* Generated code for Python source for module 'numpy.core._methods'
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

/* The _module_numpy$core$_methods is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$_methods;
PyDictObject *moduledict_numpy$core$_methods;

/* The module constants used, if any. */
extern PyObject *const_str_plain_logical_or;
extern PyObject *const_tuple_str_plain_umath_tuple;
extern PyObject *const_str_plain_multiarray;
extern PyObject *const_str_plain__amax;
extern PyObject *const_str_plain__amin;
extern PyObject *const_str_plain_mu;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_subok;
extern PyObject *const_tuple_str_plain_numerictypes_tuple;
extern PyObject *const_str_plain_true_divide;
extern PyObject *const_str_plain_real;
extern PyObject *const_str_plain_umath;
extern PyObject *const_str_plain_shape;
extern PyObject *const_str_plain_conjugate;
static PyObject *const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple;
extern PyObject *const_str_plain_axis;
extern PyObject *const_str_plain_minimum;
extern PyObject *const_str_plain_um;
static PyObject *const_str_plain_umr_sum;
extern PyObject *const_str_plain_issubclass;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_multiarray_tuple;
extern PyObject *const_str_plain_unsafe;
extern PyObject *const_str_plain_warnings;
extern PyObject *const_str_plain_type;
static PyObject *const_str_plain_umr_minimum;
extern PyObject *const_str_plain_logical_and;
static PyObject *const_tuple_f123bc675f0c699860fde9efcb75decc_tuple;
static PyObject *const_tuple_38378a805f8bc12d40dc19d611459d40_tuple;
extern PyObject *const_str_plain_keepdims;
extern PyObject *const_str_plain__methods;
static PyObject *const_str_plain_umr_any;
extern PyObject *const_str_plain_reduce;
static PyObject *const_str_plain_umr_all;
extern PyObject *const_str_plain_max;
extern PyObject *const_tuple_none_none_none_false_tuple;
static PyObject *const_tuple_str_plain_f8_tuple;
static PyObject *const_str_plain_rcount;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_arrmean;
extern PyObject *const_str_plain_out;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_arr;
extern PyObject *const_str_plain_RuntimeWarning;
extern PyObject *const_str_plain_nt;
static PyObject *const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple;
static PyObject *const_str_digest_8df1ee00ff4dadb76d839cc83312d1fe;
extern PyObject *const_str_plain__sum;
extern PyObject *const_str_plain_items;
extern PyObject *const_str_plain_complexfloating;
extern PyObject *const_str_digest_aa3423acdb6152e259f846c9911226b3;
extern PyObject *const_dict_59e37d231bc1f549a9bff6ecc16f6241;
static PyObject *const_str_plain_f8;
extern PyObject *const_str_plain__mean;
extern PyObject *const_str_plain_ax;
static PyObject *const_tuple_str_plain_asanyarray_tuple;
extern PyObject *const_str_plain_sqrt;
extern PyObject *const_str_plain__all;
extern PyObject *const_str_plain_ddof;
extern PyObject *const_str_plain_ndarray;
extern PyObject *const_str_plain_bool_;
extern PyObject *const_str_plain_add;
static PyObject *const_str_plain__count_reduce_items;
extern PyObject *const_str_plain_warn;
static PyObject *const_str_digest_c264d6c7c6a577cf11f1d443b80eb75b;
extern PyObject *const_str_plain_numerictypes;
extern PyObject *const_str_plain_ret;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_maximum;
extern PyObject *const_str_plain_casting;
extern PyObject *const_str_plain_a;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain__var;
static PyObject *const_str_plain_umr_prod;
extern PyObject *const_str_plain_multiply;
extern PyObject *const_str_digest_9f54c2bfef14a31f9e49e5c6c99e4831;
extern PyObject *const_tuple_none_none_none_int_0_false_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_integer;
extern PyObject *const_str_plain__std;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple;
static PyObject *const_str_plain__any;
extern PyObject *const_int_0;
extern PyObject *const_tuple_none_none_false_tuple;
extern PyObject *const_str_plain_asanyarray;
static PyObject *const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_tuple;
static PyObject *const_str_plain_umr_maximum;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
static PyObject *const_str_digest_0eb7ee514b0cf98ac5f14749a356a892;
extern PyObject *const_str_plain__prod;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_afcfd11ee3df3c947f27eb372797c73c;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple, 0, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple, 2, const_str_plain_items ); Py_INCREF( const_str_plain_items );
    PyTuple_SET_ITEM( const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple, 3, const_str_plain_ax ); Py_INCREF( const_str_plain_ax );
    const_str_plain_umr_sum = UNSTREAM_STRING( &constant_bin[ 543447 ], 7, 1 );
    const_str_plain_umr_minimum = UNSTREAM_STRING( &constant_bin[ 543454 ], 11, 1 );
    const_tuple_f123bc675f0c699860fde9efcb75decc_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 4, const_str_plain_ddof ); Py_INCREF( const_str_plain_ddof );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 5, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 6, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    const_str_plain_rcount = UNSTREAM_STRING( &constant_bin[ 543465 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 7, const_str_plain_rcount ); Py_INCREF( const_str_plain_rcount );
    const_str_plain_arrmean = UNSTREAM_STRING( &constant_bin[ 543471 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 8, const_str_plain_arrmean ); Py_INCREF( const_str_plain_arrmean );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 9, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 10, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_tuple_38378a805f8bc12d40dc19d611459d40_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 4, const_str_plain_ddof ); Py_INCREF( const_str_plain_ddof );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 5, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 6, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_plain_umr_any = UNSTREAM_STRING( &constant_bin[ 543478 ], 7, 1 );
    const_str_plain_umr_all = UNSTREAM_STRING( &constant_bin[ 543485 ], 7, 1 );
    const_tuple_str_plain_f8_tuple = PyTuple_New( 1 );
    const_str_plain_f8 = UNSTREAM_STRING( &constant_bin[ 278774 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f8_tuple, 0, const_str_plain_f8 ); Py_INCREF( const_str_plain_f8 );
    const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, 2, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, 3, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    const_str_digest_8df1ee00ff4dadb76d839cc83312d1fe = UNSTREAM_STRING( &constant_bin[ 543492 ], 61, 0 );
    const_tuple_str_plain_asanyarray_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_asanyarray_tuple, 0, const_str_plain_asanyarray ); Py_INCREF( const_str_plain_asanyarray );
    const_str_plain__count_reduce_items = UNSTREAM_STRING( &constant_bin[ 543553 ], 19, 1 );
    const_str_digest_c264d6c7c6a577cf11f1d443b80eb75b = UNSTREAM_STRING( &constant_bin[ 543572 ], 19, 0 );
    const_str_plain_umr_prod = UNSTREAM_STRING( &constant_bin[ 543591 ], 8, 1 );
    const_str_plain__any = UNSTREAM_STRING( &constant_bin[ 543481 ], 4, 1 );
    const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple, 1, const_str_plain_axis ); Py_INCREF( const_str_plain_axis );
    PyTuple_SET_ITEM( const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple, 2, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple, 3, const_str_plain_out ); Py_INCREF( const_str_plain_out );
    PyTuple_SET_ITEM( const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple, 4, const_str_plain_keepdims ); Py_INCREF( const_str_plain_keepdims );
    PyTuple_SET_ITEM( const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple, 5, const_str_plain_arr ); Py_INCREF( const_str_plain_arr );
    PyTuple_SET_ITEM( const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple, 6, const_str_plain_rcount ); Py_INCREF( const_str_plain_rcount );
    PyTuple_SET_ITEM( const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple, 7, const_str_plain_ret ); Py_INCREF( const_str_plain_ret );
    const_str_plain_umr_maximum = UNSTREAM_STRING( &constant_bin[ 543599 ], 11, 1 );
    const_str_digest_0eb7ee514b0cf98ac5f14749a356a892 = UNSTREAM_STRING( &constant_bin[ 543610 ], 20, 0 );
    const_str_digest_afcfd11ee3df3c947f27eb372797c73c = UNSTREAM_STRING( &constant_bin[ 543630 ], 120, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$_methods( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_6dd4ada416361b3f6476a57bc1d2aec9;
static PyCodeObject *codeobj_6c81839babcfd26c3d89e222d87b458d;
static PyCodeObject *codeobj_369812ba6ebc7719397beb736e447e67;
static PyCodeObject *codeobj_83603a9d8f541b19f338ce8a4bcf0230;
static PyCodeObject *codeobj_34aee9641b13310f6f0e8a346a43d352;
static PyCodeObject *codeobj_873e4141974b660f5e7b7bfabbd8cdfe;
static PyCodeObject *codeobj_e2305aa7a0cdfb5361de65e597c19bf8;
static PyCodeObject *codeobj_a4125d1be253fdcdadd9921c08632eed;
static PyCodeObject *codeobj_22f6bf75000f338d7d73055640f804b1;
static PyCodeObject *codeobj_f79a59591d87fe233422b0e572d66e5d;
static PyCodeObject *codeobj_68024aabff564a7dbf0f61de0fa466a5;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_8df1ee00ff4dadb76d839cc83312d1fe;
    codeobj_6dd4ada416361b3f6476a57bc1d2aec9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__all, 40, const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6c81839babcfd26c3d89e222d87b458d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__amax, 25, const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_369812ba6ebc7719397beb736e447e67 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__amin, 28, const_tuple_str_plain_a_str_plain_axis_str_plain_out_str_plain_keepdims_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_83603a9d8f541b19f338ce8a4bcf0230 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__any, 37, const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_34aee9641b13310f6f0e8a346a43d352 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__count_reduce_items, 43, const_tuple_str_plain_arr_str_plain_axis_str_plain_items_str_plain_ax_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_873e4141974b660f5e7b7bfabbd8cdfe = MAKE_CODEOBJ( module_filename_obj, const_str_plain__mean, 53, const_tuple_cfad37a08f3cea0f0ca566d7f1672ac6_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_e2305aa7a0cdfb5361de65e597c19bf8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__methods, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a4125d1be253fdcdadd9921c08632eed = MAKE_CODEOBJ( module_filename_obj, const_str_plain__prod, 34, const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_22f6bf75000f338d7d73055640f804b1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__std, 122, const_tuple_38378a805f8bc12d40dc19d611459d40_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f79a59591d87fe233422b0e572d66e5d = MAKE_CODEOBJ( module_filename_obj, const_str_plain__sum, 31, const_tuple_f8e4fbf288890cf7a024bae2e33cb1aa_tuple, 5, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_68024aabff564a7dbf0f61de0fa466a5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__var, 76, const_tuple_f123bc675f0c699860fde9efcb75decc_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_10__std( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_1__amax( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_2__amin( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_3__sum( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_4__prod( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_5__any( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_6__all( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_7__count_reduce_items(  );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_8__mean( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_9__var( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$core$_methods$$$function_1__amax( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
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
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6c81839babcfd26c3d89e222d87b458d, module_numpy$core$_methods );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_maximum );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_maximum );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "umr_maximum" );
        exception_tb = NULL;

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    tmp_args_element_name_2 = par_axis;

    tmp_args_element_name_3 = Py_None;
    tmp_args_element_name_4 = par_out;

    tmp_args_element_name_5 = par_keepdims;

    frame_function->f_lineno = 26;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
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

            if ( par_axis )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_axis,
                    par_axis
                );

                assert( res == 0 );
            }

            if ( par_out )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_out,
                    par_out
                );

                assert( res == 0 );
            }

            if ( par_keepdims )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keepdims,
                    par_keepdims
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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_1__amax );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_1__amax );
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


static PyObject *impl_numpy$core$_methods$$$function_2__amin( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_out = python_pars[ 2 ];
    PyObject *par_keepdims = python_pars[ 3 ];
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
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_369812ba6ebc7719397beb736e447e67, module_numpy$core$_methods );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_minimum );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_minimum );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "umr_minimum" );
        exception_tb = NULL;

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    tmp_args_element_name_2 = par_axis;

    tmp_args_element_name_3 = Py_None;
    tmp_args_element_name_4 = par_out;

    tmp_args_element_name_5 = par_keepdims;

    frame_function->f_lineno = 29;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
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

            if ( par_axis )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_axis,
                    par_axis
                );

                assert( res == 0 );
            }

            if ( par_out )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_out,
                    par_out
                );

                assert( res == 0 );
            }

            if ( par_keepdims )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keepdims,
                    par_keepdims
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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_2__amin );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_2__amin );
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


static PyObject *impl_numpy$core$_methods$$$function_3__sum( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
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
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f79a59591d87fe233422b0e572d66e5d, module_numpy$core$_methods );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_sum );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_sum );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "umr_sum" );
        exception_tb = NULL;

        exception_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    tmp_args_element_name_2 = par_axis;

    tmp_args_element_name_3 = par_dtype;

    tmp_args_element_name_4 = par_out;

    tmp_args_element_name_5 = par_keepdims;

    frame_function->f_lineno = 32;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
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

            if ( par_axis )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_axis,
                    par_axis
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

            if ( par_out )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_out,
                    par_out
                );

                assert( res == 0 );
            }

            if ( par_keepdims )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keepdims,
                    par_keepdims
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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_3__sum );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_3__sum );
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


static PyObject *impl_numpy$core$_methods$$$function_4__prod( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
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
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a4125d1be253fdcdadd9921c08632eed, module_numpy$core$_methods );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_prod );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_prod );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "umr_prod" );
        exception_tb = NULL;

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    tmp_args_element_name_2 = par_axis;

    tmp_args_element_name_3 = par_dtype;

    tmp_args_element_name_4 = par_out;

    tmp_args_element_name_5 = par_keepdims;

    frame_function->f_lineno = 35;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
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

            if ( par_axis )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_axis,
                    par_axis
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

            if ( par_out )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_out,
                    par_out
                );

                assert( res == 0 );
            }

            if ( par_keepdims )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keepdims,
                    par_keepdims
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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_4__prod );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_4__prod );
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


static PyObject *impl_numpy$core$_methods$$$function_5__any( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
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
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_83603a9d8f541b19f338ce8a4bcf0230, module_numpy$core$_methods );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_any );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_any );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "umr_any" );
        exception_tb = NULL;

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    tmp_args_element_name_2 = par_axis;

    tmp_args_element_name_3 = par_dtype;

    tmp_args_element_name_4 = par_out;

    tmp_args_element_name_5 = par_keepdims;

    frame_function->f_lineno = 38;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
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

            if ( par_axis )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_axis,
                    par_axis
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

            if ( par_out )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_out,
                    par_out
                );

                assert( res == 0 );
            }

            if ( par_keepdims )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keepdims,
                    par_keepdims
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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_5__any );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_5__any );
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


static PyObject *impl_numpy$core$_methods$$$function_6__all( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
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
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6dd4ada416361b3f6476a57bc1d2aec9, module_numpy$core$_methods );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_all );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_all );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "umr_all" );
        exception_tb = NULL;

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    tmp_args_element_name_2 = par_axis;

    tmp_args_element_name_3 = par_dtype;

    tmp_args_element_name_4 = par_out;

    tmp_args_element_name_5 = par_keepdims;

    frame_function->f_lineno = 41;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
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

            if ( par_axis )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_axis,
                    par_axis
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

            if ( par_out )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_out,
                    par_out
                );

                assert( res == 0 );
            }

            if ( par_keepdims )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keepdims,
                    par_keepdims
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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_6__all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

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

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_6__all );
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


static PyObject *impl_numpy$core$_methods$$$function_7__count_reduce_items( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arr = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *var_items = NULL;
    PyObject *var_ax = NULL;
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
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_arg_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_34aee9641b13310f6f0e8a346a43d352, module_numpy$core$_methods );
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
    tmp_compare_left_1 = par_axis;

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
    tmp_source_name_1 = par_arr;

    tmp_range_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndim );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_tuple_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_tuple_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_axis;
        assert( old != NULL );
        par_axis = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_isinstance_inst_1 = par_axis;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_tuple );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
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
    tmp_assign_source_2 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_axis;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_2, 0, tmp_tuple_element_1 );
    {
        PyObject *old = par_axis;
        assert( old != NULL );
        par_axis = tmp_assign_source_2;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_assign_source_3 = const_int_pos_1;
    assert( var_items == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_items = tmp_assign_source_3;

    tmp_iter_arg_1 = par_axis;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "axis" );
        exception_tb = NULL;

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
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
            frame_function->f_lineno = 49;
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
        PyObject *old = var_ax;
        var_ax = tmp_assign_source_6;
        Py_INCREF( var_ax );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_items;

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "items" );
        exception_tb = NULL;

        exception_lineno = 50;
        goto try_except_handler_2;
    }

    tmp_source_name_2 = par_arr;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = var_ax;

    tmp_right_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_2;
    }
    tmp_result = BINARY_OPERATION_MUL_INPLACE( &tmp_left_name_1, tmp_right_name_1 );
    tmp_assign_source_7 = tmp_left_name_1;
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto try_except_handler_2;
    }
    var_items = tmp_assign_source_7;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
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

    tmp_return_value = var_items;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "items" );
        exception_tb = NULL;

        exception_lineno = 51;
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
            if ( par_arr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arr,
                    par_arr
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

            if ( var_items )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_items,
                    var_items
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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_7__count_reduce_items );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_items );
    var_items = NULL;

    Py_XDECREF( var_ax );
    var_ax = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arr );
    Py_DECREF( par_arr );
    par_arr = NULL;

    Py_XDECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( var_items );
    var_items = NULL;

    Py_XDECREF( var_ax );
    var_ax = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_7__count_reduce_items );
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


static PyObject *impl_numpy$core$_methods$$$function_8__mean( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_keepdims = python_pars[ 4 ];
    PyObject *var_arr = NULL;
    PyObject *var_rcount = NULL;
    PyObject *var_ret = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    int tmp_res;
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
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_873e4141974b660f5e7b7bfabbd8cdfe, module_numpy$core$_methods );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    frame_function->f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    assert( var_arr == NULL );
    var_arr = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__count_reduce_items );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__count_reduce_items );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_count_reduce_items" );
        exception_tb = NULL;

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_arr;

    tmp_args_element_name_3 = par_axis;

    frame_function->f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    assert( var_rcount == NULL );
    var_rcount = tmp_assign_source_2;

    tmp_compare_left_1 = var_rcount;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_str_digest_0eb7ee514b0cf98ac5f14749a356a892;
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RuntimeWarning" );
        exception_tb = NULL;

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 59;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_compexpr_left_1 = par_dtype;

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
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
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_4 != NULL );
    tmp_source_name_3 = var_arr;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = PyTuple_New( 2 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "nt" );
        exception_tb = NULL;

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_integer );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_7, 0, tmp_tuple_element_1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "nt" );
        exception_tb = NULL;

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bool_ );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_7, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
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

        exception_lineno = 62;
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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 63;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_plain_f8_tuple, 0 ) );

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_sum );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_sum );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "umr_sum" );
        exception_tb = NULL;

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_8 = var_arr;

    tmp_args_element_name_9 = par_axis;

    tmp_args_element_name_10 = par_dtype;

    tmp_args_element_name_11 = par_out;

    tmp_args_element_name_12 = par_keepdims;

    frame_function->f_lineno = 65;
    {
        PyObject *call_args[] = { tmp_args_element_name_8, tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11, tmp_args_element_name_12 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_6, call_args );
    }

    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_4;

    tmp_isinstance_inst_1 = var_ret;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 66;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ndarray );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
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
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_true_divide );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_ret;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_rcount;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = var_ret;

    tmp_dict_key_1 = const_str_plain_out;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = const_str_plain_unsafe;
    tmp_dict_key_2 = const_str_plain_casting;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = Py_False;
    tmp_dict_key_3 = const_str_plain_subok;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 68;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ret;
        assert( old != NULL );
        var_ret = tmp_assign_source_5;
        Py_DECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_hasattr_source_1 = var_ret;

    tmp_hasattr_attr_1 = const_str_plain_dtype;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
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
    tmp_source_name_10 = var_ret;

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dtype );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_type );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = var_ret;

    tmp_right_name_1 = var_rcount;

    tmp_args_element_name_13 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_13 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_13 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ret;
        assert( old != NULL );
        var_ret = tmp_assign_source_6;
        Py_DECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_left_name_2 = var_ret;

    tmp_right_name_2 = var_rcount;

    tmp_assign_source_7 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ret;
        assert( old != NULL );
        var_ret = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_end_4:;
    branch_end_3:;
    tmp_return_value = var_ret;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;

        exception_lineno = 74;
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
            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
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

            if ( par_dtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dtype,
                    par_dtype
                );

                assert( res == 0 );
            }

            if ( par_out )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_out,
                    par_out
                );

                assert( res == 0 );
            }

            if ( par_keepdims )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keepdims,
                    par_keepdims
                );

                assert( res == 0 );
            }

            if ( var_arr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arr,
                    var_arr
                );

                assert( res == 0 );
            }

            if ( var_rcount )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rcount,
                    var_rcount
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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_8__mean );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_arr );
    Py_DECREF( var_arr );
    var_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_rcount );
    Py_DECREF( var_rcount );
    var_rcount = NULL;

    Py_XDECREF( var_ret );
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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_rcount );
    var_rcount = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_8__mean );
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


static PyObject *impl_numpy$core$_methods$$$function_9__var( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_ddof = python_pars[ 4 ];
    PyObject *par_keepdims = python_pars[ 5 ];
    PyObject *var_arr = NULL;
    PyObject *var_rcount = NULL;
    PyObject *var_arrmean = NULL;
    PyObject *var_x = NULL;
    PyObject *var_ret = NULL;
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
    PyObject *tmp_args_element_name_14;
    PyObject *tmp_args_element_name_15;
    PyObject *tmp_args_element_name_16;
    PyObject *tmp_args_element_name_17;
    PyObject *tmp_args_element_name_18;
    PyObject *tmp_args_element_name_19;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
    PyObject *tmp_args_name_4;
    PyObject *tmp_args_name_5;
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
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    PyObject *tmp_called_name_14;
    PyObject *tmp_called_name_15;
    PyObject *tmp_called_name_16;
    PyObject *tmp_called_name_17;
    int tmp_cmp_GtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_kw_name_4;
    PyObject *tmp_kw_name_5;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_list_element_1;
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
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    PyObject *tmp_tuple_element_5;
    PyObject *tmp_tuple_element_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_68024aabff564a7dbf0f61de0fa466a5, module_numpy$core$_methods );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_asanyarray );

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

        exception_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_a;

    frame_function->f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    assert( var_arr == NULL );
    var_arr = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__count_reduce_items );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__count_reduce_items );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_count_reduce_items" );
        exception_tb = NULL;

        exception_lineno = 79;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = var_arr;

    tmp_args_element_name_3 = par_axis;

    frame_function->f_lineno = 79;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
        goto frame_exception_exit_1;
    }
    assert( var_rcount == NULL );
    var_rcount = tmp_assign_source_2;

    tmp_compare_left_1 = par_ddof;

    tmp_compare_right_1 = var_rcount;

    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_warn );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = const_str_digest_9f54c2bfef14a31f9e49e5c6c99e4831;
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RuntimeWarning );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RuntimeWarning" );
        exception_tb = NULL;

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_compexpr_left_1 = par_dtype;

    tmp_compexpr_right_1 = Py_None;
    tmp_and_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
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
    tmp_called_name_4 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_4 != NULL );
    tmp_source_name_3 = var_arr;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_dtype );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_type );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = PyTuple_New( 2 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
    }

    if ( tmp_source_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "nt" );
        exception_tb = NULL;

        exception_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_integer );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_7, 0, tmp_tuple_element_1 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "nt" );
        exception_tb = NULL;

        exception_lineno = 85;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_bool_ );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_6 );
        Py_DECREF( tmp_args_element_name_7 );

        exception_lineno = 85;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_7, 1, tmp_tuple_element_1 );
    frame_function->f_lineno = 85;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7 };
        tmp_and_right_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_6 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
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

        exception_lineno = 85;
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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_dtype );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 86;
    tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_plain_f8_tuple, 0 ) );

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_3;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_sum );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_sum );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "umr_sum" );
        exception_tb = NULL;

        exception_lineno = 91;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_2 = var_arr;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_axis;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = par_dtype;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_2 );
    tmp_kw_name_1 = PyDict_Copy( const_dict_59e37d231bc1f549a9bff6ecc16f6241 );
    frame_function->f_lineno = 91;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    assert( var_arrmean == NULL );
    var_arrmean = tmp_assign_source_4;

    tmp_isinstance_inst_1 = var_arrmean;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_ndarray );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
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
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_true_divide );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_tuple_element_3 = var_arrmean;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = var_rcount;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 3 );
    tmp_dict_value_1 = var_arrmean;

    tmp_dict_key_1 = const_str_plain_out;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = const_str_plain_unsafe;
    tmp_dict_key_2 = const_str_plain_casting;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = Py_False;
    tmp_dict_key_3 = const_str_plain_subok;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 94;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_arrmean;
        assert( old != NULL );
        var_arrmean = tmp_assign_source_5;
        Py_DECREF( old );
    }

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_10 = var_arrmean;

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_dtype );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_type );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = var_arrmean;

    tmp_right_name_1 = var_rcount;

    tmp_args_element_name_8 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_arrmean;
        assert( old != NULL );
        var_arrmean = tmp_assign_source_6;
        Py_DECREF( old );
    }

    branch_end_3:;
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_asanyarray );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_asanyarray );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "asanyarray" );
        exception_tb = NULL;

        exception_lineno = 101;
        goto frame_exception_exit_1;
    }

    tmp_left_name_2 = var_arr;

    tmp_right_name_2 = var_arrmean;

    tmp_args_element_name_9 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 101;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    assert( var_x == NULL );
    var_x = tmp_assign_source_7;

    tmp_called_name_10 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_10 != NULL );
    tmp_source_name_12 = var_arr;

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_dtype );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_type );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
    }

    if ( tmp_source_name_13 == NULL )
    {
        Py_DECREF( tmp_args_element_name_10 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "nt" );
        exception_tb = NULL;

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_complexfloating );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 102;
    {
        PyObject *call_args[] = { tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 102;
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
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_multiply );
    if ( tmp_called_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_args_name_3 = PyTuple_New( 2 );
    tmp_tuple_element_4 = var_x;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_16 == NULL )
    {
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_conjugate );
    if ( tmp_called_name_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_12 = var_x;

    frame_function->f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_args_element_name_12 };
        tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_tuple_element_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_11 );
        Py_DECREF( tmp_args_name_3 );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_3, 1, tmp_tuple_element_4 );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = var_x;

    tmp_dict_key_4 = const_str_plain_out;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 103;
    tmp_source_name_14 = CALL_FUNCTION( tmp_called_name_11, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_11 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_real );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_x;
        assert( old != NULL );
        var_x = tmp_assign_source_8;
        Py_DECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_multiply );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    tmp_args_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_5 = var_x;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 0, tmp_tuple_element_5 );
    tmp_tuple_element_5 = var_x;

    Py_INCREF( tmp_tuple_element_5 );
    PyTuple_SET_ITEM( tmp_args_name_4, 1, tmp_tuple_element_5 );
    tmp_kw_name_4 = _PyDict_NewPresized( 1 );
    tmp_dict_value_5 = var_x;

    tmp_dict_key_5 = const_str_plain_out;
    PyDict_SetItem( tmp_kw_name_4, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 105;
    tmp_assign_source_9 = CALL_FUNCTION( tmp_called_name_13, tmp_args_name_4, tmp_kw_name_4 );
    Py_DECREF( tmp_called_name_13 );
    Py_DECREF( tmp_args_name_4 );
    Py_DECREF( tmp_kw_name_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_x;
        assert( old != NULL );
        var_x = tmp_assign_source_9;
        Py_DECREF( old );
    }

    branch_end_4:;
    tmp_called_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_sum );

    if (unlikely( tmp_called_name_14 == NULL ))
    {
        tmp_called_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_umr_sum );
    }

    if ( tmp_called_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "umr_sum" );
        exception_tb = NULL;

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_13 = var_x;

    tmp_args_element_name_14 = par_axis;

    tmp_args_element_name_15 = par_dtype;

    tmp_args_element_name_16 = par_out;

    tmp_args_element_name_17 = par_keepdims;

    frame_function->f_lineno = 106;
    {
        PyObject *call_args[] = { tmp_args_element_name_13, tmp_args_element_name_14, tmp_args_element_name_15, tmp_args_element_name_16, tmp_args_element_name_17 };
        tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS5( tmp_called_name_14, call_args );
    }

    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_10;

    tmp_called_name_15 = LOOKUP_BUILTIN( const_str_plain_max );
    assert( tmp_called_name_15 != NULL );
    tmp_args_element_name_18 = PyList_New( 2 );
    tmp_left_name_3 = var_rcount;

    tmp_right_name_3 = par_ddof;

    tmp_list_element_1 = BINARY_OPERATION_SUB( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_list_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_18 );

        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    PyList_SET_ITEM( tmp_args_element_name_18, 0, tmp_list_element_1 );
    tmp_list_element_1 = const_int_0;
    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_args_element_name_18, 1, tmp_list_element_1 );
    frame_function->f_lineno = 109;
    {
        PyObject *call_args[] = { tmp_args_element_name_18 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_15, call_args );
    }

    Py_DECREF( tmp_args_element_name_18 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_rcount;
        assert( old != NULL );
        var_rcount = tmp_assign_source_11;
        Py_DECREF( old );
    }

    tmp_isinstance_inst_2 = var_ret;

    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_ndarray );
    if ( tmp_isinstance_cls_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    Py_DECREF( tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
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
    tmp_source_name_19 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_19 == NULL ))
    {
        tmp_source_name_19 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_19 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_called_name_16 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_true_divide );
    if ( tmp_called_name_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_args_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_6 = var_ret;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 0, tmp_tuple_element_6 );
    tmp_tuple_element_6 = var_rcount;

    Py_INCREF( tmp_tuple_element_6 );
    PyTuple_SET_ITEM( tmp_args_name_5, 1, tmp_tuple_element_6 );
    tmp_kw_name_5 = _PyDict_NewPresized( 3 );
    tmp_dict_value_6 = var_ret;

    tmp_dict_key_6 = const_str_plain_out;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = const_str_plain_unsafe;
    tmp_dict_key_7 = const_str_plain_casting;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = Py_False;
    tmp_dict_key_8 = const_str_plain_subok;
    PyDict_SetItem( tmp_kw_name_5, tmp_dict_key_8, tmp_dict_value_8 );
    frame_function->f_lineno = 114;
    tmp_assign_source_12 = CALL_FUNCTION( tmp_called_name_16, tmp_args_name_5, tmp_kw_name_5 );
    Py_DECREF( tmp_called_name_16 );
    Py_DECREF( tmp_args_name_5 );
    Py_DECREF( tmp_kw_name_5 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ret;
        assert( old != NULL );
        var_ret = tmp_assign_source_12;
        Py_DECREF( old );
    }

    goto branch_end_5;
    branch_no_5:;
    tmp_hasattr_source_1 = var_ret;

    tmp_hasattr_attr_1 = const_str_plain_dtype;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
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
    tmp_source_name_21 = var_ret;

    tmp_source_name_20 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_dtype );
    if ( tmp_source_name_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_called_name_17 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_type );
    Py_DECREF( tmp_source_name_20 );
    if ( tmp_called_name_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    tmp_left_name_4 = var_ret;

    tmp_right_name_4 = var_rcount;

    tmp_args_element_name_19 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_args_element_name_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_17 );

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 116;
    {
        PyObject *call_args[] = { tmp_args_element_name_19 };
        tmp_assign_source_13 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_17, call_args );
    }

    Py_DECREF( tmp_called_name_17 );
    Py_DECREF( tmp_args_element_name_19 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ret;
        assert( old != NULL );
        var_ret = tmp_assign_source_13;
        Py_DECREF( old );
    }

    goto branch_end_6;
    branch_no_6:;
    tmp_left_name_5 = var_ret;

    tmp_right_name_5 = var_rcount;

    tmp_assign_source_14 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ret;
        assert( old != NULL );
        var_ret = tmp_assign_source_14;
        Py_DECREF( old );
    }

    branch_end_6:;
    branch_end_5:;
    tmp_return_value = var_ret;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;

        exception_lineno = 120;
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
            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
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

            if ( par_dtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dtype,
                    par_dtype
                );

                assert( res == 0 );
            }

            if ( par_out )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_out,
                    par_out
                );

                assert( res == 0 );
            }

            if ( par_ddof )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ddof,
                    par_ddof
                );

                assert( res == 0 );
            }

            if ( par_keepdims )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keepdims,
                    par_keepdims
                );

                assert( res == 0 );
            }

            if ( var_arr )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arr,
                    var_arr
                );

                assert( res == 0 );
            }

            if ( var_rcount )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rcount,
                    var_rcount
                );

                assert( res == 0 );
            }

            if ( var_arrmean )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arrmean,
                    var_arrmean
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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_9__var );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    CHECK_OBJECT( (PyObject *)var_arr );
    Py_DECREF( var_arr );
    var_arr = NULL;

    CHECK_OBJECT( (PyObject *)var_rcount );
    Py_DECREF( var_rcount );
    var_rcount = NULL;

    CHECK_OBJECT( (PyObject *)var_arrmean );
    Py_DECREF( var_arrmean );
    var_arrmean = NULL;

    CHECK_OBJECT( (PyObject *)var_x );
    Py_DECREF( var_x );
    var_x = NULL;

    Py_XDECREF( var_ret );
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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_arr );
    var_arr = NULL;

    Py_XDECREF( var_rcount );
    var_rcount = NULL;

    Py_XDECREF( var_arrmean );
    var_arrmean = NULL;

    Py_XDECREF( var_x );
    var_x = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_9__var );
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


static PyObject *impl_numpy$core$_methods$$$function_10__std( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_axis = python_pars[ 1 ];
    PyObject *par_dtype = python_pars[ 2 ];
    PyObject *par_out = python_pars[ 3 ];
    PyObject *par_ddof = python_pars[ 4 ];
    PyObject *par_keepdims = python_pars[ 5 ];
    PyObject *var_ret = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    int tmp_res;
    PyObject *tmp_return_value;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_22f6bf75000f338d7d73055640f804b1, module_numpy$core$_methods );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__var );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__var );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_var" );
        exception_tb = NULL;

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_a;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 5 );
    tmp_dict_value_1 = par_axis;

    tmp_dict_key_1 = const_str_plain_axis;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_dtype;

    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = par_out;

    tmp_dict_key_3 = const_str_plain_out;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = par_ddof;

    tmp_dict_key_4 = const_str_plain_ddof;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = par_keepdims;

    tmp_dict_key_5 = const_str_plain_keepdims;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 124;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    assert( var_ret == NULL );
    var_ret = tmp_assign_source_1;

    tmp_isinstance_inst_1 = var_ret;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_mu );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "mu" );
        exception_tb = NULL;

        exception_lineno = 126;
        goto frame_exception_exit_1;
    }

    tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_ndarray );
    if ( tmp_isinstance_cls_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto frame_exception_exit_1;
    }
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
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
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_sqrt );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_ret;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_6 = var_ret;

    tmp_dict_key_6 = const_str_plain_out;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_6, tmp_dict_value_6 );
    frame_function->f_lineno = 127;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ret;
        assert( old != NULL );
        var_ret = tmp_assign_source_2;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_hasattr_source_1 = var_ret;

    tmp_hasattr_attr_1 = const_str_plain_dtype;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
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
    tmp_source_name_4 = var_ret;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_dtype );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_type );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_sqrt );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = var_ret;

    frame_function->f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ret;
        assert( old != NULL );
        var_ret = tmp_assign_source_3;
        Py_DECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 131;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sqrt );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_ret;

    frame_function->f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_ret;
        assert( old != NULL );
        var_ret = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_end_2:;
    branch_end_1:;
    tmp_return_value = var_ret;

    if ( tmp_return_value == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ret" );
        exception_tb = NULL;

        exception_lineno = 133;
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
            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
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

            if ( par_dtype )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dtype,
                    par_dtype
                );

                assert( res == 0 );
            }

            if ( par_out )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_out,
                    par_out
                );

                assert( res == 0 );
            }

            if ( par_ddof )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ddof,
                    par_ddof
                );

                assert( res == 0 );
            }

            if ( par_keepdims )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_keepdims,
                    par_keepdims
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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_10__std );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

    Py_XDECREF( var_ret );
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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_axis );
    Py_DECREF( par_axis );
    par_axis = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)par_out );
    Py_DECREF( par_out );
    par_out = NULL;

    CHECK_OBJECT( (PyObject *)par_ddof );
    Py_DECREF( par_ddof );
    par_ddof = NULL;

    CHECK_OBJECT( (PyObject *)par_keepdims );
    Py_DECREF( par_keepdims );
    par_keepdims = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$core$_methods$$$function_10__std );
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



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_10__std( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_10__std,
        const_str_plain__std,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_22f6bf75000f338d7d73055640f804b1,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$_methods,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_1__amax( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_1__amax,
        const_str_plain__amax,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6c81839babcfd26c3d89e222d87b458d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$_methods,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_2__amin( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_2__amin,
        const_str_plain__amin,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_369812ba6ebc7719397beb736e447e67,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$_methods,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_3__sum( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_3__sum,
        const_str_plain__sum,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f79a59591d87fe233422b0e572d66e5d,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$_methods,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_4__prod( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_4__prod,
        const_str_plain__prod,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a4125d1be253fdcdadd9921c08632eed,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$_methods,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_5__any( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_5__any,
        const_str_plain__any,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_83603a9d8f541b19f338ce8a4bcf0230,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$_methods,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_6__all( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_6__all,
        const_str_plain__all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6dd4ada416361b3f6476a57bc1d2aec9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$_methods,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_7__count_reduce_items(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_7__count_reduce_items,
        const_str_plain__count_reduce_items,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_34aee9641b13310f6f0e8a346a43d352,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$_methods,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_8__mean( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_8__mean,
        const_str_plain__mean,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_873e4141974b660f5e7b7bfabbd8cdfe,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$_methods,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$_methods$$$function_9__var( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$_methods$$$function_9__var,
        const_str_plain__var,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_68024aabff564a7dbf0f61de0fa466a5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$_methods,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$_methods =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core._methods",   /* m_name */
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

MOD_INIT_DECL( numpy$core$_methods )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$_methods );
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

    // puts( "in initnumpy$core$_methods" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$_methods = Py_InitModule4(
        "numpy.core._methods",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core$_methods = PyModule_Create( &mdef_numpy$core$_methods );
#endif

    moduledict_numpy$core$_methods = (PyDictObject *)((PyModuleObject *)module_numpy$core$_methods)->md_dict;

    CHECK_OBJECT( module_numpy$core$_methods );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c264d6c7c6a577cf11f1d443b80eb75b, module_numpy$core$_methods );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$core$_methods );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_defaults_5;
    PyObject *tmp_defaults_6;
    PyObject *tmp_defaults_7;
    PyObject *tmp_defaults_8;
    PyObject *tmp_defaults_9;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_afcfd11ee3df3c947f27eb372797c73c;
    UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_8df1ee00ff4dadb76d839cc83312d1fe;
    UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_e2305aa7a0cdfb5361de65e597c19bf8, module_numpy$core$_methods );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$core$_methods)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$core$_methods)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_multiarray_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_multiarray );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_mu, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$core$_methods)->md_dict;
    frame_module->f_lineno = 11;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_umath_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_umath );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$core$_methods)->md_dict;
    frame_module->f_lineno = 12;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_aa3423acdb6152e259f846c9911226b3, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_asanyarray_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_asanyarray );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_asanyarray, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$core$_methods)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_numerictypes_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_numerictypes );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_nt, tmp_assign_source_10 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 16;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_maximum );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_reduce );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_maximum, tmp_assign_source_11 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 17;
        goto frame_exception_exit_1;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_minimum );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_reduce );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_minimum, tmp_assign_source_12 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 18;
        goto frame_exception_exit_1;
    }

    tmp_source_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_add );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_reduce );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_sum, tmp_assign_source_13 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_multiply );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_reduce );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_prod, tmp_assign_source_14 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_logical_or );
    if ( tmp_source_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_reduce );
    Py_DECREF( tmp_source_name_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_any, tmp_assign_source_15 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_um );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_um );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "um" );
        exception_tb = NULL;

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_logical_and );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_reduce );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain_umr_all, tmp_assign_source_16 );

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
    tmp_defaults_1 = const_tuple_none_none_false_tuple;
    tmp_assign_source_17 = MAKE_FUNCTION_numpy$core$_methods$$$function_1__amax( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__amax, tmp_assign_source_17 );
    tmp_defaults_2 = const_tuple_none_none_false_tuple;
    tmp_assign_source_18 = MAKE_FUNCTION_numpy$core$_methods$$$function_2__amin( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__amin, tmp_assign_source_18 );
    tmp_defaults_3 = const_tuple_none_none_none_false_tuple;
    tmp_assign_source_19 = MAKE_FUNCTION_numpy$core$_methods$$$function_3__sum( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__sum, tmp_assign_source_19 );
    tmp_defaults_4 = const_tuple_none_none_none_false_tuple;
    tmp_assign_source_20 = MAKE_FUNCTION_numpy$core$_methods$$$function_4__prod( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__prod, tmp_assign_source_20 );
    tmp_defaults_5 = const_tuple_none_none_none_false_tuple;
    tmp_assign_source_21 = MAKE_FUNCTION_numpy$core$_methods$$$function_5__any( INCREASE_REFCOUNT( tmp_defaults_5 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__any, tmp_assign_source_21 );
    tmp_defaults_6 = const_tuple_none_none_none_false_tuple;
    tmp_assign_source_22 = MAKE_FUNCTION_numpy$core$_methods$$$function_6__all( INCREASE_REFCOUNT( tmp_defaults_6 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__all, tmp_assign_source_22 );
    tmp_assign_source_23 = MAKE_FUNCTION_numpy$core$_methods$$$function_7__count_reduce_items(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__count_reduce_items, tmp_assign_source_23 );
    tmp_defaults_7 = const_tuple_none_none_none_false_tuple;
    tmp_assign_source_24 = MAKE_FUNCTION_numpy$core$_methods$$$function_8__mean( INCREASE_REFCOUNT( tmp_defaults_7 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__mean, tmp_assign_source_24 );
    tmp_defaults_8 = const_tuple_none_none_none_int_0_false_tuple;
    tmp_assign_source_25 = MAKE_FUNCTION_numpy$core$_methods$$$function_9__var( INCREASE_REFCOUNT( tmp_defaults_8 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__var, tmp_assign_source_25 );
    tmp_defaults_9 = const_tuple_none_none_none_int_0_false_tuple;
    tmp_assign_source_26 = MAKE_FUNCTION_numpy$core$_methods$$$function_10__std( INCREASE_REFCOUNT( tmp_defaults_9 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$_methods, (Nuitka_StringObject *)const_str_plain__std, tmp_assign_source_26 );

    return MOD_RETURN_VALUE( module_numpy$core$_methods );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
