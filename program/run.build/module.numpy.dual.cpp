/* Generated code for Python source for module 'numpy.dual'
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

/* The _module_numpy$dual is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$dual;
PyDictObject *moduledict_numpy$dual;

/* The module constants used, if any. */
static PyObject *const_str_plain_linpkg;
extern PyObject *const_str_plain_eigvalsh;
extern PyObject *const_str_plain_cholesky;
extern PyObject *const_str_plain_lstsq;
static PyObject *const_str_plain__restore_dict;
extern PyObject *const_str_plain_det;
extern PyObject *const_str_plain_pinv;
static PyObject *const_list_4c1457df5290c03ea88b995397b0a4c9_list;
extern PyObject *const_str_plain_eigh;
extern PyObject *const_str_plain__getframe;
static PyObject *const_tuple_str_plain_name_str_plain_val_tuple;
static PyObject *const_str_plain_dual;
static PyObject *const_str_plain_restore_all;
extern PyObject *const_str_plain_linalg;
extern PyObject *const_tuple_empty;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_fft;
extern PyObject *const_str_plain_ifft2;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_fftn;
extern PyObject *const_tuple_str_plain_i0_tuple;
static PyObject *const_str_plain_restore_func;
extern PyObject *const_tuple_int_0_tuple;
extern PyObject *const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8;
static PyObject *const_str_digest_065c67d9576a107d994fd549f592ec6c;
static PyObject *const_str_plain_fftpkg;
extern PyObject *const_str_plain_ifft;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_digest_b53f3811d9d65c912707e9b896ba9934;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_name;
extern PyObject *const_str_plain_fft2;
extern PyObject *const_str_plain_svd;
extern PyObject *const_str_plain_eigvals;
extern PyObject *const_str_plain_val;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_norm;
extern PyObject *const_str_plain_eig;
extern PyObject *const_str_plain_solve;
static PyObject *const_str_plain_register_func;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_keys;
extern PyObject *const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_f_globals;
extern PyObject *const_tuple_str_plain_name_tuple;
static PyObject *const_str_digest_25f8643125091dbd1a6f7b97719dd366;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_f;
static PyObject *const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple;
extern PyObject *const_str_plain_inv;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_7cbc5e636a09ca155cc0171fad004609;
extern PyObject *const_str_digest_8015da37ef70c6fcb334280663239467;
extern PyObject *const_str_plain_i0;
extern PyObject *const_str_plain_ifftn;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_linpkg = UNSTREAM_STRING( &constant_bin[ 812980 ], 6, 1 );
    const_str_plain__restore_dict = UNSTREAM_STRING( &constant_bin[ 812986 ], 13, 1 );
    const_list_4c1457df5290c03ea88b995397b0a4c9_list = PyList_New( 19 );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 0, const_str_plain_fft ); Py_INCREF( const_str_plain_fft );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 1, const_str_plain_ifft ); Py_INCREF( const_str_plain_ifft );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 2, const_str_plain_fftn ); Py_INCREF( const_str_plain_fftn );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 3, const_str_plain_ifftn ); Py_INCREF( const_str_plain_ifftn );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 4, const_str_plain_fft2 ); Py_INCREF( const_str_plain_fft2 );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 5, const_str_plain_ifft2 ); Py_INCREF( const_str_plain_ifft2 );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 6, const_str_plain_norm ); Py_INCREF( const_str_plain_norm );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 7, const_str_plain_inv ); Py_INCREF( const_str_plain_inv );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 8, const_str_plain_svd ); Py_INCREF( const_str_plain_svd );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 9, const_str_plain_solve ); Py_INCREF( const_str_plain_solve );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 10, const_str_plain_det ); Py_INCREF( const_str_plain_det );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 11, const_str_plain_eig ); Py_INCREF( const_str_plain_eig );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 12, const_str_plain_eigvals ); Py_INCREF( const_str_plain_eigvals );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 13, const_str_plain_eigh ); Py_INCREF( const_str_plain_eigh );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 14, const_str_plain_eigvalsh ); Py_INCREF( const_str_plain_eigvalsh );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 15, const_str_plain_lstsq ); Py_INCREF( const_str_plain_lstsq );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 16, const_str_plain_pinv ); Py_INCREF( const_str_plain_pinv );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 17, const_str_plain_cholesky ); Py_INCREF( const_str_plain_cholesky );
    PyList_SET_ITEM( const_list_4c1457df5290c03ea88b995397b0a4c9_list, 18, const_str_plain_i0 ); Py_INCREF( const_str_plain_i0 );
    const_tuple_str_plain_name_str_plain_val_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_val_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_val_tuple, 1, const_str_plain_val ); Py_INCREF( const_str_plain_val );
    const_str_plain_dual = UNSTREAM_STRING( &constant_bin[ 126594 ], 4, 1 );
    const_str_plain_restore_all = UNSTREAM_STRING( &constant_bin[ 812999 ], 11, 1 );
    const_str_plain_restore_func = UNSTREAM_STRING( &constant_bin[ 813010 ], 12, 1 );
    const_str_digest_065c67d9576a107d994fd549f592ec6c = UNSTREAM_STRING( &constant_bin[ 813022 ], 23, 0 );
    const_str_plain_fftpkg = UNSTREAM_STRING( &constant_bin[ 813045 ], 6, 1 );
    const_str_plain_register_func = UNSTREAM_STRING( &constant_bin[ 813051 ], 13, 1 );
    const_str_digest_25f8643125091dbd1a6f7b97719dd366 = UNSTREAM_STRING( &constant_bin[ 813064 ], 52, 0 );
    const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple, 0, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple, 2, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_digest_7cbc5e636a09ca155cc0171fad004609 = UNSTREAM_STRING( &constant_bin[ 813116 ], 376, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$dual( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_cf7eaf6d585781644bb2c9ff672817d6;
static PyCodeObject *codeobj_a02e0386f6053dbcd13cd11035013631;
static PyCodeObject *codeobj_59eda8bb2c8fe2f4038239cd1e60380e;
static PyCodeObject *codeobj_2924cc613c22557d0ff99e5a8ece715c;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_25f8643125091dbd1a6f7b97719dd366;
    codeobj_cf7eaf6d585781644bb2c9ff672817d6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dual, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a02e0386f6053dbcd13cd11035013631 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_register_func, 52, const_tuple_str_plain_name_str_plain_func_str_plain_f_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_59eda8bb2c8fe2f4038239cd1e60380e = MAKE_CODEOBJ( module_filename_obj, const_str_plain_restore_all, 69, const_tuple_str_plain_name_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_2924cc613c22557d0ff99e5a8ece715c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_restore_func, 59, const_tuple_str_plain_name_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$dual$$$function_1_register_func(  );


static PyObject *MAKE_FUNCTION_numpy$dual$$$function_2_restore_func(  );


static PyObject *MAKE_FUNCTION_numpy$dual$$$function_3_restore_all(  );


// The module function definitions.
static PyObject *impl_numpy$dual$$$function_1_register_func( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *var_f = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscribed_2;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subscript_2;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_ass_subvalue_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a02e0386f6053dbcd13cd11035013631, module_numpy$dual );
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
    tmp_compare_left_1 = par_name;

    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = const_str_digest_065c67d9576a107d994fd549f592ec6c;
    tmp_right_name_1 = par_name;

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 54;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__getframe );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 55;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_f_globals );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_1;

    tmp_subscribed_name_1 = var_f;

    tmp_subscript_name_1 = par_name;

    tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_ass_subvalue_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain__restore_dict );

    if (unlikely( tmp_ass_subscribed_1 == NULL ))
    {
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__restore_dict );
    }

    if ( tmp_ass_subscribed_1 == NULL )
    {
        Py_DECREF( tmp_ass_subvalue_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_restore_dict" );
        exception_tb = NULL;

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = par_name;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_ass_subvalue_2 = par_func;

    tmp_ass_subscribed_2 = var_f;

    tmp_ass_subscript_2 = par_name;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
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
            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( par_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func
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
    NUITKA_CANNOT_GET_HERE( numpy$dual$$$function_1_register_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)var_f );
    Py_DECREF( var_f );
    var_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$dual$$$function_1_register_func );
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


static PyObject *impl_numpy$dual$$$function_2_restore_func( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_name = python_pars[ 0 ];
    PyObject *var_val = NULL;
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
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_2924cc613c22557d0ff99e5a8ece715c, module_numpy$dual );
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
    tmp_compare_left_1 = par_name;

    tmp_compare_right_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_compare_right_1 == NULL ))
    {
        tmp_compare_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_compare_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = const_str_digest_065c67d9576a107d994fd549f592ec6c;
    tmp_right_name_1 = par_name;

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 61;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_ValueError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 61;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    // Tried code:
    // Tried code:
    tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain__restore_dict );

    if (unlikely( tmp_subscribed_name_1 == NULL ))
    {
        tmp_subscribed_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__restore_dict );
    }

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_restore_dict" );
        exception_tb = NULL;

        exception_lineno = 63;
        goto try_except_handler_3;
    }

    tmp_subscript_name_1 = par_name;

    tmp_assign_source_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto try_except_handler_3;
    }
    assert( var_val == NULL );
    var_val = tmp_assign_source_1;

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
    tmp_compare_right_2 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 64;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_2:;
    // End of try:
    try_end_1:;
    tmp_ass_subvalue_1 = var_val;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 67;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__getframe );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 67;
    tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_0_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto try_except_handler_2;
    }
    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_f_globals );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto try_except_handler_2;
    }
    tmp_ass_subscript_1 = par_name;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto try_except_handler_2;
    }
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

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

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
            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$dual$$$function_2_restore_func );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

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

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_val );
    var_val = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$dual$$$function_2_restore_func );
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


static PyObject *impl_numpy$dual$$$function_3_restore_all( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_name = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_59eda8bb2c8fe2f4038239cd1e60380e, module_numpy$dual );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain__restore_dict );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__restore_dict );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_restore_dict" );
        exception_tb = NULL;

        exception_lineno = 70;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_keys );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 70;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
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
            frame_function->f_lineno = 70;
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
        PyObject *old = var_name;
        var_name = tmp_assign_source_3;
        Py_INCREF( var_name );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_restore_func );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_restore_func );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "restore_func" );
        exception_tb = NULL;

        exception_lineno = 71;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_name;

    frame_function->f_lineno = 71;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
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
    NUITKA_CANNOT_GET_HERE( numpy$dual$$$function_3_restore_all );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( var_name );
    var_name = NULL;

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

    Py_XDECREF( var_name );
    var_name = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$dual$$$function_3_restore_all );
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



static PyObject *MAKE_FUNCTION_numpy$dual$$$function_1_register_func(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$dual$$$function_1_register_func,
        const_str_plain_register_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a02e0386f6053dbcd13cd11035013631,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$dual,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$dual$$$function_2_restore_func(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$dual$$$function_2_restore_func,
        const_str_plain_restore_func,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_2924cc613c22557d0ff99e5a8ece715c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$dual,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$dual$$$function_3_restore_all(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$dual$$$function_3_restore_all,
        const_str_plain_restore_all,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_59eda8bb2c8fe2f4038239cd1e60380e,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$dual,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$dual =
{
    PyModuleDef_HEAD_INIT,
    "numpy.dual",   /* m_name */
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

MOD_INIT_DECL( numpy$dual )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$dual );
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

    // puts( "in initnumpy$dual" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$dual = Py_InitModule4(
        "numpy.dual",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$dual = PyModule_Create( &mdef_numpy$dual );
#endif

    moduledict_numpy$dual = (PyDictObject *)((PyModuleObject *)module_numpy$dual)->md_dict;

    CHECK_OBJECT( module_numpy$dual );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_8015da37ef70c6fcb334280663239467, module_numpy$dual );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$dual );

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
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_7cbc5e636a09ca155cc0171fad004609;
    UPDATE_STRING_DICT0( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_25f8643125091dbd1a6f7b97719dd366;
    UPDATE_STRING_DICT0( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    tmp_assign_source_6 = LIST_COPY( const_list_4c1457df5290c03ea88b995397b0a4c9_list );
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_cf7eaf6d585781644bb2c9ff672817d6, module_numpy$dual );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 24;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_8a21c7bcdaafddc42f6be8149ffdeee8, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_linalg );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 25;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_b53f3811d9d65c912707e9b896ba9934, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_fft );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 26;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_739e8d1fc8adb0b153f875abf35bf9c8, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_i0_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_i0 );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_i0, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$dual)->md_dict;
    frame_module->f_lineno = 27;
    tmp_assign_source_10 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_10 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "fftpkg" );
        exception_tb = NULL;

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_fft );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fft, tmp_assign_source_11 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "fftpkg" );
        exception_tb = NULL;

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_12 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ifft );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_ifft, tmp_assign_source_12 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "fftpkg" );
        exception_tb = NULL;

        exception_lineno = 32;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_13 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_fftn );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftn, tmp_assign_source_13 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "fftpkg" );
        exception_tb = NULL;

        exception_lineno = 33;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_ifftn );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_ifftn, tmp_assign_source_14 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "fftpkg" );
        exception_tb = NULL;

        exception_lineno = 34;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_fft2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fft2, tmp_assign_source_15 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_fftpkg );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fftpkg );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "fftpkg" );
        exception_tb = NULL;

        exception_lineno = 35;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_ifft2 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_ifft2, tmp_assign_source_16 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 37;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_norm );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_norm, tmp_assign_source_17 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_18 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_inv );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_inv, tmp_assign_source_18 );
    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 39;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_19 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_svd );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_svd, tmp_assign_source_19 );
    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_solve );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_solve, tmp_assign_source_20 );
    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_det );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_det, tmp_assign_source_21 );
    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_eig );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_eig, tmp_assign_source_22 );
    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 43;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_eigvals );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_eigvals, tmp_assign_source_23 );
    tmp_source_name_14 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_14 == NULL ))
    {
        tmp_source_name_14 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_14 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_eigh );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_eigh, tmp_assign_source_24 );
    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_eigvalsh );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_eigvalsh, tmp_assign_source_25 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 46;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_lstsq );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_lstsq, tmp_assign_source_26 );
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 47;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_27 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_pinv );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_pinv, tmp_assign_source_27 );
    tmp_source_name_18 = GET_STRING_DICT_VALUE( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_linpkg );

    if (unlikely( tmp_source_name_18 == NULL ))
    {
        tmp_source_name_18 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_linpkg );
    }

    if ( tmp_source_name_18 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "linpkg" );
        exception_tb = NULL;

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_28 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_cholesky );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_cholesky, tmp_assign_source_28 );

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
    tmp_assign_source_29 = PyDict_New();
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain__restore_dict, tmp_assign_source_29 );
    tmp_assign_source_30 = MAKE_FUNCTION_numpy$dual$$$function_1_register_func(  );
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_register_func, tmp_assign_source_30 );
    tmp_assign_source_31 = MAKE_FUNCTION_numpy$dual$$$function_2_restore_func(  );
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_restore_func, tmp_assign_source_31 );
    tmp_assign_source_32 = MAKE_FUNCTION_numpy$dual$$$function_3_restore_all(  );
    UPDATE_STRING_DICT1( moduledict_numpy$dual, (Nuitka_StringObject *)const_str_plain_restore_all, tmp_assign_source_32 );

    return MOD_RETURN_VALUE( module_numpy$dual );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
