/* Generated code for Python source for module 'numpy.core'
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

/* The _module_numpy$core is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$core;
PyDictObject *moduledict_numpy$core;

/* The module constants used, if any. */
static PyObject *const_list_str_plain_char_str_plain_rec_str_plain_memmap_list;
extern PyObject *const_str_plain_mod;
extern PyObject *const_tuple_str_plain_umath_tuple;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain_multiarray;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_plain_memmap;
extern PyObject *const_tuple_str_plain_numeric_tuple;
static PyObject *const_str_digest_ce115cae5d54f001e1ae39c0d22ccc0e;
static PyObject *const_tuple_str_plain_OPENBLAS_MAIN_FREE_str_plain_GOTOBLAS_MAIN_FREE_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_tuple_str_plain_whichmodule_tuple;
static PyObject *const_tuple_str_plain_chararray_tuple;
extern PyObject *const_str_plain_pickle;
extern PyObject *const_tuple_str_plain_numerictypes_tuple;
static PyObject *const_str_plain_OPENBLAS_MAIN_FREE;
extern PyObject *const_tuple_str_plain_fromnumeric_tuple;
extern PyObject *const_str_plain_function_base;
extern PyObject *const_str_plain_version;
extern PyObject *const_str_plain_umath;
static PyObject *const_str_plain_GOTOBLAS_MAIN_FREE;
extern PyObject *const_tuple_str_plain___doc___tuple;
static PyObject *const_tuple_str_plain_shape_base_tuple;
extern PyObject *const_str_plain_amax;
static PyObject *const_str_plain_whichmodule;
extern PyObject *const_str_plain_amin;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
extern PyObject *const_tuple_str_plain_multiarray_tuple;
extern PyObject *const_str_plain_round_;
extern PyObject *const_str_plain_environ;
extern PyObject *const_str_plain_defchararray;
static PyObject *const_str_plain__ufunc_reduce;
static PyObject *const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple;
extern PyObject *const_str_plain_min;
static PyObject *const_tuple_str_plain_defchararray_tuple;
extern PyObject *const_str_plain__numpy_tester;
extern PyObject *const_str_plain_copyreg;
extern PyObject *const_str_plain_abs;
extern PyObject *const_str_plain_round;
extern PyObject *const_str_plain_os;
extern PyObject *const_str_plain_max;
static PyObject *const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple;
static PyObject *const_tuple_str_plain_machar_tuple;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_records;
static PyObject *const_str_plain_env_added;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_digest_cad1fcb236d0fed73a31a019d414de2f;
extern PyObject *const_str_plain_sctypeDict;
extern PyObject *const_str_plain_absolute;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_ufunc;
extern PyObject *const_str_plain_shape_base;
extern PyObject *const_str_plain_set_typeDict;
static PyObject *const_tuple_str_plain_absolute_tuple;
extern PyObject *const_str_plain___name__;
extern PyObject *const_str_plain_info;
extern PyObject *const_str_digest_8b84b11583a2cc637a5db7437a6d9711;
extern PyObject *const_str_plain_1;
extern PyObject *const_str_plain_name;
static PyObject *const_str_plain_envkey;
extern PyObject *const_str_plain__internal;
extern PyObject *const_str_plain_numeric;
extern PyObject *const_str_plain_rec;
extern PyObject *const_str_plain_module;
static PyObject *const_str_plain__ufunc_reconstruct;
extern PyObject *const_str_plain_numerictypes;
extern PyObject *const_str_plain_test;
extern PyObject *const_tuple_str_plain__numpy_tester_tuple;
static PyObject *const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple;
static PyObject *const_tuple_str_plain__internal_tuple;
extern PyObject *const_tuple_str_plain_getlimits_tuple;
extern PyObject *const_str_plain_machar;
extern PyObject *const_str_plain_nt;
extern PyObject *const_str_plain_getlimits;
extern PyObject *const_str_plain_fromnumeric;
static PyObject *const_list_str_plain_chararray_list;
extern PyObject *const_str_plain_core;
static PyObject *const_str_digest_3616b8a21066d992ab1bb90d5d2113cd;
extern PyObject *const_str_plain_copy_reg;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_tuple_str_plain_records_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
static PyObject *const_list_str_digest_3616b8a21066d992ab1bb90d5d2113cd_list;
extern PyObject *const_tuple_str_plain_version_tuple;
extern PyObject *const_str_plain___version__;
extern PyObject *const_str_plain_chararray;
extern PyObject *const_str_plain_bench;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_char;
extern PyObject *const_str_empty;
extern PyObject *const_str_digest_4dcaa53e76b317037ea1e395a40c5c89;
extern PyObject *const_str_plain_append;
extern PyObject *const_tuple_str_plain_function_base_tuple;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_plain_char_str_plain_rec_str_plain_memmap_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_char_str_plain_rec_str_plain_memmap_list, 0, const_str_plain_char ); Py_INCREF( const_str_plain_char );
    PyList_SET_ITEM( const_list_str_plain_char_str_plain_rec_str_plain_memmap_list, 1, const_str_plain_rec ); Py_INCREF( const_str_plain_rec );
    PyList_SET_ITEM( const_list_str_plain_char_str_plain_rec_str_plain_memmap_list, 2, const_str_plain_memmap ); Py_INCREF( const_str_plain_memmap );
    const_str_digest_ce115cae5d54f001e1ae39c0d22ccc0e = UNSTREAM_STRING( &constant_bin[ 539914 ], 61, 0 );
    const_tuple_str_plain_OPENBLAS_MAIN_FREE_str_plain_GOTOBLAS_MAIN_FREE_tuple = PyTuple_New( 2 );
    const_str_plain_OPENBLAS_MAIN_FREE = UNSTREAM_STRING( &constant_bin[ 539975 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_OPENBLAS_MAIN_FREE_str_plain_GOTOBLAS_MAIN_FREE_tuple, 0, const_str_plain_OPENBLAS_MAIN_FREE ); Py_INCREF( const_str_plain_OPENBLAS_MAIN_FREE );
    const_str_plain_GOTOBLAS_MAIN_FREE = UNSTREAM_STRING( &constant_bin[ 539993 ], 18, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_OPENBLAS_MAIN_FREE_str_plain_GOTOBLAS_MAIN_FREE_tuple, 1, const_str_plain_GOTOBLAS_MAIN_FREE ); Py_INCREF( const_str_plain_GOTOBLAS_MAIN_FREE );
    const_tuple_str_plain_whichmodule_tuple = PyTuple_New( 1 );
    const_str_plain_whichmodule = UNSTREAM_STRING( &constant_bin[ 540011 ], 11, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_whichmodule_tuple, 0, const_str_plain_whichmodule ); Py_INCREF( const_str_plain_whichmodule );
    const_tuple_str_plain_chararray_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_chararray_tuple, 0, const_str_plain_chararray ); Py_INCREF( const_str_plain_chararray );
    const_tuple_str_plain_shape_base_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_shape_base_tuple, 0, const_str_plain_shape_base ); Py_INCREF( const_str_plain_shape_base );
    const_str_plain__ufunc_reduce = UNSTREAM_STRING( &constant_bin[ 1529 ], 13, 1 );
    const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, 0, const_str_plain_amax ); Py_INCREF( const_str_plain_amax );
    PyTuple_SET_ITEM( const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, 1, const_str_plain_amin ); Py_INCREF( const_str_plain_amin );
    PyTuple_SET_ITEM( const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, 2, const_str_plain_round_ ); Py_INCREF( const_str_plain_round_ );
    const_tuple_str_plain_defchararray_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_defchararray_tuple, 0, const_str_plain_defchararray ); Py_INCREF( const_str_plain_defchararray );
    const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple, 0, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple, 1, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple, 2, const_str_plain_mod ); Py_INCREF( const_str_plain_mod );
    const_tuple_str_plain_machar_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_machar_tuple, 0, const_str_plain_machar ); Py_INCREF( const_str_plain_machar );
    const_str_plain_env_added = UNSTREAM_STRING( &constant_bin[ 1396 ], 9, 1 );
    const_tuple_str_plain_absolute_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_absolute_tuple, 0, const_str_plain_absolute ); Py_INCREF( const_str_plain_absolute );
    const_str_plain_envkey = UNSTREAM_STRING( &constant_bin[ 1368 ], 6, 1 );
    const_str_plain__ufunc_reconstruct = UNSTREAM_STRING( &constant_bin[ 540022 ], 18, 1 );
    const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple, 1, const_str_plain_whichmodule ); Py_INCREF( const_str_plain_whichmodule );
    PyTuple_SET_ITEM( const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    const_tuple_str_plain__internal_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__internal_tuple, 0, const_str_plain__internal ); Py_INCREF( const_str_plain__internal );
    const_list_str_plain_chararray_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_plain_chararray_list, 0, const_str_plain_chararray ); Py_INCREF( const_str_plain_chararray );
    const_str_digest_3616b8a21066d992ab1bb90d5d2113cd = UNSTREAM_STRING( &constant_bin[ 539914 ], 49, 0 );
    const_tuple_str_plain_records_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_records_tuple, 0, const_str_plain_records ); Py_INCREF( const_str_plain_records );
    const_list_str_digest_3616b8a21066d992ab1bb90d5d2113cd_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_3616b8a21066d992ab1bb90d5d2113cd_list, 0, const_str_digest_3616b8a21066d992ab1bb90d5d2113cd ); Py_INCREF( const_str_digest_3616b8a21066d992ab1bb90d5d2113cd );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$core( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_e5b8d21733b4949361ee1de70469ea87;
static PyCodeObject *codeobj_032cc1319bdf41f82a1bb8e53921eeb8;
static PyCodeObject *codeobj_5849cef72ca9713001f0b46ec0c40ecd;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_ce115cae5d54f001e1ae39c0d22ccc0e;
    codeobj_e5b8d21733b4949361ee1de70469ea87 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ufunc_reconstruct, 66, const_tuple_str_plain_module_str_plain_name_str_plain_mod_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_032cc1319bdf41f82a1bb8e53921eeb8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__ufunc_reduce, 74, const_tuple_str_plain_func_str_plain_whichmodule_str_plain_name_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_5849cef72ca9713001f0b46ec0c40ecd = MAKE_CODEOBJ( module_filename_obj, const_str_plain_core, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$core$$$function_1__ufunc_reconstruct(  );


static PyObject *MAKE_FUNCTION_numpy$core$$$function_2__ufunc_reduce(  );


// The module function definitions.
static PyObject *impl_numpy$core$$$function_1__ufunc_reconstruct( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_module = python_pars[ 0 ];
    PyObject *par_name = python_pars[ 1 ];
    PyObject *var_mod = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_import_fromlist_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_level_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_modulename_1;
    PyObject *tmp_list_element_1;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e5b8d21733b4949361ee1de70469ea87, module_numpy$core );
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
    tmp_import_modulename_1 = par_module;

    tmp_import_fromlist_1 = PyList_New( 1 );
    tmp_list_element_1 = par_name;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_import_fromlist_1, 0, tmp_list_element_1 );
    tmp_import_level_1 = const_int_0;
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$core)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_module )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_module,
            par_module
        );

        assert( res == 0 );
    }

    if ( par_name )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_name,
            par_name
        );

        assert( res == 0 );
    }

    if ( var_mod )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_mod,
            var_mod
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 71;
    tmp_assign_source_1 = IMPORT_MODULE( tmp_import_modulename_1, tmp_import_globals_1, tmp_import_locals_1, tmp_import_fromlist_1, tmp_import_level_1 );
    Py_DECREF( tmp_import_locals_1 );
    Py_DECREF( tmp_import_fromlist_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    assert( var_mod == NULL );
    var_mod = tmp_assign_source_1;

    tmp_getattr_target_1 = var_mod;

    tmp_getattr_attr_1 = par_name;

    tmp_return_value = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, NULL );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
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
            if ( par_module )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module,
                    par_module
                );

                assert( res == 0 );
            }

            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( var_mod )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mod,
                    var_mod
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
    NUITKA_CANNOT_GET_HERE( numpy$core$$$function_1__ufunc_reconstruct );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)var_mod );
    Py_DECREF( var_mod );
    var_mod = NULL;

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

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    Py_XDECREF( var_mod );
    var_mod = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$core$$$function_1__ufunc_reconstruct );
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


static PyObject *impl_numpy$core$$$function_2__ufunc_reduce( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *var_whichmodule = NULL;
    PyObject *var_name = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_032cc1319bdf41f82a1bb8e53921eeb8, module_numpy$core );
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
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$core)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_func )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_func,
            par_func
        );

        assert( res == 0 );
    }

    if ( var_whichmodule )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_whichmodule,
            var_whichmodule
        );

        assert( res == 0 );
    }

    if ( var_name )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_name,
            var_name
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 75;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_pickle, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_whichmodule_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_whichmodule );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
        goto frame_exception_exit_1;
    }
    assert( var_whichmodule == NULL );
    var_whichmodule = tmp_assign_source_1;

    tmp_source_name_1 = par_func;

    tmp_assign_source_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 76;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_2;

    tmp_return_value = PyTuple_New( 2 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__ufunc_reconstruct );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ufunc_reconstruct );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_return_value );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_ufunc_reconstruct" );
        exception_tb = NULL;

        exception_lineno = 77;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_return_value, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = PyTuple_New( 2 );
    tmp_called_name_1 = var_whichmodule;

    tmp_args_element_name_1 = par_func;

    tmp_args_element_name_2 = var_name;

    frame_function->f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_return_value );
        Py_DECREF( tmp_tuple_element_1 );

        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_tuple_element_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_name;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_tuple_element_1, 1, tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_return_value, 1, tmp_tuple_element_1 );
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
            if ( par_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func
                );

                assert( res == 0 );
            }

            if ( var_whichmodule )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_whichmodule,
                    var_whichmodule
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
    NUITKA_CANNOT_GET_HERE( numpy$core$$$function_2__ufunc_reduce );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)var_whichmodule );
    Py_DECREF( var_whichmodule );
    var_whichmodule = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    Py_XDECREF( var_whichmodule );
    var_whichmodule = NULL;

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
    NUITKA_CANNOT_GET_HERE( numpy$core$$$function_2__ufunc_reduce );
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



static PyObject *MAKE_FUNCTION_numpy$core$$$function_1__ufunc_reconstruct(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$$$function_1__ufunc_reconstruct,
        const_str_plain__ufunc_reconstruct,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e5b8d21733b4949361ee1de70469ea87,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_numpy$core$$$function_2__ufunc_reduce(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$core$$$function_2__ufunc_reduce,
        const_str_plain__ufunc_reduce,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_032cc1319bdf41f82a1bb8e53921eeb8,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$core,
        Py_None
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$core =
{
    PyModuleDef_HEAD_INIT,
    "numpy.core",   /* m_name */
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

MOD_INIT_DECL( numpy$core )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$core );
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

    // puts( "in initnumpy$core" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$core = Py_InitModule4(
        "numpy.core",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$core = PyModule_Create( &mdef_numpy$core );
#endif

    moduledict_numpy$core = (PyDictObject *)((PyModuleObject *)module_numpy$core)->md_dict;

    CHECK_OBJECT( module_numpy$core );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_4dcaa53e76b317037ea1e395a40c5c89, module_numpy$core );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$core );

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
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    int tmp_cmp_GtE_1;
    int tmp_cmp_NotIn_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_delsubscr_subscript_1;
    PyObject *tmp_delsubscr_target_1;
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
    PyObject *tmp_import_globals_23;
    PyObject *tmp_import_globals_24;
    PyObject *tmp_import_globals_25;
    PyObject *tmp_import_globals_26;
    PyObject *tmp_import_globals_27;
    PyObject *tmp_import_globals_28;
    PyObject *tmp_import_globals_29;
    PyObject *tmp_import_globals_30;
    PyObject *tmp_import_globals_31;
    PyObject *tmp_import_globals_32;
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
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
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
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyObject *tmp_star_imported_4;
    PyObject *tmp_star_imported_5;
    PyObject *tmp_star_imported_6;
    PyObject *tmp_star_imported_7;
    PyObject *tmp_star_imported_8;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_ce115cae5d54f001e1ae39c0d22ccc0e;
    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_3616b8a21066d992ab1bb90d5d2113cd_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_5849cef72ca9713001f0b46ec0c40ecd, module_numpy$core );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 3;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_info, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain___doc___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain___doc__ );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 4;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_cad1fcb236d0fed73a31a019d414de2f, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_version_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_version );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 8;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_os, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_0 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_os, tmp_assign_source_9 );
    tmp_assign_source_10 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_env_added, tmp_assign_source_10 );
    tmp_iter_arg_1 = const_tuple_str_plain_OPENBLAS_MAIN_FREE_str_plain_GOTOBLAS_MAIN_FREE_tuple;
    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_11 != NULL );
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_11;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_12 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_module->f_lineno = 10;
            goto try_except_handler_1;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_assign_source_13 = tmp_for_loop_1__iter_value;

    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_envkey, tmp_assign_source_13 );
    tmp_compare_left_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_envkey );

    if (unlikely( tmp_compare_left_1 == NULL ))
    {
        tmp_compare_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_envkey );
    }

    if ( tmp_compare_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "envkey" );
        exception_tb = NULL;

        exception_lineno = 11;
        goto try_except_handler_1;
    }

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 11;
        goto try_except_handler_1;
    }

    tmp_compare_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_environ );
    if ( tmp_compare_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto try_except_handler_1;
    }
    tmp_cmp_NotIn_1 = PySequence_Contains( tmp_compare_right_1, tmp_compare_left_1 );
    assert( !(tmp_cmp_NotIn_1 == -1) );
    Py_DECREF( tmp_compare_right_1 );
    if ( tmp_cmp_NotIn_1 == 0 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_ass_subvalue_1 = const_str_plain_1;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 12;
        goto try_except_handler_1;
    }

    tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_environ );
    if ( tmp_ass_subscribed_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_envkey );

    if (unlikely( tmp_ass_subscript_1 == NULL ))
    {
        tmp_ass_subscript_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_envkey );
    }

    if ( tmp_ass_subscript_1 == NULL )
    {
        Py_DECREF( tmp_ass_subscribed_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "envkey" );
        exception_tb = NULL;

        exception_lineno = 12;
        goto try_except_handler_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    Py_DECREF( tmp_ass_subscribed_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 12;
        goto try_except_handler_1;
    }
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_env_added );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_env_added );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "env_added" );
        exception_tb = NULL;

        exception_lineno = 13;
        goto try_except_handler_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_1;
    }
    tmp_args_element_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_envkey );

    if (unlikely( tmp_args_element_name_1 == NULL ))
    {
        tmp_args_element_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_envkey );
    }

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "envkey" );
        exception_tb = NULL;

        exception_lineno = 13;
        goto try_except_handler_1;
    }

    frame_module->f_lineno = 13;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto try_except_handler_1;
    }
    goto loop_start_1;
    loop_end_1:;
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

    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 14;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_empty, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_multiarray_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_multiarray );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_multiarray, tmp_assign_source_14 );
    tmp_iter_arg_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_env_added );

    if (unlikely( tmp_iter_arg_2 == NULL ))
    {
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_env_added );
    }

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "env_added" );
        exception_tb = NULL;

        exception_lineno = 15;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_15;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_16 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_module->f_lineno = 15;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_assign_source_17 = tmp_for_loop_2__iter_value;

    UPDATE_STRING_DICT0( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_envkey, tmp_assign_source_17 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_os );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_os );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "os" );
        exception_tb = NULL;

        exception_lineno = 16;
        goto try_except_handler_2;
    }

    tmp_delsubscr_target_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_environ );
    if ( tmp_delsubscr_target_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    tmp_delsubscr_subscript_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_envkey );

    if (unlikely( tmp_delsubscr_subscript_1 == NULL ))
    {
        tmp_delsubscr_subscript_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_envkey );
    }

    if ( tmp_delsubscr_subscript_1 == NULL )
    {
        Py_DECREF( tmp_delsubscr_target_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "envkey" );
        exception_tb = NULL;

        exception_lineno = 16;
        goto try_except_handler_2;
    }

    tmp_result = DEL_SUBSCRIPT( tmp_delsubscr_target_1, tmp_delsubscr_subscript_1 );
    Py_DECREF( tmp_delsubscr_target_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto try_except_handler_2;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain_envkey );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1362 ], 28, 0 );
        exception_tb = NULL;

        exception_lineno = 17;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain_env_added );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1390 ], 31, 0 );
        exception_tb = NULL;

        exception_lineno = 18;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain_os );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1421 ], 24, 0 );
        exception_tb = NULL;

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_empty, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_umath_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_umath );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_umath, tmp_assign_source_18 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_empty, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain__internal_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_19 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain__internal );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__internal, tmp_assign_source_19 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_empty, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_numerictypes_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_numerictypes );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_nt, tmp_assign_source_20 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_multiarray );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_multiarray );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "multiarray" );
        exception_tb = NULL;

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_set_typeDict );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_nt );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_nt );
    }

    if ( tmp_source_name_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "nt" );
        exception_tb = NULL;

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_sctypeDict );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 24;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_8 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 25;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_empty, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain_numeric_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_numeric );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_numeric, tmp_assign_source_21 );
    tmp_import_globals_9 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 26;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_numeric, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_10 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 27;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_empty, tmp_import_globals_10, tmp_import_globals_10, const_tuple_str_plain_fromnumeric_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_fromnumeric );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_fromnumeric, tmp_assign_source_22 );
    tmp_import_globals_11 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 28;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_fromnumeric, tmp_import_globals_11, tmp_import_globals_11, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_12 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 29;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_empty, tmp_import_globals_12, tmp_import_globals_12, const_tuple_str_plain_defchararray_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_23 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_defchararray );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_char, tmp_assign_source_23 );
    tmp_import_globals_13 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 30;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_empty, tmp_import_globals_13, tmp_import_globals_13, const_tuple_str_plain_records_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_24 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_records );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_rec, tmp_assign_source_24 );
    tmp_import_globals_14 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 31;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_plain_records, tmp_import_globals_14, tmp_import_globals_14, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_15 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 32;
    tmp_star_imported_4 = IMPORT_MODULE( const_str_plain_memmap, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_4 );
    Py_DECREF( tmp_star_imported_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_16 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 33;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_defchararray, tmp_import_globals_16, tmp_import_globals_16, const_tuple_str_plain_chararray_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_25 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_chararray );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_chararray, tmp_assign_source_25 );
    tmp_import_globals_17 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 34;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_empty, tmp_import_globals_17, tmp_import_globals_17, const_tuple_str_plain_function_base_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_26 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_function_base );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 34;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_function_base, tmp_assign_source_26 );
    tmp_import_globals_18 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 35;
    tmp_star_imported_5 = IMPORT_MODULE( const_str_plain_function_base, tmp_import_globals_18, tmp_import_globals_18, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_5 );
    Py_DECREF( tmp_star_imported_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_19 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 36;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_empty, tmp_import_globals_19, tmp_import_globals_19, const_tuple_str_plain_machar_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_27 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_machar );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_27 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_machar, tmp_assign_source_27 );
    tmp_import_globals_20 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 37;
    tmp_star_imported_6 = IMPORT_MODULE( const_str_plain_machar, tmp_import_globals_20, tmp_import_globals_20, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_6 );
    Py_DECREF( tmp_star_imported_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_21 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 38;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_empty, tmp_import_globals_21, tmp_import_globals_21, const_tuple_str_plain_getlimits_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_getlimits );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_getlimits, tmp_assign_source_28 );
    tmp_import_globals_22 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 39;
    tmp_star_imported_7 = IMPORT_MODULE( const_str_plain_getlimits, tmp_import_globals_22, tmp_import_globals_22, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_7 );
    Py_DECREF( tmp_star_imported_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_23 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 40;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_empty, tmp_import_globals_23, tmp_import_globals_23, const_tuple_str_plain_shape_base_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_shape_base );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_shape_base, tmp_assign_source_29 );
    tmp_import_globals_24 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 41;
    tmp_star_imported_8 = IMPORT_MODULE( const_str_plain_shape_base, tmp_import_globals_24, tmp_import_globals_24, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$core, true, tmp_star_imported_8 );
    Py_DECREF( tmp_star_imported_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain_nt );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1445 ], 24, 0 );
        exception_tb = NULL;

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_import_globals_25 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 44;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_plain_fromnumeric, tmp_import_globals_25, tmp_import_globals_25, const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, const_int_pos_1 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_amax );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_max, tmp_assign_source_30 );
    tmp_import_globals_26 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 44;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_plain_fromnumeric, tmp_import_globals_26, tmp_import_globals_26, const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, const_int_pos_1 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_amin );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_min, tmp_assign_source_31 );
    tmp_import_globals_27 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 44;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_plain_fromnumeric, tmp_import_globals_27, tmp_import_globals_27, const_tuple_str_plain_amax_str_plain_amin_str_plain_round__tuple, const_int_pos_1 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_round_ );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_round, tmp_assign_source_32 );
    tmp_import_globals_28 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 45;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_plain_numeric, tmp_import_globals_28, tmp_import_globals_28, const_tuple_str_plain_absolute_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_absolute );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_abs, tmp_assign_source_33 );
    tmp_assign_source_34 = LIST_COPY( const_list_str_plain_char_str_plain_rec_str_plain_memmap_list );
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_34 );
    tmp_left_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_1 == NULL ))
    {
        tmp_left_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_numeric );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_numeric );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "numeric" );
        exception_tb = NULL;

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___all__ );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_35 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_35 );
    tmp_left_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_2 == NULL ))
    {
        tmp_left_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_fromnumeric );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_fromnumeric );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "fromnumeric" );
        exception_tb = NULL;

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___all__ );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_36 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_36 );
    tmp_left_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_3 == NULL ))
    {
        tmp_left_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_rec );

    if (unlikely( tmp_source_name_9 == NULL ))
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_rec );
    }

    if ( tmp_source_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "rec" );
        exception_tb = NULL;

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___all__ );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_37 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_37 );
    tmp_left_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_4 == NULL ))
    {
        tmp_left_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_right_name_4 = LIST_COPY( const_list_str_plain_chararray_list );
    tmp_assign_source_38 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_assign_source_38 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_38 );
    tmp_left_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_5 == NULL ))
    {
        tmp_left_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_function_base );

    if (unlikely( tmp_source_name_10 == NULL ))
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_function_base );
    }

    if ( tmp_source_name_10 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "function_base" );
        exception_tb = NULL;

        exception_lineno = 52;
        goto frame_exception_exit_1;
    }

    tmp_right_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain___all__ );
    if ( tmp_right_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_39 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_assign_source_39 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 52;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_39 );
    tmp_left_name_6 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_6 == NULL ))
    {
        tmp_left_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_source_name_11 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_machar );

    if (unlikely( tmp_source_name_11 == NULL ))
    {
        tmp_source_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_machar );
    }

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "machar" );
        exception_tb = NULL;

        exception_lineno = 53;
        goto frame_exception_exit_1;
    }

    tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___all__ );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_40 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_40 );
    tmp_left_name_7 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_7 == NULL ))
    {
        tmp_left_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_source_name_12 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_getlimits );

    if (unlikely( tmp_source_name_12 == NULL ))
    {
        tmp_source_name_12 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getlimits );
    }

    if ( tmp_source_name_12 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "getlimits" );
        exception_tb = NULL;

        exception_lineno = 54;
        goto frame_exception_exit_1;
    }

    tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain___all__ );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_41 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_assign_source_41 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_41 );
    tmp_left_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_left_name_8 == NULL ))
    {
        tmp_left_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_left_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_source_name_13 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_shape_base );

    if (unlikely( tmp_source_name_13 == NULL ))
    {
        tmp_source_name_13 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_shape_base );
    }

    if ( tmp_source_name_13 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "shape_base" );
        exception_tb = NULL;

        exception_lineno = 55;
        goto frame_exception_exit_1;
    }

    tmp_right_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___all__ );
    if ( tmp_right_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_42 = BINARY_OPERATION( PyNumber_InPlaceAdd, tmp_left_name_8, tmp_right_name_8 );
    Py_DECREF( tmp_right_name_8 );
    if ( tmp_assign_source_42 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_42 );
    tmp_import_globals_29 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 58;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_digest_8b84b11583a2cc637a5db7437a6d9711, tmp_import_globals_29, tmp_import_globals_29, const_tuple_str_plain__numpy_tester_tuple, const_int_0 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_43 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain__numpy_tester );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_43 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__numpy_tester, tmp_assign_source_43 );
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__numpy_tester );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numpy_tester );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numpy_tester" );
        exception_tb = NULL;

        exception_lineno = 59;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 59;
    tmp_source_name_14 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    if ( tmp_source_name_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_44 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_test );
    Py_DECREF( tmp_source_name_14 );
    if ( tmp_assign_source_44 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_44 );
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__numpy_tester );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numpy_tester );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numpy_tester" );
        exception_tb = NULL;

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 60;
    tmp_source_name_15 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    if ( tmp_source_name_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_45 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_bench );
    Py_DECREF( tmp_source_name_15 );
    if ( tmp_assign_source_45 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_45 );
    tmp_assign_source_46 = MAKE_FUNCTION_numpy$core$$$function_1__ufunc_reconstruct(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__ufunc_reconstruct, tmp_assign_source_46 );
    tmp_assign_source_47 = MAKE_FUNCTION_numpy$core$$$function_2__ufunc_reduce(  );
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__ufunc_reduce, tmp_assign_source_47 );
    tmp_import_globals_30 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 80;
    tmp_assign_source_48 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_30, tmp_import_globals_30, Py_None, const_int_0 );
    if ( tmp_assign_source_48 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_48 );
    tmp_source_name_16 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_16 == NULL ))
    {
        tmp_source_name_16 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_16 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_2 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_int_pos_3;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 81;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_import_globals_31 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 82;
    tmp_assign_source_49 = IMPORT_MODULE( const_str_plain_copyreg, tmp_import_globals_31, tmp_import_globals_31, Py_None, const_int_0 );
    if ( tmp_assign_source_49 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 82;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_copyreg, tmp_assign_source_49 );
    goto branch_end_2;
    branch_no_2:;
    tmp_import_globals_32 = ((PyModuleObject *)module_numpy$core)->md_dict;
    frame_module->f_lineno = 84;
    tmp_assign_source_50 = IMPORT_MODULE( const_str_plain_copy_reg, tmp_import_globals_32, tmp_import_globals_32, Py_None, const_int_0 );
    if ( tmp_assign_source_50 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_copyreg, tmp_assign_source_50 );
    branch_end_2:;
    tmp_source_name_17 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_copyreg );

    if (unlikely( tmp_source_name_17 == NULL ))
    {
        tmp_source_name_17 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_copyreg );
    }

    if ( tmp_source_name_17 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "copyreg" );
        exception_tb = NULL;

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_pickle );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain_ufunc );

    if (unlikely( tmp_args_element_name_3 == NULL ))
    {
        tmp_args_element_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ufunc );
    }

    if ( tmp_args_element_name_3 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ufunc" );
        exception_tb = NULL;

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__ufunc_reduce );

    if (unlikely( tmp_args_element_name_4 == NULL ))
    {
        tmp_args_element_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ufunc_reduce );
    }

    if ( tmp_args_element_name_4 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ufunc_reduce" );
        exception_tb = NULL;

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$core, (Nuitka_StringObject *)const_str_plain__ufunc_reconstruct );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__ufunc_reconstruct );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_5 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_ufunc_reconstruct" );
        exception_tb = NULL;

        exception_lineno = 86;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 86;
    {
        PyObject *call_args[] = { tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 86;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain_copyreg );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1469 ], 29, 0 );
        exception_tb = NULL;

        exception_lineno = 88;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain_sys );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1498 ], 25, 0 );
        exception_tb = NULL;

        exception_lineno = 89;
        goto frame_exception_exit_1;
    }

    tmp_res = PyDict_DelItem( (PyObject *)moduledict_numpy$core, const_str_plain__ufunc_reduce );
    if ( tmp_res == -1 ) CLEAR_ERROR_OCCURRED();

    if ( tmp_res == -1 )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = UNSTREAM_STRING( &constant_bin[ 1523 ], 35, 0 );
        exception_tb = NULL;

        exception_lineno = 90;
        goto frame_exception_exit_1;
    }


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

    return MOD_RETURN_VALUE( module_numpy$core );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
