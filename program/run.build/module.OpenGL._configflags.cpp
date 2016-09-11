/* Generated code for Python source for module 'OpenGL._configflags'
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

/* The _module_OpenGL$_configflags is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenGL$_configflags;
PyDictObject *moduledict_OpenGL$_configflags;

/* The module constants used, if any. */
extern PyObject *const_str_plain_ERROR_ON_COPY;
extern PyObject *const_str_plain_USE_ACCELERATE;
extern PyObject *const_str_plain__configflags;
extern PyObject *const_int_neg_1;
static PyObject *const_str_digest_698b2137980f8a831dd30ce3144d1639;
extern PyObject *const_str_plain_CONTEXT_CHECKING;
extern PyObject *const_str_plain_ERROR_LOGGING;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_FULL_LOGGING;
extern PyObject *const_str_plain_ERROR_CHECKING;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_334e4a68370d2742d3a3cf38daab0880;
extern PyObject *const_str_plain_ARRAY_SIZE_CHECKING;
static PyObject *const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple;
extern PyObject *const_str_plain_ALLOW_NUMPY_SCALARS;
extern PyObject *const_str_plain_STORE_POINTERS;
extern PyObject *const_str_plain_MODULE_ANNOTATIONS;
extern PyObject *const_str_plain_WARN_ON_FORMAT_UNAVAILABLE;
extern PyObject *const_str_plain_UNSIGNED_BYTE_IMAGES_AS_STRING;
extern PyObject *const_str_plain_OpenGL;
static PyObject *const_str_digest_7b76ea3b344c1e5f4ee9dc7a3a103f7d;
extern PyObject *const_str_plain_SIZE_1_ARRAY_UNPACK;
extern PyObject *const_str_plain_FORWARD_COMPATIBLE_ONLY;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_698b2137980f8a831dd30ce3144d1639 = UNSTREAM_STRING( &constant_bin[ 9936 ], 63, 0 );
    const_str_digest_334e4a68370d2742d3a3cf38daab0880 = UNSTREAM_STRING( &constant_bin[ 9999 ], 55, 0 );
    const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 0, const_str_plain_ERROR_CHECKING ); Py_INCREF( const_str_plain_ERROR_CHECKING );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 1, const_str_plain_ERROR_LOGGING ); Py_INCREF( const_str_plain_ERROR_LOGGING );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 2, const_str_plain_ERROR_ON_COPY ); Py_INCREF( const_str_plain_ERROR_ON_COPY );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 3, const_str_plain_ARRAY_SIZE_CHECKING ); Py_INCREF( const_str_plain_ARRAY_SIZE_CHECKING );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 4, const_str_plain_STORE_POINTERS ); Py_INCREF( const_str_plain_STORE_POINTERS );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 5, const_str_plain_WARN_ON_FORMAT_UNAVAILABLE ); Py_INCREF( const_str_plain_WARN_ON_FORMAT_UNAVAILABLE );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 6, const_str_plain_FORWARD_COMPATIBLE_ONLY ); Py_INCREF( const_str_plain_FORWARD_COMPATIBLE_ONLY );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 7, const_str_plain_SIZE_1_ARRAY_UNPACK ); Py_INCREF( const_str_plain_SIZE_1_ARRAY_UNPACK );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 8, const_str_plain_USE_ACCELERATE ); Py_INCREF( const_str_plain_USE_ACCELERATE );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 9, const_str_plain_CONTEXT_CHECKING ); Py_INCREF( const_str_plain_CONTEXT_CHECKING );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 10, const_str_plain_FULL_LOGGING ); Py_INCREF( const_str_plain_FULL_LOGGING );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 11, const_str_plain_ALLOW_NUMPY_SCALARS ); Py_INCREF( const_str_plain_ALLOW_NUMPY_SCALARS );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 12, const_str_plain_UNSIGNED_BYTE_IMAGES_AS_STRING ); Py_INCREF( const_str_plain_UNSIGNED_BYTE_IMAGES_AS_STRING );
    PyTuple_SET_ITEM( const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, 13, const_str_plain_MODULE_ANNOTATIONS ); Py_INCREF( const_str_plain_MODULE_ANNOTATIONS );
    const_str_digest_7b76ea3b344c1e5f4ee9dc7a3a103f7d = UNSTREAM_STRING( &constant_bin[ 10054 ], 19, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_OpenGL$_configflags( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_d0ed07be65b44bf22813773ac1779073;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_334e4a68370d2742d3a3cf38daab0880;
    codeobj_d0ed07be65b44bf22813773ac1779073 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__configflags, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_OpenGL$_configflags =
{
    PyModuleDef_HEAD_INIT,
    "OpenGL._configflags",   /* m_name */
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

MOD_INIT_DECL( OpenGL$_configflags )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_OpenGL$_configflags );
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

    // puts( "in initOpenGL$_configflags" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_OpenGL$_configflags = Py_InitModule4(
        "OpenGL._configflags",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_OpenGL$_configflags = PyModule_Create( &mdef_OpenGL$_configflags );
#endif

    moduledict_OpenGL$_configflags = (PyDictObject *)((PyModuleObject *)module_OpenGL$_configflags)->md_dict;

    CHECK_OBJECT( module_OpenGL$_configflags );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7b76ea3b344c1e5f4ee9dc7a3a103f7d, module_OpenGL$_configflags );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_OpenGL$_configflags );

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
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_698b2137980f8a831dd30ce3144d1639;
    UPDATE_STRING_DICT0( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_334e4a68370d2742d3a3cf38daab0880;
    UPDATE_STRING_DICT0( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_d0ed07be65b44bf22813773ac1779073, module_OpenGL$_configflags );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_1, tmp_import_globals_1, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_ERROR_CHECKING );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_ERROR_CHECKING, tmp_assign_source_3 );
    tmp_import_globals_2 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_2, tmp_import_globals_2, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_ERROR_LOGGING );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_ERROR_LOGGING, tmp_assign_source_4 );
    tmp_import_globals_3 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_3, tmp_import_globals_3, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_ERROR_ON_COPY );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_ERROR_ON_COPY, tmp_assign_source_5 );
    tmp_import_globals_4 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_4, tmp_import_globals_4, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ARRAY_SIZE_CHECKING );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_ARRAY_SIZE_CHECKING, tmp_assign_source_6 );
    tmp_import_globals_5 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_5, tmp_import_globals_5, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_STORE_POINTERS );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_STORE_POINTERS, tmp_assign_source_7 );
    tmp_import_globals_6 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_6, tmp_import_globals_6, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_WARN_ON_FORMAT_UNAVAILABLE );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_WARN_ON_FORMAT_UNAVAILABLE, tmp_assign_source_8 );
    tmp_import_globals_7 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_7, tmp_import_globals_7, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_FORWARD_COMPATIBLE_ONLY );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_FORWARD_COMPATIBLE_ONLY, tmp_assign_source_9 );
    tmp_import_globals_8 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_8, tmp_import_globals_8, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_SIZE_1_ARRAY_UNPACK );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_SIZE_1_ARRAY_UNPACK, tmp_assign_source_10 );
    tmp_import_globals_9 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_9, tmp_import_globals_9, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_USE_ACCELERATE );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_USE_ACCELERATE, tmp_assign_source_11 );
    tmp_import_globals_10 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_10, tmp_import_globals_10, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_CONTEXT_CHECKING );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_CONTEXT_CHECKING, tmp_assign_source_12 );
    tmp_import_globals_11 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_11, tmp_import_globals_11, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_FULL_LOGGING );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_FULL_LOGGING, tmp_assign_source_13 );
    tmp_import_globals_12 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_12, tmp_import_globals_12, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_ALLOW_NUMPY_SCALARS );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_ALLOW_NUMPY_SCALARS, tmp_assign_source_14 );
    tmp_import_globals_13 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_13, tmp_import_globals_13, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_UNSIGNED_BYTE_IMAGES_AS_STRING );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_UNSIGNED_BYTE_IMAGES_AS_STRING, tmp_assign_source_15 );
    tmp_import_globals_14 = ((PyModuleObject *)module_OpenGL$_configflags)->md_dict;
    frame_module->f_lineno = 2;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_plain_OpenGL, tmp_import_globals_14, tmp_import_globals_14, const_tuple_ff41f2c294fd7496b3823ebf59b44f29_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_MODULE_ANNOTATIONS );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_OpenGL$_configflags, (Nuitka_StringObject *)const_str_plain_MODULE_ANNOTATIONS, tmp_assign_source_16 );

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

    return MOD_RETURN_VALUE( module_OpenGL$_configflags );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
