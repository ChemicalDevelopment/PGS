/* Generated code for Python source for module 'numpy.__config__'
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

/* The _module_numpy$__config__ is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$__config__;
PyDictObject *moduledict_numpy$__config__;

/* The module constants used, if any. */
static PyObject *const_str_plain_blas_opt_info;
static PyObject *const_list_tuple_str_plain_HAVE_CBLAS_none_tuple_list;
extern PyObject *const_str_plain_get;
extern PyObject *const_str_plain_items;
static PyObject *const_tuple_str_plain_name_str_plain_g_tuple;
static PyObject *const_str_plain_libraries;
static PyObject *const_str_plain_define_macros;
static PyObject *const_str_plain_HAVE_CBLAS;
static PyObject *const_str_digest_5cdc653df2b5605fd6bf83fb6a8981c8;
static PyObject *const_str_plain_openblas_lapack_info;
extern PyObject *const_str_plain_get_info;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_lapack_opt_info;
static PyObject *const_list_str_digest_4773e7fe4aa07e55d10b222a9fe8df91_list;
static PyObject *const_str_digest_e8ea4fff12303266a6d98f0124dfb5f1;
static PyObject *const_str_plain_info_dict;
extern PyObject *const_str_plain_language;
static PyObject *const_str_plain_openblas_info;
static PyObject *const_str_digest_4773e7fe4aa07e55d10b222a9fe8df91;
static PyObject *const_tuple_str_plain_name_str_plain_info_dict_str_plain_k_str_plain_v_tuple;
static PyObject *const_str_digest_4eab28f3252a78fa9161d21baa3024f3;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_v;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
static PyObject *const_tuple_str_plain_HAVE_CBLAS_none_tuple;
extern PyObject *const_int_pos_200;
static PyObject *const_str_plain_openblas;
static PyObject *const_str_plain_sources;
extern PyObject *const_str_chr_58;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_dict;
static PyObject *const_list_str_plain_openblas_str_plain_openblas_list;
extern PyObject *const_str_plain_show;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain__info;
static PyObject *const_str_plain_library_dirs;
extern PyObject *const_str_digest_c0aa8d8817c4130cb9c90f47c9de043d;
static PyObject *const_str_digest_a3476b294c24cd9f5df3c24553ac862a;
extern PyObject *const_str_plain_k;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_c;
static PyObject *const_list_str_plain_get_info_str_plain_show_list;
static PyObject *const_dict_de2582c1c4526d233c4a6dfc7b83260b;
static PyObject *const_str_plain_blas_mkl_info;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_blas_opt_info = UNSTREAM_STRING( &constant_bin[ 347778 ], 13, 1 );
    const_list_tuple_str_plain_HAVE_CBLAS_none_tuple_list = PyList_New( 1 );
    const_tuple_str_plain_HAVE_CBLAS_none_tuple = PyTuple_New( 2 );
    const_str_plain_HAVE_CBLAS = UNSTREAM_STRING( &constant_bin[ 347791 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HAVE_CBLAS_none_tuple, 0, const_str_plain_HAVE_CBLAS ); Py_INCREF( const_str_plain_HAVE_CBLAS );
    PyTuple_SET_ITEM( const_tuple_str_plain_HAVE_CBLAS_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    PyList_SET_ITEM( const_list_tuple_str_plain_HAVE_CBLAS_none_tuple_list, 0, const_tuple_str_plain_HAVE_CBLAS_none_tuple ); Py_INCREF( const_tuple_str_plain_HAVE_CBLAS_none_tuple );
    const_tuple_str_plain_name_str_plain_g_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_g_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_g_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    const_str_plain_libraries = UNSTREAM_STRING( &constant_bin[ 3160 ], 9, 1 );
    const_str_plain_define_macros = UNSTREAM_STRING( &constant_bin[ 347801 ], 13, 1 );
    const_str_digest_5cdc653df2b5605fd6bf83fb6a8981c8 = UNSTREAM_STRING( &constant_bin[ 347814 ], 58, 0 );
    const_str_plain_openblas_lapack_info = UNSTREAM_STRING( &constant_bin[ 347872 ], 20, 1 );
    const_str_plain_lapack_opt_info = UNSTREAM_STRING( &constant_bin[ 347892 ], 15, 1 );
    const_list_str_digest_4773e7fe4aa07e55d10b222a9fe8df91_list = PyList_New( 1 );
    const_str_digest_4773e7fe4aa07e55d10b222a9fe8df91 = UNSTREAM_STRING( &constant_bin[ 64276 ], 14, 0 );
    PyList_SET_ITEM( const_list_str_digest_4773e7fe4aa07e55d10b222a9fe8df91_list, 0, const_str_digest_4773e7fe4aa07e55d10b222a9fe8df91 ); Py_INCREF( const_str_digest_4773e7fe4aa07e55d10b222a9fe8df91 );
    const_str_digest_e8ea4fff12303266a6d98f0124dfb5f1 = UNSTREAM_STRING( &constant_bin[ 347907 ], 15, 0 );
    const_str_plain_info_dict = UNSTREAM_STRING( &constant_bin[ 347922 ], 9, 1 );
    const_str_plain_openblas_info = UNSTREAM_STRING( &constant_bin[ 347931 ], 13, 1 );
    const_tuple_str_plain_name_str_plain_info_dict_str_plain_k_str_plain_v_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_info_dict_str_plain_k_str_plain_v_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_info_dict_str_plain_k_str_plain_v_tuple, 1, const_str_plain_info_dict ); Py_INCREF( const_str_plain_info_dict );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_info_dict_str_plain_k_str_plain_v_tuple, 2, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_info_dict_str_plain_k_str_plain_v_tuple, 3, const_str_plain_v ); Py_INCREF( const_str_plain_v );
    const_str_digest_4eab28f3252a78fa9161d21baa3024f3 = UNSTREAM_STRING( &constant_bin[ 347944 ], 11, 0 );
    const_str_plain_openblas = UNSTREAM_STRING( &constant_bin[ 347872 ], 8, 1 );
    const_str_plain_sources = UNSTREAM_STRING( &constant_bin[ 23980 ], 7, 1 );
    const_list_str_plain_openblas_str_plain_openblas_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_openblas_str_plain_openblas_list, 0, const_str_plain_openblas ); Py_INCREF( const_str_plain_openblas );
    PyList_SET_ITEM( const_list_str_plain_openblas_str_plain_openblas_list, 1, const_str_plain_openblas ); Py_INCREF( const_str_plain_openblas );
    const_str_plain_library_dirs = UNSTREAM_STRING( &constant_bin[ 347955 ], 12, 1 );
    const_str_digest_a3476b294c24cd9f5df3c24553ac862a = UNSTREAM_STRING( &constant_bin[ 347967 ], 9, 0 );
    const_list_str_plain_get_info_str_plain_show_list = PyList_New( 2 );
    PyList_SET_ITEM( const_list_str_plain_get_info_str_plain_show_list, 0, const_str_plain_get_info ); Py_INCREF( const_str_plain_get_info );
    PyList_SET_ITEM( const_list_str_plain_get_info_str_plain_show_list, 1, const_str_plain_show ); Py_INCREF( const_str_plain_show );
    const_dict_de2582c1c4526d233c4a6dfc7b83260b = _PyDict_NewPresized( 4 );
    PyDict_SetItem( const_dict_de2582c1c4526d233c4a6dfc7b83260b, const_str_plain_libraries, const_list_str_plain_openblas_str_plain_openblas_list );
    PyDict_SetItem( const_dict_de2582c1c4526d233c4a6dfc7b83260b, const_str_plain_library_dirs, const_list_str_digest_4773e7fe4aa07e55d10b222a9fe8df91_list );
    PyDict_SetItem( const_dict_de2582c1c4526d233c4a6dfc7b83260b, const_str_plain_define_macros, const_list_tuple_str_plain_HAVE_CBLAS_none_tuple_list );
    PyDict_SetItem( const_dict_de2582c1c4526d233c4a6dfc7b83260b, const_str_plain_language, const_str_plain_c );
    assert( PyDict_Size( const_dict_de2582c1c4526d233c4a6dfc7b83260b ) == 4 );
    const_str_plain_blas_mkl_info = UNSTREAM_STRING( &constant_bin[ 347976 ], 13, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$__config__( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_57e1a0ba9b48e1b9c1fc1ed433bc07e3;
static PyCodeObject *codeobj_04761d10e44cf9af301c9bcdc22e340f;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_5cdc653df2b5605fd6bf83fb6a8981c8;
    codeobj_57e1a0ba9b48e1b9c1fc1ed433bc07e3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_info, 11, const_tuple_str_plain_name_str_plain_g_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
    codeobj_04761d10e44cf9af301c9bcdc22e340f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_show, 15, const_tuple_str_plain_name_str_plain_info_dict_str_plain_k_str_plain_v_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$__config__$$$function_1_get_info(  );


static PyObject *MAKE_FUNCTION_numpy$__config__$$$function_2_show(  );


// The module function definitions.
static PyObject *impl_numpy$__config__$$$function_1_get_info( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_g = NULL;
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
    PyObject *tmp_left_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = ((PyModuleObject *)module_numpy$__config__)->md_dict;
    assert( var_g == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_g = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_57e1a0ba9b48e1b9c1fc1ed433bc07e3, module_numpy$__config__ );
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
    tmp_source_name_1 = var_g;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_get );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_name;

    tmp_source_name_2 = var_g;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = par_name;

    tmp_right_name_1 = const_str_plain__info;
    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = PyDict_New();
    frame_function->f_lineno = 13;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_args_element_name_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 13;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
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
            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( var_g )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_g,
                    var_g
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
    NUITKA_CANNOT_GET_HERE( numpy$__config__$$$function_1_get_info );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_g );
    Py_DECREF( var_g );
    var_g = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_g );
    Py_DECREF( var_g );
    var_g = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$__config__$$$function_1_get_info );
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


static PyObject *impl_numpy$__config__$$$function_2_show( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_name = NULL;
    PyObject *var_info_dict = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
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
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_print_value;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_str_arg_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_type_arg_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_04761d10e44cf9af301c9bcdc22e340f, module_numpy$__config__ );
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
    tmp_source_name_1 = ((PyModuleObject *)module_numpy$__config__)->md_dict;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_items );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 16;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
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
            frame_function->f_lineno = 16;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_3;
        Py_XDECREF( old );
    }

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


        exception_lineno = 16;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

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


        exception_lineno = 16;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_5;
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
    tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_name;
        var_name = tmp_assign_source_6;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_info_dict;
        var_info_dict = tmp_assign_source_7;
        Py_INCREF( var_info_dict );
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

    tmp_subscribed_name_1 = var_name;

    tmp_subscript_name_1 = const_int_0;
    tmp_compexpr_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_compexpr_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_2;
    }
    tmp_compexpr_right_1 = const_str_plain__;
    tmp_or_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_left_1 );
    if ( tmp_or_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto try_except_handler_2;
    }
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_or_left_value_1 );

        exception_lineno = 17;
        goto try_except_handler_2;
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
    tmp_type_arg_1 = var_info_dict;

    tmp_compexpr_left_2 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_compexpr_left_2 != NULL );
    tmp_compexpr_right_2 = LOOKUP_BUILTIN( const_str_plain_dict );
    assert( tmp_compexpr_right_2 != NULL );
    tmp_or_right_value_1 = BOOL_FROM( tmp_compexpr_left_2 != tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    Py_INCREF( tmp_or_right_value_1 );
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

        exception_lineno = 17;
        goto try_except_handler_2;
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
    goto loop_start_1;
    branch_no_1:;
    tmp_left_name_1 = var_name;

    tmp_right_name_1 = const_str_chr_58;
    tmp_print_value = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_2;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 18;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_2;
    }
    tmp_cond_value_2 = var_info_dict;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto try_except_handler_2;
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
    tmp_print_value = const_str_digest_e8ea4fff12303266a6d98f0124dfb5f1;
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_2;
    }
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto try_except_handler_2;
    }
    branch_no_2:;
    tmp_source_name_2 = var_info_dict;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_items );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 21;
    tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_2;
    }
    tmp_assign_source_8 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

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
            frame_function->f_lineno = 21;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_4 = tmp_for_loop_2__iter_value;

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_3, 0 );
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


        exception_lineno = 21;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_4, 1 );
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


        exception_lineno = 21;
        goto try_except_handler_5;
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

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    tmp_assign_source_13 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_k;
        var_k = tmp_assign_source_13;
        Py_INCREF( var_k );
        Py_XDECREF( old );
    }

    tmp_assign_source_14 = tmp_tuple_unpack_2__element_2;

    {
        PyObject *old = var_v;
        var_v = tmp_assign_source_14;
        Py_INCREF( var_v );
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

    tmp_str_arg_1 = var_v;

    tmp_assign_source_15 = PyObject_Str( tmp_str_arg_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_v;
        assert( old != NULL );
        var_v = tmp_assign_source_15;
        Py_DECREF( old );
    }

    tmp_compexpr_left_3 = var_k;

    tmp_compexpr_right_3 = const_str_plain_sources;
    tmp_and_left_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_3, tmp_compexpr_right_3 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_4;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 23;
        goto try_except_handler_4;
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
    tmp_len_arg_1 = var_v;

    tmp_compexpr_left_4 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_compexpr_left_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_4;
    }
    tmp_compexpr_right_4 = const_int_pos_200;
    tmp_and_right_value_1 = RICH_COMPARE_GT( tmp_compexpr_left_4, tmp_compexpr_right_4 );
    Py_DECREF( tmp_compexpr_left_4 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto try_except_handler_4;
    }
    tmp_cond_value_3 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_3 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 23;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = 60;
    tmp_slice_source_1 = var_v;

    tmp_left_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_left_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto try_except_handler_4;
    }
    tmp_right_name_2 = const_str_digest_a3476b294c24cd9f5df3c24553ac862a;
    tmp_left_name_2 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_3 );
    if ( tmp_left_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto try_except_handler_4;
    }
    tmp_sliceslicedel_index_lower_2 = -60;
    tmp_slice_index_upper_2 = PY_SSIZE_T_MAX;
    tmp_slice_source_2 = var_v;

    tmp_right_name_3 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_left_name_2 );

        exception_lineno = 24;
        goto try_except_handler_4;
    }
    tmp_assign_source_16 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_2 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_v;
        assert( old != NULL );
        var_v = tmp_assign_source_16;
        Py_DECREF( old );
    }

    branch_no_3:;
    tmp_left_name_4 = const_str_digest_4eab28f3252a78fa9161d21baa3024f3;
    tmp_right_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_k;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_v;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_1 );
    tmp_print_value = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_print_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto try_except_handler_4;
    }
    if ( PRINT_ITEM( tmp_print_value ) == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_print_value );

        exception_lineno = 25;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_print_value );
    if ( PRINT_NEW_LINE() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto try_except_handler_4;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;

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
            if ( var_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    var_name
                );

                assert( res == 0 );
            }

            if ( var_info_dict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_info_dict,
                    var_info_dict
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$__config__$$$function_2_show );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_info_dict );
    var_info_dict = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

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

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_info_dict );
    var_info_dict = NULL;

    Py_XDECREF( var_k );
    var_k = NULL;

    Py_XDECREF( var_v );
    var_v = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$__config__$$$function_2_show );
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



static PyObject *MAKE_FUNCTION_numpy$__config__$$$function_1_get_info(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$__config__$$$function_1_get_info,
        const_str_plain_get_info,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_57e1a0ba9b48e1b9c1fc1ed433bc07e3,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$__config__,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$__config__$$$function_2_show(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$__config__$$$function_2_show,
        const_str_plain_show,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_04761d10e44cf9af301c9bcdc22e340f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$__config__,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$__config__ =
{
    PyModuleDef_HEAD_INIT,
    "numpy.__config__",   /* m_name */
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

MOD_INIT_DECL( numpy$__config__ )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$__config__ );
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

    // puts( "in initnumpy$__config__" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$__config__ = Py_InitModule4(
        "numpy.__config__",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$__config__ = PyModule_Create( &mdef_numpy$__config__ );
#endif

    moduledict_numpy$__config__ = (PyDictObject *)((PyModuleObject *)module_numpy$__config__)->md_dict;

    CHECK_OBJECT( module_numpy$__config__ );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c0aa8d8817c4130cb9c90f47c9de043d, module_numpy$__config__ );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$__config__ );

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

    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$__config__, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_5cdc653df2b5605fd6bf83fb6a8981c8;
    UPDATE_STRING_DICT0( moduledict_numpy$__config__, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_plain_get_info_str_plain_show_list );
    UPDATE_STRING_DICT1( moduledict_numpy$__config__, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_3 );
    tmp_assign_source_4 = DEEP_COPY( const_dict_de2582c1c4526d233c4a6dfc7b83260b );
    UPDATE_STRING_DICT1( moduledict_numpy$__config__, (Nuitka_StringObject *)const_str_plain_lapack_opt_info, tmp_assign_source_4 );
    tmp_assign_source_5 = DEEP_COPY( const_dict_de2582c1c4526d233c4a6dfc7b83260b );
    UPDATE_STRING_DICT1( moduledict_numpy$__config__, (Nuitka_StringObject *)const_str_plain_openblas_lapack_info, tmp_assign_source_5 );
    tmp_assign_source_6 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$__config__, (Nuitka_StringObject *)const_str_plain_blas_mkl_info, tmp_assign_source_6 );
    tmp_assign_source_7 = DEEP_COPY( const_dict_de2582c1c4526d233c4a6dfc7b83260b );
    UPDATE_STRING_DICT1( moduledict_numpy$__config__, (Nuitka_StringObject *)const_str_plain_openblas_info, tmp_assign_source_7 );
    tmp_assign_source_8 = DEEP_COPY( const_dict_de2582c1c4526d233c4a6dfc7b83260b );
    UPDATE_STRING_DICT1( moduledict_numpy$__config__, (Nuitka_StringObject *)const_str_plain_blas_opt_info, tmp_assign_source_8 );
    tmp_assign_source_9 = MAKE_FUNCTION_numpy$__config__$$$function_1_get_info(  );
    UPDATE_STRING_DICT1( moduledict_numpy$__config__, (Nuitka_StringObject *)const_str_plain_get_info, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_numpy$__config__$$$function_2_show(  );
    UPDATE_STRING_DICT1( moduledict_numpy$__config__, (Nuitka_StringObject *)const_str_plain_show, tmp_assign_source_10 );

    return MOD_RETURN_VALUE( module_numpy$__config__ );
}
