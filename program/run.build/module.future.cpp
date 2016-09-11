/* Generated code for Python source for module 'future'
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

/* The _module_future is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future;
PyDictObject *moduledict_future;

/* The module constants used, if any. */
static PyObject *const_str_plain___ver_minor__;
static PyObject *const_str_plain___ver_major__;
static PyObject *const_str_digest_369fe4b854afa41a63afd0e294316cc3;
static PyObject *const_str_plain___ver_sub__;
static PyObject *const_str_digest_b3c9317719292ccb6a12a4d7fa625dd3;
static PyObject *const_str_plain_MIT;
extern PyObject *const_int_pos_15;
static PyObject *const_str_digest_c835de59491d71f5fa4214a52e59c916;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___author__;
static PyObject *const_str_digest_89cf78a9145c95acc270f51b88917d19;
extern PyObject *const_int_0;
static PyObject *const_str_digest_51e69dd6602d0f20f6bba6654aab4f3e;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
static PyObject *const_list_str_digest_b3c9317719292ccb6a12a4d7fa625dd3_list;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_empty;
static PyObject *const_str_plain___title__;
extern PyObject *const_str_plain___license__;
extern PyObject *const_str_plain_future;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain___copyright__;
static PyObject *const_str_plain___ver_patch__;
static PyObject *const_str_digest_1efe19ca3a448b736c47e11804beaf90;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain___ver_minor__ = UNSTREAM_STRING( &constant_bin[ 78648 ], 13, 1 );
    const_str_plain___ver_major__ = UNSTREAM_STRING( &constant_bin[ 78661 ], 13, 1 );
    const_str_digest_369fe4b854afa41a63afd0e294316cc3 = UNSTREAM_STRING( &constant_bin[ 78674 ], 57, 0 );
    const_str_plain___ver_sub__ = UNSTREAM_STRING( &constant_bin[ 78731 ], 11, 1 );
    const_str_digest_b3c9317719292ccb6a12a4d7fa625dd3 = UNSTREAM_STRING( &constant_bin[ 78674 ], 45, 0 );
    const_str_plain_MIT = UNSTREAM_STRING( &constant_bin[ 23551 ], 3, 1 );
    const_str_digest_c835de59491d71f5fa4214a52e59c916 = UNSTREAM_STRING( &constant_bin[ 78742 ], 10, 0 );
    const_str_digest_89cf78a9145c95acc270f51b88917d19 = UNSTREAM_STRING( &constant_bin[ 78752 ], 43, 0 );
    const_str_digest_51e69dd6602d0f20f6bba6654aab4f3e = UNSTREAM_STRING( &constant_bin[ 78795 ], 2666, 0 );
    const_list_str_digest_b3c9317719292ccb6a12a4d7fa625dd3_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_b3c9317719292ccb6a12a4d7fa625dd3_list, 0, const_str_digest_b3c9317719292ccb6a12a4d7fa625dd3 ); Py_INCREF( const_str_digest_b3c9317719292ccb6a12a4d7fa625dd3 );
    const_str_plain___title__ = UNSTREAM_STRING( &constant_bin[ 81461 ], 9, 1 );
    const_str_plain___ver_patch__ = UNSTREAM_STRING( &constant_bin[ 81470 ], 13, 1 );
    const_str_digest_1efe19ca3a448b736c47e11804beaf90 = UNSTREAM_STRING( &constant_bin[ 81108 ], 12, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_c83fb13ff1789682847a69aa2be0a537;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_369fe4b854afa41a63afd0e294316cc3;
    codeobj_c83fb13ff1789682847a69aa2be0a537 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_future, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future =
{
    PyModuleDef_HEAD_INIT,
    "future",   /* m_name */
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

MOD_INIT_DECL( future )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future );
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

    // puts( "in initfuture" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future = Py_InitModule4(
        "future",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_future = PyModule_Create( &mdef_future );
#endif

    moduledict_future = (PyDictObject *)((PyModuleObject *)module_future)->md_dict;

    CHECK_OBJECT( module_future );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_future, module_future );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_future );

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
    PyObject *tmp_left_name_1;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_51e69dd6602d0f20f6bba6654aab4f3e;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_369fe4b854afa41a63afd0e294316cc3;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_b3c9317719292ccb6a12a4d7fa625dd3_list );
    UPDATE_STRING_DICT1( moduledict_future, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_plain_future;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___title__, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_1efe19ca3a448b736c47e11804beaf90;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___author__, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_MIT;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___license__, tmp_assign_source_6 );
    tmp_assign_source_7 = const_str_digest_89cf78a9145c95acc270f51b88917d19;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___copyright__, tmp_assign_source_7 );
    tmp_assign_source_8 = const_int_0;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_major__, tmp_assign_source_8 );
    tmp_assign_source_9 = const_int_pos_15;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_minor__, tmp_assign_source_9 );
    tmp_assign_source_10 = const_int_pos_2;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_patch__, tmp_assign_source_10 );
    tmp_assign_source_11 = const_str_empty;
    UPDATE_STRING_DICT0( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_sub__, tmp_assign_source_11 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_c83fb13ff1789682847a69aa2be0a537, module_future );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_left_name_1 = const_str_digest_c835de59491d71f5fa4214a52e59c916;
    tmp_right_name_1 = PyTuple_New( 4 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_major__ );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___ver_major__ );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__ver_major__" );
        exception_tb = NULL;

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_minor__ );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___ver_minor__ );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__ver_minor__" );
        exception_tb = NULL;

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_patch__ );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___ver_patch__ );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__ver_patch__" );
        exception_tb = NULL;

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_future, (Nuitka_StringObject *)const_str_plain___ver_sub__ );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___ver_sub__ );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__ver_sub__" );
        exception_tb = NULL;

        exception_lineno = 94;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 3, tmp_tuple_element_1 );
    tmp_assign_source_12 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_12 );

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

    return MOD_RETURN_VALUE( module_future );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
