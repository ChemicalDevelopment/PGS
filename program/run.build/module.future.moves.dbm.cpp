/* Generated code for Python source for module 'future.moves.dbm'
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

/* The _module_future$moves$dbm is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$moves$dbm;
PyDictObject *moduledict_future$moves$dbm;

/* The module constants used, if any. */
extern PyObject *const_tuple_str_plain_ndbm_tuple;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_dbm;
extern PyObject *const_str_plain_ndbm;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_e77ae2e6af7f3d79f1a0beca58b0e6bf;
static PyObject *const_list_str_digest_e77ae2e6af7f3d79f1a0beca58b0e6bf_list;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_PY3;
static PyObject *const_str_digest_f6a5815b961eea358d116dd28f71d917;
static PyObject *const_str_plain_anydbm;
extern PyObject *const_str_digest_436a338404d6c5741e716fe26b0c2c4e;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_tuple_str_plain_PY3_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___future_module__;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
extern PyObject *const_int_0;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_plain_whichdb;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e77ae2e6af7f3d79f1a0beca58b0e6bf = UNSTREAM_STRING( &constant_bin[ 238136 ], 55, 0 );
    const_list_str_digest_e77ae2e6af7f3d79f1a0beca58b0e6bf_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_e77ae2e6af7f3d79f1a0beca58b0e6bf_list, 0, const_str_digest_e77ae2e6af7f3d79f1a0beca58b0e6bf ); Py_INCREF( const_str_digest_e77ae2e6af7f3d79f1a0beca58b0e6bf );
    const_str_digest_f6a5815b961eea358d116dd28f71d917 = UNSTREAM_STRING( &constant_bin[ 238191 ], 67, 0 );
    const_str_plain_anydbm = UNSTREAM_STRING( &constant_bin[ 238258 ], 6, 1 );
    const_str_plain_whichdb = UNSTREAM_STRING( &constant_bin[ 238264 ], 7, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$moves$dbm( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_9790d8aae515294b337d54f310824f84;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_f6a5815b961eea358d116dd28f71d917;
    codeobj_9790d8aae515294b337d54f310824f84 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dbm, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$moves$dbm =
{
    PyModuleDef_HEAD_INIT,
    "future.moves.dbm",   /* m_name */
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

MOD_INIT_DECL( future$moves$dbm )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$moves$dbm );
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

    // puts( "in initfuture$moves$dbm" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$moves$dbm = Py_InitModule4(
        "future.moves.dbm",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_future$moves$dbm = PyModule_Create( &mdef_future$moves$dbm );
#endif

    moduledict_future$moves$dbm = (PyDictObject *)((PyModuleObject *)module_future$moves$dbm)->md_dict;

    CHECK_OBJECT( module_future$moves$dbm );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_436a338404d6c5741e716fe26b0c2c4e, module_future$moves$dbm );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_future$moves$dbm );

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
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_f6a5815b961eea358d116dd28f71d917;
    UPDATE_STRING_DICT0( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_e77ae2e6af7f3d79f1a0beca58b0e6bf_list );
    UPDATE_STRING_DICT1( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_9790d8aae515294b337d54f310824f84, module_future$moves$dbm );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$moves$dbm)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_118c8611317729818c37c760127e23b2, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_PY3_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_PY3 );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_5 );
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain_PY3 );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3 );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "PY3" );
        exception_tb = NULL;

        exception_lineno = 4;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_2 = ((PyModuleObject *)module_future$moves$dbm)->md_dict;
    frame_module->f_lineno = 5;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_plain_dbm, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_future$moves$dbm, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 5;
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_6 = Py_True;
    UPDATE_STRING_DICT0( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain___future_module__, tmp_assign_source_6 );
    tmp_import_globals_3 = ((PyModuleObject *)module_future$moves$dbm)->md_dict;
    frame_module->f_lineno = 8;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_plain_whichdb, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_future$moves$dbm, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 8;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_4 = ((PyModuleObject *)module_future$moves$dbm)->md_dict;
    frame_module->f_lineno = 9;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_plain_anydbm, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_chr_42_tuple, const_int_0 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_future$moves$dbm, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 9;
        goto frame_exception_exit_1;
    }
    branch_end_1:;
    tmp_cond_value_2 = GET_STRING_DICT_VALUE( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain_PY3 );

    if (unlikely( tmp_cond_value_2 == NULL ))
    {
        tmp_cond_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_PY3 );
    }

    if ( tmp_cond_value_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "PY3" );
        exception_tb = NULL;

        exception_lineno = 14;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_import_globals_5 = ((PyModuleObject *)module_future$moves$dbm)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_dbm, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_ndbm_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ndbm );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain_ndbm, tmp_assign_source_7 );
    goto branch_end_2;
    branch_no_2:;
    // Tried code:
    tmp_import_globals_6 = ((PyModuleObject *)module_future$moves$dbm)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_436a338404d6c5741e716fe26b0c2c4e, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_ndbm_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ndbm );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto try_except_handler_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain_ndbm, tmp_assign_source_8 );
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
    tmp_compare_right_1 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_9 = Py_None;
    UPDATE_STRING_DICT0( moduledict_future$moves$dbm, (Nuitka_StringObject *)const_str_plain_ndbm, tmp_assign_source_9 );
    goto branch_end_3;
    branch_no_3:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_3:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$moves$dbm );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_1:;
    branch_end_2:;

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

    return MOD_RETURN_VALUE( module_future$moves$dbm );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
