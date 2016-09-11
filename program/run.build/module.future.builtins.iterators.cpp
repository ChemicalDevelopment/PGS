/* Generated code for Python source for module 'future.builtins.iterators'
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

/* The _module_future$builtins$iterators is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$builtins$iterators;
PyDictObject *moduledict_future$builtins$iterators;

/* The module constants used, if any. */
extern PyObject *const_str_plain_builtins;
extern PyObject *const_str_plain_utils;
static PyObject *const_str_digest_8d35e5f546313e1cba41a28844da2d38;
extern PyObject *const_tuple_str_plain_utils_tuple;
extern PyObject *const_str_plain_itertools;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_map;
static PyObject *const_list_str_plain_filter_str_plain_map_str_plain_range_str_plain_zip_list;
static PyObject *const_str_digest_e03a516a31bb68061d732e534ae2c2a7;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_izip;
extern PyObject *const_tuple_str_plain_newrange_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_newrange;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_ifilter;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_digest_96b7425961f73d341c56a14b3f3d9e23;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain_future;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_iterators;
extern PyObject *const_str_plain_imap;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_str_plain_range;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_8d35e5f546313e1cba41a28844da2d38 = UNSTREAM_STRING( &constant_bin[ 231048 ], 944, 0 );
    const_list_str_plain_filter_str_plain_map_str_plain_range_str_plain_zip_list = PyList_New( 4 );
    PyList_SET_ITEM( const_list_str_plain_filter_str_plain_map_str_plain_range_str_plain_zip_list, 0, const_str_plain_filter ); Py_INCREF( const_str_plain_filter );
    PyList_SET_ITEM( const_list_str_plain_filter_str_plain_map_str_plain_range_str_plain_zip_list, 1, const_str_plain_map ); Py_INCREF( const_str_plain_map );
    PyList_SET_ITEM( const_list_str_plain_filter_str_plain_map_str_plain_range_str_plain_zip_list, 2, const_str_plain_range ); Py_INCREF( const_str_plain_range );
    PyList_SET_ITEM( const_list_str_plain_filter_str_plain_map_str_plain_range_str_plain_zip_list, 3, const_str_plain_zip ); Py_INCREF( const_str_plain_zip );
    const_str_digest_e03a516a31bb68061d732e534ae2c2a7 = UNSTREAM_STRING( &constant_bin[ 231992 ], 67, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$builtins$iterators( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_127fe7fef1778429b2a616bb81759ac0;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_e03a516a31bb68061d732e534ae2c2a7;
    codeobj_127fe7fef1778429b2a616bb81759ac0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iterators, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$builtins$iterators =
{
    PyModuleDef_HEAD_INIT,
    "future.builtins.iterators",   /* m_name */
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

MOD_INIT_DECL( future$builtins$iterators )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$builtins$iterators );
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

    // puts( "in initfuture$builtins$iterators" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$builtins$iterators = Py_InitModule4(
        "future.builtins.iterators",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_future$builtins$iterators = PyModule_Create( &mdef_future$builtins$iterators );
#endif

    moduledict_future$builtins$iterators = (PyDictObject *)((PyModuleObject *)module_future$builtins$iterators)->md_dict;

    CHECK_OBJECT( module_future$builtins$iterators );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4, module_future$builtins$iterators );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_future$builtins$iterators );

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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_8d35e5f546313e1cba41a28844da2d38;
    UPDATE_STRING_DICT0( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_e03a516a31bb68061d732e534ae2c2a7;
    UPDATE_STRING_DICT0( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_127fe7fef1778429b2a616bb81759ac0, module_future$builtins$iterators );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$builtins$iterators)->md_dict;
    frame_module->f_lineno = 37;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_itertools, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_itertools, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_future$builtins$iterators)->md_dict;
    frame_module->f_lineno = 38;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_future, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_utils_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_utils );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_7 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_PY3 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_itertools );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_itertools );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "itertools" );
        exception_tb = NULL;

        exception_lineno = 41;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_8 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ifilter );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_filter, tmp_assign_source_8 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_itertools );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_itertools );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "itertools" );
        exception_tb = NULL;

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_9 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_imap );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_map, tmp_assign_source_9 );
    tmp_import_globals_3 = ((PyModuleObject *)module_future$builtins$iterators)->md_dict;
    frame_module->f_lineno = 43;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_96b7425961f73d341c56a14b3f3d9e23, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_newrange_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_newrange );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_10 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_itertools );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_itertools );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "itertools" );
        exception_tb = NULL;

        exception_lineno = 44;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_11 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_izip );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_zip, tmp_assign_source_11 );
    tmp_assign_source_12 = LIST_COPY( const_list_str_plain_filter_str_plain_map_str_plain_range_str_plain_zip_list );
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_12 );
    goto branch_end_1;
    branch_no_1:;
    tmp_import_globals_4 = ((PyModuleObject *)module_future$builtins$iterators)->md_dict;
    frame_module->f_lineno = 47;
    tmp_assign_source_13 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_0 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 47;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_builtins, tmp_assign_source_13 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;

        exception_lineno = 48;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_filter );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 48;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_filter, tmp_assign_source_14 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;

        exception_lineno = 49;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_map );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_map, tmp_assign_source_15 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;

        exception_lineno = 50;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_16 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_range );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 50;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_16 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;

        exception_lineno = 51;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_17 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_zip );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain_zip, tmp_assign_source_17 );
    tmp_assign_source_18 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_future$builtins$iterators, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_18 );
    branch_end_1:;

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

    return MOD_RETURN_VALUE( module_future$builtins$iterators );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
