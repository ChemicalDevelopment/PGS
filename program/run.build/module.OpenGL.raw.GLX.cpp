/* Generated code for Python source for module 'OpenGL.raw.GLX'
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

/* The _module_OpenGL$raw$GLX is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenGL$raw$GLX;
PyDictObject *moduledict_OpenGL$raw$GLX;

/* The module constants used, if any. */
extern PyObject *const_str_digest_bfe8ab4328a5466c3dbd700a824dfd10;
extern PyObject *const_str_digest_cfd442c8abfe631320a773801a677dcb;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_GLX;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_digest_04cdb923c24e615401a5245216a75768;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_digest_4727e65a8dcaa6d5cd593b68fb6ab24d;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_digest_5a0b70e69e945c3f9fdf1e59270ebecd;
extern PyObject *const_tuple_empty;
static PyObject *const_str_digest_de6ecef78e8ae9a347343da8a875c32c;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_de6ecef78e8ae9a347343da8a875c32c = UNSTREAM_STRING( &constant_bin[ 13078 ], 50, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_OpenGL$raw$GLX( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c5356f660e90964537171bf21728358d;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_de6ecef78e8ae9a347343da8a875c32c;
    codeobj_c5356f660e90964537171bf21728358d = MAKE_CODEOBJ( module_filename_obj, const_str_plain_GLX, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_OpenGL$raw$GLX =
{
    PyModuleDef_HEAD_INIT,
    "OpenGL.raw.GLX",   /* m_name */
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

MOD_INIT_DECL( OpenGL$raw$GLX )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_OpenGL$raw$GLX );
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

    // puts( "in initOpenGL$raw$GLX" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_OpenGL$raw$GLX = Py_InitModule4(
        "OpenGL.raw.GLX",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_OpenGL$raw$GLX = PyModule_Create( &mdef_OpenGL$raw$GLX );
#endif

    moduledict_OpenGL$raw$GLX = (PyDictObject *)((PyModuleObject *)module_OpenGL$raw$GLX)->md_dict;

    CHECK_OBJECT( module_OpenGL$raw$GLX );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_5a0b70e69e945c3f9fdf1e59270ebecd, module_OpenGL$raw$GLX );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_OpenGL$raw$GLX );

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
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyObject *tmp_star_imported_2;
    PyObject *tmp_star_imported_3;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_cfd442c8abfe631320a773801a677dcb;
    UPDATE_STRING_DICT0( moduledict_OpenGL$raw$GLX, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_de6ecef78e8ae9a347343da8a875c32c;
    UPDATE_STRING_DICT0( moduledict_OpenGL$raw$GLX, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_c5356f660e90964537171bf21728358d, module_OpenGL$raw$GLX );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_OpenGL$raw$GLX)->md_dict;
    frame_module->f_lineno = 2;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_digest_04cdb923c24e615401a5245216a75768, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_OpenGL$raw$GLX, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 2;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_2 = ((PyModuleObject *)module_OpenGL$raw$GLX)->md_dict;
    frame_module->f_lineno = 3;
    tmp_star_imported_2 = IMPORT_MODULE( const_str_digest_4727e65a8dcaa6d5cd593b68fb6ab24d, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_OpenGL$raw$GLX, true, tmp_star_imported_2 );
    Py_DECREF( tmp_star_imported_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 3;
        goto frame_exception_exit_1;
    }
    tmp_import_globals_3 = ((PyModuleObject *)module_OpenGL$raw$GLX)->md_dict;
    frame_module->f_lineno = 4;
    tmp_star_imported_3 = IMPORT_MODULE( const_str_digest_bfe8ab4328a5466c3dbd700a824dfd10, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_OpenGL$raw$GLX, true, tmp_star_imported_3 );
    Py_DECREF( tmp_star_imported_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 4;
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

    return MOD_RETURN_VALUE( module_OpenGL$raw$GLX );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
