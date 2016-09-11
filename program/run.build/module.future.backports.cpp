/* Generated code for Python source for module 'future.backports'
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

/* The _module_future$backports is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$backports;
PyDictObject *moduledict_future$backports;

/* The module constants used, if any. */
static PyObject *const_str_digest_e4d218f3181b084c6fa9048275909a11;
extern PyObject *const_str_plain__count_elements;
extern PyObject *const_str_digest_9ceff9e9dc2f123ff8fecafdd8ee49a7;
extern PyObject *const_str_plain_OrderedDict;
extern PyObject *const_str_plain_Counter;
extern PyObject *const_str_plain_ChainMap;
extern PyObject *const_str_plain_ceil;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_import_top_level_modules;
static PyObject *const_str_digest_d60ccf3a65169ec12d95a6bbd063a081;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_misc;
static PyObject *const_list_str_digest_ddec6ab79eb369f26cc0b6ea9c2d96e8_list;
extern PyObject *const_tuple_str_plain_import_top_level_modules_tuple;
extern PyObject *const_str_plain_recursive_repr;
extern PyObject *const_str_plain_version_info;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_check_output;
extern PyObject *const_int_pos_3;
static PyObject *const_str_digest_ddec6ab79eb369f26cc0b6ea9c2d96e8;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple;
extern PyObject *const_str_digest_741d67a63a1148262437f3f97bcea1cd;
extern PyObject *const_str_plain___future_module__;
extern PyObject *const_str_plain_backports;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_e4d218f3181b084c6fa9048275909a11 = UNSTREAM_STRING( &constant_bin[ 81483 ], 26, 0 );
    const_str_digest_d60ccf3a65169ec12d95a6bbd063a081 = UNSTREAM_STRING( &constant_bin[ 81509 ], 67, 0 );
    const_list_str_digest_ddec6ab79eb369f26cc0b6ea9c2d96e8_list = PyList_New( 1 );
    const_str_digest_ddec6ab79eb369f26cc0b6ea9c2d96e8 = UNSTREAM_STRING( &constant_bin[ 81509 ], 55, 0 );
    PyList_SET_ITEM( const_list_str_digest_ddec6ab79eb369f26cc0b6ea9c2d96e8_list, 0, const_str_digest_ddec6ab79eb369f26cc0b6ea9c2d96e8 ); Py_INCREF( const_str_digest_ddec6ab79eb369f26cc0b6ea9c2d96e8 );
    const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple = PyTuple_New( 8 );
    PyTuple_SET_ITEM( const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, 0, const_str_plain_ceil ); Py_INCREF( const_str_plain_ceil );
    PyTuple_SET_ITEM( const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, 1, const_str_plain_OrderedDict ); Py_INCREF( const_str_plain_OrderedDict );
    PyTuple_SET_ITEM( const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, 2, const_str_plain_Counter ); Py_INCREF( const_str_plain_Counter );
    PyTuple_SET_ITEM( const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, 3, const_str_plain_ChainMap ); Py_INCREF( const_str_plain_ChainMap );
    PyTuple_SET_ITEM( const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, 4, const_str_plain_check_output ); Py_INCREF( const_str_plain_check_output );
    PyTuple_SET_ITEM( const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, 5, const_str_plain_count ); Py_INCREF( const_str_plain_count );
    PyTuple_SET_ITEM( const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, 6, const_str_plain_recursive_repr ); Py_INCREF( const_str_plain_recursive_repr );
    PyTuple_SET_ITEM( const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, 7, const_str_plain__count_elements ); Py_INCREF( const_str_plain__count_elements );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$backports( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_52c266f436f70a33730b04cc0fdefbf8;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_d60ccf3a65169ec12d95a6bbd063a081;
    codeobj_52c266f436f70a33730b04cc0fdefbf8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_backports, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$backports =
{
    PyModuleDef_HEAD_INIT,
    "future.backports",   /* m_name */
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

MOD_INIT_DECL( future$backports )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$backports );
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

    // puts( "in initfuture$backports" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$backports = Py_InitModule4(
        "future.backports",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_future$backports = PyModule_Create( &mdef_future$backports );
#endif

    moduledict_future$backports = (PyDictObject *)((PyModuleObject *)module_future$backports)->md_dict;

    CHECK_OBJECT( module_future$backports );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_741d67a63a1148262437f3f97bcea1cd, module_future$backports );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_future$backports );

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
    PyObject *tmp_called_name_1;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
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
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_import_name_from_6;
    PyObject *tmp_import_name_from_7;
    PyObject *tmp_import_name_from_8;
    PyObject *tmp_import_name_from_9;
    PyObject *tmp_source_name_1;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_e4d218f3181b084c6fa9048275909a11;
    UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_d60ccf3a65169ec12d95a6bbd063a081;
    UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_ddec6ab79eb369f26cc0b6ea9c2d96e8_list );
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_4 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_52c266f436f70a33730b04cc0fdefbf8, module_future$backports );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$backports)->md_dict;
    frame_module->f_lineno = 7;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 7;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    tmp_assign_source_6 = Py_True;
    UPDATE_STRING_DICT0( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain___future_module__, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_future$backports)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_9ceff9e9dc2f123ff8fecafdd8ee49a7, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_import_top_level_modules_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_import_top_level_modules );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_import_top_level_modules, tmp_assign_source_7 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 13;
        goto frame_exception_exit_1;
    }

    tmp_subscribed_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version_info );
    if ( tmp_subscribed_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_subscript_name_1 = const_int_0;
    tmp_compare_left_1 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    Py_DECREF( tmp_subscribed_name_1 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_int_pos_3;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_import_top_level_modules );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_import_top_level_modules );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "import_top_level_modules" );
        exception_tb = NULL;

        exception_lineno = 14;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 14;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 14;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    tmp_import_globals_3 = ((PyModuleObject *)module_future$backports)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_3, tmp_import_globals_3, const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ceil );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_ceil, tmp_assign_source_8 );
    tmp_import_globals_4 = ((PyModuleObject *)module_future$backports)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_4, tmp_import_globals_4, const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_OrderedDict );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_OrderedDict, tmp_assign_source_9 );
    tmp_import_globals_5 = ((PyModuleObject *)module_future$backports)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_5, tmp_import_globals_5, const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Counter );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_Counter, tmp_assign_source_10 );
    tmp_import_globals_6 = ((PyModuleObject *)module_future$backports)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_6, tmp_import_globals_6, const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_ChainMap );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_ChainMap, tmp_assign_source_11 );
    tmp_import_globals_7 = ((PyModuleObject *)module_future$backports)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_7, tmp_import_globals_7, const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_check_output );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_check_output, tmp_assign_source_12 );
    tmp_import_globals_8 = ((PyModuleObject *)module_future$backports)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_8, tmp_import_globals_8, const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_count );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_count, tmp_assign_source_13 );
    tmp_import_globals_9 = ((PyModuleObject *)module_future$backports)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_9, tmp_import_globals_9, const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_recursive_repr );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain_recursive_repr, tmp_assign_source_14 );
    tmp_import_globals_10 = ((PyModuleObject *)module_future$backports)->md_dict;
    frame_module->f_lineno = 17;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_misc, tmp_import_globals_10, tmp_import_globals_10, const_tuple_faaa395c63e2ba1841eace66d2ef8002_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain__count_elements );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports, (Nuitka_StringObject *)const_str_plain__count_elements, tmp_assign_source_15 );

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

    return MOD_RETURN_VALUE( module_future$backports );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
