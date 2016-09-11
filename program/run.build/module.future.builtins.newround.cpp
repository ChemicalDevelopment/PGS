/* Generated code for Python source for module 'future.builtins.newround'
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

/* The _module_future$builtins$newround is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$builtins$newround;
PyDictObject *moduledict_future$builtins$newround;

/* The module constants used, if any. */
static PyObject *const_str_digest_aea8c6bdca65c826db05f059c8f7e763;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_decimal;
static PyObject *const_list_str_plain_newround_list;
extern PyObject *const_str_plain_sign;
extern PyObject *const_tuple_none_tuple;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_number;
static PyObject *const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple;
static PyObject *const_str_plain___round__;
static PyObject *const_str_plain_from_float_26;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_math;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_isnan;
static PyObject *const_str_plain_10;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_quantize;
static PyObject *const_str_digest_c32d5978fb3b614d0fbb920ea0828fc9;
static PyObject *const_str_plain_ndigits;
static PyObject *const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple;
static PyObject *const_str_digest_ff9a62787ff9c0012c9bb86794b5237c;
extern PyObject *const_str_plain_PYPY;
static PyObject *const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple;
static PyObject *const_str_plain_return_int;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_as_integer_ratio;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_isinf;
static PyObject *const_str_plain__dec_from_triple;
extern PyObject *const_str_plain__math;
extern PyObject *const_str_plain_long;
static PyObject *const_tuple_str_plain__dec_from_triple_tuple;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_plain_copysign;
extern PyObject *const_str_plain_numpy;
static PyObject *const_tuple_ecc36e2e1bce6f4af37c0c4015f25aa2_tuple;
extern PyObject *const_str_plain_result;
extern PyObject *const_int_pos_5;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_newround;
extern PyObject *const_int_pos_1;
static PyObject *const_str_plain_ROUND_HALF_EVEN;
extern PyObject *const_float_1_0;
extern PyObject *const_str_plain_PY26;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_digest_a1d42fd901666a1063b35d6991fa8b22;
static PyObject *const_tuple_str_plain_10_tuple;
static PyObject *const_str_digest_e6ad533759103a572f945f1e2b38c3f1;
extern PyObject *const_str_plain_d;
extern PyObject *const_str_plain_f;
static PyObject *const_str_plain_Decimal;
static PyObject *const_str_plain_bit_length;
static PyObject *const_str_plain_from_float;
static PyObject *const_str_plain_rounding;
static PyObject *const_str_digest_cfbdb197751f82ef8616be88ebcb4cea;
extern PyObject *const_str_plain_exponent;
extern PyObject *const_str_plain_bind_method;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
extern PyObject *const_tuple_str_plain_d_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_aea8c6bdca65c826db05f059c8f7e763 = UNSTREAM_STRING( &constant_bin[ 235105 ], 68, 0 );
    const_list_str_plain_newround_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_newround_list, 0, const_str_plain_newround ); Py_INCREF( const_str_plain_newround );
    const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple = PyTuple_New( 2 );
    const_str_plain_Decimal = UNSTREAM_STRING( &constant_bin[ 235173 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple, 0, const_str_plain_Decimal ); Py_INCREF( const_str_plain_Decimal );
    const_str_plain_ROUND_HALF_EVEN = UNSTREAM_STRING( &constant_bin[ 235180 ], 15, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple, 1, const_str_plain_ROUND_HALF_EVEN ); Py_INCREF( const_str_plain_ROUND_HALF_EVEN );
    const_str_plain___round__ = UNSTREAM_STRING( &constant_bin[ 235195 ], 9, 1 );
    const_str_plain_from_float_26 = UNSTREAM_STRING( &constant_bin[ 235204 ], 13, 1 );
    const_str_plain_10 = UNSTREAM_STRING( &constant_bin[ 166 ], 2, 0 );
    const_str_plain_quantize = UNSTREAM_STRING( &constant_bin[ 235217 ], 8, 1 );
    const_str_digest_c32d5978fb3b614d0fbb920ea0828fc9 = UNSTREAM_STRING( &constant_bin[ 235225 ], 34, 0 );
    const_str_plain_ndigits = UNSTREAM_STRING( &constant_bin[ 235234 ], 7, 1 );
    const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple, 1, const_str_plain__math ); Py_INCREF( const_str_plain__math );
    const_str_plain__dec_from_triple = UNSTREAM_STRING( &constant_bin[ 235259 ], 16, 1 );
    PyTuple_SET_ITEM( const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple, 2, const_str_plain__dec_from_triple ); Py_INCREF( const_str_plain__dec_from_triple );
    PyTuple_SET_ITEM( const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple, 3, const_str_plain_sign ); Py_INCREF( const_str_plain_sign );
    PyTuple_SET_ITEM( const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple, 4, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple, 5, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_str_plain_bit_length = UNSTREAM_STRING( &constant_bin[ 235275 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple, 6, const_str_plain_bit_length ); Py_INCREF( const_str_plain_bit_length );
    PyTuple_SET_ITEM( const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple, 7, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple, 8, const_str_plain_result ); Py_INCREF( const_str_plain_result );
    const_str_digest_ff9a62787ff9c0012c9bb86794b5237c = UNSTREAM_STRING( &constant_bin[ 235285 ], 428, 0 );
    const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple, 0, const_str_plain_PYPY ); Py_INCREF( const_str_plain_PYPY );
    PyTuple_SET_ITEM( const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple, 1, const_str_plain_PY26 ); Py_INCREF( const_str_plain_PY26 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple, 2, const_str_plain_bind_method ); Py_INCREF( const_str_plain_bind_method );
    const_str_plain_return_int = UNSTREAM_STRING( &constant_bin[ 235713 ], 10, 1 );
    const_tuple_str_plain__dec_from_triple_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__dec_from_triple_tuple, 0, const_str_plain__dec_from_triple ); Py_INCREF( const_str_plain__dec_from_triple );
    const_str_plain_copysign = UNSTREAM_STRING( &constant_bin[ 235723 ], 8, 1 );
    const_tuple_ecc36e2e1bce6f4af37c0c4015f25aa2_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_ecc36e2e1bce6f4af37c0c4015f25aa2_tuple, 0, const_str_plain_number ); Py_INCREF( const_str_plain_number );
    PyTuple_SET_ITEM( const_tuple_ecc36e2e1bce6f4af37c0c4015f25aa2_tuple, 1, const_str_plain_ndigits ); Py_INCREF( const_str_plain_ndigits );
    PyTuple_SET_ITEM( const_tuple_ecc36e2e1bce6f4af37c0c4015f25aa2_tuple, 2, const_str_plain_return_int ); Py_INCREF( const_str_plain_return_int );
    PyTuple_SET_ITEM( const_tuple_ecc36e2e1bce6f4af37c0c4015f25aa2_tuple, 3, const_str_plain_exponent ); Py_INCREF( const_str_plain_exponent );
    PyTuple_SET_ITEM( const_tuple_ecc36e2e1bce6f4af37c0c4015f25aa2_tuple, 4, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    const_tuple_str_plain_10_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_10_tuple, 0, const_str_plain_10 ); Py_INCREF( const_str_plain_10 );
    const_str_digest_e6ad533759103a572f945f1e2b38c3f1 = UNSTREAM_STRING( &constant_bin[ 235731 ], 66, 0 );
    const_str_plain_from_float = UNSTREAM_STRING( &constant_bin[ 235204 ], 10, 1 );
    const_str_plain_rounding = UNSTREAM_STRING( &constant_bin[ 97359 ], 8, 1 );
    const_str_digest_cfbdb197751f82ef8616be88ebcb4cea = UNSTREAM_STRING( &constant_bin[ 235797 ], 750, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$builtins$newround( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_de10134b06416b275672aade7806edd9;
static PyCodeObject *codeobj_4efe173b94070f8d3bc398f93b3a3458;
static PyCodeObject *codeobj_2a96361c9f3514afaf3e5b66939f788e;
static PyCodeObject *codeobj_665020321634f9fe2d4d3db6ccd1f71e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e6ad533759103a572f945f1e2b38c3f1;
    codeobj_de10134b06416b275672aade7806edd9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_bit_length, 89, const_tuple_str_plain_d_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_4efe173b94070f8d3bc398f93b3a3458 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_from_float_26, 55, const_tuple_1f51de42b76184e49701c537b4e6f3b1_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_2a96361c9f3514afaf3e5b66939f788e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_newround, 1, const_tuple_empty, 0, CO_NOFREE );
    codeobj_665020321634f9fe2d4d3db6ccd1f71e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_newround, 12, const_tuple_ecc36e2e1bce6f4af37c0c4015f25aa2_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_1_newround( PyObject *defaults );


static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26(  );


static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length(  );


// The module function definitions.
static PyObject *impl_future$builtins$newround$$$function_1_newround( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_number = python_pars[ 0 ];
    PyObject *par_ndigits = python_pars[ 1 ];
    PyObject *var_return_int = NULL;
    PyObject *var_exponent = NULL;
    PyObject *var_d = NULL;
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
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_In_1;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_float_arg_1;
    PyObject *tmp_float_arg_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_int_arg_1;
    bool tmp_is_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_arg_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_False;
    assert( var_return_int == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_return_int = tmp_assign_source_1;

    tmp_compare_left_1 = par_ndigits;

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
    tmp_assign_source_2 = Py_True;
    {
        PyObject *old = var_return_int;
        assert( old != NULL );
        var_return_int = tmp_assign_source_2;
        Py_INCREF( var_return_int );
        Py_DECREF( old );
    }

    tmp_assign_source_3 = const_int_0;
    {
        PyObject *old = par_ndigits;
        assert( old != NULL );
        par_ndigits = tmp_assign_source_3;
        Py_INCREF( par_ndigits );
        Py_DECREF( old );
    }

    branch_no_1:;
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_665020321634f9fe2d4d3db6ccd1f71e, module_future$builtins$newround );
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
    tmp_hasattr_source_1 = par_number;

    tmp_hasattr_attr_1 = const_str_plain___round__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
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
    tmp_source_name_1 = par_number;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___round__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_ndigits;

    frame_function->f_lineno = 30;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_compare_left_2 = par_ndigits;

    tmp_compare_right_2 = const_int_0;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
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
    tmp_make_exception_arg_1 = const_str_digest_c32d5978fb3b614d0fbb920ea0828fc9;
    frame_function->f_lineno = 33;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NotImplementedError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 33;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_3:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_Decimal );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Decimal );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Decimal" );
        exception_tb = NULL;

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 34;
    tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_plain_10_tuple, 0 ) );

    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_operand_name_1 = par_ndigits;

    tmp_right_name_1 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_1 );

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = POWER_OPERATION( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    assert( var_exponent == NULL );
    var_exponent = tmp_assign_source_4;

    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_PYPY );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PYPY );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PYPY" );
        exception_tb = NULL;

        exception_lineno = 36;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
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
    tmp_compare_left_3 = const_str_plain_numpy;
    tmp_type_arg_1 = par_number;

    tmp_operand_name_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_operand_name_2 != NULL );
    tmp_compare_right_3 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_2 );
    Py_DECREF( tmp_operand_name_2 );
    if ( tmp_compare_right_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_1 == -1) );
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_float_arg_1 = par_number;

    tmp_assign_source_5 = TO_FLOAT( tmp_float_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_number;
        assert( old != NULL );
        par_number = tmp_assign_source_5;
        Py_DECREF( old );
    }

    branch_no_5:;
    branch_no_4:;
    tmp_cond_value_2 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_PY26 );

    if (unlikely( tmp_cond_value_2 == NULL ))
    {
        tmp_cond_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY26 );
    }

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "PY26" );
        exception_tb = NULL;

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
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
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_Decimal );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Decimal );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Decimal" );
        exception_tb = NULL;

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_from_float );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_number;

    if ( tmp_args_element_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 42;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_quantize );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = var_exponent;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_ROUND_HALF_EVEN );

    if (unlikely( tmp_dict_value_1 == NULL ))
    {
        tmp_dict_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ROUND_HALF_EVEN );
    }

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ROUND_HALF_EVEN" );
        exception_tb = NULL;

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_1 = const_str_plain_rounding;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 43;
    tmp_assign_source_6 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    assert( var_d == NULL );
    var_d = tmp_assign_source_6;

    goto branch_end_6;
    branch_no_6:;
    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_from_float_26 );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_from_float_26 );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "from_float_26" );
        exception_tb = NULL;

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_number;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "number" );
        exception_tb = NULL;

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_quantize );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_2 = var_exponent;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_ROUND_HALF_EVEN );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ROUND_HALF_EVEN );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ROUND_HALF_EVEN" );
        exception_tb = NULL;

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain_rounding;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 45;
    tmp_assign_source_7 = CALL_FUNCTION( tmp_called_name_5, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    assert( var_d == NULL );
    var_d = tmp_assign_source_7;

    branch_end_6:;
    tmp_cond_value_3 = var_return_int;

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
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
    tmp_int_arg_1 = var_d;

    tmp_return_value = PyNumber_Int( tmp_int_arg_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_7;
    branch_no_7:;
    tmp_float_arg_2 = var_d;

    tmp_return_value = TO_FLOAT( tmp_float_arg_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_7:;

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
            if ( par_number )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_number,
                    par_number
                );

                assert( res == 0 );
            }

            if ( par_ndigits )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ndigits,
                    par_ndigits
                );

                assert( res == 0 );
            }

            if ( var_return_int )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_return_int,
                    var_return_int
                );

                assert( res == 0 );
            }

            if ( var_exponent )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_exponent,
                    var_exponent
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
    NUITKA_CANNOT_GET_HERE( future$builtins$newround$$$function_1_newround );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_number );
    par_number = NULL;

    CHECK_OBJECT( (PyObject *)par_ndigits );
    Py_DECREF( par_ndigits );
    par_ndigits = NULL;

    CHECK_OBJECT( (PyObject *)var_return_int );
    Py_DECREF( var_return_int );
    var_return_int = NULL;

    Py_XDECREF( var_exponent );
    var_exponent = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

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

    Py_XDECREF( par_number );
    par_number = NULL;

    CHECK_OBJECT( (PyObject *)par_ndigits );
    Py_DECREF( par_ndigits );
    par_ndigits = NULL;

    CHECK_OBJECT( (PyObject *)var_return_int );
    Py_DECREF( var_return_int );
    var_return_int = NULL;

    Py_XDECREF( var_exponent );
    var_exponent = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$builtins$newround$$$function_1_newround );
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


static PyObject *impl_future$builtins$newround$$$function_2_from_float_26( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *var__math = NULL;
    PyObject *var__dec_from_triple = NULL;
    PyObject *var_sign = NULL;
    PyObject *var_n = NULL;
    PyObject *var_d = NULL;
    PyObject *var_bit_length = NULL;
    PyObject *var_k = NULL;
    PyObject *var_result = NULL;
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
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_locals_2;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_operand_name_1;
    PyObject *tmp_operand_name_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4efe173b94070f8d3bc398f93b3a3458, module_future$builtins$newround );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_future$builtins$newround)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_f )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_f,
            par_f
        );

        assert( res == 0 );
    }

    if ( var__math )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain__math,
            var__math
        );

        assert( res == 0 );
    }

    if ( var__dec_from_triple )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain__dec_from_triple,
            var__dec_from_triple
        );

        assert( res == 0 );
    }

    if ( var_sign )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_sign,
            var_sign
        );

        assert( res == 0 );
    }

    if ( var_n )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_n,
            var_n
        );

        assert( res == 0 );
    }

    if ( var_d )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_d,
            var_d
        );

        assert( res == 0 );
    }

    if ( var_bit_length )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_bit_length,
            var_bit_length
        );

        assert( res == 0 );
    }

    if ( var_k )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_k,
            var_k
        );

        assert( res == 0 );
    }

    if ( var_result )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_result,
            var_result
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 76;
    tmp_assign_source_1 = IMPORT_MODULE( const_str_plain_math, tmp_import_globals_1, tmp_import_locals_1, Py_None, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    assert( var__math == NULL );
    var__math = tmp_assign_source_1;

    tmp_import_globals_2 = ((PyModuleObject *)module_future$builtins$newround)->md_dict;
    tmp_import_locals_2 = PyDict_New();
    if ( par_f )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_f,
            par_f
        );

        assert( res == 0 );
    }

    if ( var__math )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain__math,
            var__math
        );

        assert( res == 0 );
    }

    if ( var__dec_from_triple )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain__dec_from_triple,
            var__dec_from_triple
        );

        assert( res == 0 );
    }

    if ( var_sign )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_sign,
            var_sign
        );

        assert( res == 0 );
    }

    if ( var_n )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_n,
            var_n
        );

        assert( res == 0 );
    }

    if ( var_d )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_d,
            var_d
        );

        assert( res == 0 );
    }

    if ( var_bit_length )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_bit_length,
            var_bit_length
        );

        assert( res == 0 );
    }

    if ( var_k )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_k,
            var_k
        );

        assert( res == 0 );
    }

    if ( var_result )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_2,
            const_str_plain_result,
            var_result
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 77;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_decimal, tmp_import_globals_2, tmp_import_locals_2, const_tuple_str_plain__dec_from_triple_tuple, const_int_neg_1 );
    Py_DECREF( tmp_import_locals_2 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain__dec_from_triple );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    assert( var__dec_from_triple == NULL );
    var__dec_from_triple = tmp_assign_source_2;

    tmp_isinstance_inst_1 = par_f;

    tmp_isinstance_cls_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_long );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_isinstance_cls_1, 1, tmp_tuple_element_1 );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    Py_DECREF( tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 79;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_Decimal );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Decimal );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Decimal" );
        exception_tb = NULL;

        exception_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_f;

    frame_function->f_lineno = 80;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = var__math;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isinf );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_2 = par_f;

    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_or_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 81;
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
    tmp_source_name_2 = var__math;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_isnan );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_f;

    frame_function->f_lineno = 81;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_or_right_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
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

        exception_lineno = 81;
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_Decimal );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_Decimal );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "Decimal" );
        exception_tb = NULL;

        exception_lineno = 82;
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = par_f;

    tmp_args_element_name_4 = UNARY_OPERATION( PyObject_Repr, tmp_operand_name_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 82;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_2:;
    tmp_source_name_3 = var__math;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_copysign );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = const_float_1_0;
    tmp_args_element_name_6 = par_f;

    frame_function->f_lineno = 83;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_compare_left_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_float_1_0;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 83;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_3 = const_int_0;
    assert( var_sign == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_sign = tmp_assign_source_3;

    goto branch_end_3;
    branch_no_3:;
    tmp_assign_source_4 = const_int_pos_1;
    assert( var_sign == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_sign = tmp_assign_source_4;

    branch_end_3:;
    // Tried code:
    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_7 != NULL );
    tmp_args_element_name_7 = par_f;

    frame_function->f_lineno = 87;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_source_name_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_source_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_2;
    }
    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_as_integer_ratio );
    Py_DECREF( tmp_source_name_4 );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 87;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_2;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 87;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;

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


        exception_lineno = 87;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;

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


        exception_lineno = 87;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;

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
    tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;

    assert( var_n == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_n = tmp_assign_source_8;

    tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;

    assert( var_d == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_d = tmp_assign_source_9;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_assign_source_10 = MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length(  );
    assert( var_bit_length == NULL );
    var_bit_length = tmp_assign_source_10;

    tmp_called_name_8 = var_bit_length;

    tmp_args_element_name_8 = var_d;

    frame_function->f_lineno = 94;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_left_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_1;
    tmp_assign_source_11 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    assert( var_k == NULL );
    var_k = tmp_assign_source_11;

    tmp_called_name_9 = var__dec_from_triple;

    tmp_args_element_name_9 = var_sign;

    tmp_left_name_2 = var_n;

    tmp_left_name_3 = const_int_pos_5;
    tmp_right_name_3 = var_k;

    tmp_right_name_2 = POWER_OPERATION( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_str_arg_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_str_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_10 = PyObject_Str( tmp_str_arg_1 );
    Py_DECREF( tmp_str_arg_1 );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    tmp_operand_name_2 = var_k;

    tmp_args_element_name_11 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_2 );
    if ( tmp_args_element_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_10 );

        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 95;
    {
        PyObject *call_args[] = { tmp_args_element_name_9, tmp_args_element_name_10, tmp_args_element_name_11 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    Py_DECREF( tmp_args_element_name_11 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 95;
        goto frame_exception_exit_1;
    }
    assert( var_result == NULL );
    var_result = tmp_assign_source_12;


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
            if ( par_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    par_f
                );

                assert( res == 0 );
            }

            if ( var__math )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__math,
                    var__math
                );

                assert( res == 0 );
            }

            if ( var__dec_from_triple )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__dec_from_triple,
                    var__dec_from_triple
                );

                assert( res == 0 );
            }

            if ( var_sign )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_sign,
                    var_sign
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

            if ( var_d )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_d,
                    var_d
                );

                assert( res == 0 );
            }

            if ( var_bit_length )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bit_length,
                    var_bit_length
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
    NUITKA_CANNOT_GET_HERE( future$builtins$newround$$$function_2_from_float_26 );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)var__math );
    Py_DECREF( var__math );
    var__math = NULL;

    CHECK_OBJECT( (PyObject *)var__dec_from_triple );
    Py_DECREF( var__dec_from_triple );
    var__dec_from_triple = NULL;

    Py_XDECREF( var_sign );
    var_sign = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_bit_length );
    var_bit_length = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_result );
    var_result = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    Py_XDECREF( var__math );
    var__math = NULL;

    Py_XDECREF( var__dec_from_triple );
    var__dec_from_triple = NULL;

    Py_XDECREF( var_sign );
    var_sign = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_d );
    var_d = NULL;

    Py_XDECREF( var_bit_length );
    var_bit_length = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$builtins$newround$$$function_2_from_float_26 );
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


static PyObject *impl_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_d = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_bin_arg_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotEq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_de10134b06416b275672aade7806edd9, module_future$builtins$newround );
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
    tmp_compare_left_1 = par_d;

    tmp_compare_right_1 = const_int_0;
    tmp_cmp_NotEq_1 = RICH_COMPARE_BOOL_NE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_NotEq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_abs );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = par_d;

    frame_function->f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_bin_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_bin_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_1 = BUILTIN_BIN( tmp_bin_arg_1 );
    Py_DECREF( tmp_bin_arg_1 );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    tmp_right_name_1 = const_int_pos_2;
    tmp_return_value = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = const_int_0;
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
            if ( par_d )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_d,
                    par_d
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
    NUITKA_CANNOT_GET_HERE( future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

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

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length );
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



static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_1_newround( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$builtins$newround$$$function_1_newround,
        const_str_plain_newround,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_665020321634f9fe2d4d3db6ccd1f71e,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$builtins$newround,
        const_str_digest_ff9a62787ff9c0012c9bb86794b5237c
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$builtins$newround$$$function_2_from_float_26,
        const_str_plain_from_float_26,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4efe173b94070f8d3bc398f93b3a3458,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$builtins$newround,
        const_str_digest_cfbdb197751f82ef8616be88ebcb4cea
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$builtins$newround$$$function_2_from_float_26$$$function_1_bit_length,
        const_str_plain_bit_length,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_de10134b06416b275672aade7806edd9,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$builtins$newround,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$builtins$newround =
{
    PyModuleDef_HEAD_INIT,
    "future.builtins.newround",   /* m_name */
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

MOD_INIT_DECL( future$builtins$newround )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$builtins$newround );
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

    // puts( "in initfuture$builtins$newround" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$builtins$newround = Py_InitModule4(
        "future.builtins.newround",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_future$builtins$newround = PyModule_Create( &mdef_future$builtins$newround );
#endif

    moduledict_future$builtins$newround = (PyDictObject *)((PyModuleObject *)module_future$builtins$newround)->md_dict;

    CHECK_OBJECT( module_future$builtins$newround );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a1d42fd901666a1063b35d6991fa8b22, module_future$builtins$newround );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_future$builtins$newround );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_aea8c6bdca65c826db05f059c8f7e763;
    UPDATE_STRING_DICT0( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e6ad533759103a572f945f1e2b38c3f1;
    UPDATE_STRING_DICT0( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_2a96361c9f3514afaf3e5b66939f788e, module_future$builtins$newround );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$builtins$newround)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_118c8611317729818c37c760127e23b2, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_PYPY );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_PYPY, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_future$builtins$newround)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_118c8611317729818c37c760127e23b2, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_PY26 );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_PY26, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_future$builtins$newround)->md_dict;
    frame_module->f_lineno = 5;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_118c8611317729818c37c760127e23b2, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_PYPY_str_plain_PY26_str_plain_bind_method_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_bind_method );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_bind_method, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_future$builtins$newround)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_decimal, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Decimal );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_Decimal, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_future$builtins$newround)->md_dict;
    frame_module->f_lineno = 9;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_decimal, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_Decimal_str_plain_ROUND_HALF_EVEN_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ROUND_HALF_EVEN );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_ROUND_HALF_EVEN, tmp_assign_source_7 );

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
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_8 = MAKE_FUNCTION_future$builtins$newround$$$function_1_newround( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_newround, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_future$builtins$newround$$$function_2_from_float_26(  );
    UPDATE_STRING_DICT1( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain_from_float_26, tmp_assign_source_9 );
    tmp_assign_source_10 = LIST_COPY( const_list_str_plain_newround_list );
    UPDATE_STRING_DICT1( moduledict_future$builtins$newround, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_10 );

    return MOD_RETURN_VALUE( module_future$builtins$newround );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
