/* Generated code for Python source for module 'numpy.core.function_base'
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

/* The _module_numpy$core$function_base is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core$function_base;
PyDictObject *moduledict_numpy$core$function_base;

/* The module constants used, if any. */
extern PyObject *const_str_plain_result_type;
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_base;
static PyObject *const_str_plain_retstep;
static PyObject *const_str_digest_cde2d2e1951fd2147d787b5f4a473458;
extern PyObject *const_str_plain_astype;
extern PyObject *const_dict_a7ab110deec347786bcfa718065f5388;
static PyObject *const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple;
extern PyObject *const_str_plain__nx;
extern PyObject *const_tuple_str_plain_numeric_tuple;
static PyObject *const_str_plain_logspace;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_int_pos_50_true_float_10_0_none_tuple;
extern PyObject *const_str_plain_shares_memory;
extern PyObject *const_str_plain_div;
extern PyObject *const_str_plain_dtype;
static PyObject *const_list_str_plain_logspace_str_plain_linspace_list;
extern PyObject *const_str_plain_TooHardError;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_1944b865e5838b9edd88194549f0c73b;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_function_base;
extern PyObject *const_int_pos_50;
static PyObject *const_str_digest_387136f2f27a600d39f535bdf356d0e1;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_step;
extern PyObject *const_str_plain_linspace;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_delta;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_start;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_dt;
extern PyObject *const_str_plain_MAY_SHARE_BOUNDS;
static PyObject *const_str_digest_73526a9eec2d2a992b19e9c70de09fb2;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_NaN;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_empty;
extern PyObject *const_float_10_0;
extern PyObject *const_str_plain_stop;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_num;
extern PyObject *const_str_plain_y;
static PyObject *const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple;
static PyObject *const_str_digest_9338a04703d9e11213705ff822e9d7f1;
static PyObject *const_tuple_int_pos_50_true_false_none_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_endpoint;
extern PyObject *const_str_plain_print_function;
static PyObject *const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple;
extern PyObject *const_str_plain_power;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_retstep = UNSTREAM_STRING( &constant_bin[ 684180 ], 7, 1 );
    const_str_digest_cde2d2e1951fd2147d787b5f4a473458 = UNSTREAM_STRING( &constant_bin[ 684187 ], 66, 0 );
    const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple, 0, const_str_plain_result_type ); Py_INCREF( const_str_plain_result_type );
    PyTuple_SET_ITEM( const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple, 1, const_str_plain_NaN ); Py_INCREF( const_str_plain_NaN );
    PyTuple_SET_ITEM( const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple, 2, const_str_plain_shares_memory ); Py_INCREF( const_str_plain_shares_memory );
    PyTuple_SET_ITEM( const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple, 3, const_str_plain_MAY_SHARE_BOUNDS ); Py_INCREF( const_str_plain_MAY_SHARE_BOUNDS );
    PyTuple_SET_ITEM( const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple, 4, const_str_plain_TooHardError ); Py_INCREF( const_str_plain_TooHardError );
    const_str_plain_logspace = UNSTREAM_STRING( &constant_bin[ 684253 ], 8, 1 );
    const_tuple_int_pos_50_true_float_10_0_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_none_tuple, 0, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_none_tuple, 2, const_float_10_0 ); Py_INCREF( const_float_10_0 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_float_10_0_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_list_str_plain_logspace_str_plain_linspace_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_logspace_str_plain_linspace_list, 0, const_str_plain_logspace ); Py_INCREF( const_str_plain_logspace );
    PyList_SET_ITEM( const_list_str_plain_logspace_str_plain_linspace_list, 1, const_str_plain_linspace ); Py_INCREF( const_str_plain_linspace );
    const_str_digest_1944b865e5838b9edd88194549f0c73b = UNSTREAM_STRING( &constant_bin[ 684261 ], 44, 0 );
    const_str_digest_387136f2f27a600d39f535bdf356d0e1 = UNSTREAM_STRING( &constant_bin[ 684305 ], 2451, 0 );
    const_str_digest_73526a9eec2d2a992b19e9c70de09fb2 = UNSTREAM_STRING( &constant_bin[ 686756 ], 24, 0 );
    const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 0, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 1, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 2, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 3, const_str_plain_endpoint ); Py_INCREF( const_str_plain_endpoint );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 4, const_str_plain_base ); Py_INCREF( const_str_plain_base );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 5, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 6, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    const_str_digest_9338a04703d9e11213705ff822e9d7f1 = UNSTREAM_STRING( &constant_bin[ 686780 ], 2666, 0 );
    const_tuple_int_pos_50_true_false_none_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_none_tuple, 0, const_int_pos_50 ); Py_INCREF( const_int_pos_50 );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_none_tuple, 1, Py_True ); Py_INCREF( Py_True );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_none_tuple, 2, Py_False ); Py_INCREF( Py_False );
    PyTuple_SET_ITEM( const_tuple_int_pos_50_true_false_none_tuple, 3, Py_None ); Py_INCREF( Py_None );
    const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 0, const_str_plain_start ); Py_INCREF( const_str_plain_start );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 1, const_str_plain_stop ); Py_INCREF( const_str_plain_stop );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 2, const_str_plain_num ); Py_INCREF( const_str_plain_num );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 3, const_str_plain_endpoint ); Py_INCREF( const_str_plain_endpoint );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 4, const_str_plain_retstep ); Py_INCREF( const_str_plain_retstep );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 5, const_str_plain_dtype ); Py_INCREF( const_str_plain_dtype );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 6, const_str_plain_div ); Py_INCREF( const_str_plain_div );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 7, const_str_plain_dt ); Py_INCREF( const_str_plain_dt );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 8, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 9, const_str_plain_delta ); Py_INCREF( const_str_plain_delta );
    PyTuple_SET_ITEM( const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 10, const_str_plain_step ); Py_INCREF( const_str_plain_step );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core$function_base( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_daa1c62a38da4610f884cc26592507f7;
static PyCodeObject *codeobj_acf92c979ca0382226117cb130e21135;
static PyCodeObject *codeobj_836921894d7fc2851d3e314884e7d194;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_cde2d2e1951fd2147d787b5f4a473458;
    codeobj_daa1c62a38da4610f884cc26592507f7 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_function_base, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_acf92c979ca0382226117cb130e21135 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_linspace, 9, const_tuple_a07d8d4d1c8a5b05463d42a87ae64bc2_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_836921894d7fc2851d3e314884e7d194 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_logspace, 128, const_tuple_9f2e6ddbececa1047f9385799d47f55a_tuple, 6, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_1_linspace( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_2_logspace( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$core$function_base$$$function_1_linspace( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start = python_pars[ 0 ];
    PyObject *par_stop = python_pars[ 1 ];
    PyObject *par_num = python_pars[ 2 ];
    PyObject *par_endpoint = python_pars[ 3 ];
    PyObject *par_retstep = python_pars[ 4 ];
    PyObject *par_dtype = python_pars[ 5 ];
    PyObject *var_div = NULL;
    PyObject *var_dt = NULL;
    PyObject *var_y = NULL;
    PyObject *var_delta = NULL;
    PyObject *var_step = NULL;
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
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_args_name_3;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    int tmp_cmp_Lt_1;
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
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_float_arg_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
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
    PyObject *tmp_make_exception_arg_1;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_acf92c979ca0382226117cb130e21135, module_numpy$core$function_base );
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
    tmp_int_arg_1 = par_num;

    tmp_assign_source_1 = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_num;
        assert( old != NULL );
        par_num = tmp_assign_source_1;
        Py_DECREF( old );
    }

    tmp_compare_left_1 = par_num;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 85;
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
    tmp_left_name_1 = const_str_digest_1944b865e5838b9edd88194549f0c73b;
    tmp_right_name_1 = par_num;

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 86;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_cond_value_1 = par_endpoint;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_left_name_2 = par_num;

    tmp_right_name_2 = const_int_pos_1;
    tmp_assign_source_2 = BINARY_OPERATION_SUB( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto frame_exception_exit_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_assign_source_2 = par_num;

    Py_INCREF( tmp_assign_source_2 );
    condexpr_end_1:;
    assert( var_div == NULL );
    var_div = tmp_assign_source_2;

    tmp_left_name_3 = par_start;

    tmp_right_name_3 = const_float_1_0;
    tmp_assign_source_3 = BINARY_OPERATION_MUL( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_start;
        assert( old != NULL );
        par_start = tmp_assign_source_3;
        Py_DECREF( old );
    }

    tmp_left_name_4 = par_stop;

    tmp_right_name_4 = const_float_1_0;
    tmp_assign_source_4 = BINARY_OPERATION_MUL( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_stop;
        assert( old != NULL );
        par_stop = tmp_assign_source_4;
        Py_DECREF( old );
    }

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_result_type );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_result_type );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "result_type" );
        exception_tb = NULL;

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_start;

    tmp_args_element_name_2 = par_stop;

    tmp_float_arg_1 = par_num;

    tmp_args_element_name_3 = TO_FLOAT( tmp_float_arg_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    assert( var_dt == NULL );
    var_dt = tmp_assign_source_5;

    tmp_compare_left_2 = par_dtype;

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
    tmp_assign_source_6 = var_dt;

    {
        PyObject *old = par_dtype;
        assert( old != NULL );
        par_dtype = tmp_assign_source_6;
        Py_INCREF( par_dtype );
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 97;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_arange );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_num;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var_dt;

    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 97;
    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_7;

    tmp_left_name_5 = par_stop;

    tmp_right_name_5 = par_start;

    tmp_assign_source_8 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    assert( var_delta == NULL );
    var_delta = tmp_assign_source_8;

    tmp_compare_left_3 = par_num;

    tmp_compare_right_3 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
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
    tmp_left_name_6 = var_delta;

    tmp_right_name_6 = var_div;

    tmp_assign_source_9 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    assert( var_step == NULL );
    var_step = tmp_assign_source_9;

    tmp_compare_left_4 = var_step;

    tmp_compare_right_4 = const_int_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
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
    tmp_left_name_7 = var_y;

    tmp_right_name_7 = var_div;

    tmp_result = BINARY_OPERATION_INPLACE( PyNumber_InPlaceTrueDivide, &tmp_left_name_7, tmp_right_name_7 );
    tmp_assign_source_10 = tmp_left_name_7;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    var_y = tmp_assign_source_10;

    tmp_left_name_8 = var_y;

    tmp_right_name_8 = var_delta;

    tmp_assign_source_11 = BINARY_OPERATION_MUL( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_y;
        assert( old != NULL );
        var_y = tmp_assign_source_11;
        Py_DECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_left_name_9 = var_y;

    tmp_right_name_9 = var_step;

    tmp_assign_source_12 = BINARY_OPERATION_MUL( tmp_left_name_9, tmp_right_name_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_y;
        assert( old != NULL );
        var_y = tmp_assign_source_12;
        Py_DECREF( old );
    }

    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_NaN );

    if (unlikely( tmp_assign_source_13 == NULL ))
    {
        tmp_assign_source_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NaN );
    }

    if ( tmp_assign_source_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NaN" );
        exception_tb = NULL;

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }

    assert( var_step == NULL );
    Py_INCREF( tmp_assign_source_13 );
    var_step = tmp_assign_source_13;

    tmp_left_name_10 = var_y;

    tmp_right_name_10 = var_delta;

    tmp_assign_source_14 = BINARY_OPERATION_MUL( tmp_left_name_10, tmp_right_name_10 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = var_y;
        assert( old != NULL );
        var_y = tmp_assign_source_14;
        Py_DECREF( old );
    }

    branch_end_3:;
    tmp_left_name_11 = var_y;

    if ( tmp_left_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 117;
        goto frame_exception_exit_1;
    }

    tmp_right_name_11 = par_start;

    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_11, tmp_right_name_11 );
    tmp_assign_source_15 = tmp_left_name_11;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    var_y = tmp_assign_source_15;

    tmp_and_left_value_1 = par_endpoint;

    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
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
    tmp_compexpr_left_1 = par_num;

    tmp_compexpr_right_1 = const_int_pos_1;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
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

        exception_lineno = 119;
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
    tmp_ass_subvalue_1 = par_stop;

    tmp_ass_subscribed_1 = var_y;

    tmp_ass_subscript_1 = const_int_neg_1;
    tmp_ass_subscript_res_1 = SET_SUBSCRIPT_CONST( tmp_ass_subscribed_1, tmp_ass_subscript_1, -1, tmp_ass_subvalue_1 );
    if ( tmp_ass_subscript_res_1 == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    tmp_cond_value_3 = par_retstep;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_return_value = PyTuple_New( 2 );
    tmp_source_name_2 = var_y;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_astype );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = par_dtype;

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_function->f_lineno = 123;
    tmp_tuple_element_2 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );

        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_step;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_2 );
    goto frame_return_exit_1;
    goto branch_end_6;
    branch_no_6:;
    tmp_source_name_3 = var_y;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_astype );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    tmp_args_name_3 = PyTuple_New( 1 );
    tmp_tuple_element_4 = par_dtype;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_args_name_3, 0, tmp_tuple_element_4 );
    tmp_kw_name_3 = PyDict_Copy( const_dict_a7ab110deec347786bcfa718065f5388 );
    frame_function->f_lineno = 125;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_4, tmp_args_name_3, tmp_kw_name_3 );
    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_6:;

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
            if ( par_start )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_start,
                    par_start
                );

                assert( res == 0 );
            }

            if ( par_stop )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_stop,
                    par_stop
                );

                assert( res == 0 );
            }

            if ( par_num )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_num,
                    par_num
                );

                assert( res == 0 );
            }

            if ( par_endpoint )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_endpoint,
                    par_endpoint
                );

                assert( res == 0 );
            }

            if ( par_retstep )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_retstep,
                    par_retstep
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

            if ( var_div )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_div,
                    var_div
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

            if ( var_y )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_y,
                    var_y
                );

                assert( res == 0 );
            }

            if ( var_delta )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_delta,
                    var_delta
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_1_linspace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_retstep );
    Py_DECREF( par_retstep );
    par_retstep = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    CHECK_OBJECT( (PyObject *)var_div );
    Py_DECREF( var_div );
    var_div = NULL;

    CHECK_OBJECT( (PyObject *)var_dt );
    Py_DECREF( var_dt );
    var_dt = NULL;

    CHECK_OBJECT( (PyObject *)var_y );
    Py_DECREF( var_y );
    var_y = NULL;

    CHECK_OBJECT( (PyObject *)var_delta );
    Py_DECREF( var_delta );
    var_delta = NULL;

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

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_retstep );
    Py_DECREF( par_retstep );
    par_retstep = NULL;

    Py_XDECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_div );
    var_div = NULL;

    Py_XDECREF( var_dt );
    var_dt = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_delta );
    var_delta = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_1_linspace );
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


static PyObject *impl_numpy$core$function_base$$$function_2_logspace( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_start = python_pars[ 0 ];
    PyObject *par_stop = python_pars[ 1 ];
    PyObject *par_num = python_pars[ 2 ];
    PyObject *par_endpoint = python_pars[ 3 ];
    PyObject *par_base = python_pars[ 4 ];
    PyObject *par_dtype = python_pars[ 5 ];
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
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_836921894d7fc2851d3e314884e7d194, module_numpy$core$function_base );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_linspace );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linspace );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "linspace" );
        exception_tb = NULL;

        exception_lineno = 205;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_start;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_stop;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_num;

    tmp_dict_key_1 = const_str_plain_num;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_endpoint;

    tmp_dict_key_2 = const_str_plain_endpoint;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 205;
    tmp_assign_source_1 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 205;
        goto frame_exception_exit_1;
    }
    assert( var_y == NULL );
    var_y = tmp_assign_source_1;

    tmp_compare_left_1 = par_dtype;

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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 207;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_power );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_base;

    tmp_args_element_name_2 = var_y;

    frame_function->f_lineno = 207;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 207;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx );

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

        exception_lineno = 208;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_power );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_base;

    tmp_args_element_name_4 = var_y;

    frame_function->f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_astype );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = par_dtype;

    frame_function->f_lineno = 208;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 208;
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
            if ( par_start )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_start,
                    par_start
                );

                assert( res == 0 );
            }

            if ( par_stop )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_stop,
                    par_stop
                );

                assert( res == 0 );
            }

            if ( par_num )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_num,
                    par_num
                );

                assert( res == 0 );
            }

            if ( par_endpoint )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_endpoint,
                    par_endpoint
                );

                assert( res == 0 );
            }

            if ( par_base )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_base,
                    par_base
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

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_2_logspace );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_base );
    Py_DECREF( par_base );
    par_base = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

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

    CHECK_OBJECT( (PyObject *)par_start );
    Py_DECREF( par_start );
    par_start = NULL;

    CHECK_OBJECT( (PyObject *)par_stop );
    Py_DECREF( par_stop );
    par_stop = NULL;

    CHECK_OBJECT( (PyObject *)par_num );
    Py_DECREF( par_num );
    par_num = NULL;

    CHECK_OBJECT( (PyObject *)par_endpoint );
    Py_DECREF( par_endpoint );
    par_endpoint = NULL;

    CHECK_OBJECT( (PyObject *)par_base );
    Py_DECREF( par_base );
    par_base = NULL;

    CHECK_OBJECT( (PyObject *)par_dtype );
    Py_DECREF( par_dtype );
    par_dtype = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$function_base$$$function_2_logspace );
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



static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_1_linspace( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$function_base$$$function_1_linspace,
        const_str_plain_linspace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_acf92c979ca0382226117cb130e21135,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$function_base,
        const_str_digest_387136f2f27a600d39f535bdf356d0e1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$function_base$$$function_2_logspace( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$function_base$$$function_2_logspace,
        const_str_plain_logspace,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_836921894d7fc2851d3e314884e7d194,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core$function_base,
        const_str_digest_9338a04703d9e11213705ff822e9d7f1
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core$function_base =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core.function_base",   /* m_name */
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

MOD_INIT_DECL( numpy$core$function_base )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core$function_base );
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

    // puts( "in initnumpy$core$function_base" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core$function_base = Py_InitModule4(
        "numpy.core.function_base",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core$function_base = PyModule_Create( &mdef_numpy$core$function_base );
#endif

    moduledict_numpy$core$function_base = (PyDictObject *)((PyModuleObject *)module_numpy$core$function_base)->md_dict;

    CHECK_OBJECT( module_numpy$core$function_base );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_73526a9eec2d2a992b19e9c70de09fb2, module_numpy$core$function_base );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$core$function_base );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
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
    PyObject *tmp_import_name_from_6;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_cde2d2e1951fd2147d787b5f4a473458;
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_str_plain_logspace_str_plain_linspace_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_daa1c62a38da4610f884cc26592507f7, module_numpy$core$function_base );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_empty, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_numeric_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain__nx, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_numeric, tmp_import_globals_2, tmp_import_globals_2, const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_result_type );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_result_type, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_numeric, tmp_import_globals_3, tmp_import_globals_3, const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_NaN );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_NaN, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_numeric, tmp_import_globals_4, tmp_import_globals_4, const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_shares_memory );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_shares_memory, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_numeric, tmp_import_globals_5, tmp_import_globals_5, const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_MAY_SHARE_BOUNDS );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_MAY_SHARE_BOUNDS, tmp_assign_source_11 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$core$function_base)->md_dict;
    frame_module->f_lineno = 6;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_numeric, tmp_import_globals_6, tmp_import_globals_6, const_tuple_bdf4106aa8397b7d83f63137c7f46f9f_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_TooHardError );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 6;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_TooHardError, tmp_assign_source_12 );

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
    tmp_defaults_1 = const_tuple_int_pos_50_true_false_none_tuple;
    tmp_assign_source_13 = MAKE_FUNCTION_numpy$core$function_base$$$function_1_linspace( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_linspace, tmp_assign_source_13 );
    tmp_defaults_2 = const_tuple_int_pos_50_true_float_10_0_none_tuple;
    tmp_assign_source_14 = MAKE_FUNCTION_numpy$core$function_base$$$function_2_logspace( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$core$function_base, (Nuitka_StringObject *)const_str_plain_logspace, tmp_assign_source_14 );

    return MOD_RETURN_VALUE( module_numpy$core$function_base );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
