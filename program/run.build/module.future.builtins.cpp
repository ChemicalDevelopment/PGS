/* Generated code for Python source for module 'future.builtins'
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

/* The _module_future$builtins is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$builtins;
PyDictObject *moduledict_future$builtins;

/* The module constants used, if any. */
extern PyObject *const_str_plain_newlist;
extern PyObject *const_str_plain_builtins;
extern PyObject *const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2;
extern PyObject *const_str_plain_hex;
static PyObject *const_str_digest_966af219dd3510b5baffcdec176f9368;
extern PyObject *const_str_plain_utils;
static PyObject *const_str_digest_0b75f03c1b678fbfaff6985bddfa71d6;
extern PyObject *const_tuple_str_plain_utils_tuple;
static PyObject *const_list_ef9d79d9490155a6b72984fe1a6ca422_list;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_newdict;
static PyObject *const_tuple_c1ac707d44f3393a13d39121a733050d_tuple;
extern PyObject *const_str_plain_future;
extern PyObject *const_str_plain_str;
static PyObject *const_list_str_digest_0b75f03c1b678fbfaff6985bddfa71d6_list;
extern PyObject *const_str_plain_pow;
static PyObject *const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple;
extern PyObject *const_str_plain_map;
extern PyObject *const_str_plain_round;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain___all__;
extern PyObject *const_str_plain_newrange;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_object;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_next;
extern PyObject *const_str_plain_newint;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_digest_35567259d2afb422e342c2eb1620e11c;
extern PyObject *const_str_plain_newobject;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_oct;
extern PyObject *const_str_digest_96b7425961f73d341c56a14b3f3d9e23;
extern PyObject *const_str_plain_chr;
extern PyObject *const_str_plain_isinstance;
extern PyObject *const_str_plain_PY3;
extern PyObject *const_str_plain_range;
extern PyObject *const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4;
extern PyObject *const_str_plain_ascii;
extern PyObject *const_str_plain___path__;
extern PyObject *const_str_plain_super;
extern PyObject *const_str_plain_filter;
extern PyObject *const_str_plain_newstr;
extern PyObject *const_tuple_str_plain_PY3_tuple;
extern PyObject *const_str_plain_int;
static PyObject *const_str_digest_7cbcdc8c38075b403161c78a6ef71ffd;
extern PyObject *const_str_plain_input;
extern PyObject *const_str_plain_list;
extern PyObject *const_str_plain_newbytes;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
static PyObject *const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple;
extern PyObject *const_str_plain_open;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_digest_966af219dd3510b5baffcdec176f9368 = UNSTREAM_STRING( &constant_bin[ 230572 ], 66, 0 );
    const_str_digest_0b75f03c1b678fbfaff6985bddfa71d6 = UNSTREAM_STRING( &constant_bin[ 230572 ], 54, 0 );
    const_list_ef9d79d9490155a6b72984fe1a6ca422_list = PyMarshal_ReadObjectFromString( (char *)&constant_bin[ 230638 ], 187 );
    const_tuple_c1ac707d44f3393a13d39121a733050d_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 0, const_str_plain_newbytes ); Py_INCREF( const_str_plain_newbytes );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 1, const_str_plain_newdict ); Py_INCREF( const_str_plain_newdict );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 2, const_str_plain_newint ); Py_INCREF( const_str_plain_newint );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 3, const_str_plain_newlist ); Py_INCREF( const_str_plain_newlist );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 4, const_str_plain_newobject ); Py_INCREF( const_str_plain_newobject );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 5, const_str_plain_newrange ); Py_INCREF( const_str_plain_newrange );
    PyTuple_SET_ITEM( const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, 6, const_str_plain_newstr ); Py_INCREF( const_str_plain_newstr );
    const_list_str_digest_0b75f03c1b678fbfaff6985bddfa71d6_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_0b75f03c1b678fbfaff6985bddfa71d6_list, 0, const_str_digest_0b75f03c1b678fbfaff6985bddfa71d6 ); Py_INCREF( const_str_digest_0b75f03c1b678fbfaff6985bddfa71d6 );
    const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, 0, const_str_plain_filter ); Py_INCREF( const_str_plain_filter );
    PyTuple_SET_ITEM( const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, 1, const_str_plain_map ); Py_INCREF( const_str_plain_map );
    PyTuple_SET_ITEM( const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, 2, const_str_plain_zip ); Py_INCREF( const_str_plain_zip );
    const_str_digest_7cbcdc8c38075b403161c78a6ef71ffd = UNSTREAM_STRING( &constant_bin[ 230825 ], 223, 0 );
    const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple = PyTuple_New( 11 );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 0, const_str_plain_ascii ); Py_INCREF( const_str_plain_ascii );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 1, const_str_plain_chr ); Py_INCREF( const_str_plain_chr );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 2, const_str_plain_hex ); Py_INCREF( const_str_plain_hex );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 3, const_str_plain_input ); Py_INCREF( const_str_plain_input );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 4, const_str_plain_isinstance ); Py_INCREF( const_str_plain_isinstance );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 5, const_str_plain_next ); Py_INCREF( const_str_plain_next );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 6, const_str_plain_oct ); Py_INCREF( const_str_plain_oct );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 7, const_str_plain_open ); Py_INCREF( const_str_plain_open );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 8, const_str_plain_pow ); Py_INCREF( const_str_plain_pow );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 9, const_str_plain_round ); Py_INCREF( const_str_plain_round );
    PyTuple_SET_ITEM( const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, 10, const_str_plain_super ); Py_INCREF( const_str_plain_super );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$builtins( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_332fc9f301f8cad6bea6515decea78db;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_966af219dd3510b5baffcdec176f9368;
    codeobj_332fc9f301f8cad6bea6515decea78db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_builtins, 1, const_tuple_empty, 0, CO_NOFREE );
}

// The module function declarations.


// The module function definitions.



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$builtins =
{
    PyModuleDef_HEAD_INIT,
    "future.builtins",   /* m_name */
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

MOD_INIT_DECL( future$builtins )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$builtins );
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

    // puts( "in initfuture$builtins" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$builtins = Py_InitModule4(
        "future.builtins",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_future$builtins = PyModule_Create( &mdef_future$builtins );
#endif

    moduledict_future$builtins = (PyDictObject *)((PyModuleObject *)module_future$builtins)->md_dict;

    CHECK_OBJECT( module_future$builtins );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2, module_future$builtins );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_future$builtins );

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
    PyObject *tmp_assign_source_19;
    PyObject *tmp_assign_source_20;
    PyObject *tmp_assign_source_21;
    PyObject *tmp_assign_source_22;
    PyObject *tmp_assign_source_23;
    PyObject *tmp_assign_source_24;
    PyObject *tmp_assign_source_25;
    PyObject *tmp_assign_source_26;
    PyObject *tmp_assign_source_27;
    PyObject *tmp_assign_source_28;
    PyObject *tmp_assign_source_29;
    PyObject *tmp_assign_source_30;
    PyObject *tmp_assign_source_31;
    PyObject *tmp_assign_source_32;
    PyObject *tmp_assign_source_33;
    PyObject *tmp_assign_source_34;
    PyObject *tmp_assign_source_35;
    PyObject *tmp_assign_source_36;
    PyObject *tmp_assign_source_37;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
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
    PyObject *tmp_import_globals_15;
    PyObject *tmp_import_globals_16;
    PyObject *tmp_import_globals_17;
    PyObject *tmp_import_globals_18;
    PyObject *tmp_import_globals_19;
    PyObject *tmp_import_globals_20;
    PyObject *tmp_import_globals_21;
    PyObject *tmp_import_globals_22;
    PyObject *tmp_import_globals_23;
    PyObject *tmp_import_globals_24;
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
    PyObject *tmp_import_name_from_15;
    PyObject *tmp_import_name_from_16;
    PyObject *tmp_import_name_from_17;
    PyObject *tmp_import_name_from_18;
    PyObject *tmp_import_name_from_19;
    PyObject *tmp_import_name_from_20;
    PyObject *tmp_import_name_from_21;
    PyObject *tmp_import_name_from_22;
    PyObject *tmp_import_name_from_23;
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
    tmp_assign_source_1 = const_str_digest_7cbcdc8c38075b403161c78a6ef71ffd;
    UPDATE_STRING_DICT0( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_966af219dd3510b5baffcdec176f9368;
    UPDATE_STRING_DICT0( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_0b75f03c1b678fbfaff6985bddfa71d6_list );
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_332fc9f301f8cad6bea6515decea78db, module_future$builtins );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_4 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_filter );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_filter, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_map );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_map, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 10;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_digest_b11cb6ef6fb95015fcdb3db466fd02b4, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_filter_str_plain_map_str_plain_zip_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_zip );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 10;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_zip, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_4, tmp_import_globals_4, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_ascii );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_ascii, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_5, tmp_import_globals_5, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_8 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_chr );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_chr, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_6 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_6, tmp_import_globals_6, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_6, const_str_plain_hex );
    Py_DECREF( tmp_import_name_from_6 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_hex, tmp_assign_source_9 );
    tmp_import_globals_7 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_7 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_7, tmp_import_globals_7, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_7, const_str_plain_input );
    Py_DECREF( tmp_import_name_from_7 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_input, tmp_assign_source_10 );
    tmp_import_globals_8 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_8 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_8, tmp_import_globals_8, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_8, const_str_plain_isinstance );
    Py_DECREF( tmp_import_name_from_8 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_isinstance, tmp_assign_source_11 );
    tmp_import_globals_9 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_9 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_9, tmp_import_globals_9, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_12 = IMPORT_NAME( tmp_import_name_from_9, const_str_plain_next );
    Py_DECREF( tmp_import_name_from_9 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_next, tmp_assign_source_12 );
    tmp_import_globals_10 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_10 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_10, tmp_import_globals_10, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = IMPORT_NAME( tmp_import_name_from_10, const_str_plain_oct );
    Py_DECREF( tmp_import_name_from_10 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_oct, tmp_assign_source_13 );
    tmp_import_globals_11 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_11 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_11, tmp_import_globals_11, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = IMPORT_NAME( tmp_import_name_from_11, const_str_plain_open );
    Py_DECREF( tmp_import_name_from_11 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_open, tmp_assign_source_14 );
    tmp_import_globals_12 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_12 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_12, tmp_import_globals_12, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = IMPORT_NAME( tmp_import_name_from_12, const_str_plain_pow );
    Py_DECREF( tmp_import_name_from_12 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_pow, tmp_assign_source_15 );
    tmp_import_globals_13 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_13 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_13, tmp_import_globals_13, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_16 = IMPORT_NAME( tmp_import_name_from_13, const_str_plain_round );
    Py_DECREF( tmp_import_name_from_13 );
    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_round, tmp_assign_source_16 );
    tmp_import_globals_14 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 13;
    tmp_import_name_from_14 = IMPORT_MODULE( const_str_digest_35567259d2afb422e342c2eb1620e11c, tmp_import_globals_14, tmp_import_globals_14, const_tuple_aae8aa72010f6354fac10fc3dd12340a_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_17 = IMPORT_NAME( tmp_import_name_from_14, const_str_plain_super );
    Py_DECREF( tmp_import_name_from_14 );
    if ( tmp_assign_source_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 13;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_super, tmp_assign_source_17 );
    tmp_import_globals_15 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 15;
    tmp_import_name_from_15 = IMPORT_MODULE( const_str_digest_118c8611317729818c37c760127e23b2, tmp_import_globals_15, tmp_import_globals_15, const_tuple_str_plain_PY3_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_18 = IMPORT_NAME( tmp_import_name_from_15, const_str_plain_PY3 );
    Py_DECREF( tmp_import_name_from_15 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 15;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_PY3, tmp_assign_source_18 );
    tmp_cond_value_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_PY3 );

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

        exception_lineno = 17;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
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
    tmp_import_globals_16 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 18;
    tmp_assign_source_19 = IMPORT_MODULE( const_str_plain_builtins, tmp_import_globals_16, tmp_import_globals_16, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins, tmp_assign_source_19 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;

        exception_lineno = 19;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_20 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_bytes );
    if ( tmp_assign_source_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_20 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;

        exception_lineno = 20;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_21 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_dict );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 20;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_dict, tmp_assign_source_21 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;

        exception_lineno = 21;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_22 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_int );
    if ( tmp_assign_source_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 21;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_22 );
    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_builtins );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "builtins" );
        exception_tb = NULL;

        exception_lineno = 22;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_23 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_list );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 22;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_list, tmp_assign_source_23 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

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

        exception_lineno = 23;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_24 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_object );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 23;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_24 );
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

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

        exception_lineno = 24;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_25 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_range );
    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 24;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_25 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_builtins );

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

        exception_lineno = 25;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_26 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_str );
    if ( tmp_assign_source_26 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 25;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_26 );
    tmp_assign_source_27 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_27 );
    goto branch_end_1;
    branch_no_1:;
    tmp_import_globals_17 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_16 = IMPORT_MODULE( const_str_digest_96b7425961f73d341c56a14b3f3d9e23, tmp_import_globals_17, tmp_import_globals_17, const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_28 = IMPORT_NAME( tmp_import_name_from_16, const_str_plain_newbytes );
    Py_DECREF( tmp_import_name_from_16 );
    if ( tmp_assign_source_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_28 );
    tmp_import_globals_18 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_17 = IMPORT_MODULE( const_str_digest_96b7425961f73d341c56a14b3f3d9e23, tmp_import_globals_18, tmp_import_globals_18, const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_17 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_17, const_str_plain_newdict );
    Py_DECREF( tmp_import_name_from_17 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_dict, tmp_assign_source_29 );
    tmp_import_globals_19 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_18 = IMPORT_MODULE( const_str_digest_96b7425961f73d341c56a14b3f3d9e23, tmp_import_globals_19, tmp_import_globals_19, const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_18, const_str_plain_newint );
    Py_DECREF( tmp_import_name_from_18 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_int, tmp_assign_source_30 );
    tmp_import_globals_20 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_19 = IMPORT_MODULE( const_str_digest_96b7425961f73d341c56a14b3f3d9e23, tmp_import_globals_20, tmp_import_globals_20, const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_31 = IMPORT_NAME( tmp_import_name_from_19, const_str_plain_newlist );
    Py_DECREF( tmp_import_name_from_19 );
    if ( tmp_assign_source_31 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_list, tmp_assign_source_31 );
    tmp_import_globals_21 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_20 = IMPORT_MODULE( const_str_digest_96b7425961f73d341c56a14b3f3d9e23, tmp_import_globals_21, tmp_import_globals_21, const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_20 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_32 = IMPORT_NAME( tmp_import_name_from_20, const_str_plain_newobject );
    Py_DECREF( tmp_import_name_from_20 );
    if ( tmp_assign_source_32 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_object, tmp_assign_source_32 );
    tmp_import_globals_22 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_21 = IMPORT_MODULE( const_str_digest_96b7425961f73d341c56a14b3f3d9e23, tmp_import_globals_22, tmp_import_globals_22, const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_33 = IMPORT_NAME( tmp_import_name_from_21, const_str_plain_newrange );
    Py_DECREF( tmp_import_name_from_21 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_33 );
    tmp_import_globals_23 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 28;
    tmp_import_name_from_22 = IMPORT_MODULE( const_str_digest_96b7425961f73d341c56a14b3f3d9e23, tmp_import_globals_23, tmp_import_globals_23, const_tuple_c1ac707d44f3393a13d39121a733050d_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_22 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_34 = IMPORT_NAME( tmp_import_name_from_22, const_str_plain_newstr );
    Py_DECREF( tmp_import_name_from_22 );
    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 28;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_str, tmp_assign_source_34 );
    branch_end_1:;
    tmp_import_globals_24 = ((PyModuleObject *)module_future$builtins)->md_dict;
    frame_module->f_lineno = 35;
    tmp_import_name_from_23 = IMPORT_MODULE( const_str_plain_future, tmp_import_globals_24, tmp_import_globals_24, const_tuple_str_plain_utils_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_35 = IMPORT_NAME( tmp_import_name_from_23, const_str_plain_utils );
    Py_DECREF( tmp_import_name_from_23 );
    if ( tmp_assign_source_35 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 35;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_utils, tmp_assign_source_35 );
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain_utils );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_utils );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "utils" );
        exception_tb = NULL;

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }

    tmp_cond_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_PY3 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_2;
    }
    else
    {
        goto branch_yes_2;
    }
    branch_yes_2:;
    tmp_assign_source_36 = LIST_COPY( const_list_ef9d79d9490155a6b72984fe1a6ca422_list );
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_36 );
    goto branch_end_2;
    branch_no_2:;
    tmp_assign_source_37 = PyList_New( 0 );
    UPDATE_STRING_DICT1( moduledict_future$builtins, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_37 );
    branch_end_2:;

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

    return MOD_RETURN_VALUE( module_future$builtins );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
