/* Generated code for Python source for module 'future.backports.email'
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

/* The _module_future$backports$email is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$backports$email;
PyDictObject *moduledict_future$backports$email;

/* The module constants used, if any. */
static PyObject *const_unicode_plain_header;
extern PyObject *const_str_plain_surrogateescape;
static PyObject *const_str_digest_306a1c027ad35598fec47706cf619a1c;
static PyObject *const_unicode_plain_message_from_file;
static PyObject *const_tuple_ea5769b86ffca871976b136a6f086911_tuple;
extern PyObject *const_str_plain_parsestr;
static PyObject *const_unicode_plain_generator;
extern PyObject *const_str_digest_a44a0b4cd7be7a520c3595ca4d6522fb;
static PyObject *const_tuple_str_plain_Parser_tuple;
extern PyObject *const_str_plain_email;
extern PyObject *const_str_plain_BytesParser;
static PyObject *const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple;
extern PyObject *const_str_digest_d19bf663764a0b15d5e8f7167c910e4e;
static PyObject *const_unicode_plain_message_from_string;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_kws;
static PyObject *const_unicode_digest_7021414e710b97d4b9ffdc814b3e115b;
static PyObject *const_unicode_plain_base64mime;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_parse;
static PyObject *const_unicode_plain_mime;
extern PyObject *const_str_plain_Parser;
static PyObject *const_unicode_plain_feedparser;
static PyObject *const_unicode_digest_8241d94f3f38fd04f85017d6481c999f;
extern PyObject *const_str_plain___doc__;
static PyObject *const_unicode_plain_quoprimime;
extern PyObject *const_str_plain___all__;
static PyObject *const_unicode_digest_3b7932806a101349ea3f70a5ea1b2d62;
extern PyObject *const_int_0;
extern PyObject *const_str_plain_register_surrogateescape;
static PyObject *const_unicode_plain_utils;
static PyObject *const_unicode_plain_encoders;
static PyObject *const_str_plain_message_from_bytes;
static PyObject *const_tuple_str_plain_surrogateescape_tuple;
extern PyObject *const_str_plain___file__;
extern PyObject *const_str_plain___version__;
extern PyObject *const_unicode_plain_message;
static PyObject *const_unicode_digest_8938abcc2e9a3814d2031b06a773099e;
static PyObject *const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple;
static PyObject *const_tuple_str_plain_BytesParser_tuple;
static PyObject *const_unicode_plain_parser;
extern PyObject *const_str_plain_message_from_string;
extern PyObject *const_str_plain_fp;
static PyObject *const_unicode_digest_9d39f38d2d4c5d9ed2831f2dd1614500;
extern PyObject *const_str_plain_parsebytes;
static PyObject *const_unicode_plain_message_from_binary_file;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain___path__;
static PyObject *const_str_digest_797b852fe3eba7d7639f0020257835c5;
static PyObject *const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple;
static PyObject *const_list_str_digest_797b852fe3eba7d7639f0020257835c5_list;
static PyObject *const_unicode_digest_9be3b7477143c298d0d99ee8f2ddca56;
static PyObject *const_str_plain_message_from_binary_file;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_division;
static PyObject *const_unicode_plain_errors;
static PyObject *const_str_plain_message_from_file;
extern PyObject *const_unicode_plain_charset;
extern PyObject *const_str_plain_args;
static PyObject *const_unicode_plain_message_from_bytes;
extern PyObject *const_str_digest_118c8611317729818c37c760127e23b2;
static PyObject *const_list_33396c4d198184e17eae3120a4bd99cc_list;
static PyObject *const_unicode_plain_iterators;
extern PyObject *const_str_plain_s;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_unicode_plain_header = UNSTREAM_UNICODE( &constant_bin[ 10491 ], 6 );
    const_str_digest_306a1c027ad35598fec47706cf619a1c = UNSTREAM_STRING( &constant_bin[ 91271 ], 73, 0 );
    const_unicode_plain_message_from_file = UNSTREAM_UNICODE( &constant_bin[ 91344 ], 17 );
    const_tuple_ea5769b86ffca871976b136a6f086911_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    const_str_plain_kws = UNSTREAM_STRING( &constant_bin[ 91361 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 3, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    const_unicode_plain_generator = UNSTREAM_UNICODE( &constant_bin[ 12899 ], 9 );
    const_tuple_str_plain_Parser_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_Parser_tuple, 0, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 3, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    const_unicode_plain_message_from_string = UNSTREAM_UNICODE( &constant_bin[ 91364 ], 19 );
    const_unicode_digest_7021414e710b97d4b9ffdc814b3e115b = UNSTREAM_UNICODE( &constant_bin[ 91383 ], 138 );
    const_unicode_plain_base64mime = UNSTREAM_UNICODE( &constant_bin[ 91521 ], 10 );
    const_unicode_plain_mime = UNSTREAM_UNICODE( &constant_bin[ 91527 ], 4 );
    const_unicode_plain_feedparser = UNSTREAM_UNICODE( &constant_bin[ 91531 ], 10 );
    const_unicode_digest_8241d94f3f38fd04f85017d6481c999f = UNSTREAM_UNICODE( &constant_bin[ 91541 ], 118 );
    const_unicode_plain_quoprimime = UNSTREAM_UNICODE( &constant_bin[ 91659 ], 10 );
    const_unicode_digest_3b7932806a101349ea3f70a5ea1b2d62 = UNSTREAM_UNICODE( &constant_bin[ 91669 ], 124 );
    const_unicode_plain_utils = UNSTREAM_UNICODE( &constant_bin[ 91793 ], 5 );
    const_unicode_plain_encoders = UNSTREAM_UNICODE( &constant_bin[ 91798 ], 8 );
    const_str_plain_message_from_bytes = UNSTREAM_STRING( &constant_bin[ 91806 ], 18, 1 );
    const_tuple_str_plain_surrogateescape_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_surrogateescape_tuple, 0, const_str_plain_surrogateescape ); Py_INCREF( const_str_plain_surrogateescape );
    const_unicode_digest_8938abcc2e9a3814d2031b06a773099e = UNSTREAM_UNICODE( &constant_bin[ 91824 ], 126 );
    const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 3, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    const_tuple_str_plain_BytesParser_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_BytesParser_tuple, 0, const_str_plain_BytesParser ); Py_INCREF( const_str_plain_BytesParser );
    const_unicode_plain_parser = UNSTREAM_UNICODE( &constant_bin[ 75989 ], 6 );
    const_unicode_digest_9d39f38d2d4c5d9ed2831f2dd1614500 = UNSTREAM_UNICODE( &constant_bin[ 91950 ], 5 );
    const_unicode_plain_message_from_binary_file = UNSTREAM_UNICODE( &constant_bin[ 91955 ], 24 );
    const_str_digest_797b852fe3eba7d7639f0020257835c5 = UNSTREAM_STRING( &constant_bin[ 91271 ], 61, 0 );
    const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 0, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 2, const_str_plain_kws ); Py_INCREF( const_str_plain_kws );
    PyTuple_SET_ITEM( const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 3, const_str_plain_Parser ); Py_INCREF( const_str_plain_Parser );
    const_list_str_digest_797b852fe3eba7d7639f0020257835c5_list = PyList_New( 1 );
    PyList_SET_ITEM( const_list_str_digest_797b852fe3eba7d7639f0020257835c5_list, 0, const_str_digest_797b852fe3eba7d7639f0020257835c5 ); Py_INCREF( const_str_digest_797b852fe3eba7d7639f0020257835c5 );
    const_unicode_digest_9be3b7477143c298d0d99ee8f2ddca56 = UNSTREAM_UNICODE( &constant_bin[ 91979 ], 145 );
    const_str_plain_message_from_binary_file = UNSTREAM_STRING( &constant_bin[ 91955 ], 24, 1 );
    const_unicode_plain_errors = UNSTREAM_UNICODE( &constant_bin[ 4136 ], 6 );
    const_str_plain_message_from_file = UNSTREAM_STRING( &constant_bin[ 91344 ], 17, 1 );
    const_unicode_plain_message_from_bytes = UNSTREAM_UNICODE( &constant_bin[ 91806 ], 18 );
    const_list_33396c4d198184e17eae3120a4bd99cc_list = PyList_New( 17 );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 0, const_unicode_plain_base64mime ); Py_INCREF( const_unicode_plain_base64mime );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 1, const_unicode_plain_charset ); Py_INCREF( const_unicode_plain_charset );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 2, const_unicode_plain_encoders ); Py_INCREF( const_unicode_plain_encoders );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 3, const_unicode_plain_errors ); Py_INCREF( const_unicode_plain_errors );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 4, const_unicode_plain_feedparser ); Py_INCREF( const_unicode_plain_feedparser );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 5, const_unicode_plain_generator ); Py_INCREF( const_unicode_plain_generator );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 6, const_unicode_plain_header ); Py_INCREF( const_unicode_plain_header );
    const_unicode_plain_iterators = UNSTREAM_UNICODE( &constant_bin[ 92124 ], 9 );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 7, const_unicode_plain_iterators ); Py_INCREF( const_unicode_plain_iterators );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 8, const_unicode_plain_message ); Py_INCREF( const_unicode_plain_message );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 9, const_unicode_plain_message_from_file ); Py_INCREF( const_unicode_plain_message_from_file );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 10, const_unicode_plain_message_from_binary_file ); Py_INCREF( const_unicode_plain_message_from_binary_file );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 11, const_unicode_plain_message_from_string ); Py_INCREF( const_unicode_plain_message_from_string );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 12, const_unicode_plain_message_from_bytes ); Py_INCREF( const_unicode_plain_message_from_bytes );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 13, const_unicode_plain_mime ); Py_INCREF( const_unicode_plain_mime );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 14, const_unicode_plain_parser ); Py_INCREF( const_unicode_plain_parser );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 15, const_unicode_plain_quoprimime ); Py_INCREF( const_unicode_plain_quoprimime );
    PyList_SET_ITEM( const_list_33396c4d198184e17eae3120a4bd99cc_list, 16, const_unicode_plain_utils ); Py_INCREF( const_unicode_plain_utils );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$backports$email( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_a9fe9f32591df0c96e48dccbe910798b;
static PyCodeObject *codeobj_48f7e7a7135d158d974394dfd40685c4;
static PyCodeObject *codeobj_d96c357c627dd6690cc1b00542d2ab1a;
static PyCodeObject *codeobj_370771b19051659331c8192e1cf2bc57;
static PyCodeObject *codeobj_0310d923a5d11a21db9f544ad94f7458;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_306a1c027ad35598fec47706cf619a1c;
    codeobj_a9fe9f32591df0c96e48dccbe910798b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_email, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_48f7e7a7135d158d974394dfd40685c4 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_binary_file, 72, const_tuple_ea5769b86ffca871976b136a6f086911_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_d96c357c627dd6690cc1b00542d2ab1a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_bytes, 56, const_tuple_f2076a9f721fadbab7d7e64a5a79dc3f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_370771b19051659331c8192e1cf2bc57 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_file, 64, const_tuple_str_plain_fp_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_0310d923a5d11a21db9f544ad94f7458 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_message_from_string, 48, const_tuple_str_plain_s_str_plain_args_str_plain_kws_str_plain_Parser_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_future$backports$email$$$function_1_message_from_string(  );


static PyObject *MAKE_FUNCTION_future$backports$email$$$function_2_message_from_bytes(  );


static PyObject *MAKE_FUNCTION_future$backports$email$$$function_3_message_from_file(  );


static PyObject *MAKE_FUNCTION_future$backports$email$$$function_4_message_from_binary_file(  );


// The module function definitions.
static PyObject *impl_future$backports$email$$$function_1_message_from_string( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_Parser = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0310d923a5d11a21db9f544ad94f7458, module_future$backports$email );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$backports$email)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_s )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_s,
            par_s
        );

        assert( res == 0 );
    }

    if ( par_args )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_args,
            par_args
        );

        assert( res == 0 );
    }

    if ( par_kws )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_kws,
            par_kws
        );

        assert( res == 0 );
    }

    if ( var_Parser )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_Parser,
            var_Parser
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 53;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_a44a0b4cd7be7a520c3595ca4d6522fb, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_Parser_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Parser );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 53;
        goto frame_exception_exit_1;
    }
    assert( var_Parser == NULL );
    var_Parser = tmp_assign_source_1;

    tmp_dircall_arg1_1 = var_Parser;

    tmp_dircall_arg2_1 = par_args;

    tmp_dircall_arg3_1 = par_kws;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parsestr );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_s;

    frame_function->f_lineno = 54;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    par_s
                );

                assert( res == 0 );
            }

            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );

                assert( res == 0 );
            }

            if ( par_kws )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kws,
                    par_kws
                );

                assert( res == 0 );
            }

            if ( var_Parser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_Parser,
                    var_Parser
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$backports$email$$$function_1_message_from_string );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    CHECK_OBJECT( (PyObject *)var_Parser );
    Py_DECREF( var_Parser );
    var_Parser = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_Parser );
    var_Parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$$$function_1_message_from_string );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_future$backports$email$$$function_2_message_from_bytes( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_BytesParser = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d96c357c627dd6690cc1b00542d2ab1a, module_future$backports$email );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$backports$email)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_s )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_s,
            par_s
        );

        assert( res == 0 );
    }

    if ( par_args )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_args,
            par_args
        );

        assert( res == 0 );
    }

    if ( par_kws )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_kws,
            par_kws
        );

        assert( res == 0 );
    }

    if ( var_BytesParser )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_BytesParser,
            var_BytesParser
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 61;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_a44a0b4cd7be7a520c3595ca4d6522fb, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_BytesParser_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BytesParser );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    assert( var_BytesParser == NULL );
    var_BytesParser = tmp_assign_source_1;

    tmp_dircall_arg1_1 = var_BytesParser;

    tmp_dircall_arg2_1 = par_args;

    tmp_dircall_arg3_1 = par_kws;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parsebytes );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_s;

    frame_function->f_lineno = 62;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_s )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_s,
                    par_s
                );

                assert( res == 0 );
            }

            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );

                assert( res == 0 );
            }

            if ( par_kws )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kws,
                    par_kws
                );

                assert( res == 0 );
            }

            if ( var_BytesParser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_BytesParser,
                    var_BytesParser
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$backports$email$$$function_2_message_from_bytes );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    CHECK_OBJECT( (PyObject *)var_BytesParser );
    Py_DECREF( var_BytesParser );
    var_BytesParser = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_BytesParser );
    var_BytesParser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$$$function_2_message_from_bytes );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_future$backports$email$$$function_3_message_from_file( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_Parser = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_370771b19051659331c8192e1cf2bc57, module_future$backports$email );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$backports$email)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_fp )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fp,
            par_fp
        );

        assert( res == 0 );
    }

    if ( par_args )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_args,
            par_args
        );

        assert( res == 0 );
    }

    if ( par_kws )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_kws,
            par_kws
        );

        assert( res == 0 );
    }

    if ( var_Parser )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_Parser,
            var_Parser
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 69;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_a44a0b4cd7be7a520c3595ca4d6522fb, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_Parser_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_Parser );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    assert( var_Parser == NULL );
    var_Parser = tmp_assign_source_1;

    tmp_dircall_arg1_1 = var_Parser;

    tmp_dircall_arg2_1 = par_args;

    tmp_dircall_arg3_1 = par_kws;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_fp;

    frame_function->f_lineno = 70;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_fp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fp,
                    par_fp
                );

                assert( res == 0 );
            }

            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );

                assert( res == 0 );
            }

            if ( par_kws )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kws,
                    par_kws
                );

                assert( res == 0 );
            }

            if ( var_Parser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_Parser,
                    var_Parser
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$backports$email$$$function_3_message_from_file );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    CHECK_OBJECT( (PyObject *)var_Parser );
    Py_DECREF( var_Parser );
    var_Parser = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_Parser );
    var_Parser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$$$function_3_message_from_file );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_future$backports$email$$$function_4_message_from_binary_file( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fp = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kws = python_pars[ 2 ];
    PyObject *var_BytesParser = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_locals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_48f7e7a7135d158d974394dfd40685c4, module_future$backports$email );
    frame_function = cache_frame_function;

    // Push the new frame as the currently active one.
    pushFrameStack( frame_function );

    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF( frame_function );
    assert( Py_REFCNT( frame_function ) == 2 ); // Frame stack

#if PYTHON_VERSION >= 340
    frame_function->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$backports$email)->md_dict;
    tmp_import_locals_1 = PyDict_New();
    if ( par_fp )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_fp,
            par_fp
        );

        assert( res == 0 );
    }

    if ( par_args )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_args,
            par_args
        );

        assert( res == 0 );
    }

    if ( par_kws )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_kws,
            par_kws
        );

        assert( res == 0 );
    }

    if ( var_BytesParser )
    {
        int res = PyDict_SetItem(
            tmp_import_locals_1,
            const_str_plain_BytesParser,
            var_BytesParser
        );

        assert( res == 0 );
    }

    frame_function->f_lineno = 77;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_a44a0b4cd7be7a520c3595ca4d6522fb, tmp_import_globals_1, tmp_import_locals_1, const_tuple_str_plain_BytesParser_tuple, const_int_0 );
    Py_DECREF( tmp_import_locals_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_BytesParser );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    assert( var_BytesParser == NULL );
    var_BytesParser = tmp_assign_source_1;

    tmp_dircall_arg1_1 = var_BytesParser;

    tmp_dircall_arg2_1 = par_args;

    tmp_dircall_arg3_1 = par_kws;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_source_name_1 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_parse );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_fp;

    frame_function->f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    // Put the previous frame back on top.
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto frame_no_exception_1;

    frame_return_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 0
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif

    {
        bool needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( frame_function, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_lineno != -1 )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( frame_function, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( par_fp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fp,
                    par_fp
                );

                assert( res == 0 );
            }

            if ( par_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_args,
                    par_args
                );

                assert( res == 0 );
            }

            if ( par_kws )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kws,
                    par_kws
                );

                assert( res == 0 );
            }

            if ( var_BytesParser )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_BytesParser,
                    var_BytesParser
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

    popFrameStack();

#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;

    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$backports$email$$$function_4_message_from_binary_file );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    CHECK_OBJECT( (PyObject *)var_BytesParser );
    Py_DECREF( var_BytesParser );
    var_BytesParser = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kws );
    Py_DECREF( par_kws );
    par_kws = NULL;

    Py_XDECREF( var_BytesParser );
    var_BytesParser = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$$$function_4_message_from_binary_file );
    return NULL;

function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static PyObject *MAKE_FUNCTION_future$backports$email$$$function_1_message_from_string(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$$$function_1_message_from_string,
        const_str_plain_message_from_string,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0310d923a5d11a21db9f544ad94f7458,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email,
        const_unicode_digest_8241d94f3f38fd04f85017d6481c999f
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$$$function_2_message_from_bytes(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$$$function_2_message_from_bytes,
        const_str_plain_message_from_bytes,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d96c357c627dd6690cc1b00542d2ab1a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email,
        const_unicode_digest_3b7932806a101349ea3f70a5ea1b2d62
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$$$function_3_message_from_file(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$$$function_3_message_from_file,
        const_str_plain_message_from_file,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_370771b19051659331c8192e1cf2bc57,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email,
        const_unicode_digest_7021414e710b97d4b9ffdc814b3e115b
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$$$function_4_message_from_binary_file(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$$$function_4_message_from_binary_file,
        const_str_plain_message_from_binary_file,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_48f7e7a7135d158d974394dfd40685c4,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email,
        const_unicode_digest_9be3b7477143c298d0d99ee8f2ddca56
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$backports$email =
{
    PyModuleDef_HEAD_INIT,
    "future.backports.email",   /* m_name */
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

MOD_INIT_DECL( future$backports$email )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$backports$email );
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

    // puts( "in initfuture$backports$email" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$backports$email = Py_InitModule4(
        "future.backports.email",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_future$backports$email = PyModule_Create( &mdef_future$backports$email );
#endif

    moduledict_future$backports$email = (PyDictObject *)((PyModuleObject *)module_future$backports$email)->md_dict;

    CHECK_OBJECT( module_future$backports$email );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_d19bf663764a0b15d5e8f7167c910e4e, module_future$backports$email );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_future$backports$email );

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
    PyObject *tmp_called_name_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_unicode_digest_8938abcc2e9a3814d2031b06a773099e;
    UPDATE_STRING_DICT0( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_306a1c027ad35598fec47706cf619a1c;
    UPDATE_STRING_DICT0( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = LIST_COPY( const_list_str_digest_797b852fe3eba7d7639f0020257835c5_list );
    UPDATE_STRING_DICT1( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___path__, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "unicode_literals");
    UPDATE_STRING_DICT0( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_a9fe9f32591df0c96e48dccbe910798b, module_future$backports$email );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$backports$email)->md_dict;
    frame_module->f_lineno = 16;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_118c8611317729818c37c760127e23b2, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_surrogateescape_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_surrogateescape );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 16;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_surrogateescape, tmp_assign_source_7 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_surrogateescape );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_surrogateescape );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "surrogateescape" );
        exception_tb = NULL;

        exception_lineno = 17;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_register_surrogateescape );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 17;
    tmp_unused = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 17;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
    tmp_assign_source_8 = const_unicode_digest_9d39f38d2d4c5d9ed2831f2dd1614500;
    UPDATE_STRING_DICT0( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_8 );
    tmp_assign_source_9 = LIST_COPY( const_list_33396c4d198184e17eae3120a4bd99cc_list );
    UPDATE_STRING_DICT1( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_9 );
    tmp_assign_source_10 = MAKE_FUNCTION_future$backports$email$$$function_1_message_from_string(  );
    UPDATE_STRING_DICT1( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_message_from_string, tmp_assign_source_10 );
    tmp_assign_source_11 = MAKE_FUNCTION_future$backports$email$$$function_2_message_from_bytes(  );
    UPDATE_STRING_DICT1( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_message_from_bytes, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_future$backports$email$$$function_3_message_from_file(  );
    UPDATE_STRING_DICT1( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_message_from_file, tmp_assign_source_12 );
    tmp_assign_source_13 = MAKE_FUNCTION_future$backports$email$$$function_4_message_from_binary_file(  );
    UPDATE_STRING_DICT1( moduledict_future$backports$email, (Nuitka_StringObject *)const_str_plain_message_from_binary_file, tmp_assign_source_13 );

    return MOD_RETURN_VALUE( module_future$backports$email );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
