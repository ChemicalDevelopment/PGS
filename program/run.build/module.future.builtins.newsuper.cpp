/* Generated code for Python source for module 'future.builtins.newsuper'
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

/* The _module_future$builtins$newsuper is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$builtins$newsuper;
PyDictObject *moduledict_future$builtins$newsuper;

/* The module constants used, if any. */
static PyObject *const_str_digest_13569ae8314b164bc170dddb7b597610;
extern PyObject *const_str_plain___get__;
static PyObject *const_list_str_plain_newsuper_list;
extern PyObject *const_str_plain_meth;
static PyObject *const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple;
static PyObject *const_dict_bf684948c9a3a3a41e8450cd0aa098f6;
extern PyObject *const_str_plain_fget;
extern PyObject *const_str_plain_co_name;
extern PyObject *const_str_plain__SENTINEL;
extern PyObject *const_str_plain_mro;
static PyObject *const_str_digest_15bce4212eb2e8d0fcdf615539816e6e;
extern PyObject *const_dict_empty;
extern PyObject *const_str_digest_102309c42cede5382b23bc746c057a0b;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_property;
extern PyObject *const_str_plain_FunctionType;
extern PyObject *const_str_plain_types;
extern PyObject *const_str_plain_f_locals;
extern PyObject *const_str_plain_values;
extern PyObject *const_str_plain_newsuper;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
static PyObject *const_str_digest_d0faa832a155653f702740093df28dbc;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_ba83758396dd9d3116569528e152b241;
extern PyObject *const_str_plain_co_varnames;
static PyObject *const_str_digest_4d018927db300010e8bdcaf308694498;
extern PyObject *const_str_plain___file__;
static PyObject *const_tuple_str_plain_PY3_str_plain_PY26_tuple;
static PyObject *const_str_plain_framedepth;
static PyObject *const_str_digest_c45a696f69e33b77a718b412d02ec200;
static PyObject *const_tuple_str_plain_FunctionType_tuple;
extern PyObject *const_str_plain_func_code;
static PyObject *const_tuple_str_plain_args_str_plain_kwds_str_plain_f_str_plain_nm_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_int_pos_2;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain__getframe;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
extern PyObject *const_str_plain_super;
extern PyObject *const_str_plain_f_code;
extern PyObject *const_str_plain_typ;
extern PyObject *const_str_plain_nm;
extern PyObject *const_str_plain_f;
static PyObject *const_str_plain_superm;
static PyObject *const_str_plain__builtin_super;
extern PyObject *const_str_plain___func__;
static PyObject *const_str_plain_type_or_obj;
extern PyObject *const_str_plain_kwds;
extern PyObject *const_str_plain_args;
extern PyObject *const_str_plain_PY26;
extern PyObject *const_str_plain___mro__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_13569ae8314b164bc170dddb7b597610 = UNSTREAM_STRING( &constant_bin[ 236547 ], 31, 0 );
    const_list_str_plain_newsuper_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_newsuper_list, 0, const_str_plain_newsuper ); Py_INCREF( const_str_plain_newsuper );
    const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 0, const_str_plain_typ ); Py_INCREF( const_str_plain_typ );
    const_str_plain_type_or_obj = UNSTREAM_STRING( &constant_bin[ 236578 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 1, const_str_plain_type_or_obj ); Py_INCREF( const_str_plain_type_or_obj );
    const_str_plain_framedepth = UNSTREAM_STRING( &constant_bin[ 236589 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 2, const_str_plain_framedepth ); Py_INCREF( const_str_plain_framedepth );
    PyTuple_SET_ITEM( const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 3, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 4, const_str_plain_mro ); Py_INCREF( const_str_plain_mro );
    PyTuple_SET_ITEM( const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 5, const_str_plain_meth ); Py_INCREF( const_str_plain_meth );
    const_dict_bf684948c9a3a3a41e8450cd0aa098f6 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_bf684948c9a3a3a41e8450cd0aa098f6, const_str_plain_framedepth, const_int_pos_2 );
    assert( PyDict_Size( const_dict_bf684948c9a3a3a41e8450cd0aa098f6 ) == 1 );
    const_str_digest_15bce4212eb2e8d0fcdf615539816e6e = UNSTREAM_STRING( &constant_bin[ 236599 ], 39, 0 );
    const_str_digest_d0faa832a155653f702740093df28dbc = UNSTREAM_STRING( &constant_bin[ 236638 ], 1130, 0 );
    const_str_digest_ba83758396dd9d3116569528e152b241 = UNSTREAM_STRING( &constant_bin[ 237768 ], 66, 0 );
    const_str_digest_4d018927db300010e8bdcaf308694498 = UNSTREAM_STRING( &constant_bin[ 237834 ], 38, 0 );
    const_tuple_str_plain_PY3_str_plain_PY26_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PY3_str_plain_PY26_tuple, 0, const_str_plain_PY3 ); Py_INCREF( const_str_plain_PY3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_PY3_str_plain_PY26_tuple, 1, const_str_plain_PY26 ); Py_INCREF( const_str_plain_PY26 );
    const_str_digest_c45a696f69e33b77a718b412d02ec200 = UNSTREAM_STRING( &constant_bin[ 237872 ], 181, 0 );
    const_tuple_str_plain_FunctionType_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_FunctionType_tuple, 0, const_str_plain_FunctionType ); Py_INCREF( const_str_plain_FunctionType );
    const_tuple_str_plain_args_str_plain_kwds_str_plain_f_str_plain_nm_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwds_str_plain_f_str_plain_nm_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwds_str_plain_f_str_plain_nm_tuple, 1, const_str_plain_kwds ); Py_INCREF( const_str_plain_kwds );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwds_str_plain_f_str_plain_nm_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_args_str_plain_kwds_str_plain_f_str_plain_nm_tuple, 3, const_str_plain_nm ); Py_INCREF( const_str_plain_nm );
    const_str_plain_superm = UNSTREAM_STRING( &constant_bin[ 238053 ], 6, 1 );
    const_str_plain__builtin_super = UNSTREAM_STRING( &constant_bin[ 238059 ], 14, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$builtins$newsuper( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_15d98f795000fd967a554af7f573c248;
static PyCodeObject *codeobj_62c72055b3b2b3f3c8527e0c12711dbc;
static PyCodeObject *codeobj_5e76b95f03c7d41262defd7d1b07ae5e;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ba83758396dd9d3116569528e152b241;
    codeobj_15d98f795000fd967a554af7f573c248 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_newsuper, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_62c72055b3b2b3f3c8527e0c12711dbc = MAKE_CODEOBJ( module_filename_obj, const_str_plain_newsuper, 45, const_tuple_b97315d041e5ddf1ebd9bfd2685190f7_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_5e76b95f03c7d41262defd7d1b07ae5e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_superm, 108, const_tuple_str_plain_args_str_plain_kwds_str_plain_f_str_plain_nm_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_future$builtins$newsuper$$$function_1_newsuper( PyObject *defaults );


static PyObject *MAKE_FUNCTION_future$builtins$newsuper$$$function_2_superm(  );


// The module function definitions.
static PyObject *impl_future$builtins$newsuper$$$function_1_newsuper( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_typ = python_pars[ 0 ];
    PyObject *par_type_or_obj = python_pars[ 1 ];
    PyObject *par_framedepth = python_pars[ 2 ];
    PyObject *var_f = NULL;
    PyObject *var_mro = NULL;
    PyObject *var_meth = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_1__break_indicator = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_2__break_indicator = NULL;
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
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
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
    int tmp_exc_match_exception_match_1;
    int tmp_exc_match_exception_match_2;
    int tmp_exc_match_exception_match_3;
    int tmp_exc_match_exception_match_4;
    int tmp_exc_match_exception_match_5;
    int tmp_exc_match_exception_match_6;
    int tmp_exc_match_exception_match_7;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_cls_2;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_isinstance_inst_2;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
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
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscribed_name_2;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_subscript_name_2;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_value_name_1;
    PyObject *tmp_value_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_62c72055b3b2b3f3c8527e0c12711dbc, module_future$builtins$newsuper );
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
    tmp_compare_left_1 = par_typ;

    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__SENTINEL );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SENTINEL );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_SENTINEL" );
        exception_tb = NULL;

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__getframe );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_framedepth;

    frame_function->f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_1;

    // Tried code:
    tmp_source_name_2 = var_f;

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_f_locals );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto try_except_handler_2;
    }
    tmp_source_name_4 = var_f;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_f_code );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 58;
        goto try_except_handler_2;
    }
    tmp_subscribed_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_co_varnames );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_subscribed_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 58;
        goto try_except_handler_2;
    }
    tmp_subscript_name_2 = const_int_0;
    tmp_subscript_name_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_2, tmp_subscript_name_2 );
    Py_DECREF( tmp_subscribed_name_2 );
    if ( tmp_subscript_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_subscribed_name_1 );

        exception_lineno = 58;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    Py_DECREF( tmp_subscript_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto try_except_handler_2;
    }
    {
        PyObject *old = par_type_or_obj;
        assert( old != NULL );
        par_type_or_obj = tmp_assign_source_2;
        Py_DECREF( old );
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
    tmp_compare_left_2 = PyThreadState_GET()->exc_type;
    tmp_compare_right_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = PyExc_IndexError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyExc_KeyError;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_compare_right_2, 1, tmp_tuple_element_1 );
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_2 );

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_make_exception_arg_1 = const_str_digest_15bce4212eb2e8d0fcdf615539816e6e;
    frame_function->f_lineno = 60;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
    }

    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 60;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
    // End of try:
    try_end_1:;
    // Tried code:
    tmp_source_name_5 = par_type_or_obj;

    tmp_assign_source_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___mro__ );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_3;
    }
    assert( var_mro == NULL );
    var_mro = tmp_assign_source_3;

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
    tmp_compare_left_3 = PyThreadState_GET()->exc_type;
    tmp_compare_right_3 = PyTuple_New( 2 );
    tmp_tuple_element_2 = PyExc_AttributeError;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_compare_right_3, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = PyExc_RuntimeError;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_compare_right_3, 1, tmp_tuple_element_2 );
    tmp_exc_match_exception_match_2 = EXCEPTION_MATCH_BOOL( tmp_compare_left_3, tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_3 );

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_right_3 );
    if ( tmp_exc_match_exception_match_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    // Tried code:
    tmp_source_name_7 = par_type_or_obj;

    tmp_source_name_6 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_7 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto try_except_handler_4;
    }
    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain___mro__ );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto try_except_handler_4;
    }
    assert( var_mro == NULL );
    var_mro = tmp_assign_source_4;

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
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_AttributeError;
    tmp_exc_match_exception_match_3 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_3 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_make_exception_arg_2 = const_str_digest_4d018927db300010e8bdcaf308694498;
    frame_function->f_lineno = 69;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
    }

    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 69;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    goto branch_end_4;
    branch_no_4:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_4:;
    // End of try:
    try_end_3:;
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_3:;
    goto try_end_2;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$builtins$newsuper$$$function_1_newsuper );
    return NULL;
    // End of try:
    try_end_2:;
    tmp_assign_source_5 = Py_False;
    assert( tmp_for_loop_1__break_indicator == NULL );
    Py_INCREF( tmp_assign_source_5 );
    tmp_for_loop_1__break_indicator = tmp_assign_source_5;

    // Tried code:
    tmp_iter_arg_1 = var_mro;

    if ( tmp_iter_arg_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mro" );
        exception_tb = NULL;

        exception_lineno = 75;
        goto try_except_handler_5;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto try_except_handler_5;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    // Tried code:
    tmp_value_name_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_value_name_1 );
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


        exception_lineno = 75;
        goto try_except_handler_7;
    }
    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    goto try_end_4;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    tmp_compare_left_5 = exception_keeper_type_4;
    tmp_compare_right_5 = PyExc_StopIteration;
    tmp_exc_match_exception_match_4 = EXCEPTION_MATCH_BOOL( tmp_compare_left_5, tmp_compare_right_5 );
    if ( tmp_exc_match_exception_match_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_4 );
        Py_XDECREF( exception_keeper_value_4 );
        Py_XDECREF( exception_keeper_tb_4 );

        exception_lineno = 75;
        goto try_except_handler_6;
    }
    if ( tmp_exc_match_exception_match_4 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_8 = Py_True;
    {
        PyObject *old = tmp_for_loop_1__break_indicator;
        assert( old != NULL );
        tmp_for_loop_1__break_indicator = tmp_assign_source_8;
        Py_INCREF( tmp_for_loop_1__break_indicator );
        Py_DECREF( old );
    }

    Py_DECREF( exception_keeper_type_4 );
    Py_XDECREF( exception_keeper_value_4 );
    Py_XDECREF( exception_keeper_tb_4 );
    goto loop_end_1;
    goto branch_end_5;
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_6;
    branch_end_5:;
    // End of try:
    try_end_4:;
    tmp_assign_source_9 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = par_typ;
        par_typ = tmp_assign_source_9;
        Py_INCREF( par_typ );
        Py_XDECREF( old );
    }

    tmp_assign_source_10 = Py_False;
    {
        PyObject *old = tmp_for_loop_2__break_indicator;
        tmp_for_loop_2__break_indicator = tmp_assign_source_10;
        Py_INCREF( tmp_for_loop_2__break_indicator );
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_source_name_9 = par_typ;

    tmp_source_name_8 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_9 );
    if ( tmp_source_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto try_except_handler_8;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_values );
    Py_DECREF( tmp_source_name_8 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto try_except_handler_8;
    }
    frame_function->f_lineno = 77;
    tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto try_except_handler_8;
    }
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto try_except_handler_8;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    // Tried code:
    tmp_value_name_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_12 = ITERATOR_NEXT( tmp_value_name_2 );
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


        exception_lineno = 77;
        goto try_except_handler_10;
    }
    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    goto try_end_5;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    tmp_compare_left_6 = exception_keeper_type_5;
    tmp_compare_right_6 = PyExc_StopIteration;
    tmp_exc_match_exception_match_5 = EXCEPTION_MATCH_BOOL( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_exc_match_exception_match_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_5 );
        Py_XDECREF( exception_keeper_value_5 );
        Py_XDECREF( exception_keeper_tb_5 );

        exception_lineno = 77;
        goto try_except_handler_9;
    }
    if ( tmp_exc_match_exception_match_5 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_assign_source_13 = Py_True;
    {
        PyObject *old = tmp_for_loop_2__break_indicator;
        assert( old != NULL );
        tmp_for_loop_2__break_indicator = tmp_assign_source_13;
        Py_INCREF( tmp_for_loop_2__break_indicator );
        Py_DECREF( old );
    }

    Py_DECREF( exception_keeper_type_5 );
    Py_XDECREF( exception_keeper_value_5 );
    Py_XDECREF( exception_keeper_tb_5 );
    goto loop_end_2;
    goto branch_end_6;
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_9;
    branch_end_6:;
    // End of try:
    try_end_5:;
    tmp_assign_source_14 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_meth;
        var_meth = tmp_assign_source_14;
        Py_INCREF( var_meth );
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_isinstance_inst_1 = var_meth;

    if ( tmp_isinstance_inst_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "meth" );
        exception_tb = NULL;

        exception_lineno = 81;
        goto try_except_handler_11;
    }

    tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_FunctionType );

    if (unlikely( tmp_isinstance_cls_1 == NULL ))
    {
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FunctionType );
    }

    if ( tmp_isinstance_cls_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FunctionType" );
        exception_tb = NULL;

        exception_lineno = 81;
        goto try_except_handler_11;
    }

    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_11;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    goto loop_end_3;
    branch_no_7:;
    tmp_isinstance_inst_2 = var_meth;

    if ( tmp_isinstance_inst_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "meth" );
        exception_tb = NULL;

        exception_lineno = 82;
        goto try_except_handler_11;
    }

    tmp_isinstance_cls_2 = LOOKUP_BUILTIN( const_str_plain_property );
    assert( tmp_isinstance_cls_2 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_2, tmp_isinstance_cls_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto try_except_handler_11;
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
    tmp_source_name_10 = var_meth;

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "meth" );
        exception_tb = NULL;

        exception_lineno = 86;
        goto try_except_handler_11;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_fget );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto try_except_handler_11;
    }
    {
        PyObject *old = var_meth;
        var_meth = tmp_assign_source_15;
        Py_XDECREF( old );
    }

    goto branch_end_8;
    branch_no_8:;
    // Tried code:
    tmp_source_name_11 = var_meth;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "meth" );
        exception_tb = NULL;

        exception_lineno = 89;
        goto try_except_handler_12;
    }

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___func__ );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 89;
        goto try_except_handler_12;
    }
    {
        PyObject *old = var_meth;
        var_meth = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
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
    tmp_compare_left_7 = PyThreadState_GET()->exc_type;
    tmp_compare_right_7 = PyExc_AttributeError;
    tmp_exc_match_exception_match_6 = EXCEPTION_MATCH_BOOL( tmp_compare_left_7, tmp_compare_right_7 );
    if ( tmp_exc_match_exception_match_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 90;
        goto try_except_handler_11;
    }
    if ( tmp_exc_match_exception_match_6 == 1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_source_name_12 = var_meth;

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "meth" );
        exception_tb = NULL;

        exception_lineno = 91;
        goto try_except_handler_11;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___get__ );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    tmp_args_element_name_2 = par_type_or_obj;

    frame_function->f_lineno = 91;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto try_except_handler_11;
    }
    {
        PyObject *old = var_meth;
        var_meth = tmp_assign_source_17;
        Py_XDECREF( old );
    }

    goto branch_end_9;
    branch_no_9:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_11;
    branch_end_9:;
    goto try_end_6;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$builtins$newsuper$$$function_1_newsuper );
    return NULL;
    // End of try:
    try_end_6:;
    branch_end_8:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto try_except_handler_11;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_7 == NULL )
    {
        exception_keeper_tb_7 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_7 );
    }
    else if ( exception_keeper_lineno_7 != -1 )
    {
        exception_keeper_tb_7 = ADD_TRACEBACK( exception_keeper_tb_7, frame_function, exception_keeper_lineno_7 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    PUBLISH_EXCEPTION( &exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7 );
    tmp_compare_left_8 = PyThreadState_GET()->exc_type;
    tmp_compare_right_8 = PyTuple_New( 2 );
    tmp_tuple_element_3 = PyExc_AttributeError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_8, 0, tmp_tuple_element_3 );
    tmp_tuple_element_3 = PyExc_TypeError;
    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_compare_right_8, 1, tmp_tuple_element_3 );
    tmp_exc_match_exception_match_7 = EXCEPTION_MATCH_BOOL( tmp_compare_left_8, tmp_compare_right_8 );
    if ( tmp_exc_match_exception_match_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_right_8 );

        exception_lineno = 92;
        goto try_except_handler_9;
    }
    Py_DECREF( tmp_compare_right_8 );
    if ( tmp_exc_match_exception_match_7 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    goto loop_start_2;
    goto branch_end_10;
    branch_no_10:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_9;
    branch_end_10:;
    // End of try:
    try_end_7:;
    tmp_source_name_13 = var_meth;

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "meth" );
        exception_tb = NULL;

        exception_lineno = 94;
        goto try_except_handler_9;
    }

    tmp_compare_left_9 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_func_code );
    if ( tmp_compare_left_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto try_except_handler_9;
    }
    tmp_source_name_14 = var_f;

    tmp_compare_right_9 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_f_code );
    if ( tmp_compare_right_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_9 );

        exception_lineno = 94;
        goto try_except_handler_9;
    }
    tmp_is_2 = ( tmp_compare_left_9 == tmp_compare_right_9 );
    Py_DECREF( tmp_compare_left_9 );
    Py_DECREF( tmp_compare_right_9 );
    if ( tmp_is_2 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    goto loop_end_2;
    branch_no_11:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto try_except_handler_9;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto try_except_handler_8;
    // End of try:
    try_end_8:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_compare_left_10 = tmp_for_loop_2__break_indicator;

    tmp_compare_right_10 = Py_True;
    tmp_is_3 = ( tmp_compare_left_10 == tmp_compare_right_10 );
    if ( tmp_is_3 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    goto try_continue_handler_8;
    branch_no_12:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__break_indicator );
    tmp_for_loop_2__break_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto try_except_handler_6;
    // try continue handler code:
    try_continue_handler_8:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__break_indicator );
    Py_DECREF( tmp_for_loop_2__break_indicator );
    tmp_for_loop_2__break_indicator = NULL;

    goto loop_start_1;
    // End of try:
    try_end_9:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__break_indicator );
    Py_DECREF( tmp_for_loop_2__break_indicator );
    tmp_for_loop_2__break_indicator = NULL;

    goto loop_end_1;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_5;
    // End of try:
    try_end_10:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_compare_left_11 = tmp_for_loop_1__break_indicator;

    tmp_compare_right_11 = Py_True;
    tmp_is_4 = ( tmp_compare_left_11 == tmp_compare_right_11 );
    if ( tmp_is_4 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_make_exception_arg_3 = const_str_digest_13569ae8314b164bc170dddb7b597610;
    frame_function->f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_3 };
        tmp_raise_type_3 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
    }

    assert( tmp_raise_type_3 != NULL );
    exception_type = tmp_raise_type_3;
    exception_lineno = 100;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_5;
    branch_no_13:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__break_indicator );
    tmp_for_loop_1__break_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__break_indicator );
    Py_DECREF( tmp_for_loop_1__break_indicator );
    tmp_for_loop_1__break_indicator = NULL;

    branch_no_1:;
    tmp_compare_left_12 = par_type_or_obj;

    tmp_compare_right_12 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__SENTINEL );

    if (unlikely( tmp_compare_right_12 == NULL ))
    {
        tmp_compare_right_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SENTINEL );
    }

    if ( tmp_compare_right_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_SENTINEL" );
        exception_tb = NULL;

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_isnot_1 = ( tmp_compare_left_12 != tmp_compare_right_12 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_14;
    }
    else
    {
        goto branch_no_14;
    }
    branch_yes_14:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__builtin_super );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__builtin_super );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_builtin_super" );
        exception_tb = NULL;

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = par_typ;

    if ( tmp_args_element_name_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typ" );
        exception_tb = NULL;

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = par_type_or_obj;

    frame_function->f_lineno = 104;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_14:;
    tmp_called_name_5 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__builtin_super );

    if (unlikely( tmp_called_name_5 == NULL ))
    {
        tmp_called_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__builtin_super );
    }

    if ( tmp_called_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_builtin_super" );
        exception_tb = NULL;

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = par_typ;

    if ( tmp_args_element_name_5 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typ" );
        exception_tb = NULL;

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
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
            if ( par_typ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typ,
                    par_typ
                );

                assert( res == 0 );
            }

            if ( par_type_or_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_type_or_obj,
                    par_type_or_obj
                );

                assert( res == 0 );
            }

            if ( par_framedepth )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_framedepth,
                    par_framedepth
                );

                assert( res == 0 );
            }

            if ( var_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    var_f
                );

                assert( res == 0 );
            }

            if ( var_mro )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mro,
                    var_mro
                );

                assert( res == 0 );
            }

            if ( var_meth )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_meth,
                    var_meth
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
    NUITKA_CANNOT_GET_HERE( future$builtins$newsuper$$$function_1_newsuper );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_typ );
    par_typ = NULL;

    CHECK_OBJECT( (PyObject *)par_type_or_obj );
    Py_DECREF( par_type_or_obj );
    par_type_or_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_framedepth );
    Py_DECREF( par_framedepth );
    par_framedepth = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_mro );
    var_mro = NULL;

    Py_XDECREF( var_meth );
    var_meth = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_typ );
    par_typ = NULL;

    Py_XDECREF( par_type_or_obj );
    par_type_or_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_framedepth );
    Py_DECREF( par_framedepth );
    par_framedepth = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_mro );
    var_mro = NULL;

    Py_XDECREF( var_meth );
    var_meth = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$builtins$newsuper$$$function_1_newsuper );
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


static PyObject *impl_future$builtins$newsuper$$$function_2_superm( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_args = python_pars[ 0 ];
    PyObject *par_kwds = python_pars[ 1 ];
    PyObject *var_f = NULL;
    PyObject *var_nm = NULL;
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
    PyObject *tmp_called_name_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_5e76b95f03c7d41262defd7d1b07ae5e, module_future$builtins$newsuper );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 109;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain__getframe );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 109;
    tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_1;

    tmp_source_name_3 = var_f;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_f_code );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_co_name );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    assert( var_nm == NULL );
    var_nm = tmp_assign_source_2;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_newsuper );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_newsuper );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "newsuper" );
        exception_tb = NULL;

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_bf684948c9a3a3a41e8450cd0aa098f6 );
    frame_function->f_lineno = 111;
    tmp_getattr_target_1 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_getattr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_getattr_attr_1 = var_nm;

    tmp_dircall_arg1_1 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    Py_DECREF( tmp_getattr_target_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = par_args;

    tmp_dircall_arg3_1 = par_kwds;

    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
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

            if ( par_kwds )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kwds,
                    par_kwds
                );

                assert( res == 0 );
            }

            if ( var_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    var_f
                );

                assert( res == 0 );
            }

            if ( var_nm )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_nm,
                    var_nm
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
    NUITKA_CANNOT_GET_HERE( future$builtins$newsuper$$$function_2_superm );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

    CHECK_OBJECT( (PyObject *)var_nm );
    Py_DECREF( var_nm );
    var_nm = NULL;

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

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kwds );
    Py_DECREF( par_kwds );
    par_kwds = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_nm );
    var_nm = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$builtins$newsuper$$$function_2_superm );
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



static PyObject *MAKE_FUNCTION_future$builtins$newsuper$$$function_1_newsuper( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$builtins$newsuper$$$function_1_newsuper,
        const_str_plain_newsuper,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_62c72055b3b2b3f3c8527e0c12711dbc,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$builtins$newsuper,
        const_str_digest_c45a696f69e33b77a718b412d02ec200
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$builtins$newsuper$$$function_2_superm(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$builtins$newsuper$$$function_2_superm,
        const_str_plain_superm,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_5e76b95f03c7d41262defd7d1b07ae5e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$builtins$newsuper,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$builtins$newsuper =
{
    PyModuleDef_HEAD_INIT,
    "future.builtins.newsuper",   /* m_name */
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

MOD_INIT_DECL( future$builtins$newsuper )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$builtins$newsuper );
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

    // puts( "in initfuture$builtins$newsuper" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$builtins$newsuper = Py_InitModule4(
        "future.builtins.newsuper",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_future$builtins$newsuper = PyModule_Create( &mdef_future$builtins$newsuper );
#endif

    moduledict_future$builtins$newsuper = (PyDictObject *)((PyModuleObject *)module_future$builtins$newsuper)->md_dict;

    CHECK_OBJECT( module_future$builtins$newsuper );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_102309c42cede5382b23bc746c057a0b, module_future$builtins$newsuper );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_future$builtins$newsuper );

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
    PyObject *tmp_called_name_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_d0faa832a155653f702740093df28dbc;
    UPDATE_STRING_DICT0( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ba83758396dd9d3116569528e152b241;
    UPDATE_STRING_DICT0( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_15d98f795000fd967a554af7f573c248, module_future$builtins$newsuper );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$builtins$newsuper)->md_dict;
    frame_module->f_lineno = 35;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_future$builtins$newsuper)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_types, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_FunctionType_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_FunctionType );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_FunctionType, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_future$builtins$newsuper)->md_dict;
    frame_module->f_lineno = 38;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_118c8611317729818c37c760127e23b2, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_PY3_str_plain_PY26_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_PY3 );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_future$builtins$newsuper)->md_dict;
    frame_module->f_lineno = 38;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_118c8611317729818c37c760127e23b2, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_PY3_str_plain_PY26_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_PY26 );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_PY26, tmp_assign_source_7 );
    tmp_assign_source_8 = LOOKUP_BUILTIN( const_str_plain_super );
    assert( tmp_assign_source_8 != NULL );
    UPDATE_STRING_DICT0( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__builtin_super, tmp_assign_source_8 );
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_called_name_1 != NULL );
    frame_module->f_lineno = 43;
    tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__SENTINEL, tmp_assign_source_9 );
    tmp_defaults_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__SENTINEL );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SENTINEL );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_SENTINEL" );
        exception_tb = NULL;

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain__SENTINEL );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__SENTINEL );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_SENTINEL" );
        exception_tb = NULL;

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_int_pos_1;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 2, tmp_tuple_element_1 );
    tmp_assign_source_10 = MAKE_FUNCTION_future$builtins$newsuper$$$function_1_newsuper( tmp_defaults_1 );
    UPDATE_STRING_DICT1( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_newsuper, tmp_assign_source_10 );

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
    tmp_assign_source_11 = MAKE_FUNCTION_future$builtins$newsuper$$$function_2_superm(  );
    UPDATE_STRING_DICT1( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain_superm, tmp_assign_source_11 );
    tmp_assign_source_12 = LIST_COPY( const_list_str_plain_newsuper_list );
    UPDATE_STRING_DICT1( moduledict_future$builtins$newsuper, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );

    return MOD_RETURN_VALUE( module_future$builtins$newsuper );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
