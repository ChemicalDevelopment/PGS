/* Generated code for Python source for module 'numpy.random'
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

/* The _module_numpy$random is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$random;
PyDictObject *moduledict_numpy$random;

/* The module constants used, if any. */
extern PyObject *const_str_plain_bench;
extern PyObject *const_str_plain___exit__;
static PyObject *const_str_plain_ranf;
extern PyObject *const_str_chr_42;
static PyObject *const_str_plain_seed;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_digest_af4b9d5c9f96d7c4ce659d3cefcfed14;
static PyObject *const_list_str_digest_fbd8650cbe4957438b78c6ebf1af2758_list;
extern PyObject *const_str_plain__numpy_tester;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_ignore;
static PyObject *const_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_info;
extern PyObject *const_tuple_empty;
extern PyObject *const_tuple_str_plain_ignore_tuple;
static PyObject *const_dict_6b5bbdc21112008ac8ee861022c8f276;
extern PyObject *const_str_plain_message;
extern PyObject *const_str_plain_filterwarnings;
static PyObject *const_str_plain_RandomState;
static PyObject *const_str_plain___RandomState_ctor;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_8b84b11583a2cc637a5db7437a6d9711;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___enter__;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_extend;
extern PyObject *const_str_plain_catch_warnings;
static PyObject *const_str_digest_64b6159f5e9ef3d1d80f42454d2b8a60;
extern PyObject *const_str_plain_division;
static PyObject *const_str_digest_4989aac54083c7b53dcfdc639b7f029a;
extern PyObject *const_tuple_none_none_none_tuple;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_random;
extern PyObject *const_str_plain_test;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_sample;
extern PyObject *const_tuple_str_plain__numpy_tester_tuple;
extern PyObject *const_dict_8d5ecb0ffa5021548091fbef6cfd7cd7;
static PyObject *const_tuple_str_plain___doc___str_plain___all___tuple;
extern PyObject *const_str_plain_warnings;
static PyObject *const_str_plain_random_sample;
static PyObject *const_str_plain_mtrand;
extern PyObject *const_str_digest_706c1c72bb8fb2df6e8381f626649a57;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_fbd8650cbe4957438b78c6ebf1af2758;
static PyObject *const_list_str_plain_ranf_str_plain_random_str_plain_sample_list;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_ranf = UNSTREAM_STRING( &constant_bin[ 1769657 ], 4, 1 );
    const_str_plain_seed = UNSTREAM_STRING( &constant_bin[ 1769661 ], 4, 1 );
    const_str_digest_af4b9d5c9f96d7c4ce659d3cefcfed14 = UNSTREAM_STRING( &constant_bin[ 1769665 ], 4470, 0 );
    const_list_str_digest_fbd8650cbe4957438b78c6ebf1af2758_list = PyList_New( 1 );
    const_str_digest_fbd8650cbe4957438b78c6ebf1af2758 = UNSTREAM_STRING( &constant_bin[ 1774135 ], 51, 0 );
    PyList_SET_ITEM( const_list_str_digest_fbd8650cbe4957438b78c6ebf1af2758_list, 0, const_str_digest_fbd8650cbe4957438b78c6ebf1af2758 ); Py_INCREF( const_str_digest_fbd8650cbe4957438b78c6ebf1af2758 );
    const_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9 = UNSTREAM_STRING( &constant_bin[ 1774186 ], 12, 0 );
    const_dict_6b5bbdc21112008ac8ee861022c8f276 = _PyDict_NewPresized( 1 );
    PyDict_SetItem( const_dict_6b5bbdc21112008ac8ee861022c8f276, const_str_plain_seed, const_int_0 );
    assert( PyDict_Size( const_dict_6b5bbdc21112008ac8ee861022c8f276 ) == 1 );
    const_str_plain_RandomState = UNSTREAM_STRING( &constant_bin[ 1010032 ], 11, 1 );
    const_str_plain___RandomState_ctor = UNSTREAM_STRING( &constant_bin[ 1774198 ], 18, 1 );
    const_str_digest_64b6159f5e9ef3d1d80f42454d2b8a60 = UNSTREAM_STRING( &constant_bin[ 1774216 ], 459, 0 );
    const_str_digest_4989aac54083c7b53dcfdc639b7f029a = UNSTREAM_STRING( &constant_bin[ 1774675 ], 63, 0 );
    const_tuple_str_plain___doc___str_plain___all___tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain___doc___str_plain___all___tuple, 0, const_str_plain___doc__ ); Py_INCREF( const_str_plain___doc__ );
    PyTuple_SET_ITEM( const_tuple_str_plain___doc___str_plain___all___tuple, 1, const_str_plain___all__ ); Py_INCREF( const_str_plain___all__ );
    const_str_plain_random_sample = UNSTREAM_STRING( &constant_bin[ 1770113 ], 13, 1 );
    const_str_plain_mtrand = UNSTREAM_STRING( &constant_bin[ 1774738 ], 6, 1 );
    const_list_str_plain_ranf_str_plain_random_str_plain_sample_list = PyList_New( 3 );
    PyList_SET_ITEM( const_list_str_plain_ranf_str_plain_random_str_plain_sample_list, 0, const_str_plain_ranf ); Py_INCREF( const_str_plain_ranf );
    PyList_SET_ITEM( const_list_str_plain_ranf_str_plain_random_str_plain_sample_list, 1, const_str_plain_random ); Py_INCREF( const_str_plain_random );
    PyList_SET_ITEM( const_list_str_plain_ranf_str_plain_random_str_plain_sample_list, 2, const_str_plain_sample ); Py_INCREF( const_str_plain_sample );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$random( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4111b70a444b08b67f01a5e001c18367;
static PyCodeObject *codeobj_88d37ac7249986110d18a4c93ab9e3e3;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_4989aac54083c7b53dcfdc639b7f029a;
    codeobj_4111b70a444b08b67f01a5e001c18367 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___RandomState_ctor, 105, const_tuple_empty, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_88d37ac7249986110d18a4c93ab9e3e3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_random, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_numpy$random$$$function_1___RandomState_ctor(  );


// The module function definitions.
static PyObject *impl_numpy$random$$$function_1___RandomState_ctor( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4111b70a444b08b67f01a5e001c18367, module_numpy$random );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_RandomState );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_RandomState );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "RandomState" );
        exception_tb = NULL;

        exception_lineno = 118;
        goto frame_exception_exit_1;
    }

    tmp_kw_name_1 = PyDict_Copy( const_dict_6b5bbdc21112008ac8ee861022c8f276 );
    frame_function->f_lineno = 118;
    tmp_return_value = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
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
    goto function_return_exit;

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


            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto function_exception_exit;

    frame_no_exception_1:;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( numpy$random$$$function_1___RandomState_ctor );
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



static PyObject *MAKE_FUNCTION_numpy$random$$$function_1___RandomState_ctor(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_numpy$random$$$function_1___RandomState_ctor,
        const_str_plain___RandomState_ctor,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4111b70a444b08b67f01a5e001c18367,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_numpy$random,
        const_str_digest_64b6159f5e9ef3d1d80f42454d2b8a60
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$random =
{
    PyModuleDef_HEAD_INIT,
    "numpy.random",   /* m_name */
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

MOD_INIT_DECL( numpy$random )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$random );
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

    // puts( "in initnumpy$random" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$random = Py_InitModule4(
        "numpy.random",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$random = PyModule_Create( &mdef_numpy$random );
#endif

    moduledict_numpy$random = (PyDictObject *)((PyModuleObject *)module_numpy$random)->md_dict;

    CHECK_OBJECT( module_numpy$random );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_a5c076a731f186ec2f35c39c7bdeb1b9, module_numpy$random );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$random );

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
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_1__exit = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__indicator = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
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
    PyObject *tmp_assign_source_17;
    PyObject *tmp_assign_source_18;
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_call_arg_element_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    bool tmp_is_1;
    bool tmp_is_2;
    PyObject *tmp_kw_name_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_star_imported_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_af4b9d5c9f96d7c4ce659d3cefcfed14;
    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_4989aac54083c7b53dcfdc639b7f029a;
    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_fbd8650cbe4957438b78c6ebf1af2758_list );
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_88d37ac7249986110d18a4c93ab9e3e3, module_numpy$random );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 91;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_warnings, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 91;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_warnings, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 94;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_info, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain___doc___str_plain___all___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain___doc__ );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 94;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_info, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain___doc___str_plain___all___tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain___all__ );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 94;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    // Tried code:
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 97;
        goto try_except_handler_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_catch_warnings );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_1;
    }
    frame_module->f_lineno = 97;
    tmp_assign_source_10 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_1;
    }
    assert( tmp_with_1__source == NULL );
    tmp_with_1__source = tmp_assign_source_10;

    tmp_source_name_2 = tmp_with_1__source;

    tmp_assign_source_11 = LOOKUP_SPECIAL( tmp_source_name_2, const_str_plain___exit__ );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_1;
    }
    assert( tmp_with_1__exit == NULL );
    tmp_with_1__exit = tmp_assign_source_11;

    tmp_source_name_3 = tmp_with_1__source;

    tmp_called_name_2 = LOOKUP_SPECIAL( tmp_source_name_3, const_str_plain___enter__ );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_1;
    }
    frame_module->f_lineno = 97;
    tmp_assign_source_12 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_1;
    }
    assert( tmp_with_1__enter == NULL );
    tmp_with_1__enter = tmp_assign_source_12;

    tmp_assign_source_13 = Py_True;
    assert( tmp_with_1__indicator == NULL );
    Py_INCREF( tmp_assign_source_13 );
    tmp_with_1__indicator = tmp_assign_source_13;

    // Tried code:
    // Tried code:
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_warnings );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_warnings );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "warnings" );
        exception_tb = NULL;

        exception_lineno = 98;
        goto try_except_handler_3;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_filterwarnings );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_3;
    }
    tmp_args_name_1 = const_tuple_str_plain_ignore_tuple;
    tmp_kw_name_1 = PyDict_Copy( const_dict_8d5ecb0ffa5021548091fbef6cfd7cd7 );
    frame_module->f_lineno = 98;
    tmp_unused = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_3;
    }
    Py_DECREF( tmp_unused );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 99;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_mtrand, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_chr_42_tuple, const_int_pos_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto try_except_handler_3;
    }
    tmp_result = IMPORT_MODULE_STAR( module_numpy$random, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
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

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_module, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_BaseException;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_2;
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
    tmp_assign_source_14 = Py_False;
    {
        PyObject *old = tmp_with_1__indicator;
        assert( old != NULL );
        tmp_with_1__indicator = tmp_assign_source_14;
        Py_INCREF( tmp_with_1__indicator );
        Py_DECREF( old );
    }

    tmp_called_name_4 = tmp_with_1__exit;

    tmp_args_element_name_1 = PyThreadState_GET()->exc_type;
    tmp_args_element_name_2 = PyThreadState_GET()->exc_value;
    tmp_args_element_name_3 = PyThreadState_GET()->exc_traceback;
    frame_module->f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 99;
        goto try_except_handler_2;
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
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( numpy$random );
    return MOD_RETURN_VALUE( NULL );
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

    tmp_compare_left_2 = tmp_with_1__indicator;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_called_name_5 = tmp_with_1__exit;

    frame_module->f_lineno = 99;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_2 );
        Py_XDECREF( exception_keeper_value_2 );
        Py_XDECREF( exception_keeper_tb_2 );

        exception_lineno = 99;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_3:;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_1;
    // End of try:
    try_end_2:;
    tmp_compare_left_3 = tmp_with_1__indicator;

    tmp_compare_right_3 = Py_True;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_called_name_6 = tmp_with_1__exit;

    frame_module->f_lineno = 99;
    tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_none_none_none_tuple, 0 ) );

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto try_except_handler_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_4:;
    goto try_end_3;
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

    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_with_1__source );
    tmp_with_1__source = NULL;

    Py_XDECREF( tmp_with_1__enter );
    tmp_with_1__enter = NULL;

    Py_XDECREF( tmp_with_1__exit );
    tmp_with_1__exit = NULL;

    Py_XDECREF( tmp_with_1__indicator );
    tmp_with_1__indicator = NULL;

    // Tried code:
    tmp_assign_source_15 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_random_sample );

    if (unlikely( tmp_assign_source_15 == NULL ))
    {
        tmp_assign_source_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_random_sample );
    }

    if ( tmp_assign_source_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "random_sample" );
        exception_tb = NULL;

        exception_lineno = 102;
        goto try_except_handler_4;
    }

    assert( tmp_assign_unpack_1__assign_source == NULL );
    Py_INCREF( tmp_assign_source_15 );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_15;

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

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_16 = tmp_assign_unpack_1__assign_source;

    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_ranf, tmp_assign_source_16 );
    tmp_assign_source_17 = tmp_assign_unpack_1__assign_source;

    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_random, tmp_assign_source_17 );
    tmp_assign_source_18 = tmp_assign_unpack_1__assign_source;

    UPDATE_STRING_DICT0( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_sample, tmp_assign_source_18 );
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___all__ );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___all__ );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__all__" );
        exception_tb = NULL;

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_extend );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_call_arg_element_1 = LIST_COPY( const_list_str_plain_ranf_str_plain_random_str_plain_sample_list );
    frame_module->f_lineno = 103;
    {
        PyObject *call_args[] = { tmp_call_arg_element_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_call_arg_element_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_19 = MAKE_FUNCTION_numpy$random$$$function_1___RandomState_ctor(  );
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain___RandomState_ctor, tmp_assign_source_19 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$random)->md_dict;
    frame_module->f_lineno = 120;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_8b84b11583a2cc637a5db7437a6d9711, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain__numpy_tester_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_20 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain__numpy_tester );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain__numpy_tester, tmp_assign_source_20 );
    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain__numpy_tester );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numpy_tester );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numpy_tester" );
        exception_tb = NULL;

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 121;
    tmp_source_name_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_8 );
    if ( tmp_source_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_test );
    Py_DECREF( tmp_source_name_6 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_21 );
    tmp_called_name_9 = GET_STRING_DICT_VALUE( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain__numpy_tester );

    if (unlikely( tmp_called_name_9 == NULL ))
    {
        tmp_called_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numpy_tester );
    }

    if ( tmp_called_name_9 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numpy_tester" );
        exception_tb = NULL;

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 122;
    tmp_source_name_7 = CALL_FUNCTION_NO_ARGS( tmp_called_name_9 );
    if ( tmp_source_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_bench );
    Py_DECREF( tmp_source_name_7 );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$random, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_22 );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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

    return MOD_RETURN_VALUE( module_numpy$random );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
