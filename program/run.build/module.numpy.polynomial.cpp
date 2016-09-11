/* Generated code for Python source for module 'numpy.polynomial'
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

/* The _module_numpy$polynomial is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$polynomial;
PyDictObject *moduledict_numpy$polynomial;

/* The module constants used, if any. */
static PyObject *const_list_str_digest_b9e702d06599cce6460bbe2adf9625f3_list;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_Polynomial_tuple;
static PyObject *const_str_digest_13117039c6b0d0710f4482b27f37ae72;
static PyObject *const_tuple_str_plain_Legendre_tuple;
extern PyObject *const_str_plain_Laguerre;
extern PyObject *const_str_plain_Hermite;
extern PyObject *const_str_plain__numpy_tester;
extern PyObject *const_str_plain_hermite;
static PyObject *const_tuple_str_plain_HermiteE_tuple;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_str_digest_311480ed9e01ebed4183274dbebedab9;
static PyObject *const_tuple_str_plain_Hermite_tuple;
extern PyObject *const_str_plain_Polynomial;
extern PyObject *const_str_plain_Chebyshev;
extern PyObject *const_str_plain_Legendre;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_8b84b11583a2cc637a5db7437a6d9711;
static PyObject *const_tuple_str_plain_Chebyshev_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_bench;
static PyObject *const_str_digest_b9e702d06599cce6460bbe2adf9625f3;
extern PyObject *const_str_plain_laguerre;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_polynomial;
extern PyObject *const_str_plain_chebyshev;
extern PyObject *const_str_plain_legendre;
static PyObject *const_str_digest_04b4243876d243844512fa5395e6f10b;
extern PyObject *const_str_plain_HermiteE;
extern PyObject *const_str_plain_test;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
static PyObject *const_tuple_str_plain_Laguerre_tuple;
extern PyObject *const_tuple_str_plain__numpy_tester_tuple;
extern PyObject *const_str_plain_hermite_e;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_print_function;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_list_str_digest_b9e702d06599cce6460bbe2adf9625f3_list = PyList_New( 1 );
    const_str_digest_b9e702d06599cce6460bbe2adf9625f3 = UNSTREAM_STRING( &constant_bin[ 1487527 ], 55, 0 );
    PyList_SET_ITEM( const_list_str_digest_b9e702d06599cce6460bbe2adf9625f3_list, 0, const_str_digest_b9e702d06599cce6460bbe2adf9625f3 ); Py_INCREF( const_str_digest_b9e702d06599cce6460bbe2adf9625f3 );
    const_tuple_str_plain_Polynomial_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Polynomial_tuple, 0, const_str_plain_Polynomial ); Py_INCREF( const_str_plain_Polynomial );
    const_str_digest_13117039c6b0d0710f4482b27f37ae72 = UNSTREAM_STRING( &constant_bin[ 1487582 ], 777, 0 );
    const_tuple_str_plain_Legendre_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Legendre_tuple, 0, const_str_plain_Legendre ); Py_INCREF( const_str_plain_Legendre );
    const_tuple_str_plain_HermiteE_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_HermiteE_tuple, 0, const_str_plain_HermiteE ); Py_INCREF( const_str_plain_HermiteE );
    const_str_digest_311480ed9e01ebed4183274dbebedab9 = UNSTREAM_STRING( &constant_bin[ 1488359 ], 16, 0 );
    const_tuple_str_plain_Hermite_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Hermite_tuple, 0, const_str_plain_Hermite ); Py_INCREF( const_str_plain_Hermite );
    const_tuple_str_plain_Chebyshev_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Chebyshev_tuple, 0, const_str_plain_Chebyshev ); Py_INCREF( const_str_plain_Chebyshev );
    const_str_digest_04b4243876d243844512fa5395e6f10b = UNSTREAM_STRING( &constant_bin[ 1488375 ], 67, 0 );
    const_tuple_str_plain_Laguerre_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Laguerre_tuple, 0, const_str_plain_Laguerre ); Py_INCREF( const_str_plain_Laguerre );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$polynomial( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_42765de33dcaa51d2a50e096eb697545;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_04b4243876d243844512fa5395e6f10b;
    codeobj_42765de33dcaa51d2a50e096eb697545 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_polynomial, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$polynomial =
{
    PyModuleDef_HEAD_INIT,
    "numpy.polynomial",   /* m_name */
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

MOD_INIT_DECL( numpy$polynomial )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$polynomial );
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

    // puts( "in initnumpy$polynomial" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$polynomial = Py_InitModule4(
        "numpy.polynomial",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$polynomial = PyModule_Create( &mdef_numpy$polynomial );
#endif

    moduledict_numpy$polynomial = (PyDictObject *)((PyModuleObject *)module_numpy$polynomial)->md_dict;

    CHECK_OBJECT( module_numpy$polynomial );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_311480ed9e01ebed4183274dbebedab9, module_numpy$polynomial );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$polynomial );

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
    PyObject *tmp_called_name_2;
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
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_13117039c6b0d0710f4482b27f37ae72;
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_04b4243876d243844512fa5395e6f10b;
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_b9e702d06599cce6460bbe2adf9625f3_list );
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_42765de33dcaa51d2a50e096eb697545, module_numpy$polynomial );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_numpy$polynomial)->md_dict;
    frame_module->f_lineno = 18;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_polynomial, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_Polynomial_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Polynomial );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_Polynomial, tmp_assign_source_7 );
    tmp_import_globals_2 = ((PyModuleObject *)module_numpy$polynomial)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_chebyshev, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_Chebyshev_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_Chebyshev );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_Chebyshev, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_numpy$polynomial)->md_dict;
    frame_module->f_lineno = 20;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_legendre, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_Legendre_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_Legendre );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_Legendre, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_numpy$polynomial)->md_dict;
    frame_module->f_lineno = 21;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_hermite, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_Hermite_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_Hermite );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_Hermite, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_numpy$polynomial)->md_dict;
    frame_module->f_lineno = 22;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_hermite_e, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_HermiteE_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_HermiteE );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_HermiteE, tmp_assign_source_11 );
    tmp_import_globals_6 = ((PyModuleObject *)module_numpy$polynomial)->md_dict;
    frame_module->f_lineno = 23;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_laguerre, tmp_import_globals_6, tmp_import_globals_6, const_tuple_str_plain_Laguerre_tuple, const_int_pos_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_Laguerre );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_Laguerre, tmp_assign_source_12 );
    tmp_import_globals_7 = ((PyModuleObject *)module_numpy$polynomial)->md_dict;
    frame_module->f_lineno = 25;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_8b84b11583a2cc637a5db7437a6d9711, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain__numpy_tester_tuple, const_int_0 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain__numpy_tester );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain__numpy_tester, tmp_assign_source_13 );
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain__numpy_tester );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numpy_tester );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numpy_tester" );
        exception_tb = NULL;

        exception_lineno = 26;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 26;
    tmp_source_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_test );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 26;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_test, tmp_assign_source_14 );
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain__numpy_tester );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__numpy_tester );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_numpy_tester" );
        exception_tb = NULL;

        exception_lineno = 27;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 27;
    tmp_source_name_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_bench );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 27;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_numpy$polynomial, (Nuitka_StringObject *)const_str_plain_bench, tmp_assign_source_15 );

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

    return MOD_RETURN_VALUE( module_numpy$polynomial );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
