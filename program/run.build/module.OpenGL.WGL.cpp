/* Generated code for Python source for module 'OpenGL.WGL'
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

/* The _module_OpenGL$WGL is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_OpenGL$WGL;
PyDictObject *moduledict_OpenGL$WGL;

/* The module constants used, if any. */
extern PyObject *const_str_plain_wglUseFontBitmapsW;
static PyObject *const_str_digest_b6d4462dceb4e8aa0fbaa6aa8b7578d7;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_76a9441f4a40d282b2d3793b96496b86;
static PyObject *const_str_digest_9e92615a514c32f778a5f2ce845ff5ec;
static PyObject *const_str_plain_wglUseFontBitmaps;
extern PyObject *const_int_neg_1;
extern PyObject *const_tuple_str_chr_42_tuple;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_digest_08c76aff010c08d180c964b3d279984c;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_WGL;
static PyObject *const_list_str_digest_76a9441f4a40d282b2d3793b96496b86_list;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_b6d4462dceb4e8aa0fbaa6aa8b7578d7 = UNSTREAM_STRING( &constant_bin[ 9811 ], 10, 0 );
    const_str_digest_76a9441f4a40d282b2d3793b96496b86 = UNSTREAM_STRING( &constant_bin[ 9821 ], 43, 0 );
    const_str_digest_9e92615a514c32f778a5f2ce845ff5ec = UNSTREAM_STRING( &constant_bin[ 9864 ], 55, 0 );
    const_str_plain_wglUseFontBitmaps = UNSTREAM_STRING( &constant_bin[ 9919 ], 17, 1 );
    const_list_str_digest_76a9441f4a40d282b2d3793b96496b86_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_76a9441f4a40d282b2d3793b96496b86_list, 0, const_str_digest_76a9441f4a40d282b2d3793b96496b86 ); Py_INCREF( const_str_digest_76a9441f4a40d282b2d3793b96496b86 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_OpenGL$WGL( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_b8b070b48bce982e386aa2d5fd0a4b4b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_9e92615a514c32f778a5f2ce845ff5ec;
    codeobj_b8b070b48bce982e386aa2d5fd0a4b4b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_WGL, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_OpenGL$WGL =
{
    PyModuleDef_HEAD_INIT,
    "OpenGL.WGL",   /* m_name */
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

MOD_INIT_DECL( OpenGL$WGL )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_OpenGL$WGL );
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

    // puts( "in initOpenGL$WGL" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_OpenGL$WGL = Py_InitModule4(
        "OpenGL.WGL",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_OpenGL$WGL = PyModule_Create( &mdef_OpenGL$WGL );
#endif

    moduledict_OpenGL$WGL = (PyDictObject *)((PyModuleObject *)module_OpenGL$WGL)->md_dict;

    CHECK_OBJECT( module_OpenGL$WGL );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_b6d4462dceb4e8aa0fbaa6aa8b7578d7, module_OpenGL$WGL );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_OpenGL$WGL );

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
    PyObject *tmp_import_globals_1;
    bool tmp_result;
    PyObject *tmp_star_imported_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_OpenGL$WGL, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_9e92615a514c32f778a5f2ce845ff5ec;
    UPDATE_STRING_DICT0( moduledict_OpenGL$WGL, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_76a9441f4a40d282b2d3793b96496b86_list );
    UPDATE_STRING_DICT1( moduledict_OpenGL$WGL, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_b8b070b48bce982e386aa2d5fd0a4b4b, module_OpenGL$WGL );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_OpenGL$WGL)->md_dict;
    frame_module->f_lineno = 1;
    tmp_star_imported_1 = IMPORT_MODULE( const_str_digest_08c76aff010c08d180c964b3d279984c, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_chr_42_tuple, const_int_neg_1 );
    if ( tmp_star_imported_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_result = IMPORT_MODULE_STAR( module_OpenGL$WGL, true, tmp_star_imported_1 );
    Py_DECREF( tmp_star_imported_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 1;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = GET_STRING_DICT_VALUE( moduledict_OpenGL$WGL, (Nuitka_StringObject *)const_str_plain_wglUseFontBitmapsW );

    if (unlikely( tmp_assign_source_4 == NULL ))
    {
        tmp_assign_source_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_wglUseFontBitmapsW );
    }

    if ( tmp_assign_source_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "wglUseFontBitmapsW" );
        exception_tb = NULL;

        exception_lineno = 3;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_OpenGL$WGL, (Nuitka_StringObject *)const_str_plain_wglUseFontBitmaps, tmp_assign_source_4 );

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

    return MOD_RETURN_VALUE( module_OpenGL$WGL );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
