/* Generated code for Python source for module 'numpy.version'
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

/* The _module_numpy$version is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_numpy$version;
PyDictObject *moduledict_numpy$version;

/* The module constants used, if any. */
extern PyObject *const_str_digest_cad1fcb236d0fed73a31a019d414de2f;
static PyObject *const_str_digest_435b9dd4b4af2b8dfd2777793a6649fb;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain_release;
static PyObject *const_str_digest_87dd5b8b0f93d9a3a1c77d14610f1698;
extern PyObject *const_str_plain_version;
static PyObject *const_str_plain_short_version;
static PyObject *const_str_plain_full_version;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_tuple_empty;
static PyObject *const_str_plain_4092a9e160cc247a4a45724579a0c829733688ca;
extern PyObject *const_str_plain_git_revision;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_435b9dd4b4af2b8dfd2777793a6649fb = UNSTREAM_STRING( &constant_bin[ 1779776 ], 55, 0 );
    const_str_digest_87dd5b8b0f93d9a3a1c77d14610f1698 = UNSTREAM_STRING( &constant_bin[ 716055 ], 6, 0 );
    const_str_plain_short_version = UNSTREAM_STRING( &constant_bin[ 1779831 ], 13, 1 );
    const_str_plain_full_version = UNSTREAM_STRING( &constant_bin[ 1779844 ], 12, 1 );
    const_str_plain_4092a9e160cc247a4a45724579a0c829733688ca = UNSTREAM_STRING( &constant_bin[ 1779856 ], 40, 0 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_numpy$version( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_ade8bba88149353b63b393c6e99c9f2b;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_435b9dd4b4af2b8dfd2777793a6649fb;
    codeobj_ade8bba88149353b63b393c6e99c9f2b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_version, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_numpy$version =
{
    PyModuleDef_HEAD_INIT,
    "numpy.version",   /* m_name */
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

MOD_INIT_DECL( numpy$version )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_numpy$version );
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

    // puts( "in initnumpy$version" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_numpy$version = Py_InitModule4(
        "numpy.version",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_numpy$version = PyModule_Create( &mdef_numpy$version );
#endif

    moduledict_numpy$version = (PyDictObject *)((PyModuleObject *)module_numpy$version)->md_dict;

    CHECK_OBJECT( module_numpy$version );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_cad1fcb236d0fed73a31a019d414de2f, module_numpy$version );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_numpy$version );

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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = Py_None;
    UPDATE_STRING_DICT0( moduledict_numpy$version, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_435b9dd4b4af2b8dfd2777793a6649fb;
    UPDATE_STRING_DICT0( moduledict_numpy$version, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = const_str_digest_87dd5b8b0f93d9a3a1c77d14610f1698;
    UPDATE_STRING_DICT0( moduledict_numpy$version, (Nuitka_StringObject *)const_str_plain_short_version, tmp_assign_source_3 );
    tmp_assign_source_4 = const_str_digest_87dd5b8b0f93d9a3a1c77d14610f1698;
    UPDATE_STRING_DICT0( moduledict_numpy$version, (Nuitka_StringObject *)const_str_plain_version, tmp_assign_source_4 );
    tmp_assign_source_5 = const_str_digest_87dd5b8b0f93d9a3a1c77d14610f1698;
    UPDATE_STRING_DICT0( moduledict_numpy$version, (Nuitka_StringObject *)const_str_plain_full_version, tmp_assign_source_5 );
    tmp_assign_source_6 = const_str_plain_4092a9e160cc247a4a45724579a0c829733688ca;
    UPDATE_STRING_DICT0( moduledict_numpy$version, (Nuitka_StringObject *)const_str_plain_git_revision, tmp_assign_source_6 );
    tmp_assign_source_7 = Py_True;
    UPDATE_STRING_DICT0( moduledict_numpy$version, (Nuitka_StringObject *)const_str_plain_release, tmp_assign_source_7 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_ade8bba88149353b63b393c6e99c9f2b, module_numpy$version );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_numpy$version, (Nuitka_StringObject *)const_str_plain_release );

    if (unlikely( tmp_cond_value_1 == NULL ))
    {
        tmp_cond_value_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_release );
    }

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "release" );
        exception_tb = NULL;

        exception_lineno = 11;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 11;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_assign_source_8 = GET_STRING_DICT_VALUE( moduledict_numpy$version, (Nuitka_StringObject *)const_str_plain_full_version );

    if (unlikely( tmp_assign_source_8 == NULL ))
    {
        tmp_assign_source_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_full_version );
    }

    if ( tmp_assign_source_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "full_version" );
        exception_tb = NULL;

        exception_lineno = 12;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_numpy$version, (Nuitka_StringObject *)const_str_plain_version, tmp_assign_source_8 );
    branch_no_1:;

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

    return MOD_RETURN_VALUE( module_numpy$version );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
