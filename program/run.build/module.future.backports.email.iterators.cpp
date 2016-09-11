/* Generated code for Python source for module 'future.backports.email.iterators'
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

/* The _module_future$backports$email$iterators is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_future$backports$email$iterators;
PyDictObject *moduledict_future$backports$email$iterators;

/* The module constants used, if any. */
extern PyObject *const_str_plain_get_default_type;
static PyObject *const_str_plain_typed_subpart_iterator;
extern PyObject *const_str_plain_is_multipart;
static PyObject *const_str_plain__structure;
extern PyObject *const_str_plain_subtype;
extern PyObject *const_str_plain_end;
static PyObject *const_str_digest_c5aaf3f3095a1f452655051203c89fbf;
extern PyObject *const_str_plain_payload;
static PyObject *const_tuple_str_plain_msg_str_plain_maintype_str_plain_subtype_tuple;
extern PyObject *const_str_plain_get_content_type;
extern PyObject *const_str_plain_decode;
extern PyObject *const_str_plain_get_content_subtype;
extern PyObject *const_dict_empty;
extern PyObject *const_str_plain_io;
static PyObject *const_unicode_digest_029d4e1734797170284f010e3168c7fb;
static PyObject *const_str_plain_subpart;
static PyObject *const_unicode_digest_a35294548215811533a2601acdd1deb1;
extern PyObject *const_str_plain_absolute_import;
extern PyObject *const_str_plain_stdout;
static PyObject *const_unicode_digest_e3c66ca9a856a3770c2415f2700c10d2;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_str_plain_walk;
static PyObject *const_str_plain_subsubpart;
extern PyObject *const_str_plain_msg;
extern PyObject *const_unicode_empty;
extern PyObject *const_str_plain_level;
extern PyObject *const_unicode_plain_text;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_str_plain___all__;
extern PyObject *const_int_0;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_tab;
static PyObject *const_str_plain_include_default;
static PyObject *const_unicode_digest_214f36440c692c7c2447223c711f8394;
static PyObject *const_tuple_unicode_plain_text_none_tuple;
static PyObject *const_str_plain_body_line_iterator;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_get_payload;
extern PyObject *const_str_plain___file__;
static PyObject *const_list_e29e322044e6feca7a4fd4912e0cef94_list;
extern PyObject *const_str_plain_file;
static PyObject *const_unicode_plain_typed_subpart_iterator;
extern PyObject *const_str_plain_self;
extern PyObject *const_str_plain_division;
extern PyObject *const_str_plain_fp;
extern PyObject *const_int_pos_1;
extern PyObject *const_str_plain_str;
extern PyObject *const_str_plain_StringIO;
extern PyObject *const_tuple_str_plain_StringIO_tuple;
static PyObject *const_unicode_digest_6220e16c79276bbb44f1ce05669ec2b4;
extern PyObject *const_str_plain_maintype;
extern PyObject *const_str_plain_get_content_maintype;
static PyObject *const_unicode_plain_body_line_iterator;
static PyObject *const_tuple_none_int_0_false_tuple;
static PyObject *const_unicode_digest_a24ea58a4d922cf7b7215c4a777e0b17;
extern PyObject *const_str_plain_unicode_literals;
extern PyObject *const_int_pos_4;
extern PyObject *const_tuple_false_tuple;
extern PyObject *const_str_plain_line;
static PyObject *const_tuple_str_plain_msg_str_plain_decode_tuple;
extern PyObject *const_str_plain_iterators;
static PyObject *const_unicode_plain_walk;
extern PyObject *const_str_plain_print_function;
extern PyObject *const_unicode_space;
static PyObject *const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple;
extern PyObject *const_str_digest_51a5cce8dbd2cdef5f8a3da46aa2b87f;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_str_plain_typed_subpart_iterator = UNSTREAM_STRING( &constant_bin[ 130100 ], 22, 1 );
    const_str_plain__structure = UNSTREAM_STRING( &constant_bin[ 130122 ], 10, 1 );
    const_str_digest_c5aaf3f3095a1f452655051203c89fbf = UNSTREAM_STRING( &constant_bin[ 130132 ], 74, 0 );
    const_tuple_str_plain_msg_str_plain_maintype_str_plain_subtype_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_maintype_str_plain_subtype_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_maintype_str_plain_subtype_tuple, 1, const_str_plain_maintype ); Py_INCREF( const_str_plain_maintype );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_maintype_str_plain_subtype_tuple, 2, const_str_plain_subtype ); Py_INCREF( const_str_plain_subtype );
    const_unicode_digest_029d4e1734797170284f010e3168c7fb = UNSTREAM_UNICODE( &constant_bin[ 130206 ], 21 );
    const_str_plain_subpart = UNSTREAM_STRING( &constant_bin[ 117734 ], 7, 1 );
    const_unicode_digest_a35294548215811533a2601acdd1deb1 = UNSTREAM_UNICODE( &constant_bin[ 130227 ], 248 );
    const_unicode_digest_e3c66ca9a856a3770c2415f2700c10d2 = UNSTREAM_UNICODE( &constant_bin[ 130475 ], 49 );
    const_str_plain_subsubpart = UNSTREAM_STRING( &constant_bin[ 130524 ], 10, 1 );
    const_str_plain_include_default = UNSTREAM_STRING( &constant_bin[ 130534 ], 15, 1 );
    const_unicode_digest_214f36440c692c7c2447223c711f8394 = UNSTREAM_UNICODE( &constant_bin[ 130549 ], 5 );
    const_tuple_unicode_plain_text_none_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_unicode_plain_text_none_tuple, 0, const_unicode_plain_text ); Py_INCREF( const_unicode_plain_text );
    PyTuple_SET_ITEM( const_tuple_unicode_plain_text_none_tuple, 1, Py_None ); Py_INCREF( Py_None );
    const_str_plain_body_line_iterator = UNSTREAM_STRING( &constant_bin[ 130554 ], 18, 1 );
    const_list_e29e322044e6feca7a4fd4912e0cef94_list = PyList_New( 3 );
    const_unicode_plain_body_line_iterator = UNSTREAM_UNICODE( &constant_bin[ 130554 ], 18 );
    PyList_SET_ITEM( const_list_e29e322044e6feca7a4fd4912e0cef94_list, 0, const_unicode_plain_body_line_iterator ); Py_INCREF( const_unicode_plain_body_line_iterator );
    const_unicode_plain_typed_subpart_iterator = UNSTREAM_UNICODE( &constant_bin[ 130100 ], 22 );
    PyList_SET_ITEM( const_list_e29e322044e6feca7a4fd4912e0cef94_list, 1, const_unicode_plain_typed_subpart_iterator ); Py_INCREF( const_unicode_plain_typed_subpart_iterator );
    const_unicode_plain_walk = UNSTREAM_UNICODE( &constant_bin[ 130572 ], 4 );
    PyList_SET_ITEM( const_list_e29e322044e6feca7a4fd4912e0cef94_list, 2, const_unicode_plain_walk ); Py_INCREF( const_unicode_plain_walk );
    const_unicode_digest_6220e16c79276bbb44f1ce05669ec2b4 = UNSTREAM_UNICODE( &constant_bin[ 130576 ], 137 );
    const_tuple_none_int_0_false_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_false_tuple, 0, Py_None ); Py_INCREF( Py_None );
    PyTuple_SET_ITEM( const_tuple_none_int_0_false_tuple, 1, const_int_0 ); Py_INCREF( const_int_0 );
    PyTuple_SET_ITEM( const_tuple_none_int_0_false_tuple, 2, Py_False ); Py_INCREF( Py_False );
    const_unicode_digest_a24ea58a4d922cf7b7215c4a777e0b17 = UNSTREAM_UNICODE( &constant_bin[ 130713 ], 142 );
    const_tuple_str_plain_msg_str_plain_decode_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_decode_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_str_plain_msg_str_plain_decode_tuple, 1, const_str_plain_decode ); Py_INCREF( const_str_plain_decode );
    const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 0, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 1, const_str_plain_fp ); Py_INCREF( const_str_plain_fp );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 2, const_str_plain_level ); Py_INCREF( const_str_plain_level );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 3, const_str_plain_include_default ); Py_INCREF( const_str_plain_include_default );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 4, const_str_plain_tab ); Py_INCREF( const_str_plain_tab );
    PyTuple_SET_ITEM( const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 5, const_str_plain_subpart ); Py_INCREF( const_str_plain_subpart );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_future$backports$email$iterators( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_4a1bb0fe21df23ddb031a65705386819;
static PyCodeObject *codeobj_575b6f9b87be623bf3e152d32d2a937f;
static PyCodeObject *codeobj_3e63fbf1ad990de373046b944bd76e1a;
static PyCodeObject *codeobj_6a7aabf5bdd24b9db1471c174ff4b16c;
static PyCodeObject *codeobj_d5496c5b4099404575fe4f80f8beaabb;
static PyCodeObject *codeobj_107793da39e2d33c160707abca727e63;
static PyCodeObject *codeobj_517a0aef88f7226ba21c0e6c4f4fdd95;
static PyCodeObject *codeobj_6dadcb8a153903ee73e21367161ed941;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_c5aaf3f3095a1f452655051203c89fbf;
    codeobj_4a1bb0fe21df23ddb031a65705386819 = MAKE_CODEOBJ( module_filename_obj, const_str_plain__structure, 62, const_tuple_c3571bd9c7d76b7a0875dcd7e52d194c_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_575b6f9b87be623bf3e152d32d2a937f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_body_line_iterator, 37, const_tuple_str_plain_msg_str_plain_decode_tuple, 2, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3e63fbf1ad990de373046b944bd76e1a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_body_line_iterator, 37, const_tuple_str_plain_msg_str_plain_decode_tuple, 2, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6a7aabf5bdd24b9db1471c174ff4b16c = MAKE_CODEOBJ( module_filename_obj, const_str_plain_iterators, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d5496c5b4099404575fe4f80f8beaabb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_typed_subpart_iterator, 49, const_tuple_str_plain_msg_str_plain_maintype_str_plain_subtype_tuple, 3, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_107793da39e2d33c160707abca727e63 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_typed_subpart_iterator, 49, const_tuple_str_plain_msg_str_plain_maintype_str_plain_subtype_tuple, 3, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_517a0aef88f7226ba21c0e6c4f4fdd95 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_walk, 23, const_tuple_str_plain_self_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6dadcb8a153903ee73e21367161ed941 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_walk, 23, const_tuple_str_plain_self_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_DIVISION | CO_FUTURE_UNICODE_LITERALS | CO_FUTURE_ABSOLUTE_IMPORT | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
static void future$backports$email$iterators$$$function_1_walk$$$genobj_1_walk_context( Nuitka_GeneratorObject *generator );


static void future$backports$email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_context( Nuitka_GeneratorObject *generator );


static void future$backports$email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_context( Nuitka_GeneratorObject *generator );


static PyObject *MAKE_FUNCTION_future$backports$email$iterators$$$function_1_walk(  );


static PyObject *MAKE_FUNCTION_future$backports$email$iterators$$$function_2_body_line_iterator( PyObject *defaults );


static PyObject *MAKE_FUNCTION_future$backports$email$iterators$$$function_3_typed_subpart_iterator( PyObject *defaults );


static PyObject *MAKE_FUNCTION_future$backports$email$iterators$$$function_4__structure( PyObject *defaults );


// The module function definitions.
static PyObject *impl_future$backports$email$iterators$$$function_1_walk( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_self = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
        closure[0] = par_self;
        Py_INCREF( closure[0] );

        tmp_return_value = Nuitka_Generator_New(
            future$backports$email$iterators$$$function_1_walk$$$genobj_1_walk_context,
            const_str_plain_walk,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_6dadcb8a153903ee73e21367161ed941,
            closure,
            1
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$backports$email$iterators$$$function_1_walk );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$iterators$$$function_1_walk );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void future$backports$email$iterators$$$function_1_walk$$$genobj_1_walk_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_subpart = NULL;
    PyObject *var_subsubpart = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_517a0aef88f7226ba21c0e6c4f4fdd95, module_future$backports$email$iterators );
    generator->m_frame = cache_frame_generator;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->f_exc_type == Py_None ) generator->m_frame->f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->f_exc_type );
    generator->m_frame->f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->f_exc_value );
    generator->m_frame->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->f_exc_traceback );
#endif

    // Framed code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 23;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_expression_name_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_expression_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 29;
        goto frame_exception_exit_1;
    }

    tmp_unused = YIELD( generator, INCREASE_REFCOUNT( tmp_expression_name_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 29;
        goto frame_exception_exit_1;
    }
    tmp_source_name_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_is_multipart );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 30;
    tmp_cond_value_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 30;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_2 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 31;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_payload );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 31;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 31;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_subpart;
        var_subpart = tmp_assign_source_3;
        Py_INCREF( var_subpart );
        Py_XDECREF( old );
    }

    tmp_source_name_3 = var_subpart;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_walk );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 32;
    tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_2;
    }
    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_5 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 32;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_assign_source_6 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_subsubpart;
        var_subsubpart = tmp_assign_source_6;
        Py_INCREF( var_subsubpart );
        Py_XDECREF( old );
    }

    tmp_expression_name_2 = var_subsubpart;

    tmp_unused = YIELD( generator, INCREASE_REFCOUNT( tmp_expression_name_2 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 33;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 32;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 31;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    branch_no_1:;

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != generator->m_frame )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_subpart )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_subpart,
                    var_subpart
                );

                assert( res == 0 );
            }

            if ( var_subsubpart )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_subsubpart,
                    var_subsubpart
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_subpart );
    var_subpart = NULL;

    Py_XDECREF( var_subsubpart );
    var_subsubpart = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( var_subpart );
    var_subpart = NULL;

    Py_XDECREF( var_subsubpart );
    var_subsubpart = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}


static PyObject *impl_future$backports$email$iterators$$$function_2_body_line_iterator( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_msg = PyCell_NEW1( python_pars[ 0 ] );
    PyCellObject *par_decode = PyCell_NEW1( python_pars[ 1 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
        closure[0] = par_decode;
        Py_INCREF( closure[0] );
        closure[1] = par_msg;
        Py_INCREF( closure[1] );

        tmp_return_value = Nuitka_Generator_New(
            future$backports$email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_context,
            const_str_plain_body_line_iterator,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_3e63fbf1ad990de373046b944bd76e1a,
            closure,
            2
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$backports$email$iterators$$$function_2_body_line_iterator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_decode );
    Py_DECREF( par_decode );
    par_decode = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_decode );
    Py_DECREF( par_decode );
    par_decode = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$iterators$$$function_2_body_line_iterator );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void future$backports$email$iterators$$$function_2_body_line_iterator$$$genobj_1_body_line_iterator_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_subpart = NULL;
    PyObject *var_payload = NULL;
    PyObject *var_line = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_args_element_name_1;
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
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_res;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_575b6f9b87be623bf3e152d32d2a937f, module_future$backports$email$iterators );
    generator->m_frame = cache_frame_generator;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->f_exc_type == Py_None ) generator->m_frame->f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->f_exc_type );
    generator->m_frame->f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->f_exc_value );
    generator->m_frame->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->f_exc_traceback );
#endif

    // Framed code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 37;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_source_name_1 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "msg" );
        exception_tb = NULL;

        exception_lineno = 42;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_walk );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 42;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 42;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_subpart;
        var_subpart = tmp_assign_source_3;
        Py_INCREF( var_subpart );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_subpart;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_payload );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_2;
    }
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_dict_value_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "decode" );
        exception_tb = NULL;

        exception_lineno = 43;
        goto try_except_handler_2;
    }

    tmp_dict_key_1 = const_str_plain_decode;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    generator->m_frame->f_lineno = 43;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_2, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 43;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_payload;
        var_payload = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_isinstance_inst_1 = var_payload;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 44;
        goto try_except_handler_2;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_3 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_StringIO );

    if (unlikely( tmp_called_name_3 == NULL ))
    {
        tmp_called_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_StringIO );
    }

    if ( tmp_called_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "StringIO" );
        exception_tb = NULL;

        exception_lineno = 45;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_payload;

    generator->m_frame->f_lineno = 45;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto try_except_handler_2;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto try_except_handler_2;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_6 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 45;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    tmp_assign_source_7 = tmp_for_loop_2__iter_value;

    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_7;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_expression_name_1 = var_line;

    tmp_unused = YIELD( generator, INCREASE_REFCOUNT( tmp_expression_name_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 42;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != generator->m_frame )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( generator->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    generator->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_decode,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_subpart )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_subpart,
                    var_subpart
                );

                assert( res == 0 );
            }

            if ( var_payload )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_payload,
                    var_payload
                );

                assert( res == 0 );
            }

            if ( var_line )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_line,
                    var_line
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    goto try_end_3;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( var_subpart );
    var_subpart = NULL;

    Py_XDECREF( var_payload );
    var_payload = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( var_subpart );
    var_subpart = NULL;

    Py_XDECREF( var_payload );
    var_payload = NULL;

    Py_XDECREF( var_line );
    var_line = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}


static PyObject *impl_future$backports$email$iterators$$$function_3_typed_subpart_iterator( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_msg = PyCell_NEW1( python_pars[ 0 ] );
    PyCellObject *par_maintype = PyCell_NEW1( python_pars[ 1 ] );
    PyCellObject *par_subtype = PyCell_NEW1( python_pars[ 2 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(3 * sizeof(PyCellObject *));
        closure[0] = par_maintype;
        Py_INCREF( closure[0] );
        closure[1] = par_msg;
        Py_INCREF( closure[1] );
        closure[2] = par_subtype;
        Py_INCREF( closure[2] );

        tmp_return_value = Nuitka_Generator_New(
            future$backports$email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_context,
            const_str_plain_typed_subpart_iterator,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_107793da39e2d33c160707abca727e63,
            closure,
            3
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$backports$email$iterators$$$function_3_typed_subpart_iterator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_maintype );
    Py_DECREF( par_maintype );
    par_maintype = NULL;

    CHECK_OBJECT( (PyObject *)par_subtype );
    Py_DECREF( par_subtype );
    par_subtype = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_maintype );
    Py_DECREF( par_maintype );
    par_maintype = NULL;

    CHECK_OBJECT( (PyObject *)par_subtype );
    Py_DECREF( par_subtype );
    par_subtype = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$iterators$$$function_3_typed_subpart_iterator );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void future$backports$email$iterators$$$function_3_typed_subpart_iterator$$$genobj_1_typed_subpart_iterator_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_subpart = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_next_source_1;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_d5496c5b4099404575fe4f80f8beaabb, module_future$backports$email$iterators );
    generator->m_frame = cache_frame_generator;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_gen = (PyObject *)generator;
#endif

    Py_CLEAR( generator->m_frame->f_back );

    generator->m_frame->f_back = PyThreadState_GET()->frame;
    Py_INCREF( generator->m_frame->f_back );

    PyThreadState_GET()->frame = generator->m_frame;
    Py_INCREF( generator->m_frame );

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing += 1;
#endif

#if PYTHON_VERSION >= 300
    // Accept currently existing exception as the one to publish again when we
    // yield or yield from.

    PyThreadState *thread_state = PyThreadState_GET();

    generator->m_frame->f_exc_type = thread_state->exc_type;
    if ( generator->m_frame->f_exc_type == Py_None ) generator->m_frame->f_exc_type = NULL;
    Py_XINCREF( generator->m_frame->f_exc_type );
    generator->m_frame->f_exc_value = thread_state->exc_value;
    Py_XINCREF( generator->m_frame->f_exc_value );
    generator->m_frame->f_exc_traceback = thread_state->exc_traceback;
    Py_XINCREF( generator->m_frame->f_exc_traceback );
#endif

    // Framed code:
    // Throwing into not started generators is possible. As they don't stand any
    // chance to deal with them, we might as well create traceback on the
    // outside,
    if ( generator->m_exception_type )
    {
        generator->m_yielded = NULL;

        exception_type = generator->m_exception_type;
        generator->m_exception_type = NULL;

        exception_value = generator->m_exception_value;
        generator->m_exception_value = NULL;

        exception_tb = generator->m_exception_tb;;
        generator->m_exception_tb = NULL;

        if (exception_tb == NULL)
        {
            exception_lineno = 49;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_source_name_1 = PyCell_GET( generator->m_closure[1] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "msg" );
        exception_tb = NULL;

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_walk );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    generator->m_frame->f_lineno = 56;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_1;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_2 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 56;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_2;
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_subpart;
        var_subpart = tmp_assign_source_3;
        Py_INCREF( var_subpart );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_subpart;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_content_maintype );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 57;
    tmp_compare_left_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto try_except_handler_2;
    }
    tmp_compare_right_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_compare_right_1 == NULL )
    {
        Py_DECREF( tmp_compare_left_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "maintype" );
        exception_tb = NULL;

        exception_lineno = 57;
        goto try_except_handler_2;
    }

    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 57;
        goto try_except_handler_2;
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
    tmp_compexpr_left_1 = PyCell_GET( generator->m_closure[2] );

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "subtype" );
        exception_tb = NULL;

        exception_lineno = 58;
        goto try_except_handler_2;
    }

    tmp_compexpr_right_1 = Py_None;
    tmp_or_left_value_1 = BOOL_FROM( tmp_compexpr_left_1 == tmp_compexpr_right_1 );
    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    assert( !(tmp_or_left_truth_1 == -1) );
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_source_name_3 = var_subpart;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get_content_subtype );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto try_except_handler_2;
    }
    generator->m_frame->f_lineno = 58;
    tmp_compexpr_left_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_compexpr_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto try_except_handler_2;
    }
    tmp_compexpr_right_2 = PyCell_GET( generator->m_closure[2] );

    if ( tmp_compexpr_right_2 == NULL )
    {
        Py_DECREF( tmp_compexpr_left_2 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "subtype" );
        exception_tb = NULL;

        exception_lineno = 58;
        goto try_except_handler_2;
    }

    tmp_or_right_value_1 = RICH_COMPARE_EQ( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    Py_DECREF( tmp_compexpr_left_2 );
    if ( tmp_or_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 58;
        goto try_except_handler_2;
    }
    tmp_cond_value_1 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_cond_value_1 = tmp_or_left_value_1;
    or_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 58;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_expression_name_1 = var_subpart;

    tmp_unused = YIELD( generator, INCREASE_REFCOUNT( tmp_expression_name_1 ) );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 59;
        goto try_except_handler_2;
    }
    branch_no_2:;
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 56;
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

#if PYTHON_VERSION >= 340
    generator->m_frame->f_executing -= 1;
#endif

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    goto frame_no_exception_1;

    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if ( !EXCEPTION_MATCH_GENERATOR( exception_type ) )
    {
        int needs_detach = false;

        if ( exception_tb == NULL )
        {
            exception_tb = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            needs_detach = true;
        }
        else if ( exception_tb->tb_frame != generator->m_frame )
        {
            PyTracebackObject *traceback_new = MAKE_TRACEBACK( generator->m_frame, exception_lineno );
            traceback_new->tb_next = exception_tb;
            exception_tb = traceback_new;

            needs_detach = true;
        }

        if (needs_detach)
        {

            tmp_frame_locals = PyDict_New();
            if ( generator->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    generator->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_maintype,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( generator->m_closure[2]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_subtype,
                    generator->m_closure[2]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_subpart )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_subpart,
                    var_subpart
                );

                assert( res == 0 );
            }



            detachFrame( exception_tb, tmp_frame_locals );
        }
    }

#if PYTHON_VERSION >= 300
    Py_CLEAR( generator->m_frame->f_exc_type );
    Py_CLEAR( generator->m_frame->f_exc_value );
    Py_CLEAR( generator->m_frame->f_exc_traceback );
#endif

    Py_DECREF( generator->m_frame );
    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;

    goto try_end_2;
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

    Py_XDECREF( var_subpart );
    var_subpart = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    Py_XDECREF( var_subpart );
    var_subpart = NULL;


    RESTORE_ERROR_OCCURRED( PyExc_StopIteration, NULL, NULL );
    Py_INCREF( PyExc_StopIteration );

    generator->m_yielded = NULL;
    return;

    function_exception_exit:
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    generator->m_yielded = NULL;
    return;

}


static PyObject *impl_future$backports$email$iterators$$$function_4__structure( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_msg = python_pars[ 0 ];
    PyObject *par_fp = python_pars[ 1 ];
    PyObject *par_level = python_pars[ 2 ];
    PyObject *par_include_default = python_pars[ 3 ];
    PyObject *var_tab = NULL;
    PyObject *var_subpart = NULL;
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
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_kw_name_3;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_4a1bb0fe21df23ddb031a65705386819, module_future$backports$email$iterators );
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
    tmp_compare_left_1 = par_fp;

    tmp_compare_right_1 = Py_None;
    tmp_is_1 = ( tmp_compare_left_1 == tmp_compare_right_1 );
    if ( tmp_is_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_stdout );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = par_fp;
        assert( old != NULL );
        par_fp = tmp_assign_source_1;
        Py_DECREF( old );
    }

    branch_no_1:;
    tmp_left_name_1 = const_unicode_space;
    tmp_left_name_2 = par_level;

    tmp_right_name_2 = const_int_pos_4;
    tmp_right_name_1 = BINARY_OPERATION_MUL( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = BINARY_OPERATION_MUL( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 66;
        goto frame_exception_exit_1;
    }
    assert( var_tab == NULL );
    var_tab = tmp_assign_source_2;

    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_1 != NULL );
    tmp_args_name_1 = PyTuple_New( 1 );
    tmp_left_name_3 = var_tab;

    tmp_source_name_2 = par_msg;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get_content_type );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 67;
    tmp_right_name_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = const_unicode_empty;
    tmp_dict_key_1 = const_str_plain_end;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_fp;

    tmp_dict_key_2 = const_str_plain_file;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    frame_function->f_lineno = 67;
    tmp_unused = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 67;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_cond_value_1 = par_include_default;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_3 != NULL );
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_left_name_4 = const_unicode_digest_214f36440c692c7c2447223c711f8394;
    tmp_source_name_3 = par_msg;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get_default_type );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 69;
    tmp_right_name_4 = CALL_FUNCTION_NO_ARGS( tmp_called_name_4 );
    Py_DECREF( tmp_called_name_4 );
    if ( tmp_right_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );

        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_2 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = par_fp;

    tmp_dict_key_3 = const_str_plain_file;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 69;
    tmp_unused = CALL_FUNCTION( tmp_called_name_3, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 69;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_2;
    branch_no_2:;
    tmp_called_name_5 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_5 != NULL );
    tmp_kw_name_3 = _PyDict_NewPresized( 1 );
    tmp_dict_value_4 = par_fp;

    tmp_dict_key_4 = const_str_plain_file;
    PyDict_SetItem( tmp_kw_name_3, tmp_dict_key_4, tmp_dict_value_4 );
    frame_function->f_lineno = 71;
    tmp_unused = CALL_FUNCTION_WITH_KEYARGS( tmp_called_name_5, tmp_kw_name_3 );
    Py_DECREF( tmp_kw_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_end_2:;
    tmp_source_name_4 = par_msg;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_is_multipart );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 72;
    tmp_cond_value_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_5 = par_msg;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_get_payload );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 73;
    tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_7 );
    Py_DECREF( tmp_called_name_7 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_3 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
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
            frame_function->f_lineno = 73;
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
        PyObject *old = var_subpart;
        var_subpart = tmp_assign_source_5;
        Py_INCREF( var_subpart );
        Py_XDECREF( old );
    }

    tmp_called_name_8 = GET_STRING_DICT_VALUE( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain__structure );

    if (unlikely( tmp_called_name_8 == NULL ))
    {
        tmp_called_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__structure );
    }

    if ( tmp_called_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_structure" );
        exception_tb = NULL;

        exception_lineno = 74;
        goto try_except_handler_2;
    }

    tmp_args_element_name_1 = var_subpart;

    tmp_args_element_name_2 = par_fp;

    tmp_left_name_5 = par_level;

    tmp_right_name_5 = const_int_pos_1;
    tmp_args_element_name_3 = BINARY_OPERATION_ADD( tmp_left_name_5, tmp_right_name_5 );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_2;
    }
    tmp_args_element_name_4 = par_include_default;

    frame_function->f_lineno = 74;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 74;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 73;
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

    branch_no_3:;

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
            if ( par_msg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    par_msg
                );

                assert( res == 0 );
            }

            if ( par_fp )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fp,
                    par_fp
                );

                assert( res == 0 );
            }

            if ( par_level )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_level,
                    par_level
                );

                assert( res == 0 );
            }

            if ( par_include_default )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_include_default,
                    par_include_default
                );

                assert( res == 0 );
            }

            if ( var_tab )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_tab,
                    var_tab
                );

                assert( res == 0 );
            }

            if ( var_subpart )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_subpart,
                    var_subpart
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

    tmp_return_value = Py_None;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( future$backports$email$iterators$$$function_4__structure );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    CHECK_OBJECT( (PyObject *)par_fp );
    Py_DECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_level );
    Py_DECREF( par_level );
    par_level = NULL;

    CHECK_OBJECT( (PyObject *)par_include_default );
    Py_DECREF( par_include_default );
    par_include_default = NULL;

    CHECK_OBJECT( (PyObject *)var_tab );
    Py_DECREF( var_tab );
    var_tab = NULL;

    Py_XDECREF( var_subpart );
    var_subpart = NULL;

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

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    Py_XDECREF( par_fp );
    par_fp = NULL;

    CHECK_OBJECT( (PyObject *)par_level );
    Py_DECREF( par_level );
    par_level = NULL;

    CHECK_OBJECT( (PyObject *)par_include_default );
    Py_DECREF( par_include_default );
    par_include_default = NULL;

    Py_XDECREF( var_tab );
    var_tab = NULL;

    Py_XDECREF( var_subpart );
    var_subpart = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( future$backports$email$iterators$$$function_4__structure );
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



static PyObject *MAKE_FUNCTION_future$backports$email$iterators$$$function_1_walk(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$iterators$$$function_1_walk,
        const_str_plain_walk,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_517a0aef88f7226ba21c0e6c4f4fdd95,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email$iterators,
        const_unicode_digest_6220e16c79276bbb44f1ce05669ec2b4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$iterators$$$function_2_body_line_iterator( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$iterators$$$function_2_body_line_iterator,
        const_str_plain_body_line_iterator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_575b6f9b87be623bf3e152d32d2a937f,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email$iterators,
        const_unicode_digest_a24ea58a4d922cf7b7215c4a777e0b17
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$iterators$$$function_3_typed_subpart_iterator( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$iterators$$$function_3_typed_subpart_iterator,
        const_str_plain_typed_subpart_iterator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d5496c5b4099404575fe4f80f8beaabb,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email$iterators,
        const_unicode_digest_a35294548215811533a2601acdd1deb1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_future$backports$email$iterators$$$function_4__structure( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_future$backports$email$iterators$$$function_4__structure,
        const_str_plain__structure,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_4a1bb0fe21df23ddb031a65705386819,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_future$backports$email$iterators,
        const_unicode_digest_029d4e1734797170284f010e3168c7fb
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_future$backports$email$iterators =
{
    PyModuleDef_HEAD_INIT,
    "future.backports.email.iterators",   /* m_name */
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

MOD_INIT_DECL( future$backports$email$iterators )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_future$backports$email$iterators );
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

    // puts( "in initfuture$backports$email$iterators" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_future$backports$email$iterators = Py_InitModule4(
        "future.backports.email.iterators",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_future$backports$email$iterators = PyModule_Create( &mdef_future$backports$email$iterators );
#endif

    moduledict_future$backports$email$iterators = (PyDictObject *)((PyModuleObject *)module_future$backports$email$iterators)->md_dict;

    CHECK_OBJECT( module_future$backports$email$iterators );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_digest_51a5cce8dbd2cdef5f8a3da46aa2b87f, module_future$backports$email$iterators );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_future$backports$email$iterators );

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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_name_from_1;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_unicode_digest_e3c66ca9a856a3770c2415f2700c10d2;
    UPDATE_STRING_DICT0( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_c5aaf3f3095a1f452655051203c89fbf;
    UPDATE_STRING_DICT0( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_3 );
    tmp_assign_source_4 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "unicode_literals");
    UPDATE_STRING_DICT0( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_unicode_literals, tmp_assign_source_4 );
    tmp_assign_source_5 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "division");
    UPDATE_STRING_DICT0( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_division, tmp_assign_source_5 );
    tmp_assign_source_6 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "absolute_import");
    UPDATE_STRING_DICT0( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_absolute_import, tmp_assign_source_6 );
    tmp_assign_source_7 = LIST_COPY( const_list_e29e322044e6feca7a4fd4912e0cef94_list );
    UPDATE_STRING_DICT1( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain___all__, tmp_assign_source_7 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_6a7aabf5bdd24b9db1471c174ff4b16c, module_future$backports$email$iterators );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_future$backports$email$iterators)->md_dict;
    frame_module->f_lineno = 18;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_0 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 18;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_8 );
    tmp_import_globals_2 = ((PyModuleObject *)module_future$backports$email$iterators)->md_dict;
    frame_module->f_lineno = 19;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_io, tmp_import_globals_2, tmp_import_globals_2, const_tuple_str_plain_StringIO_tuple, const_int_0 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_9 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_StringIO );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 19;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_StringIO, tmp_assign_source_9 );

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
    tmp_assign_source_10 = MAKE_FUNCTION_future$backports$email$iterators$$$function_1_walk(  );
    UPDATE_STRING_DICT1( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_walk, tmp_assign_source_10 );
    tmp_defaults_1 = const_tuple_false_tuple;
    tmp_assign_source_11 = MAKE_FUNCTION_future$backports$email$iterators$$$function_2_body_line_iterator( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_body_line_iterator, tmp_assign_source_11 );
    tmp_defaults_2 = const_tuple_unicode_plain_text_none_tuple;
    tmp_assign_source_12 = MAKE_FUNCTION_future$backports$email$iterators$$$function_3_typed_subpart_iterator( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    UPDATE_STRING_DICT1( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain_typed_subpart_iterator, tmp_assign_source_12 );
    tmp_defaults_3 = const_tuple_none_int_0_false_tuple;
    tmp_assign_source_13 = MAKE_FUNCTION_future$backports$email$iterators$$$function_4__structure( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    UPDATE_STRING_DICT1( moduledict_future$backports$email$iterators, (Nuitka_StringObject *)const_str_plain__structure, tmp_assign_source_13 );

    return MOD_RETURN_VALUE( module_future$backports$email$iterators );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
