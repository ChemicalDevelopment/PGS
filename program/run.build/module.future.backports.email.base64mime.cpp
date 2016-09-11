/* Generated code for Python source for module 'future.backports.email.base64mime'
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

/* The _module_future$backports$email$base64mime is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$backports$email$base64mime;
PyDictObject *moduledict_future$backports$email$base64mime;

/* The module constants used, if any. */
extern PyObject *const_unicode_plain_header_encode;
extern PyObject *const_unicode_newline;
extern PyObject *const_tuple_str_plain_b64encode_tuple;
static PyObject *const_str_plain_encvec;
extern PyObject *const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2;
extern PyObject *const_str_plain_EMPTYSTRING;
static PyObject *const_tuple_450d897e786a3f8a16f0909b3aeb3bc1_tuple;
extern PyObject *const_str_plain_leftover;
extern PyObject *const_tuple_unicode_digest_20861594150da1e43b5ee3f86b9deef6_tuple;
extern PyObject *const_str_plain_encode;
static PyObject *const_unicode_digest_f68a3db01b78fe08d1ae41575d5f3121;
extern PyObject *const_tuple_unicode_digest_0fb3f57013d21cde8ac4f9e3be987cc2_tuple;
extern PyObject *const_unicode_plain_body_encode;
static PyObject *const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple;
extern PyObject *const_str_plain_decode;
extern PyObject *const_unicode_plain_header_length;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_join;
extern PyObject *const_str_plain_header_encode;
extern PyObject *const_unicode_empty;
extern PyObject *const_str_plain_bytearray;
static PyObject *const_str_digest_7fa219dc697cb3e0cfbe6c1493081d5f;
extern PyObject *const_str_plain_absolute_import;
static PyObject *const_list_4e5537aecf97a87b09ef6010c6e3f466_list;
extern PyObject *const_str_plain_base64mime;
extern PyObject *const_str_plain_NL;
extern PyObject *const_str_plain_base64;
extern PyObject *const_str_plain_maxlinelen;
static PyObject *const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple;
extern PyObject *const_unicode_plain_decodestring;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_pos_76;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_bytes;
extern PyObject *const_str_plain_body_decode;
static PyObject *const_str_plain_MISC_LEN;
extern PyObject *const_unicode_plain_decode;
extern PyObject *const_unicode_digest_20861594150da1e43b5ee3f86b9deef6;
extern PyObject *const_str_plain_body_encode;
static PyObject *const_str_digest_906b0ba54e9bc94c06d1195b1c452650;
extern PyObject *const_str_plain___file__;
static PyObject *const_unicode_digest_6ef73059ff7a75ac16db97ed10100cd2;
static PyObject *const_unicode_digest_ed177ae0b7f6918622a6592157d34d2a;
extern PyObject *const_str_plain_encoded;
extern PyObject *const_str_plain_enc;
extern PyObject *const_str_plain_binascii;
static PyObject *const_unicode_digest_54076a9648667c29f0457044be51e1ff;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_s;
static PyObject *const_tuple_e09e8f7fb11223a63b2a94841b665784_tuple;
extern PyObject *const_int_pos_3;
extern PyObject *const_str_plain_charset;
static PyObject *const_str_plain_max_unencoded;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_divmod;
extern PyObject *const_str_plain_i;
extern PyObject *const_tuple_str_plain_string_tuple;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_n;
extern PyObject *const_unicode_plain_body_decode;
extern PyObject *const_str_plain_eol;
extern PyObject *const_str_plain_append;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_str_plain_groups_of_3;
extern PyObject *const_tuple_str_plain_bytes_tuple;
extern PyObject *const_int_pos_7;
extern PyObject *const_unicode_digest_7ca129d2d421fe965ad48cbb290b579b;
static PyObject *const_str_plain_a2b_base64;
extern PyObject *const_int_pos_4;
extern PyObject *const_str_plain_CRLF;
extern PyObject *const_unicode_plain_ascii;
static PyObject *const_str_plain_b2a_base64;
extern PyObject *const_str_plain_header_bytes;
extern PyObject *const_str_plain_string;
extern PyObject *const_unicode_digest_0fb3f57013d21cde8ac4f9e3be987cc2;
static PyObject *const_unicode_digest_2f077fb247b5c663b5b646d27ee2b7c0;
extern PyObject *const_tuple_unicode_plain_ascii_tuple;
static PyObject *const_unicode_digest_b7e2b4a95526d60d232ef26fa928c066;
extern PyObject *const_str_plain_decodestring;
extern PyObject *const_str_plain_range;
extern PyObject *const_str_plain_header_length;
extern PyObject *const_str_plain_b64encode;
static PyObject *const_tuple_str_plain_range_tuple;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_encvec = UNSTREAM_STRING( &constant_bin[ 106805 ], 6, 1 );
    const_tuple_450d897e786a3f8a16f0909b3aeb3bc1_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_450d897e786a3f8a16f0909b3aeb3bc1_tuple, 0, const_str_plain_bytearray ); Py_INCREF( const_str_plain_bytearray );
    PyTuple_SET_ITEM( const_tuple_450d897e786a3f8a16f0909b3aeb3bc1_tuple, 1, const_str_plain_groups_of_3 ); Py_INCREF( const_str_plain_groups_of_3 );
    PyTuple_SET_ITEM( const_tuple_450d897e786a3f8a16f0909b3aeb3bc1_tuple, 2, const_str_plain_leftover ); Py_INCREF( const_str_plain_leftover );
    PyTuple_SET_ITEM( const_tuple_450d897e786a3f8a16f0909b3aeb3bc1_tuple, 3, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    const_unicode_digest_f68a3db01b78fe08d1ae41575d5f3121 = UNSTREAM_UNICODE( &constant_bin[ 106811 ], 11 );
    const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple, 0, const_str_plain_header_bytes ); Py_INCREF( const_str_plain_header_bytes );
    PyTuple_SET_ITEM( const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple, 1, const_str_plain_charset ); Py_INCREF( const_str_plain_charset );
    PyTuple_SET_ITEM( const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple, 2, const_str_plain_encoded ); Py_INCREF( const_str_plain_encoded );
    const_str_digest_7fa219dc697cb3e0cfbe6c1493081d5f = UNSTREAM_STRING( &constant_bin[ 106822 ], 33, 0 );
    const_list_4e5537aecf97a87b09ef6010c6e3f466_list = PyList_New( 6 );
    PyList_SET_ITEM( const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 0, const_unicode_plain_body_decode ); Py_INCREF( const_unicode_plain_body_decode );
    PyList_SET_ITEM( const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 1, const_unicode_plain_body_encode ); Py_INCREF( const_unicode_plain_body_encode );
    PyList_SET_ITEM( const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 2, const_unicode_plain_decode ); Py_INCREF( const_unicode_plain_decode );
    PyList_SET_ITEM( const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 3, const_unicode_plain_decodestring ); Py_INCREF( const_unicode_plain_decodestring );
    PyList_SET_ITEM( const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 4, const_unicode_plain_header_encode ); Py_INCREF( const_unicode_plain_header_encode );
    PyList_SET_ITEM( const_list_4e5537aecf97a87b09ef6010c6e3f466_list, 5, const_unicode_plain_header_length ); Py_INCREF( const_unicode_plain_header_length );
    const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple = PyTuple_New( 2 );
    const_str_plain_b2a_base64 = UNSTREAM_STRING( &constant_bin[ 106855 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple, 0, const_str_plain_b2a_base64 ); Py_INCREF( const_str_plain_b2a_base64 );
    const_str_plain_a2b_base64 = UNSTREAM_STRING( &constant_bin[ 106865 ], 10, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple, 1, const_str_plain_a2b_base64 ); Py_INCREF( const_str_plain_a2b_base64 );
    const_str_plain_MISC_LEN = UNSTREAM_STRING( &constant_bin[ 106875 ], 8, 1 );
    const_str_digest_906b0ba54e9bc94c06d1195b1c452650 = UNSTREAM_STRING( &constant_bin[ 106883 ], 75, 0 );
    const_unicode_digest_6ef73059ff7a75ac16db97ed10100cd2 = UNSTREAM_UNICODE( &constant_bin[ 106958 ], 212 );
    const_unicode_digest_ed177ae0b7f6918622a6592157d34d2a = UNSTREAM_UNICODE( &constant_bin[ 107170 ], 305 );
    const_unicode_digest_54076a9648667c29f0457044be51e1ff = UNSTREAM_UNICODE( &constant_bin[ 107475 ], 254 );
    const_tuple_e09e8f7fb11223a63b2a94841b665784_tuple = PyTuple_New( 7 );
    PyTuple_SET_ITEM( const_tuple_e09e8f7fb11223a63b2a94841b665784_tuple, 0, const_str_plain_s ); Py_INCREF( const_str_plain_s );
    PyTuple_SET_ITEM( const_tuple_e09e8f7fb11223a63b2a94841b665784_tuple, 1, const_str_plain_maxlinelen ); Py_INCREF( const_str_plain_maxlinelen );
    PyTuple_SET_ITEM( const_tuple_e09e8f7fb11223a63b2a94841b665784_tuple, 2, const_str_plain_eol ); Py_INCREF( const_str_plain_eol );
    PyTuple_SET_ITEM( const_tuple_e09e8f7fb11223a63b2a94841b665784_tuple, 3, const_str_plain_encvec ); Py_INCREF( const_str_plain_encvec );
    const_str_plain_max_unencoded = UNSTREAM_STRING( &constant_bin[ 107729 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_e09e8f7fb11223a63b2a94841b665784_tuple, 4, const_str_plain_max_unencoded ); Py_INCREF( const_str_plain_max_unencoded );
    PyTuple_SET_ITEM( const_tuple_e09e8f7fb11223a63b2a94841b665784_tuple, 5, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_e09e8f7fb11223a63b2a94841b665784_tuple, 6, const_str_plain_enc ); Py_INCREF( const_str_plain_enc );
    const_unicode_digest_2f077fb247b5c663b5b646d27ee2b7c0 = UNSTREAM_UNICODE( &constant_bin[ 107742 ], 54 );
    const_unicode_digest_b7e2b4a95526d60d232ef26fa928c066 = UNSTREAM_UNICODE( &constant_bin[ 107796 ], 923 );
    const_tuple_str_plain_range_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_range_tuple, 0, const_str_plain_range ); Py_INCREF( const_str_plain_range );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$backports$email$base64mime( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_deb946060d729cb0e9d1dc2f43a012ec;
static PyCodeObject *codeobj_a8ee1f35f69fb06ebf153bee9568fad5;
static PyCodeObject *codeobj_8e25b2f3f3ff42f985066a4f70423d71;
static PyCodeObject *codeobj_0618e6e8e5a3daccaaceb2efae6a6320;
static PyCodeObject *codeobj_e8bb14a08690a09d0903baa645e13374;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_906b0ba54e9bc94c06d1195b1c452650;
    codeobj_deb946060d729cb0e9d1dc2f43a012ec = MAKE_CODEOBJ( module_filename_obj, const_str_plain_base64mime, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_a8ee1f35f69fb06ebf153bee9568fad5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_body_encode, 78, const_tuple_e09e8f7fb11223a63b2a94841b665784_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_8e25b2f3f3ff42f985066a4f70423d71 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decode, 103, const_tuple_str_plain_string_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_0618e6e8e5a3daccaaceb2efae6a6320 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_header_encode, 64, const_tuple_str_plain_header_bytes_str_plain_charset_str_plain_encoded_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
    codeobj_e8bb14a08690a09d0903baa645e13374 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_header_length, 54, const_tuple_450d897e786a3f8a16f0909b3aeb3bc1_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT );
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_1_header_length(  );


static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_2_header_encode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_3_body_encode( PyObject *defaults );


static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_4_decode(  );


// The module function definitions.
static PyObject *impl_future$backports$email$base64mime$$$function_1_header_length( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_bytearray = python_pars[ 0 ];
    PyObject *var_groups_of_3 = NULL;
    PyObject *var_leftover = NULL;
    PyObject *var_n = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_len_arg_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_e8bb14a08690a09d0903baa645e13374, module_future$backports$email$base64mime );
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
    // Tried code:
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_divmod );
    assert( tmp_called_name_1 != NULL );
    tmp_len_arg_1 = par_bytearray;

    tmp_args_element_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto try_except_handler_2;
    }
    tmp_args_element_name_2 = const_int_pos_3;
    frame_function->f_lineno = 56;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__source_iter == NULL );
    tmp_tuple_unpack_1__source_iter = tmp_assign_source_1;

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_2 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 56;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_1 == NULL );
    tmp_tuple_unpack_1__element_1 = tmp_assign_source_2;

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_3 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( !ERROR_OCCURRED() )
        {
            exception_type = PyExc_StopIteration;
            Py_INCREF( exception_type );
            exception_value = NULL;
            exception_tb = NULL;
        }
        else
        {
            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        }


        exception_lineno = 56;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_iterator_name_1 = tmp_tuple_unpack_1__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_1 ); assert( HAS_ITERNEXT( tmp_iterator_name_1 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_1 )->tp_iternext)( tmp_iterator_name_1 );

    if (likely( tmp_iterator_attempt == NULL ))
    {
        PyObject *error = GET_ERROR_OCCURRED();

        if ( error != NULL )
        {
            if ( EXCEPTION_MATCH_BOOL_SINGLE( error, PyExc_StopIteration ))
            {
                CLEAR_ERROR_OCCURRED();
            }
            else
            {
                FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

                goto try_except_handler_2;
            }
        }
    }
    else
    {
        Py_DECREF( tmp_iterator_attempt );

        // TODO: Could avoid PyErr_Format.
#if PYTHON_VERSION < 300
        PyErr_Format( PyExc_ValueError, "too many values to unpack" );
#else
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 2)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_2;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;

    assert( var_groups_of_3 == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_groups_of_3 = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    assert( var_leftover == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_leftover = tmp_assign_source_5;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_left_name_1 = var_groups_of_3;

    tmp_right_name_1 = const_int_pos_4;
    tmp_assign_source_6 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto frame_exception_exit_1;
    }
    assert( var_n == NULL );
    var_n = tmp_assign_source_6;

    tmp_cond_value_1 = var_leftover;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
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
    tmp_left_name_2 = var_n;

    tmp_right_name_2 = const_int_pos_4;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_2, tmp_right_name_2 );
    tmp_assign_source_7 = tmp_left_name_2;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    var_n = tmp_assign_source_7;

    branch_no_1:;

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
            if ( par_bytearray )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_bytearray,
                    par_bytearray
                );

                assert( res == 0 );
            }

            if ( var_groups_of_3 )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_groups_of_3,
                    var_groups_of_3
                );

                assert( res == 0 );
            }

            if ( var_leftover )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_leftover,
                    var_leftover
                );

                assert( res == 0 );
            }

            if ( var_n )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n,
                    var_n
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

    tmp_return_value = var_n;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$backports$email$base64mime$$$function_1_header_length );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_bytearray );
    Py_DECREF( par_bytearray );
    par_bytearray = NULL;

    CHECK_OBJECT( (PyObject *)var_groups_of_3 );
    Py_DECREF( var_groups_of_3 );
    var_groups_of_3 = NULL;

    CHECK_OBJECT( (PyObject *)var_leftover );
    Py_DECREF( var_leftover );
    var_leftover = NULL;

    CHECK_OBJECT( (PyObject *)var_n );
    Py_DECREF( var_n );
    var_n = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_bytearray );
    Py_DECREF( par_bytearray );
    par_bytearray = NULL;

    Py_XDECREF( var_groups_of_3 );
    var_groups_of_3 = NULL;

    Py_XDECREF( var_leftover );
    var_leftover = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$base64mime$$$function_1_header_length );
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


static PyObject *impl_future$backports$email$base64mime$$$function_2_header_encode( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_header_bytes = python_pars[ 0 ];
    PyObject *par_charset = python_pars[ 1 ];
    PyObject *var_encoded = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0618e6e8e5a3daccaaceb2efae6a6320, module_future$backports$email$base64mime );
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
    tmp_cond_value_1 = par_header_bytes;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 70;
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
    tmp_return_value = const_unicode_empty;
    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_header_bytes;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_1 = par_header_bytes;

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encode );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_charset;

    frame_function->f_lineno = 73;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_header_bytes;
        assert( old != NULL );
        par_header_bytes = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_b64encode );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b64encode );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "b64encode" );
        exception_tb = NULL;

        exception_lineno = 74;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_header_bytes;

    frame_function->f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_decode );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 74;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_unicode_plain_ascii_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto frame_exception_exit_1;
    }
    assert( var_encoded == NULL );
    var_encoded = tmp_assign_source_2;

    tmp_left_name_1 = const_unicode_digest_f68a3db01b78fe08d1ae41575d5f3121;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = par_charset;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_encoded;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_return_value = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 75;
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
            if ( par_header_bytes )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_header_bytes,
                    par_header_bytes
                );

                assert( res == 0 );
            }

            if ( par_charset )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_charset,
                    par_charset
                );

                assert( res == 0 );
            }

            if ( var_encoded )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encoded,
                    var_encoded
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
    NUITKA_CANNOT_GET_HERE( future$backports$email$base64mime$$$function_2_header_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_header_bytes );
    par_header_bytes = NULL;

    CHECK_OBJECT( (PyObject *)par_charset );
    Py_DECREF( par_charset );
    par_charset = NULL;

    Py_XDECREF( var_encoded );
    var_encoded = NULL;

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

    Py_XDECREF( par_header_bytes );
    par_header_bytes = NULL;

    CHECK_OBJECT( (PyObject *)par_charset );
    Py_DECREF( par_charset );
    par_charset = NULL;

    Py_XDECREF( var_encoded );
    var_encoded = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$base64mime$$$function_2_header_encode );
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


static PyObject *impl_future$backports$email$base64mime$$$function_3_body_encode( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[ 0 ];
    PyObject *par_maxlinelen = python_pars[ 1 ];
    PyObject *par_eol = python_pars[ 2 ];
    PyObject *var_encvec = NULL;
    PyObject *var_max_unencoded = NULL;
    PyObject *var_i = NULL;
    PyObject *var_enc = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_lower_1;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    PyObject *tmp_slice_upper_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_a8ee1f35f69fb06ebf153bee9568fad5, module_future$backports$email$base64mime );
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
    tmp_cond_value_1 = par_s;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 88;
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
    tmp_return_value = par_s;

    Py_INCREF( tmp_return_value );
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_encvec == NULL );
    var_encvec = tmp_assign_source_1;

    tmp_left_name_2 = par_maxlinelen;

    tmp_right_name_1 = const_int_pos_3;
    tmp_left_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_1 );
    if ( tmp_left_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    tmp_right_name_2 = const_int_pos_4;
    tmp_assign_source_2 = BINARY_OPERATION( PyNumber_FloorDivide, tmp_left_name_1, tmp_right_name_2 );
    Py_DECREF( tmp_left_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    assert( var_max_unencoded == NULL );
    var_max_unencoded = tmp_assign_source_2;

    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_range );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_range );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "range" );
        exception_tb = NULL;

        exception_lineno = 93;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = const_int_0;
    tmp_len_arg_1 = par_s;

    tmp_args_element_name_2 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = var_max_unencoded;

    frame_function->f_lineno = 93;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_3;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_4 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 93;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_5;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_b2a_base64 );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_b2a_base64 );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "b2a_base64" );
        exception_tb = NULL;

        exception_lineno = 96;
        goto try_except_handler_2;
    }

    tmp_slice_source_1 = par_s;

    tmp_slice_lower_1 = var_i;

    tmp_left_name_3 = var_i;

    tmp_right_name_3 = var_max_unencoded;

    tmp_slice_upper_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    if ( tmp_slice_upper_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = LOOKUP_SLICE( tmp_slice_source_1, tmp_slice_lower_1, tmp_slice_upper_1 );
    Py_DECREF( tmp_slice_upper_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 96;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_2;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_decode );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 96;
    tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_unicode_plain_ascii_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_enc;
        var_enc = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_enc;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_endswith );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_2;
    }
    tmp_args_element_name_5 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_NL );

    if (unlikely( tmp_args_element_name_5 == NULL ))
    {
        tmp_args_element_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NL );
    }

    if ( tmp_args_element_name_5 == NULL )
    {
        Py_DECREF( tmp_called_name_4 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NL" );
        exception_tb = NULL;

        exception_lineno = 97;
        goto try_except_handler_2;
    }

    frame_function->f_lineno = 97;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_2;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 97;
        goto try_except_handler_2;
    }
    if ( tmp_and_left_truth_1 == 1 )
    {
        goto and_right_1;
    }
    else
    {
        goto and_left_1;
    }
    and_right_1:;
    Py_DECREF( tmp_and_left_value_1 );
    tmp_compexpr_left_1 = par_eol;

    tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_NL );

    if (unlikely( tmp_compexpr_right_1 == NULL ))
    {
        tmp_compexpr_right_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NL );
    }

    if ( tmp_compexpr_right_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "NL" );
        exception_tb = NULL;

        exception_lineno = 97;
        goto try_except_handler_2;
    }

    tmp_and_right_value_1 = RICH_COMPARE_NE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
        goto try_except_handler_2;
    }
    tmp_cond_value_2 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_2 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 97;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_2 = var_enc;

    tmp_left_name_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_left_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_2;
    }
    tmp_right_name_4 = par_eol;

    tmp_assign_source_7 = BINARY_OPERATION_ADD( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_left_name_4 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 98;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_enc;
        assert( old != NULL );
        var_enc = tmp_assign_source_7;
        Py_DECREF( old );
    }

    branch_no_2:;
    tmp_source_name_3 = var_encvec;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto try_except_handler_2;
    }
    tmp_args_element_name_6 = var_enc;

    frame_function->f_lineno = 99;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 93;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "EMPTYSTRING" );
        exception_tb = NULL;

        exception_lineno = 100;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_join );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_7 = var_encvec;

    frame_function->f_lineno = 100;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
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

            if ( par_maxlinelen )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maxlinelen,
                    par_maxlinelen
                );

                assert( res == 0 );
            }

            if ( par_eol )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_eol,
                    par_eol
                );

                assert( res == 0 );
            }

            if ( var_encvec )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_encvec,
                    var_encvec
                );

                assert( res == 0 );
            }

            if ( var_max_unencoded )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_max_unencoded,
                    var_max_unencoded
                );

                assert( res == 0 );
            }

            if ( var_i )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_i,
                    var_i
                );

                assert( res == 0 );
            }

            if ( var_enc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_enc,
                    var_enc
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
    NUITKA_CANNOT_GET_HERE( future$backports$email$base64mime$$$function_3_body_encode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_maxlinelen );
    Py_DECREF( par_maxlinelen );
    par_maxlinelen = NULL;

    CHECK_OBJECT( (PyObject *)par_eol );
    Py_DECREF( par_eol );
    par_eol = NULL;

    Py_XDECREF( var_encvec );
    var_encvec = NULL;

    Py_XDECREF( var_max_unencoded );
    var_max_unencoded = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_enc );
    var_enc = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_s );
    Py_DECREF( par_s );
    par_s = NULL;

    CHECK_OBJECT( (PyObject *)par_maxlinelen );
    Py_DECREF( par_maxlinelen );
    par_maxlinelen = NULL;

    CHECK_OBJECT( (PyObject *)par_eol );
    Py_DECREF( par_eol );
    par_eol = NULL;

    Py_XDECREF( var_encvec );
    var_encvec = NULL;

    Py_XDECREF( var_max_unencoded );
    var_max_unencoded = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_enc );
    var_enc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$base64mime$$$function_3_body_encode );
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


static PyObject *impl_future$backports$email$base64mime$$$function_4_decode( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_string = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_8e25b2f3f3ff42f985066a4f70423d71, module_future$backports$email$base64mime );
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
    tmp_cond_value_1 = par_string;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_bytes );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_bytes );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "bytes" );
        exception_tb = NULL;

        exception_lineno = 111;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 111;
    tmp_return_value = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_isinstance_inst_1 = par_string;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_a2b_base64 );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_a2b_base64 );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "a2b_base64" );
        exception_tb = NULL;

        exception_lineno = 113;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = par_string;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_encode );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 113;
    tmp_args_element_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_unicode_digest_0fb3f57013d21cde8ac4f9e3be987cc2_tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 113;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_a2b_base64 );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_a2b_base64 );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "a2b_base64" );
        exception_tb = NULL;

        exception_lineno = 115;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_string;

    frame_function->f_lineno = 115;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_end_2:;
    branch_end_1:;

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
            if ( par_string )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_string,
                    par_string
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
    NUITKA_CANNOT_GET_HERE( future$backports$email$base64mime$$$function_4_decode );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

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

    CHECK_OBJECT( (PyObject *)par_string );
    Py_DECREF( par_string );
    par_string = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$base64mime$$$function_4_decode );
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



static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_1_header_length(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$base64mime$$$function_1_header_length,
        const_str_plain_header_length,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_e8bb14a08690a09d0903baa645e13374,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email$base64mime,
        const_unicode_digest_2f077fb247b5c663b5b646d27ee2b7c0
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_2_header_encode( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$base64mime$$$function_2_header_encode,
        const_str_plain_header_encode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0618e6e8e5a3daccaaceb2efae6a6320,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email$base64mime,
        const_unicode_digest_6ef73059ff7a75ac16db97ed10100cd2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_3_body_encode( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$base64mime$$$function_3_body_encode,
        const_str_plain_body_encode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a8ee1f35f69fb06ebf153bee9568fad5,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email$base64mime,
        const_unicode_digest_ed177ae0b7f6918622a6592157d34d2a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$base64mime$$$function_4_decode(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$base64mime$$$function_4_decode,
        const_str_plain_decode,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_8e25b2f3f3ff42f985066a4f70423d71,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email$base64mime,
        const_unicode_digest_54076a9648667c29f0457044be51e1ff
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$backports$email$base64mime =
{
    PyModuleDef_HEAD_INIT,
    "future.backports.email.base64mime",   /* m_name */
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

MOD_INIT_DECL( future$backports$email$base64mime )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$backports$email$base64mime );
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

    // puts( "in initfuture$backports$email$base64mime" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$backports$email$base64mime = Py_InitModule4(
        "future.backports.email.base64mime",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_future$backports$email$base64mime = PyModule_Create( &mdef_future$backports$email$base64mime );
#endif

    moduledict_future$backports$email$base64mime = (PyDictObject *)((PyModuleObject *)module_future$backports$email$base64mime)->md_dict;

    CHECK_OBJECT( module_future$backports$email$base64mime );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_7fa219dc697cb3e0cfbe6c1493081d5f, module_future$backports$email$base64mime );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_future$backports$email$base64mime );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_import_name_from_4;
    PyObject *tmp_import_name_from_5;
    PyObject *tmp_tuple_element_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_unicode_digest_b7e2b4a95526d60d232ef26fa928c066;
    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_906b0ba54e9bc94c06d1195b1c452650;
    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "unicode_literals");
    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_5 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_deb946060d729cb0e9d1dc2f43a012ec, module_future$backports$email$base64mime );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$backports$email$base64mime)->md_dict;
    frame_module->f_lineno = 29;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2, tmp_import_globals_1, tmp_import_globals_1, const_tuple_str_plain_range_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_6 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_range );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_range, tmp_assign_source_6 );
    tmp_import_globals_2 = ((PyModuleObject *)module_future$backports$email$base64mime)->md_dict;
    frame_module->f_lineno = 30;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_digest_c3c96c8ed3ec2ec3a4d3f0dfaaa3ddf2, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_bytes_tuple, const_int_0 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain_bytes );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_bytes, tmp_assign_source_7 );
    tmp_assign_source_8 = LIST_COPY( const_list_4e5537aecf97a87b09ef6010c6e3f466_list );
    UPDATE_STRING_DICT1( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_8 );
    tmp_import_globals_3 = ((PyModuleObject *)module_future$backports$email$base64mime)->md_dict;
    frame_module->f_lineno = 42;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_base64, tmp_import_globals_3, tmp_import_globals_3, const_tuple_str_plain_b64encode_tuple, const_int_0 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_b64encode );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_b64encode, tmp_assign_source_9 );
    tmp_import_globals_4 = ((PyModuleObject *)module_future$backports$email$base64mime)->md_dict;
    frame_module->f_lineno = 43;
    tmp_import_name_from_4 = IMPORT_MODULE( const_str_plain_binascii, tmp_import_globals_4, tmp_import_globals_4, const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple, const_int_0 );
    if ( tmp_import_name_from_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_10 = IMPORT_NAME( tmp_import_name_from_4, const_str_plain_b2a_base64 );
    Py_DECREF( tmp_import_name_from_4 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_b2a_base64, tmp_assign_source_10 );
    tmp_import_globals_5 = ((PyModuleObject *)module_future$backports$email$base64mime)->md_dict;
    frame_module->f_lineno = 43;
    tmp_import_name_from_5 = IMPORT_MODULE( const_str_plain_binascii, tmp_import_globals_5, tmp_import_globals_5, const_tuple_str_plain_b2a_base64_str_plain_a2b_base64_tuple, const_int_0 );
    if ( tmp_import_name_from_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_5, const_str_plain_a2b_base64 );
    Py_DECREF( tmp_import_name_from_5 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_a2b_base64, tmp_assign_source_11 );
    tmp_assign_source_12 = const_unicode_digest_7ca129d2d421fe965ad48cbb290b579b;
    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_CRLF, tmp_assign_source_12 );
    tmp_assign_source_13 = const_unicode_newline;
    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_NL, tmp_assign_source_13 );
    tmp_assign_source_14 = const_unicode_empty;
    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_EMPTYSTRING, tmp_assign_source_14 );
    tmp_assign_source_15 = const_int_pos_7;
    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_MISC_LEN, tmp_assign_source_15 );
    tmp_assign_source_16 = MAKE_FUNCTION_future$backports$email$base64mime$$$function_1_header_length(  );
    UPDATE_STRING_DICT1( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_header_length, tmp_assign_source_16 );
    tmp_defaults_1 = const_tuple_unicode_digest_20861594150da1e43b5ee3f86b9deef6_tuple;
    tmp_assign_source_17 = MAKE_FUNCTION_future$backports$email$base64mime$$$function_2_header_encode( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_header_encode, tmp_assign_source_17 );
    tmp_defaults_2 = PyTuple_New( 2 );
    tmp_tuple_element_1 = const_int_pos_76;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_2, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_NL );

    if (unlikely( tmp_tuple_element_1 == NULL ))
    {
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_NL );
    }

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_defaults_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "NL" );
        exception_tb = NULL;

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_2, 1, tmp_tuple_element_1 );
    tmp_assign_source_18 = MAKE_FUNCTION_future$backports$email$base64mime$$$function_3_body_encode( tmp_defaults_2 );
    UPDATE_STRING_DICT1( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_body_encode, tmp_assign_source_18 );
    tmp_assign_source_19 = MAKE_FUNCTION_future$backports$email$base64mime$$$function_4_decode(  );
    UPDATE_STRING_DICT1( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_decode, tmp_assign_source_19 );
    tmp_assign_source_20 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_decode );

    if (unlikely( tmp_assign_source_20 == NULL ))
    {
        tmp_assign_source_20 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decode );
    }

    if ( tmp_assign_source_20 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "decode" );
        exception_tb = NULL;

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_body_decode, tmp_assign_source_20 );
    tmp_assign_source_21 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_decode );

    if (unlikely( tmp_assign_source_21 == NULL ))
    {
        tmp_assign_source_21 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decode );
    }

    if ( tmp_assign_source_21 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "decode" );
        exception_tb = NULL;

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }

    UPDATE_STRING_DICT0( moduledict_future$backports$email$base64mime, (Nuitka_StringObject *)const_str_plain_decodestring, tmp_assign_source_21 );

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

    return MOD_RETURN_VALUE( module_future$backports$email$base64mime );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
