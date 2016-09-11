// This file contains helper functions that are automatically created from
// templates.

#include "nuitka/prelude.hpp"

extern PyObject *callPythonFunction( PyObject *func, PyObject **args, int count );


PyObject *CALL_FUNCTION_WITH_ARGS1( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 1; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 1 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 1; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 1 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 1 * sizeof(PyObject *) );
            memcpy( python_pars + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 1 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 1 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 1; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 1 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 1 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 1, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 1 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 1 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (1 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 1 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (1 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 1 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            1
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 1 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS2( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 2; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 2 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 2; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 2 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 2 * sizeof(PyObject *) );
            memcpy( python_pars + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 2 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 2 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 2; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 2 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 2 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 2, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 2 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 2 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (2 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 2 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (2 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 2 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            2
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 2 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS3( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 3; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 3 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 3; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 3 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 3 * sizeof(PyObject *) );
            memcpy( python_pars + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 3 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 3 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 3; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 3 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 3 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 3, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 3 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 3 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (3 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 3 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (3 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 3 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            3
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 3 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS4( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 4; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 4 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 4; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 4 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 4 * sizeof(PyObject *) );
            memcpy( python_pars + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 4 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 4 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 4; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 4 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 4 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 4, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 4 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 4 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (4 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 4 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (4 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 4 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            4
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 4 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS5( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 5; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 5 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 5; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 5 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 5 * sizeof(PyObject *) );
            memcpy( python_pars + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 5 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 5 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 5; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 5 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 5 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 5, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 5 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 5 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (5 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 5 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (5 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 5 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            5
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 5 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS6( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 6; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 6 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 6; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 6 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 6 * sizeof(PyObject *) );
            memcpy( python_pars + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 6 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 6 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 6; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 6 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 6 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 6, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 6 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 6 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (6 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 6 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (6 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 6 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            6
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 6 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS7( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 7; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 7 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 7; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 7 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 7 * sizeof(PyObject *) );
            memcpy( python_pars + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 7 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 7 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 7; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 7 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 7 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 7, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 7 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 7 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (7 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 7 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (7 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 7 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            7
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 7 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS8( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 8; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 8 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 8; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 8 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 8 * sizeof(PyObject *) );
            memcpy( python_pars + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 8 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 8 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 8; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 8 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 8 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 8, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 8 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 8 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (8 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 8 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (8 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 8 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            8
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 8 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS9( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 9; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 9 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 9; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 9 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 9 * sizeof(PyObject *) );
            memcpy( python_pars + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 9 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 9 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 9; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 9 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 9 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 9, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 9 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 9 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (9 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 9 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (9 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 9 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            9
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 9 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS12( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 12; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 12 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 12; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 12 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 12 * sizeof(PyObject *) );
            memcpy( python_pars + 12, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 12 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 12 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 12; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 12 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 12 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 12, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 12 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 12 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (12 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 12 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (12 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 12 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            12
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 12 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS14( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 14; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 14 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 14; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 14 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 14 * sizeof(PyObject *) );
            memcpy( python_pars + 14, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 14 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 14 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 14; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 14 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 14 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 14, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 14 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 14 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (14 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 14 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (14 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 14 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            14
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 14 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS15( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 15; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 15 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 15; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 15 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 15 * sizeof(PyObject *) );
            memcpy( python_pars + 15, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 15 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 15 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 15; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 15 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 15 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 15, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 15 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 15 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (15 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 15 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (15 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 15 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            15
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 15 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}

PyObject *CALL_FUNCTION_WITH_ARGS16( PyObject *called, PyObject **args )
{
    CHECK_OBJECT( called );

    // Check if arguments are valid objects in debug mode.
#ifndef __NUITKA_NO_ASSERT__
    for( size_t i = 0; i < 16; i++ )
    {
        CHECK_OBJECT( args[ i ] );
    }
#endif

    if ( Nuitka_Function_Check( called ) )
    {
        if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
        {
            return NULL;
        }

        Nuitka_FunctionObject *function = (Nuitka_FunctionObject *)called;
        PyObject *result;

        if ( function->m_args_simple && 16 == function->m_args_positional_count )
        {
            for( Py_ssize_t i = 0; i < 16; i++ )
            {
                Py_INCREF( args[ i ] );
            }

            result = function->m_c_code( function, args );
        }
        else if ( function->m_args_simple && 16 + function->m_defaults_given == function->m_args_positional_count )
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
            PyObject *python_pars[ function->m_args_positional_count ];
#endif
            memcpy( python_pars, args, 16 * sizeof(PyObject *) );
            memcpy( python_pars + 16, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

            for( Py_ssize_t i = 0; i < function->m_args_positional_count; i++ )
            {
                Py_INCREF( python_pars[ i ] );
            }

            result = function->m_c_code( function, python_pars );
        }
        else
        {
#ifdef _MSC_VER
            PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
            PyObject *python_pars[ function->m_args_overall_count ];
#endif
            memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

            if ( parseArgumentsPos( function, python_pars, args, 16 ))
            {
                result = function->m_c_code( function, python_pars );
            }
            else
            {
                result = NULL;
            }
        }

        Py_LeaveRecursiveCall();

        return result;
    }
    else if ( Nuitka_Method_Check( called ) )
    {
        Nuitka_MethodObject *method = (Nuitka_MethodObject *)called;

        // Unbound method without arguments, let the error path be slow.
        if ( method->m_object != NULL )
        {
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }

            Nuitka_FunctionObject *function = method->m_function;

            PyObject *result;

            if ( function->m_args_simple && 16 + 1 == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                for( Py_ssize_t i = 0; i < 16; i++ )
                {
                    python_pars[ i + 1 ] = args[ i ];
                    Py_INCREF( args[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else if ( function->m_args_simple && 16 + 1 + function->m_defaults_given == function->m_args_positional_count )
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_positional_count );
#else
                PyObject *python_pars[ function->m_args_positional_count ];
#endif
                python_pars[ 0 ] = method->m_object;
                Py_INCREF( method->m_object );

                memcpy( python_pars+1, args, 16 * sizeof(PyObject *) );
                memcpy( python_pars+1 + 16, &PyTuple_GET_ITEM( function->m_defaults, 0 ), function->m_defaults_given * sizeof(PyObject *) );

                for( Py_ssize_t i = 1; i < function->m_args_overall_count; i++ )
                {
                    Py_INCREF( python_pars[ i ] );
                }

                result = function->m_c_code( function, python_pars );
            }
            else
            {
#ifdef _MSC_VER
                PyObject **python_pars = (PyObject **)_alloca( sizeof( PyObject * ) * function->m_args_overall_count );
#else
                PyObject *python_pars[ function->m_args_overall_count ];
#endif
                memset( python_pars, 0, function->m_args_overall_count * sizeof(PyObject *) );

                if ( parseArgumentsMethodPos( function, python_pars, method->m_object, args, 16 ) )
                {
                    result = function->m_c_code( function, python_pars );
                }
                else
                {
                    result = NULL;
                }
            }

            Py_LeaveRecursiveCall();

            return result;
        }
    }
    else if ( PyCFunction_Check( called ) )
    {
        // Try to be fast about wrapping the arguments.
        int flags = PyCFunction_GET_FLAGS( called );

        if ( flags & METH_NOARGS )
        {
#if 16 == 0
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, NULL );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(
                PyExc_TypeError,
                "%s() takes no arguments (16 given)",
                ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else if ( flags & METH_O )
        {
#if 16 == 1
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            PyObject *result = (*method)( self, args[0] );

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                return NULL;
            }
#else
            PyErr_Format(PyExc_TypeError,
                "%s() takes exactly one argument (16 given)",
                 ((PyCFunctionObject *)called)->m_ml->ml_name
            );
            return NULL;
#endif
        }
        else
        {
            PyCFunction method = PyCFunction_GET_FUNCTION( called );
            PyObject *self = PyCFunction_GET_SELF( called );

            PyObject *pos_args = MAKE_TUPLE( args, 16 );

            PyObject *result;

            assert( flags && METH_VARARGS );

            // Recursion guard is not strictly necessary, as we already have
            // one on our way to here.
#ifdef _NUITKA_FULL_COMPAT
            if (unlikely( Py_EnterRecursiveCall( (char *)" while calling a Python object" ) ))
            {
                return NULL;
            }
#endif

            if ( flags && METH_KEYWORDS )
            {
                result = (*(PyCFunctionWithKeywords)method)( self, pos_args, NULL );
            }
            else
            {
                result = (*method)( self, pos_args );
            }

#ifdef _NUITKA_FULL_COMPAT
            Py_LeaveRecursiveCall();
#endif

            if ( result != NULL )
            {
            // Some buggy C functions do set an error, but do not indicate it
            // and Nuitka inner workings can get upset/confused from it.
                DROP_ERROR_OCCURRED();

                Py_DECREF( pos_args );
                return result;
            }
            else
            {
                // Other buggy C functions do this, return NULL, but with
                // no error set, not allowed.
                if (unlikely( !ERROR_OCCURRED() ))
                {
                    PyErr_Format(
                        PyExc_SystemError,
                        "NULL result without error in PyObject_Call"
                    );
                }

                Py_DECREF( pos_args );
                return NULL;
            }
        }
    }
    else if ( PyFunction_Check( called ) )
    {
        return callPythonFunction(
            called,
            args,
            16
        );
    }

    PyObject *pos_args = MAKE_TUPLE( args, 16 );

    PyObject *result = CALL_FUNCTION(
        called,
        pos_args,
        NULL
    );

    Py_DECREF( pos_args );

    return result;
}
/* Code to register embedded modules for meta path based loading if any. */

#include "nuitka/unfreezing.hpp"

/* Table for lookup to find compiled or bytecode modules included in this
 * binary or module, or put along this binary as extension modules. We do
 * our own loading for each of these.
 */
MOD_INIT_DECL( OpenGL );
MOD_INIT_DECL( OpenGL$GLX );
MOD_INIT_DECL( OpenGL$WGL );
MOD_INIT_DECL( OpenGL$_configflags );
MOD_INIT_DECL( OpenGL$constant );
MOD_INIT_DECL( OpenGL$platform );
MOD_INIT_DECL( OpenGL$plugins );
MOD_INIT_DECL( OpenGL$raw );
MOD_INIT_DECL( OpenGL$raw$GLX );
MOD_INIT_DECL( OpenGL$raw$WGL );
MOD_INIT_DECL( OpenGL$raw$_GLX );
MOD_INIT_DECL( OpenGL$raw$_GLX_ARB );
MOD_INIT_DECL( OpenGL$raw$_GLX_NV );
MOD_INIT_DECL( OpenGL$raw$_WGL );
MOD_INIT_DECL( OpenGL$raw$_WGL_ARB );
MOD_INIT_DECL( OpenGL$raw$_WGL_NV );
MOD_INIT_DECL( OpenGL$version );
MOD_INIT_DECL( __main__ );
MOD_INIT_DECL( _dummy_thread );
MOD_INIT_DECL( _thread );
MOD_INIT_DECL( appdirs );
MOD_INIT_DECL( builtins );
MOD_INIT_DECL( configparser );
MOD_INIT_DECL( copyreg );
MOD_INIT_DECL( decorator );
MOD_INIT_DECL( future );
MOD_INIT_DECL( future$backports );
MOD_INIT_DECL( future$backports$datetime );
MOD_INIT_DECL( future$backports$email );
MOD_INIT_DECL( future$backports$email$_encoded_words );
MOD_INIT_DECL( future$backports$email$_parseaddr );
MOD_INIT_DECL( future$backports$email$_policybase );
MOD_INIT_DECL( future$backports$email$base64mime );
MOD_INIT_DECL( future$backports$email$charset );
MOD_INIT_DECL( future$backports$email$encoders );
MOD_INIT_DECL( future$backports$email$errors );
MOD_INIT_DECL( future$backports$email$feedparser );
MOD_INIT_DECL( future$backports$email$generator );
MOD_INIT_DECL( future$backports$email$header );
MOD_INIT_DECL( future$backports$email$iterators );
MOD_INIT_DECL( future$backports$email$message );
MOD_INIT_DECL( future$backports$email$parser );
MOD_INIT_DECL( future$backports$email$quoprimime );
MOD_INIT_DECL( future$backports$email$utils );
MOD_INIT_DECL( future$backports$http );
MOD_INIT_DECL( future$backports$http$client );
MOD_INIT_DECL( future$backports$http$cookiejar );
MOD_INIT_DECL( future$backports$misc );
MOD_INIT_DECL( future$backports$urllib );
MOD_INIT_DECL( future$backports$urllib$error );
MOD_INIT_DECL( future$backports$urllib$parse );
MOD_INIT_DECL( future$backports$urllib$request );
MOD_INIT_DECL( future$backports$urllib$response );
MOD_INIT_DECL( future$backports$urllib$robotparser );
MOD_INIT_DECL( future$builtins );
MOD_INIT_DECL( future$builtins$iterators );
MOD_INIT_DECL( future$builtins$misc );
MOD_INIT_DECL( future$builtins$newnext );
MOD_INIT_DECL( future$builtins$newround );
MOD_INIT_DECL( future$builtins$newsuper );
MOD_INIT_DECL( future$moves );
MOD_INIT_DECL( future$moves$dbm );
MOD_INIT_DECL( future$moves$dbm$dumb );
MOD_INIT_DECL( future$moves$dbm$gnu );
MOD_INIT_DECL( future$moves$dbm$ndbm );
MOD_INIT_DECL( future$moves$html );
MOD_INIT_DECL( future$moves$html$entities );
MOD_INIT_DECL( future$moves$test );
MOD_INIT_DECL( future$moves$test$support );
MOD_INIT_DECL( future$standard_library );
MOD_INIT_DECL( future$types );
MOD_INIT_DECL( future$types$newbytes );
MOD_INIT_DECL( future$types$newdict );
MOD_INIT_DECL( future$types$newint );
MOD_INIT_DECL( future$types$newlist );
MOD_INIT_DECL( future$types$newobject );
MOD_INIT_DECL( future$types$newrange );
MOD_INIT_DECL( future$types$newstr );
MOD_INIT_DECL( future$utils );
MOD_INIT_DECL( future$utils$surrogateescape );
MOD_INIT_DECL( html );
MOD_INIT_DECL( html$entities );
MOD_INIT_DECL( mako );
MOD_INIT_DECL( mako$_ast_util );
MOD_INIT_DECL( mako$ast );
MOD_INIT_DECL( mako$cache );
MOD_INIT_DECL( mako$codegen );
MOD_INIT_DECL( mako$compat );
MOD_INIT_DECL( mako$exceptions );
MOD_INIT_DECL( mako$ext );
MOD_INIT_DECL( mako$ext$pygmentplugin );
MOD_INIT_DECL( mako$filters );
MOD_INIT_DECL( mako$lexer );
MOD_INIT_DECL( mako$parsetree );
MOD_INIT_DECL( mako$pygen );
MOD_INIT_DECL( mako$pyparser );
MOD_INIT_DECL( mako$runtime );
MOD_INIT_DECL( mako$template );
MOD_INIT_DECL( mako$util );
MOD_INIT_DECL( markupsafe );
MOD_INIT_DECL( markupsafe$_compat );
MOD_INIT_DECL( markupsafe$_constants );
MOD_INIT_DECL( markupsafe$_native );
MOD_INIT_DECL( numpy );
MOD_INIT_DECL( numpy$__config__ );
MOD_INIT_DECL( numpy$_import_tools );
MOD_INIT_DECL( numpy$add_newdocs );
MOD_INIT_DECL( numpy$compat );
MOD_INIT_DECL( numpy$compat$_inspect );
MOD_INIT_DECL( numpy$compat$py3k );
MOD_INIT_DECL( numpy$core );
MOD_INIT_DECL( numpy$core$_internal );
MOD_INIT_DECL( numpy$core$_methods );
MOD_INIT_DECL( numpy$core$arrayprint );
MOD_INIT_DECL( numpy$core$defchararray );
MOD_INIT_DECL( numpy$core$fromnumeric );
MOD_INIT_DECL( numpy$core$function_base );
MOD_INIT_DECL( numpy$core$getlimits );
MOD_INIT_DECL( numpy$core$info );
MOD_INIT_DECL( numpy$core$machar );
MOD_INIT_DECL( numpy$core$memmap );
MOD_INIT_DECL( numpy$core$numeric );
MOD_INIT_DECL( numpy$core$numerictypes );
MOD_INIT_DECL( numpy$core$records );
MOD_INIT_DECL( numpy$core$shape_base );
MOD_INIT_DECL( numpy$ctypeslib );
MOD_INIT_DECL( numpy$dual );
MOD_INIT_DECL( numpy$fft );
MOD_INIT_DECL( numpy$fft$fftpack );
MOD_INIT_DECL( numpy$fft$helper );
MOD_INIT_DECL( numpy$fft$info );
MOD_INIT_DECL( numpy$lib );
MOD_INIT_DECL( numpy$lib$_datasource );
MOD_INIT_DECL( numpy$lib$_iotools );
MOD_INIT_DECL( numpy$lib$_version );
MOD_INIT_DECL( numpy$lib$arraypad );
MOD_INIT_DECL( numpy$lib$arraysetops );
MOD_INIT_DECL( numpy$lib$arrayterator );
MOD_INIT_DECL( numpy$lib$financial );
MOD_INIT_DECL( numpy$lib$format );
MOD_INIT_DECL( numpy$lib$function_base );
MOD_INIT_DECL( numpy$lib$index_tricks );
MOD_INIT_DECL( numpy$lib$info );
MOD_INIT_DECL( numpy$lib$nanfunctions );
MOD_INIT_DECL( numpy$lib$npyio );
MOD_INIT_DECL( numpy$lib$polynomial );
MOD_INIT_DECL( numpy$lib$scimath );
MOD_INIT_DECL( numpy$lib$shape_base );
MOD_INIT_DECL( numpy$lib$stride_tricks );
MOD_INIT_DECL( numpy$lib$twodim_base );
MOD_INIT_DECL( numpy$lib$type_check );
MOD_INIT_DECL( numpy$lib$ufunclike );
MOD_INIT_DECL( numpy$lib$utils );
MOD_INIT_DECL( numpy$linalg );
MOD_INIT_DECL( numpy$linalg$info );
MOD_INIT_DECL( numpy$linalg$linalg );
MOD_INIT_DECL( numpy$ma );
MOD_INIT_DECL( numpy$ma$core );
MOD_INIT_DECL( numpy$ma$extras );
MOD_INIT_DECL( numpy$ma$mrecords );
MOD_INIT_DECL( numpy$matrixlib );
MOD_INIT_DECL( numpy$matrixlib$defmatrix );
MOD_INIT_DECL( numpy$polynomial );
MOD_INIT_DECL( numpy$polynomial$_polybase );
MOD_INIT_DECL( numpy$polynomial$chebyshev );
MOD_INIT_DECL( numpy$polynomial$hermite );
MOD_INIT_DECL( numpy$polynomial$hermite_e );
MOD_INIT_DECL( numpy$polynomial$laguerre );
MOD_INIT_DECL( numpy$polynomial$legendre );
MOD_INIT_DECL( numpy$polynomial$polynomial );
MOD_INIT_DECL( numpy$polynomial$polyutils );
MOD_INIT_DECL( numpy$random );
MOD_INIT_DECL( numpy$random$info );
MOD_INIT_DECL( numpy$version );
MOD_INIT_DECL( pyopencl );
MOD_INIT_DECL( pyopencl$_cluda );
MOD_INIT_DECL( pyopencl$_mymako );
MOD_INIT_DECL( pyopencl$array );
MOD_INIT_DECL( pyopencl$cache );
MOD_INIT_DECL( pyopencl$capture_call );
MOD_INIT_DECL( pyopencl$characterize );
MOD_INIT_DECL( pyopencl$compyte );
MOD_INIT_DECL( pyopencl$compyte$array );
MOD_INIT_DECL( pyopencl$compyte$dtypes );
MOD_INIT_DECL( pyopencl$elementwise );
MOD_INIT_DECL( pyopencl$reduction );
MOD_INIT_DECL( pyopencl$scan );
MOD_INIT_DECL( pyopencl$tools );
MOD_INIT_DECL( pyopencl$version );
MOD_INIT_DECL( pytools );
MOD_INIT_DECL( pytools$py_codegen );
MOD_INIT_DECL( reprlib );
MOD_INIT_DECL( six );
MOD_INIT_DECL( winreg );
static struct Nuitka_MetaPathBasedLoaderEntry meta_path_loader_entries[] =
{
    { (char *)"OpenGL", MOD_INIT_NAME( OpenGL ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"OpenGL.GLX", MOD_INIT_NAME( OpenGL$GLX ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"OpenGL.WGL", MOD_INIT_NAME( OpenGL$WGL ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"OpenGL._configflags", MOD_INIT_NAME( OpenGL$_configflags ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.constant", MOD_INIT_NAME( OpenGL$constant ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.platform", MOD_INIT_NAME( OpenGL$platform ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"OpenGL.plugins", MOD_INIT_NAME( OpenGL$plugins ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.raw", MOD_INIT_NAME( OpenGL$raw ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"OpenGL.raw.GLX", MOD_INIT_NAME( OpenGL$raw$GLX ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.raw.WGL", MOD_INIT_NAME( OpenGL$raw$WGL ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.raw._GLX", MOD_INIT_NAME( OpenGL$raw$_GLX ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.raw._GLX_ARB", MOD_INIT_NAME( OpenGL$raw$_GLX_ARB ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.raw._GLX_NV", MOD_INIT_NAME( OpenGL$raw$_GLX_NV ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.raw._WGL", MOD_INIT_NAME( OpenGL$raw$_WGL ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.raw._WGL_ARB", MOD_INIT_NAME( OpenGL$raw$_WGL_ARB ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.raw._WGL_NV", MOD_INIT_NAME( OpenGL$raw$_WGL_NV ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"OpenGL.version", MOD_INIT_NAME( OpenGL$version ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"__main__", MOD_INIT_NAME( __main__ ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"_dummy_thread", MOD_INIT_NAME( _dummy_thread ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"_thread", MOD_INIT_NAME( _thread ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"appdirs", MOD_INIT_NAME( appdirs ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"builtins", MOD_INIT_NAME( builtins ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"configparser", MOD_INIT_NAME( configparser ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"copyreg", MOD_INIT_NAME( copyreg ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"decorator", MOD_INIT_NAME( decorator ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future", MOD_INIT_NAME( future ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.backports", MOD_INIT_NAME( future$backports ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.backports.datetime", MOD_INIT_NAME( future$backports$datetime ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email", MOD_INIT_NAME( future$backports$email ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.backports.email._encoded_words", MOD_INIT_NAME( future$backports$email$_encoded_words ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email._parseaddr", MOD_INIT_NAME( future$backports$email$_parseaddr ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email._policybase", MOD_INIT_NAME( future$backports$email$_policybase ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.base64mime", MOD_INIT_NAME( future$backports$email$base64mime ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.charset", MOD_INIT_NAME( future$backports$email$charset ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.encoders", MOD_INIT_NAME( future$backports$email$encoders ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.errors", MOD_INIT_NAME( future$backports$email$errors ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.feedparser", MOD_INIT_NAME( future$backports$email$feedparser ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.generator", MOD_INIT_NAME( future$backports$email$generator ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.header", MOD_INIT_NAME( future$backports$email$header ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.iterators", MOD_INIT_NAME( future$backports$email$iterators ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.message", MOD_INIT_NAME( future$backports$email$message ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.parser", MOD_INIT_NAME( future$backports$email$parser ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.quoprimime", MOD_INIT_NAME( future$backports$email$quoprimime ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.email.utils", MOD_INIT_NAME( future$backports$email$utils ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.http", MOD_INIT_NAME( future$backports$http ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.backports.http.client", MOD_INIT_NAME( future$backports$http$client ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.http.cookiejar", MOD_INIT_NAME( future$backports$http$cookiejar ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.misc", MOD_INIT_NAME( future$backports$misc ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.urllib", MOD_INIT_NAME( future$backports$urllib ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.backports.urllib.error", MOD_INIT_NAME( future$backports$urllib$error ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.urllib.parse", MOD_INIT_NAME( future$backports$urllib$parse ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.urllib.request", MOD_INIT_NAME( future$backports$urllib$request ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.urllib.response", MOD_INIT_NAME( future$backports$urllib$response ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.backports.urllib.robotparser", MOD_INIT_NAME( future$backports$urllib$robotparser ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.builtins", MOD_INIT_NAME( future$builtins ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.builtins.iterators", MOD_INIT_NAME( future$builtins$iterators ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.builtins.misc", MOD_INIT_NAME( future$builtins$misc ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.builtins.newnext", MOD_INIT_NAME( future$builtins$newnext ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.builtins.newround", MOD_INIT_NAME( future$builtins$newround ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.builtins.newsuper", MOD_INIT_NAME( future$builtins$newsuper ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.moves", MOD_INIT_NAME( future$moves ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.moves.dbm", MOD_INIT_NAME( future$moves$dbm ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.moves.dbm.dumb", MOD_INIT_NAME( future$moves$dbm$dumb ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.moves.dbm.gnu", MOD_INIT_NAME( future$moves$dbm$gnu ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.moves.dbm.ndbm", MOD_INIT_NAME( future$moves$dbm$ndbm ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.moves.html", MOD_INIT_NAME( future$moves$html ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.moves.html.entities", MOD_INIT_NAME( future$moves$html$entities ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.moves.test", MOD_INIT_NAME( future$moves$test ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.moves.test.support", MOD_INIT_NAME( future$moves$test$support ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.standard_library", MOD_INIT_NAME( future$standard_library ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.types", MOD_INIT_NAME( future$types ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.types.newbytes", MOD_INIT_NAME( future$types$newbytes ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.types.newdict", MOD_INIT_NAME( future$types$newdict ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.types.newint", MOD_INIT_NAME( future$types$newint ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.types.newlist", MOD_INIT_NAME( future$types$newlist ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.types.newobject", MOD_INIT_NAME( future$types$newobject ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.types.newrange", MOD_INIT_NAME( future$types$newrange ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.types.newstr", MOD_INIT_NAME( future$types$newstr ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"future.utils", MOD_INIT_NAME( future$utils ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"future.utils.surrogateescape", MOD_INIT_NAME( future$utils$surrogateescape ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"html", MOD_INIT_NAME( html ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"html.entities", MOD_INIT_NAME( html$entities ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako", MOD_INIT_NAME( mako ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"mako._ast_util", MOD_INIT_NAME( mako$_ast_util ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.ast", MOD_INIT_NAME( mako$ast ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.cache", MOD_INIT_NAME( mako$cache ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.codegen", MOD_INIT_NAME( mako$codegen ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.compat", MOD_INIT_NAME( mako$compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.exceptions", MOD_INIT_NAME( mako$exceptions ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.ext", MOD_INIT_NAME( mako$ext ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"mako.ext.pygmentplugin", MOD_INIT_NAME( mako$ext$pygmentplugin ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.filters", MOD_INIT_NAME( mako$filters ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.lexer", MOD_INIT_NAME( mako$lexer ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.parsetree", MOD_INIT_NAME( mako$parsetree ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.pygen", MOD_INIT_NAME( mako$pygen ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.pyparser", MOD_INIT_NAME( mako$pyparser ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.runtime", MOD_INIT_NAME( mako$runtime ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.template", MOD_INIT_NAME( mako$template ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"mako.util", MOD_INIT_NAME( mako$util ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"markupsafe", MOD_INIT_NAME( markupsafe ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"markupsafe._compat", MOD_INIT_NAME( markupsafe$_compat ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"markupsafe._constants", MOD_INIT_NAME( markupsafe$_constants ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"markupsafe._native", MOD_INIT_NAME( markupsafe$_native ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy", MOD_INIT_NAME( numpy ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.__config__", MOD_INIT_NAME( numpy$__config__ ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy._import_tools", MOD_INIT_NAME( numpy$_import_tools ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.add_newdocs", MOD_INIT_NAME( numpy$add_newdocs ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.compat", MOD_INIT_NAME( numpy$compat ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.compat._inspect", MOD_INIT_NAME( numpy$compat$_inspect ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.compat.py3k", MOD_INIT_NAME( numpy$compat$py3k ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core", MOD_INIT_NAME( numpy$core ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.core._internal", MOD_INIT_NAME( numpy$core$_internal ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core._methods", MOD_INIT_NAME( numpy$core$_methods ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.arrayprint", MOD_INIT_NAME( numpy$core$arrayprint ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.defchararray", MOD_INIT_NAME( numpy$core$defchararray ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.fromnumeric", MOD_INIT_NAME( numpy$core$fromnumeric ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.function_base", MOD_INIT_NAME( numpy$core$function_base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.getlimits", MOD_INIT_NAME( numpy$core$getlimits ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.info", MOD_INIT_NAME( numpy$core$info ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.machar", MOD_INIT_NAME( numpy$core$machar ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.memmap", MOD_INIT_NAME( numpy$core$memmap ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.numeric", MOD_INIT_NAME( numpy$core$numeric ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.numerictypes", MOD_INIT_NAME( numpy$core$numerictypes ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.records", MOD_INIT_NAME( numpy$core$records ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.core.shape_base", MOD_INIT_NAME( numpy$core$shape_base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ctypeslib", MOD_INIT_NAME( numpy$ctypeslib ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.distutils", NULL, &constant_bin[ 1898563 ], 719, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.distutils.__config__", NULL, &constant_bin[ 1899282 ], 1455, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.__version__", NULL, &constant_bin[ 1900737 ], 399, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.ccompiler", NULL, &constant_bin[ 1901136 ], 21886, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command", NULL, &constant_bin[ 1923022 ], 1384, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.distutils.command.autodist", NULL, &constant_bin[ 1924406 ], 2813, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.bdist_rpm", NULL, &constant_bin[ 1927219 ], 1173, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build", NULL, &constant_bin[ 1928392 ], 2642, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build_clib", NULL, &constant_bin[ 1931034 ], 8998, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build_ext", NULL, &constant_bin[ 1940032 ], 13926, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build_py", NULL, &constant_bin[ 1953958 ], 1702, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build_scripts", NULL, &constant_bin[ 1955660 ], 2033, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.build_src", NULL, &constant_bin[ 1957693 ], 23409, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.config", NULL, &constant_bin[ 1981102 ], 13724, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.config_compiler", NULL, &constant_bin[ 1994826 ], 5930, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.develop", NULL, &constant_bin[ 2000756 ], 1128, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.egg_info", NULL, &constant_bin[ 2001884 ], 1069, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.install", NULL, &constant_bin[ 2002953 ], 2799, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.install_clib", NULL, &constant_bin[ 2005752 ], 2257, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.install_data", NULL, &constant_bin[ 2008009 ], 1329, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.install_headers", NULL, &constant_bin[ 2009338 ], 1370, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.command.sdist", NULL, &constant_bin[ 2010708 ], 1320, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.compat", NULL, &constant_bin[ 2012028 ], 592, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.conv_template", NULL, &constant_bin[ 2012620 ], 9760, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.core", NULL, &constant_bin[ 2022380 ], 5982, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.cpuinfo", NULL, &constant_bin[ 2028362 ], 44872, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.environment", NULL, &constant_bin[ 2073234 ], 3553, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.exec_command", NULL, &constant_bin[ 2076787 ], 18410, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.extension", NULL, &constant_bin[ 2095197 ], 2601, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.fcompiler", NULL, &constant_bin[ 2097798 ], 34196, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.distutils.from_template", NULL, &constant_bin[ 2131994 ], 8572, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.info", NULL, &constant_bin[ 2140566 ], 384, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.lib2def", NULL, &constant_bin[ 2140950 ], 4032, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.log", NULL, &constant_bin[ 2144982 ], 3125, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.mingw32ccompiler", NULL, &constant_bin[ 2148107 ], 16888, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.misc_util", NULL, &constant_bin[ 2164995 ], 77811, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.npy_pkg_config", NULL, &constant_bin[ 2242806 ], 15552, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.numpy_distribution", NULL, &constant_bin[ 2258358 ], 1106, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.system_info", NULL, &constant_bin[ 2259464 ], 80275, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.distutils.unixccompiler", NULL, &constant_bin[ 2339739 ], 3832, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.dual", MOD_INIT_NAME( numpy$dual ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.f2py", NULL, &constant_bin[ 2343571 ], 2101, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.f2py.__version__", NULL, &constant_bin[ 2345672 ], 486, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.auxfuncs", NULL, &constant_bin[ 2346158 ], 31654, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.capi_maps", NULL, &constant_bin[ 2377812 ], 22297, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.cb_rules", NULL, &constant_bin[ 2400109 ], 16777, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.cfuncs", NULL, &constant_bin[ 2416886 ], 37550, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.common_rules", NULL, &constant_bin[ 2454436 ], 5707, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.crackfortran", NULL, &constant_bin[ 2460143 ], 88860, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.diagnose", NULL, &constant_bin[ 2549003 ], 4343, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.f2py2e", NULL, &constant_bin[ 2553346 ], 20681, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.f2py_testing", NULL, &constant_bin[ 2574027 ], 1797, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.f90mod_rules", NULL, &constant_bin[ 2575824 ], 8746, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.func2subr", NULL, &constant_bin[ 2584570 ], 8012, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.rules", NULL, &constant_bin[ 2592582 ], 38663, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.f2py.use_rules", NULL, &constant_bin[ 2631245 ], 3750, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.fft", MOD_INIT_NAME( numpy$fft ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.fft.fftpack", MOD_INIT_NAME( numpy$fft$fftpack ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.fft.helper", MOD_INIT_NAME( numpy$fft$helper ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.fft.info", MOD_INIT_NAME( numpy$fft$info ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib", MOD_INIT_NAME( numpy$lib ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.lib._datasource", MOD_INIT_NAME( numpy$lib$_datasource ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib._iotools", MOD_INIT_NAME( numpy$lib$_iotools ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib._version", MOD_INIT_NAME( numpy$lib$_version ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.arraypad", MOD_INIT_NAME( numpy$lib$arraypad ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.arraysetops", MOD_INIT_NAME( numpy$lib$arraysetops ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.arrayterator", MOD_INIT_NAME( numpy$lib$arrayterator ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.financial", MOD_INIT_NAME( numpy$lib$financial ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.format", MOD_INIT_NAME( numpy$lib$format ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.function_base", MOD_INIT_NAME( numpy$lib$function_base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.index_tricks", MOD_INIT_NAME( numpy$lib$index_tricks ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.info", MOD_INIT_NAME( numpy$lib$info ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.nanfunctions", MOD_INIT_NAME( numpy$lib$nanfunctions ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.npyio", MOD_INIT_NAME( numpy$lib$npyio ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.polynomial", MOD_INIT_NAME( numpy$lib$polynomial ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.scimath", MOD_INIT_NAME( numpy$lib$scimath ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.shape_base", MOD_INIT_NAME( numpy$lib$shape_base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.stride_tricks", MOD_INIT_NAME( numpy$lib$stride_tricks ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.twodim_base", MOD_INIT_NAME( numpy$lib$twodim_base ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.type_check", MOD_INIT_NAME( numpy$lib$type_check ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.ufunclike", MOD_INIT_NAME( numpy$lib$ufunclike ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.lib.utils", MOD_INIT_NAME( numpy$lib$utils ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.linalg", MOD_INIT_NAME( numpy$linalg ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.linalg.info", MOD_INIT_NAME( numpy$linalg$info ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.linalg.linalg", MOD_INIT_NAME( numpy$linalg$linalg ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ma", MOD_INIT_NAME( numpy$ma ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.ma.core", MOD_INIT_NAME( numpy$ma$core ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ma.extras", MOD_INIT_NAME( numpy$ma$extras ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.ma.mrecords", MOD_INIT_NAME( numpy$ma$mrecords ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.matrixlib", MOD_INIT_NAME( numpy$matrixlib ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.matrixlib.defmatrix", MOD_INIT_NAME( numpy$matrixlib$defmatrix ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial", MOD_INIT_NAME( numpy$polynomial ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.polynomial._polybase", MOD_INIT_NAME( numpy$polynomial$_polybase ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.chebyshev", MOD_INIT_NAME( numpy$polynomial$chebyshev ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.hermite", MOD_INIT_NAME( numpy$polynomial$hermite ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.hermite_e", MOD_INIT_NAME( numpy$polynomial$hermite_e ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.laguerre", MOD_INIT_NAME( numpy$polynomial$laguerre ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.legendre", MOD_INIT_NAME( numpy$polynomial$legendre ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.polynomial", MOD_INIT_NAME( numpy$polynomial$polynomial ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.polynomial.polyutils", MOD_INIT_NAME( numpy$polynomial$polyutils ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.random", MOD_INIT_NAME( numpy$random ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.random.info", MOD_INIT_NAME( numpy$random$info ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"numpy.testing", NULL, &constant_bin[ 2634995 ], 793, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"numpy.testing.decorators", NULL, &constant_bin[ 2635788 ], 9843, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.testing.noseclasses", NULL, &constant_bin[ 2645631 ], 11235, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.testing.nosetester", NULL, &constant_bin[ 2656866 ], 16135, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.testing.utils", NULL, &constant_bin[ 2673001 ], 63518, NUITKA_BYTECODE_FLAG },
    { (char *)"numpy.version", MOD_INIT_NAME( numpy$version ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pkg_resources", NULL, &constant_bin[ 2736519 ], 115097, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"pkg_resources.extern", NULL, &constant_bin[ 2851616 ], 2994, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"pyopencl", MOD_INIT_NAME( pyopencl ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyopencl._cluda", MOD_INIT_NAME( pyopencl$_cluda ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl._mymako", MOD_INIT_NAME( pyopencl$_mymako ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl.array", MOD_INIT_NAME( pyopencl$array ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl.cache", MOD_INIT_NAME( pyopencl$cache ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl.capture_call", MOD_INIT_NAME( pyopencl$capture_call ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl.characterize", MOD_INIT_NAME( pyopencl$characterize ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyopencl.compyte", MOD_INIT_NAME( pyopencl$compyte ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pyopencl.compyte.array", MOD_INIT_NAME( pyopencl$compyte$array ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl.compyte.dtypes", MOD_INIT_NAME( pyopencl$compyte$dtypes ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl.elementwise", MOD_INIT_NAME( pyopencl$elementwise ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl.reduction", MOD_INIT_NAME( pyopencl$reduction ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl.scan", MOD_INIT_NAME( pyopencl$scan ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl.tools", MOD_INIT_NAME( pyopencl$tools ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pyopencl.version", MOD_INIT_NAME( pyopencl$version ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"pytools", MOD_INIT_NAME( pytools ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"pytools.py_codegen", MOD_INIT_NAME( pytools$py_codegen ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"reprlib", MOD_INIT_NAME( reprlib ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { (char *)"setuptools", NULL, &constant_bin[ 2854610 ], 7865, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"setuptools.archive_util", NULL, &constant_bin[ 2862475 ], 6205, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command", NULL, &constant_bin[ 2868680 ], 852, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"setuptools.command.bdist_egg", NULL, &constant_bin[ 2869532 ], 17699, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.bdist_rpm", NULL, &constant_bin[ 2887231 ], 1930, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.develop", NULL, &constant_bin[ 2889161 ], 7352, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.easy_install", NULL, &constant_bin[ 2896513 ], 80199, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.egg_info", NULL, &constant_bin[ 2976712 ], 20940, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.install", NULL, &constant_bin[ 2997652 ], 5005, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.install_scripts", NULL, &constant_bin[ 3002657 ], 2913, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.sdist", NULL, &constant_bin[ 3005570 ], 8352, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.command.setopt", NULL, &constant_bin[ 3013922 ], 6108, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.depends", NULL, &constant_bin[ 3020030 ], 7292, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.dist", NULL, &constant_bin[ 3027322 ], 36470, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.extension", NULL, &constant_bin[ 3063792 ], 2446, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.extern", NULL, &constant_bin[ 3066238 ], 336, NUITKA_BYTECODE_FLAG | NUITKA_PACKAGE_FLAG },
    { (char *)"setuptools.monkey", NULL, &constant_bin[ 3066574 ], 4078, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.msvc", NULL, &constant_bin[ 3070652 ], 36925, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.package_index", NULL, &constant_bin[ 3107577 ], 40319, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.py26compat", NULL, &constant_bin[ 3147896 ], 1006, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.py27compat", NULL, &constant_bin[ 3148902 ], 759, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.py31compat", NULL, &constant_bin[ 3149661 ], 2409, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.sandbox", NULL, &constant_bin[ 3152070 ], 18991, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.ssl_support", NULL, &constant_bin[ 3171061 ], 7962, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.unicode_utils", NULL, &constant_bin[ 3179023 ], 1488, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.utils", NULL, &constant_bin[ 3180511 ], 547, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.version", NULL, &constant_bin[ 3181058 ], 320, NUITKA_BYTECODE_FLAG },
    { (char *)"setuptools.windows_support", NULL, &constant_bin[ 3181378 ], 1290, NUITKA_BYTECODE_FLAG },
    { (char *)"six", MOD_INIT_NAME( six ), NULL, 0, NUITKA_COMPILED_MODULE },
    { (char *)"winreg", MOD_INIT_NAME( winreg ), NULL, 0, NUITKA_PACKAGE_FLAG },
    { NULL, NULL, 0 }
};

void setupMetaPathBasedLoader( void )
{
    static bool init_done = false;

    if ( init_done == false )
    {
        registerMetaPathBasedUnfreezer( meta_path_loader_entries );
        init_done = true;
    }
}
