/* Generated code for Python source for module 'numpy.fft.helper'
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

/* The _module_numpy$fft$helper is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$fft$helper;
PyDictObject *moduledict_numpy$fft$helper;

/* The module constants used, if any. */
static PyObject *const_str_plain_fftfreq;
static PyObject *const_str_digest_91a6e65509cfbbe4ba154cabdb7becca;
static PyObject *const_str_digest_2fb7ba50d30fb34bf585af15f504be82;
static PyObject *const_str_digest_4ef7001003be7e06506ab78ccaae217c;
extern PyObject *const_float_1_0;
extern PyObject *const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b;
extern PyObject *const_str_plain_y;
extern PyObject *const_tuple_float_1_0_tuple;
static PyObject *const_str_digest_576644db5145960717a957e6a5504ec5;
extern PyObject *const_dict_empty;
static PyObject *const_str_digest_1f896e1cd39c960c2dfcf70d6b941e75;
extern PyObject *const_str_plain_results;
extern PyObject *const_str_plain_tmp;
static PyObject *const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple;
static PyObject *const_tuple_str_plain_integer_types_tuple;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_integer;
static PyObject *const_str_digest_293aad69cd56517b68992ed23f35c561;
static PyObject *const_str_plain_p1;
extern PyObject *const_str_plain_helper;
extern PyObject *const_str_plain_arange;
extern PyObject *const_str_plain_empty;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_N;
static PyObject *const_str_plain_mylist;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain_dtype;
extern PyObject *const_str_plain_concatenate;
extern PyObject *const_str_plain_division;
extern PyObject *const_int_pos_2;
static PyObject *const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple;
extern PyObject *const_int_pos_1;
static PyObject *const_str_digest_5bdc29da7e9b0d9cd26e1d40e7ad7f75;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_take;
extern PyObject *const_str_plain_shape;
static PyObject *const_tuple_1952086625b3b75894ff16424526eb36_tuple;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_ndim;
extern PyObject *const_str_plain_axes;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_d;
static PyObject *const_str_digest_5ced19727bd7c891a8f02a2cacb55d0b;
static PyObject *const_str_plain_p2;
static PyObject *const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple;
extern PyObject *const_str_plain_int;
static PyObject *const_str_plain_fftshift;
extern PyObject *const_str_plain_x;
extern PyObject *const_str_plain_asarray;
extern PyObject *const_str_plain_integer_types;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_list_d3376bb1f7f4aa67004298e8d81c0177_list;
static PyObject *const_str_plain_ifftshift;
static PyObject *const_str_plain_rfftfreq;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_fftfreq = UNSTREAM_STRING( &constant_bin[ 847457 ], 7, 1 );
    const_str_digest_91a6e65509cfbbe4ba154cabdb7becca = UNSTREAM_STRING( &constant_bin[ 853548 ], 16, 0 );
    const_str_digest_2fb7ba50d30fb34bf585af15f504be82 = UNSTREAM_STRING( &constant_bin[ 853564 ], 1362, 0 );
    const_str_digest_4ef7001003be7e06506ab78ccaae217c = UNSTREAM_STRING( &constant_bin[ 854926 ], 42, 0 );
    const_str_digest_576644db5145960717a957e6a5504ec5 = UNSTREAM_STRING( &constant_bin[ 854968 ], 22, 0 );
    const_str_digest_1f896e1cd39c960c2dfcf70d6b941e75 = UNSTREAM_STRING( &constant_bin[ 854990 ], 815, 0 );
    const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 0, const_str_plain_x ); Py_INCREF( const_str_plain_x );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 1, const_str_plain_axes ); Py_INCREF( const_str_plain_axes );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 2, const_str_plain_tmp ); Py_INCREF( const_str_plain_tmp );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 3, const_str_plain_ndim ); Py_INCREF( const_str_plain_ndim );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 4, const_str_plain_y ); Py_INCREF( const_str_plain_y );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 5, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 6, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_str_plain_p2 = UNSTREAM_STRING( &constant_bin[ 166708 ], 2, 1 );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 7, const_str_plain_p2 ); Py_INCREF( const_str_plain_p2 );
    const_str_plain_mylist = UNSTREAM_STRING( &constant_bin[ 855805 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 8, const_str_plain_mylist ); Py_INCREF( const_str_plain_mylist );
    const_tuple_str_plain_integer_types_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_integer_types_tuple, 0, const_str_plain_integer_types ); Py_INCREF( const_str_plain_integer_types );
    const_str_digest_293aad69cd56517b68992ed23f35c561 = UNSTREAM_STRING( &constant_bin[ 855811 ], 58, 0 );
    const_str_plain_p1 = UNSTREAM_STRING( &constant_bin[ 340595 ], 2, 1 );
    const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 0, const_str_plain_asarray ); Py_INCREF( const_str_plain_asarray );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 1, const_str_plain_concatenate ); Py_INCREF( const_str_plain_concatenate );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 2, const_str_plain_arange ); Py_INCREF( const_str_plain_arange );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 3, const_str_plain_take ); Py_INCREF( const_str_plain_take );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 4, const_str_plain_integer ); Py_INCREF( const_str_plain_integer );
    PyTuple_SET_ITEM( const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, 5, const_str_plain_empty ); Py_INCREF( const_str_plain_empty );
    const_str_digest_5bdc29da7e9b0d9cd26e1d40e7ad7f75 = UNSTREAM_STRING( &constant_bin[ 855869 ], 1139, 0 );
    const_tuple_1952086625b3b75894ff16424526eb36_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 3, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_1952086625b3b75894ff16424526eb36_tuple, 4, const_str_plain_results ); Py_INCREF( const_str_plain_results );
    const_str_digest_5ced19727bd7c891a8f02a2cacb55d0b = UNSTREAM_STRING( &constant_bin[ 857008 ], 1078, 0 );
    const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 0, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 1, const_str_plain_d ); Py_INCREF( const_str_plain_d );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 2, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 3, const_str_plain_results ); Py_INCREF( const_str_plain_results );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 4, const_str_plain_N ); Py_INCREF( const_str_plain_N );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 5, const_str_plain_p1 ); Py_INCREF( const_str_plain_p1 );
    PyTuple_SET_ITEM( const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 6, const_str_plain_p2 ); Py_INCREF( const_str_plain_p2 );
    const_str_plain_fftshift = UNSTREAM_STRING( &constant_bin[ 826585 ], 8, 1 );
    const_list_d3376bb1f7f4aa67004298e8d81c0177_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 0, const_str_plain_fftshift ); Py_INCREF( const_str_plain_fftshift );
    const_str_plain_ifftshift = UNSTREAM_STRING( &constant_bin[ 841805 ], 9, 1 );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 1, const_str_plain_ifftshift ); Py_INCREF( const_str_plain_ifftshift );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 2, const_str_plain_fftfreq ); Py_INCREF( const_str_plain_fftfreq );
    const_str_plain_rfftfreq = UNSTREAM_STRING( &constant_bin[ 854133 ], 8, 1 );
    PyList_SET_ITEM( const_list_d3376bb1f7f4aa67004298e8d81c0177_list, 3, const_str_plain_rfftfreq ); Py_INCREF( const_str_plain_rfftfreq );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$fft$helper( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fab0125fc7b62a47b0f47162452ca44a;
static PyCodeObject *codeobj_c74277e62bf35a761fa9da430ce4bce2;
static PyCodeObject *codeobj_a386f8e93bddbe71e580b367a8f52610;
static PyCodeObject *codeobj_565530f952bd04b2e308df8c5e9503d4;
static PyCodeObject *codeobj_fad58b8beef64eda873de41735b1c616;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_293aad69cd56517b68992ed23f35c561;
    codeobj_fab0125fc7b62a47b0f47162452ca44a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fftfreq, 127, const_tuple_0ce4573cc17f32876f4ff680f3603e54_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_c74277e62bf35a761fa9da430ce4bce2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_fftshift, 19, const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a386f8e93bddbe71e580b367a8f52610 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_helper, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_565530f952bd04b2e308df8c5e9503d4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ifftshift, 78, const_tuple_b98de43e2f7366ebdf44f93129d8f203_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fad58b8beef64eda873de41735b1c616 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_rfftfreq, 176, const_tuple_1952086625b3b75894ff16424526eb36_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_1_fftshift( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_2_ifftshift( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_3_fftfreq( PyObject *defaults );


static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_4_rfftfreq( PyObject *defaults );


// The module function definitions.
static PyObject *impl_numpy$fft$helper$$$function_1_fftshift( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_axes = python_pars[ 1 ];
    PyObject *var_tmp = NULL;
    PyObject *var_ndim = NULL;
    PyObject *var_y = NULL;
    PyObject *var_k = NULL;
    PyObject *var_n = NULL;
    PyObject *var_p2 = NULL;
    PyObject *var_mylist = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_c74277e62bf35a761fa9da430ce4bce2, module_numpy$fft$helper );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    frame_function->f_lineno = 63;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    assert( var_tmp == NULL );
    var_tmp = tmp_assign_source_1;

    tmp_source_name_1 = var_tmp;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto frame_exception_exit_1;
    }
    assert( var_ndim == NULL );
    var_ndim = tmp_assign_source_2;

    tmp_compare_left_1 = par_axes;

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
    tmp_range_arg_1 = var_ndim;

    tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_3;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_axes;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "integer_types" );
        exception_tb = NULL;

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
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
    tmp_assign_source_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_axes;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_assign_source_5 = var_tmp;

    assert( var_y == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_y = tmp_assign_source_5;

    tmp_iter_arg_1 = par_axes;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "axes" );
        exception_tb = NULL;

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
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
            frame_function->f_lineno = 70;
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

    tmp_source_name_2 = var_tmp;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = var_k;

    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_left_name_2 = var_n;

    tmp_right_name_1 = const_int_pos_1;
    tmp_left_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto try_except_handler_2;
    }
    tmp_right_name_2 = const_int_pos_2;
    tmp_assign_source_10 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_p2;
        var_p2 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_concatenate );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "concatenate" );
        exception_tb = NULL;

        exception_lineno = 73;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 73;
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = var_p2;

    tmp_args_element_name_4 = var_n;

    frame_function->f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 73;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 73;
        goto try_except_handler_2;
    }

    tmp_args_element_name_5 = var_p2;

    frame_function->f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 73;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_mylist;
        var_mylist = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_take );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "take" );
        exception_tb = NULL;

        exception_lineno = 74;
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = var_y;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 74;
        goto try_except_handler_2;
    }

    tmp_args_element_name_7 = var_mylist;

    tmp_args_element_name_8 = var_k;

    frame_function->f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
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

        exception_lineno = 75;
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

            if ( par_axes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_axes,
                    par_axes
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

            if ( var_ndim )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ndim,
                    var_ndim
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

            if ( var_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    var_k
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

            if ( var_p2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_p2,
                    var_p2
                );

                assert( res == 0 );
            }

            if ( var_mylist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mylist,
                    var_mylist
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
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_1_fftshift );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)var_tmp );
    Py_DECREF( var_tmp );
    var_tmp = NULL;

    CHECK_OBJECT( (PyObject *)var_ndim );
    Py_DECREF( var_ndim );
    var_ndim = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    Py_XDECREF( var_mylist );
    var_mylist = NULL;

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

    Py_XDECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    Py_XDECREF( var_ndim );
    var_ndim = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    Py_XDECREF( var_mylist );
    var_mylist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_1_fftshift );
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


static PyObject *impl_numpy$fft$helper$$$function_2_ifftshift( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_x = python_pars[ 0 ];
    PyObject *par_axes = python_pars[ 1 ];
    PyObject *var_tmp = NULL;
    PyObject *var_ndim = NULL;
    PyObject *var_y = NULL;
    PyObject *var_k = NULL;
    PyObject *var_n = NULL;
    PyObject *var_p2 = NULL;
    PyObject *var_mylist = NULL;
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
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_565530f952bd04b2e308df8c5e9503d4, module_numpy$fft$helper );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray );

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

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_x;

    frame_function->f_lineno = 112;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    assert( var_tmp == NULL );
    var_tmp = tmp_assign_source_1;

    tmp_source_name_1 = var_tmp;

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_shape );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    assert( var_ndim == NULL );
    var_ndim = tmp_assign_source_2;

    tmp_compare_left_1 = par_axes;

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
    tmp_range_arg_1 = var_ndim;

    tmp_list_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_3;
        Py_DECREF( old );
    }

    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_axes;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "integer_types" );
        exception_tb = NULL;

        exception_lineno = 116;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 116;
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
    tmp_assign_source_4 = PyTuple_New( 1 );
    tmp_tuple_element_1 = par_axes;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_4, 0, tmp_tuple_element_1 );
    {
        PyObject *old = par_axes;
        assert( old != NULL );
        par_axes = tmp_assign_source_4;
        Py_DECREF( old );
    }

    branch_no_2:;
    branch_end_1:;
    tmp_assign_source_5 = var_tmp;

    assert( var_y == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_y = tmp_assign_source_5;

    tmp_iter_arg_1 = par_axes;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "axes" );
        exception_tb = NULL;

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
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
            frame_function->f_lineno = 119;
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

    tmp_source_name_2 = var_tmp;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_shape );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto try_except_handler_2;
    }
    tmp_subscript_name_1 = var_k;

    tmp_assign_source_9 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_left_name_1 = var_n;

    tmp_left_name_3 = var_n;

    tmp_right_name_2 = const_int_pos_1;
    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto try_except_handler_2;
    }
    tmp_right_name_3 = const_int_pos_2;
    tmp_right_name_1 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto try_except_handler_2;
    }
    tmp_assign_source_10 = BINARY_OPERATION_SUB( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_p2;
        var_p2 = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_concatenate );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_concatenate );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "concatenate" );
        exception_tb = NULL;

        exception_lineno = 122;
        goto try_except_handler_2;
    }

    tmp_args_element_name_2 = PyTuple_New( 2 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_3 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 122;
        goto try_except_handler_2;
    }

    tmp_args_element_name_3 = var_p2;

    tmp_args_element_name_4 = var_n;

    frame_function->f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 122;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 0, tmp_tuple_element_2 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_4 == NULL )
    {
        Py_DECREF( tmp_args_element_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 122;
        goto try_except_handler_2;
    }

    tmp_args_element_name_5 = var_p2;

    frame_function->f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 122;
        goto try_except_handler_2;
    }
    PyTuple_SET_ITEM( tmp_args_element_name_2, 1, tmp_tuple_element_2 );
    frame_function->f_lineno = 122;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_mylist;
        var_mylist = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_take );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_take );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "take" );
        exception_tb = NULL;

        exception_lineno = 123;
        goto try_except_handler_2;
    }

    tmp_args_element_name_6 = var_y;

    if ( tmp_args_element_name_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "y" );
        exception_tb = NULL;

        exception_lineno = 123;
        goto try_except_handler_2;
    }

    tmp_args_element_name_7 = var_mylist;

    tmp_args_element_name_8 = var_k;

    frame_function->f_lineno = 123;
    {
        PyObject *call_args[] = { tmp_args_element_name_6, tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_y;
        var_y = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
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

        exception_lineno = 124;
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

            if ( par_axes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_axes,
                    par_axes
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

            if ( var_ndim )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ndim,
                    var_ndim
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

            if ( var_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    var_k
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

            if ( var_p2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_p2,
                    var_p2
                );

                assert( res == 0 );
            }

            if ( var_mylist )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mylist,
                    var_mylist
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
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_ifftshift );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_x );
    Py_DECREF( par_x );
    par_x = NULL;

    Py_XDECREF( par_axes );
    par_axes = NULL;

    CHECK_OBJECT( (PyObject *)var_tmp );
    Py_DECREF( var_tmp );
    var_tmp = NULL;

    CHECK_OBJECT( (PyObject *)var_ndim );
    Py_DECREF( var_ndim );
    var_ndim = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    Py_XDECREF( var_mylist );
    var_mylist = NULL;

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

    Py_XDECREF( par_axes );
    par_axes = NULL;

    Py_XDECREF( var_tmp );
    var_tmp = NULL;

    Py_XDECREF( var_ndim );
    var_ndim = NULL;

    Py_XDECREF( var_y );
    var_y = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    Py_XDECREF( var_mylist );
    var_mylist = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_2_ifftshift );
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


static PyObject *impl_numpy$fft$helper$$$function_3_fftfreq( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *var_val = NULL;
    PyObject *var_results = NULL;
    PyObject *var_N = NULL;
    PyObject *var_p1 = NULL;
    PyObject *var_p2 = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_operand_name_1;
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
    PyObject *tmp_sliceass_lower_1;
    PyObject *tmp_sliceass_target_1;
    PyObject *tmp_sliceass_target_2;
    PyObject *tmp_sliceass_upper_1;
    PyObject *tmp_sliceass_value_1;
    PyObject *tmp_sliceass_value_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fab0125fc7b62a47b0f47162452ca44a, module_numpy$fft$helper );
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
    tmp_isinstance_inst_1 = par_n;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "integer_types" );
        exception_tb = NULL;

        exception_lineno = 163;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 163;
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
    tmp_make_exception_arg_1 = const_str_digest_576644db5145960717a957e6a5504ec5;
    frame_function->f_lineno = 164;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 164;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_float_1_0;
    tmp_left_name_2 = par_n;

    tmp_right_name_2 = par_d;

    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_1;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_empty );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_empty );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "empty" );
        exception_tb = NULL;

        exception_lineno = 166;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_n;

    tmp_args_element_name_2 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_args_element_name_2 != NULL );
    frame_function->f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    assert( var_results == NULL );
    var_results = tmp_assign_source_2;

    tmp_left_name_5 = par_n;

    tmp_right_name_3 = const_int_pos_1;
    tmp_left_name_4 = BINARY_OPERATION_SUB( tmp_left_name_5, tmp_right_name_3 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_2;
    tmp_left_name_3 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    tmp_right_name_5 = const_int_pos_1;
    tmp_assign_source_3 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_5 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 167;
        goto frame_exception_exit_1;
    }
    assert( var_N == NULL );
    var_N = tmp_assign_source_3;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 168;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_N;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_dict_value_1 != NULL );
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 168;
    tmp_assign_source_4 = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 168;
        goto frame_exception_exit_1;
    }
    assert( var_p1 == NULL );
    var_p1 = tmp_assign_source_4;

    tmp_sliceass_value_1 = var_p1;

    tmp_sliceass_target_1 = var_results;

    tmp_sliceass_upper_1 = var_N;

    tmp_result = SET_SLICE( tmp_sliceass_target_1, Py_None, tmp_sliceass_upper_1, tmp_sliceass_value_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 169;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_arange );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "arange" );
        exception_tb = NULL;

        exception_lineno = 170;
        goto frame_exception_exit_1;
    }

    tmp_args_name_2 = PyTuple_New( 2 );
    tmp_left_name_6 = par_n;

    tmp_right_name_6 = const_int_pos_2;
    tmp_operand_name_1 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_left_name_6, tmp_right_name_6 );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = UNARY_OPERATION( PyNumber_Negative, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 170;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_int_0;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_2, 1, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_2 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_dict_value_2 != NULL );
    tmp_dict_key_2 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 170;
    tmp_assign_source_5 = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto frame_exception_exit_1;
    }
    assert( var_p2 == NULL );
    var_p2 = tmp_assign_source_5;

    tmp_sliceass_value_2 = var_p2;

    tmp_sliceass_target_2 = var_results;

    tmp_sliceass_lower_1 = var_N;

    tmp_result = SET_SLICE( tmp_sliceass_target_2, tmp_sliceass_lower_1, Py_None, tmp_sliceass_value_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = var_results;

    tmp_right_name_7 = var_val;

    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_7, tmp_right_name_7 );
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
            if ( par_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    par_n
                );

                assert( res == 0 );
            }

            if ( par_d )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_d,
                    par_d
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

            if ( var_results )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_results,
                    var_results
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

            if ( var_p1 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_p1,
                    var_p1
                );

                assert( res == 0 );
            }

            if ( var_p2 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_p2,
                    var_p2
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
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_fftfreq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)var_val );
    Py_DECREF( var_val );
    var_val = NULL;

    CHECK_OBJECT( (PyObject *)var_results );
    Py_DECREF( var_results );
    var_results = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_p1 );
    Py_DECREF( var_p1 );
    var_p1 = NULL;

    CHECK_OBJECT( (PyObject *)var_p2 );
    Py_DECREF( var_p2 );
    var_p2 = NULL;

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

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_results );
    var_results = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_p1 );
    var_p1 = NULL;

    Py_XDECREF( var_p2 );
    var_p2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_3_fftfreq );
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


static PyObject *impl_numpy$fft$helper$$$function_4_rfftfreq( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_n = python_pars[ 0 ];
    PyObject *par_d = python_pars[ 1 ];
    PyObject *var_val = NULL;
    PyObject *var_N = NULL;
    PyObject *var_results = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fad58b8beef64eda873de41735b1c616, module_numpy$fft$helper );
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
    tmp_isinstance_inst_1 = par_n;

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "integer_types" );
        exception_tb = NULL;

        exception_lineno = 219;
        goto frame_exception_exit_1;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
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
    tmp_make_exception_arg_1 = const_str_digest_576644db5145960717a957e6a5504ec5;
    frame_function->f_lineno = 220;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 220;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_float_1_0;
    tmp_left_name_2 = par_n;

    tmp_right_name_2 = par_d;

    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION( PyNumber_TrueDivide, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_1;

    tmp_left_name_4 = par_n;

    tmp_right_name_3 = const_int_pos_2;
    tmp_left_name_3 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_left_name_4, tmp_right_name_3 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    tmp_right_name_4 = const_int_pos_1;
    tmp_assign_source_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
        goto frame_exception_exit_1;
    }
    assert( var_N == NULL );
    var_N = tmp_assign_source_2;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange );

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

        exception_lineno = 223;
        goto frame_exception_exit_1;
    }

    tmp_args_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_int_0;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_N;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = LOOKUP_BUILTIN( const_str_plain_int );
    assert( tmp_dict_value_1 != NULL );
    tmp_dict_key_1 = const_str_plain_dtype;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    frame_function->f_lineno = 223;
    tmp_assign_source_3 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 223;
        goto frame_exception_exit_1;
    }
    assert( var_results == NULL );
    var_results = tmp_assign_source_3;

    tmp_left_name_5 = var_results;

    tmp_right_name_5 = var_val;

    tmp_return_value = BINARY_OPERATION_MUL( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 224;
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

            if ( par_d )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_d,
                    par_d
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

            if ( var_N )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_N,
                    var_N
                );

                assert( res == 0 );
            }

            if ( var_results )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_results,
                    var_results
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
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_4_rfftfreq );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_n );
    Py_DECREF( par_n );
    par_n = NULL;

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    CHECK_OBJECT( (PyObject *)var_val );
    Py_DECREF( var_val );
    var_val = NULL;

    CHECK_OBJECT( (PyObject *)var_N );
    Py_DECREF( var_N );
    var_N = NULL;

    CHECK_OBJECT( (PyObject *)var_results );
    Py_DECREF( var_results );
    var_results = NULL;

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

    CHECK_OBJECT( (PyObject *)par_d );
    Py_DECREF( par_d );
    par_d = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    Py_XDECREF( var_N );
    var_N = NULL;

    Py_XDECREF( var_results );
    var_results = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$fft$helper$$$function_4_rfftfreq );
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



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_1_fftshift( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_1_fftshift,
        const_str_plain_fftshift,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_c74277e62bf35a761fa9da430ce4bce2,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_5bdc29da7e9b0d9cd26e1d40e7ad7f75
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_2_ifftshift( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_2_ifftshift,
        const_str_plain_ifftshift,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_565530f952bd04b2e308df8c5e9503d4,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_1f896e1cd39c960c2dfcf70d6b941e75
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_3_fftfreq( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_3_fftfreq,
        const_str_plain_fftfreq,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fab0125fc7b62a47b0f47162452ca44a,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_5ced19727bd7c891a8f02a2cacb55d0b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$fft$helper$$$function_4_rfftfreq( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$fft$helper$$$function_4_rfftfreq,
        const_str_plain_rfftfreq,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fad58b8beef64eda873de41735b1c616,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$fft$helper,
        const_str_digest_2fb7ba50d30fb34bf585af15f504be82
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$fft$helper =
{
    PyModuleDef_HEAD_INIT,
    "numpy.fft.helper",   /* m_name */
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

MOD_INIT_DECL( numpy$fft$helper )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$fft$helper );
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

    // puts( "in initnumpy$fft$helper" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$fft$helper = Py_InitModule4(
        "numpy.fft.helper",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$fft$helper = PyModule_Create( &mdef_numpy$fft$helper );
#endif

    moduledict_numpy$fft$helper = (PyDictObject *)((PyModuleObject *)module_numpy$fft$helper)->md_dict;

    CHECK_OBJECT( module_numpy$fft$helper );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_91a6e65509cfbbe4ba154cabdb7becca, module_numpy$fft$helper );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$fft$helper );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_defaults_4;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_4ef7001003be7e06506ab78ccaae217c;
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_293aad69cd56517b68992ed23f35c561;
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_a386f8e93bddbe71e580b367a8f52610, module_numpy$fft$helper );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 7;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_ff5b71fb1b4d9fcd10c8725add9c701b, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_integer_types_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_integer_types );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_2, tmp_import_globals_2, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_asarray );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_asarray, tmp_assign_source_7 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_3, tmp_import_globals_3, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_concatenate );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_concatenate, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_4, tmp_import_globals_4, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_arange );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_arange, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_5, tmp_import_globals_5, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_take );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_take, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_6, tmp_import_globals_6, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_integer );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$fft$helper)->md_dict;
    frame_module->f_lineno = 8;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, tmp_import_globals_7, tmp_import_globals_7, const_tuple_1515ce7bcaa7848c89e6408b8f5e16d2_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_empty );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_empty, tmp_assign_source_12 );
    tmp_assign_source_13 = LIST_COPY( const_list_d3376bb1f7f4aa67004298e8d81c0177_list );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_13 );
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer_types );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "integer_types" );
        exception_tb = NULL;

        exception_lineno = 16;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = PyTuple_New( 1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_integer );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "integer" );
        exception_tb = NULL;

        exception_lineno = 16;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_assign_source_14 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_integer_types, tmp_assign_source_14 );

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
    tmp_assign_source_15 = MAKE_FUNCTION_numpy$fft$helper$$$function_1_fftshift( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_fftshift, tmp_assign_source_15 );
    tmp_defaults_2 = const_tuple_none_tuple;
    tmp_assign_source_16 = MAKE_FUNCTION_numpy$fft$helper$$$function_2_ifftshift( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_ifftshift, tmp_assign_source_16 );
    tmp_defaults_3 = const_tuple_float_1_0_tuple;
    tmp_assign_source_17 = MAKE_FUNCTION_numpy$fft$helper$$$function_3_fftfreq( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_fftfreq, tmp_assign_source_17 );
    tmp_defaults_4 = const_tuple_float_1_0_tuple;
    tmp_assign_source_18 = MAKE_FUNCTION_numpy$fft$helper$$$function_4_rfftfreq( INCREASE_REFCOUNT( tmp_defaults_4 ) );
    UPDATE_STRING_DICT1( moduledict_numpy$fft$helper, (Nuitka_StringObject *)const_str_plain_rfftfreq, tmp_assign_source_18 );

    return MOD_RETURN_VALUE( module_numpy$fft$helper );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
