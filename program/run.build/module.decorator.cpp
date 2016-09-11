/* Generated code for Python source for module 'decorator'
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

/* The _module_decorator is a Python object pointer of module type. */

/* Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_decorator;
PyDictObject *moduledict_decorator;

/* The module constants used, if any. */
extern PyObject *const_str_plain_copy;
extern PyObject *const_str_plain_t;
static PyObject *const_tuple_6109a7a112ba47143b23385b2dbab345_tuple;
extern PyObject *const_str_plain_product;
extern PyObject *const_int_neg_1;
extern PyObject *const_str_plain_get;
static PyObject *const_str_digest_e82ede2dd9091d0e1c257095721c50e7;
static PyObject *const_tuple_str_plain_types_str_plain_dec_str_plain_check_tuple;
extern PyObject *const_str_plain_issubclass;
static PyObject *const_str_plain_create;
extern PyObject *const_tuple_str_chr_42_tuple;
static PyObject *const_str_plain_vancestors;
static PyObject *const_tuple_5a37177e48ebe509045f4b3820873fc0_tuple;
extern PyObject *const_tuple_str_plain_self_tuple;
extern PyObject *const_dict_empty;
static PyObject *const_str_plain_wrong;
extern PyObject *const_str_plain_classmethod;
extern PyObject *const_str_plain_decorate;
static PyObject *const_str_plain__compile_count;
static PyObject *const_str_plain_ras;
static PyObject *const_str_digest_8d1070f3ec0b689636f2b2df2cae6a10;
static PyObject *const_str_digest_1b9c5408d0d7f90686a9bbc3738e03d0;
extern PyObject *const_str_plain_kwonlyargs;
static PyObject *const_str_plain_allargs;
extern PyObject *const_str_plain_mo;
extern PyObject *const_str_plain_count;
extern PyObject *const_str_plain_version;
static PyObject *const_str_plain___qualname__;
static PyObject *const_tuple_5139c0d43b4cbf9581a06d1f7112a263_tuple;
static PyObject *const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple;
static PyObject *const_tuple_79063cf2cbec4e346466f1a51248e60f_tuple;
extern PyObject *const_str_plain_f_globals;
extern PyObject *const_str_plain_defaults;
extern PyObject *const_str_plain_lst;
static PyObject *const_tuple_str_plain_getfullargspec_tuple;
extern PyObject *const_str_plain_object;
static PyObject *const_str_digest_83058204cc7c29a0c12cc9901c5a34a9;
extern PyObject *const_str_plain_msg;
static PyObject *const_tuple_44ab271dedb8384fb4b0e72f035742be_tuple;
extern PyObject *const_str_plain_exec;
extern PyObject *const_str_plain_zip;
extern PyObject *const_str_plain_file;
static PyObject *const_str_digest_24b533134e7bfdfbe7ee6a416afabf77;
static PyObject *const_str_digest_26f251a20ec31364dfb2955ee00c53bd;
extern PyObject *const_str_plain_self;
static PyObject *const_tuple_461ba62d30306dc23e110ed804603932_tuple;
static PyObject *const_str_digest_572531bfcad60285f60020f46f02d5fe;
extern PyObject *const_str_plain_spec;
static PyObject *const_str_plain_contextmanager;
static PyObject *const_str_digest_a81fad7c88023869cb16004c9b953f13;
static PyObject *const_str_plain_make;
static PyObject *const_str_plain_addsource;
extern PyObject *const_tuple_empty;
extern PyObject *const_str_plain_signature;
extern PyObject *const_str_plain_argspec;
static PyObject *const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple;
static PyObject *const_str_digest_80d8bc0cd0afc8334e909b7a9d31bd0a;
extern PyObject *const_str_plain_func;
extern PyObject *const_str_plain___annotations__;
extern PyObject *const_str_plain_register;
static PyObject *const_str_plain_lt;
static PyObject *const_str_plain_gen_func_dec;
static PyObject *const_str_plain___source__;
extern PyObject *const_str_plain_args;
extern PyObject *const_tuple_str_plain_self_str_plain_f_tuple;
extern PyObject *const_str_plain_re;
static PyObject *const_str_plain_n_args;
extern PyObject *const_str_plain___iter__;
static PyObject *const_str_plain_ra;
extern PyObject *const_str_plain_obj;
extern PyObject *const_str_plain__getframe;
static PyObject *const_tuple_str_chr_40_int_pos_1_tuple;
static PyObject *const_tuple_0ecc13e499a9659cc8848fb0a6a125ff_tuple;
static PyObject *const_str_plain__f_;
extern PyObject *const_str_plain_itertools;
static PyObject *const_str_digest_8a27378908ae1576c5783b8639eaba83;
static PyObject *const_str_plain_ContextManager;
static PyObject *const_str_plain_argset;
static PyObject *const_str_digest_02f364acb97851233ca35f4dd4bbced6;
static PyObject *const_str_digest_8fdfe459caa9e8e39903ecfd373ccaa4;
extern PyObject *const_tuple_none_false_tuple;
static PyObject *const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple;
static PyObject *const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple;
static PyObject *const_str_plain__self_;
extern PyObject *const_tuple_str_chr_44_tuple;
extern PyObject *const_str_plain_default;
extern PyObject *const_str_plain_split;
static PyObject *const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple;
extern PyObject *const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e;
static PyObject *const_str_plain_kwonlydefaults;
static PyObject *const_tuple_str_digest_26f251a20ec31364dfb2955ee00c53bd_tuple;
static PyObject *const_str_plain_fun;
extern PyObject *const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38;
static PyObject *const_str_digest_3da9ef48ddf25c4f005539e6d3568ee3;
extern PyObject *const_str_plain_strip;
extern PyObject *const_str_plain___file__;
static PyObject *const_str_digest_b3b714263f67b9d2f5c6ce70eff61ce4;
static PyObject *const_str_digest_b5adfd3e93c63c1708fdd6cd15209b19;
static PyObject *const_str_plain_ibody;
extern PyObject *const_str_plain_rest;
static PyObject *const_tuple_str_plain_self_str_plain_g_str_plain_a_str_plain_k_tuple;
static PyObject *const_str_plain_dispatch_info;
static PyObject *const_str_digest_cbec1a6d9fb9469cc33871a88074cd17;
static PyObject *const_str_plain_shortsignature;
extern PyObject *const_str_plain_cls;
static PyObject *const_str_digest_ad6767dd346ed7a57ba4ae45193274f3;
extern PyObject *const_str_plain_caller;
extern PyObject *const_str_plain_update;
static PyObject *const_str_plain_dispatch_on;
extern PyObject *const_int_pos_3;
extern PyObject *const_int_pos_1;
static PyObject *const_tuple_str_plain_GeneratorContextManager_tuple;
extern PyObject *const_str_plain_getargspec;
extern PyObject *const_str_plain_str;
static PyObject *const_str_plain_n_vas;
extern PyObject *const_str_plain___module__;
static PyObject *const_tuple_str_plain_f_str_plain_spec_tuple;
extern PyObject *const_str_plain_lower;
extern PyObject *const_str_plain_arg;
extern PyObject *const_str_plain_splitlines;
extern PyObject *const_str_plain___metaclass__;
static PyObject *const_str_plain_typemap;
extern PyObject *const_int_pos_4;
static PyObject *const_tuple_str_plain___name___str_chr_63_tuple;
static PyObject *const_str_plain_types_;
extern PyObject *const_str_digest_c0323250114388bba72015953b71209c;
static PyObject *const_str_digest_ba404227acfb2985143075d0d2f0a4b3;
extern PyObject *const_str_plain_varkw;
extern PyObject *const_str_plain_operator;
extern PyObject *const_int_pos_2;
extern PyObject *const_str_plain_decorator;
static PyObject *const_str_digest_d854840e83e586b4eb505d8c62d6a43e;
static PyObject *const_str_digest_a8aa334e433c89f0a3d0ec4c2dcbd4b7;
static PyObject *const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple;
extern PyObject *const_str_plain__func;
static PyObject *const_str_plain_src_templ;
extern PyObject *const_str_chr_44;
static PyObject *const_str_digest_b3a893de82773ac4f9c8a5a70fbc8734;
extern PyObject *const_tuple_none_none_none_true_tuple;
static PyObject *const_str_digest_6f8a4fd0af59b46148045f2f01b4ff99;
extern PyObject *const_str_chr_40;
extern PyObject *const_str_chr_42;
extern PyObject *const_str_plain_lists;
extern PyObject *const_str_plain_formatargspec;
static PyObject *const_str_plain_getfullargspec;
extern PyObject *const_str_plain_enumerate;
extern PyObject *const_tuple_str_plain_val_tuple;
extern PyObject *const_str_plain_formatvalue;
static PyObject *const_str_plain__GeneratorContextManager;
extern PyObject *const_str_plain_types;
static PyObject *const_str_plain_dispatch_args;
extern PyObject *const_str_plain_join;
static PyObject *const_str_digest_2908d31d41d56cf67cc50d1badb5cceb;
extern PyObject *const_str_digest_d26f52d432ccf199e53ad3ddfa46aa69;
extern PyObject *const_str_plain_varargs;
extern PyObject *const_str_plain_arguments;
extern PyObject *const_str_angle_genexpr;
extern PyObject *const_str_plain___name__;
static PyObject *const_str_digest_a023d63b9c15bfdce5d1b4448c2836e6;
static PyObject *const_str_digest_b5e689fe317d81a94304c921fd79cf1d;
extern PyObject *const_str_plain_single;
extern PyObject *const_str_plain___wrapped__;
static PyObject *const_tuple_a8495f8089661ac1f43015c4b7b2168d_tuple;
extern PyObject *const_str_plain__dispatch;
extern PyObject *const_str_plain_isclass;
extern PyObject *const_str_plain_doc;
static PyObject *const_str_plain_dispatch_str;
static PyObject *const_str_digest_b9485c75310361a952820ae03328877b;
static PyObject *const_str_plain_3;
static PyObject *const_str_digest_33b4a946800be54b364e48504e54f9d6;
extern PyObject *const_str_angle_string;
extern PyObject *const_str_plain_add;
extern PyObject *const_str_plain_val;
static PyObject *const_str_plain___kwdefaults__;
static PyObject *const_str_digest_446a6626957cbb5f09303fc95b158cf6;
extern PyObject *const_tuple_none_none_none_none_none_none_none_tuple;
extern PyObject *const_str_plain_dict;
extern PyObject *const_str_plain_collections;
static PyObject *const_str_plain_annotations;
static PyObject *const_tuple_1a850df3427b47e3968a5472b1c59617_tuple;
extern PyObject *const_str_digest_789430c10aaa72b7d685699173aceee7;
extern PyObject *const_str_plain_src;
static PyObject *const_tuple_str_plain__GeneratorContextManager_tuple;
extern PyObject *const_str_plain_init;
static PyObject *const_str_plain_callermodule;
extern PyObject *const_str_plain_compile;
extern PyObject *const_str_plain_endswith;
extern PyObject *const_str_plain_n;
extern PyObject *const_str_plain_read;
static PyObject *const_str_plain_FunctionMaker;
extern PyObject *const_str_plain_i;
extern PyObject *const_str_plain_j;
extern PyObject *const_str_plain_k;
static PyObject *const_tuple_str_plain__func__str_plain__call__tuple;
extern PyObject *const_str_plain_f;
extern PyObject *const_str_plain_g;
extern PyObject *const_str_plain_attrs;
extern PyObject *const_str_plain_a;
static PyObject *const_str_plain_ne;
extern PyObject *const_str_plain___func__;
extern PyObject *const_str_plain_check;
extern PyObject *const_str_plain_line;
extern PyObject *const_str_plain_va;
static PyObject *const_str_plain__lambda_;
extern PyObject *const_str_plain_name;
extern PyObject *const_tuple_str_plain_cls_tuple;
static PyObject *const_tuple_str_digest_b5adfd3e93c63c1708fdd6cd15209b19_tuple;
extern PyObject *const_str_plain_filename;
static PyObject *const_str_plain__func_;
static PyObject *const_str_digest_b414214c46af27a57d0801f18980a2c6;
static PyObject *const_str_plain__decorate_;
static PyObject *const_str_plain_funcdict;
extern PyObject *const_str_plain___mro__;
extern PyObject *const_str_plain_match;
static PyObject *const_str_digest_6458234be484c525b40a86c4703a1178;
static PyObject *const_str_plain_vas;
extern PyObject *const_str_plain_inspect;
extern PyObject *const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
extern PyObject *const_str_plain_kw;
static PyObject *const_str_digest_42e473a1d1d474d04bd4619c0aa4e073;
static PyObject *const_tuple_str_digest_8d1070f3ec0b689636f2b2df2cae6a10_tuple;
static PyObject *const_tuple_638c0fe1a24e7599b856024c9965ad58_tuple;
extern PyObject *const_tuple_int_pos_3_tuple;
extern PyObject *const_str_chr_63;
extern PyObject *const_str_plain___defaults__;
static PyObject *const_str_digest_5e32d622bb3d7fe45179faa959fd65fd;
extern PyObject *const_str_digest_b9c4baf879ebd882d40843df3a4dead7;
extern PyObject *const_str_plain_names;
extern PyObject *const_str_plain_dec;
extern PyObject *const_tuple_str_newline_tuple;
extern PyObject *const_str_plain_mro;
static PyObject *const_str_plain_type_;
static PyObject *const_tuple_str_digest_0e7d284c0ec0d54ad8fe000fd9e6be8e_tuple;
static PyObject *const_str_digest_f59f1563f2b4763dee1df6bbd3b62c81;
static PyObject *const_str_digest_0369903b4cbed9727b19f7009af53fc3;
extern PyObject *const_str_plain__;
extern PyObject *const_str_plain_group;
static PyObject *const_str_plain_allshortargs;
extern PyObject *const_str_plain_module;
static PyObject *const_str_digest_f0fc4c23d9b9bc5eb86d1623a43f94e0;
static PyObject *const_str_plain__call_;
extern PyObject *const_tuple_int_pos_1_tuple;
extern PyObject *const_str_plain___doc__;
extern PyObject *const_str_plain_sys;
extern PyObject *const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple;
static PyObject *const_tuple_a43d84e8df0651f81066d1c9b74151ea_tuple;
static PyObject *const_str_plain_anc;
static PyObject *const_str_digest_5daadf20330cb766c29ad4806d625316;
static PyObject *const_str_digest_1a810626c001febcbe29670d3efcd714;
static PyObject *const_str_plain_GeneratorContextManager;
extern PyObject *const_str_plain_print;
extern PyObject *const_str_plain_stderr;
extern PyObject *const_str_plain___version__;
static PyObject *const_str_plain_combinations;
static PyObject *const_str_plain_get_init;
extern PyObject *const_str_plain_frame;
extern PyObject *const_str_plain_namedtuple;
extern PyObject *const_str_plain___init__;
extern PyObject *const_str_empty;
static PyObject *const_str_digest_108ea5b456b342f5d15c2f6fd94e4746;
extern PyObject *const_str_plain_body;
static PyObject *const_str_plain_evaldict;
static PyObject *const_str_plain_ArgSpec;
extern PyObject *const_str_plain_code;
static PyObject *const_str_plain_ancestors;
extern PyObject *const_str_plain___call__;
extern PyObject *const_str_plain_append;
static PyObject *const_tuple_str_plain_self_str_plain_func_tuple;
extern PyObject *const_str_newline;
extern PyObject *const_str_plain_contextlib;
extern PyObject *const_str_plain_isfunction;
static PyObject *const_str_digest_06a0636793b7f71eda2b528403ace91d;
extern PyObject *const_str_plain_print_function;
static PyObject *const_str_digest_4533638b14e5ea4e173e64ab7162b17d;
extern PyObject *const_tuple_none_tuple;
static PyObject *const_str_plain_DEF;
static PyObject *const_str_digest_0e7d284c0ec0d54ad8fe000fd9e6be8e;
extern PyObject *const_str_angle_lambda;
static PyObject *module_filename_obj;

static bool constants_created = false;

static void createModuleConstants( void )
{
    const_tuple_6109a7a112ba47143b23385b2dbab345_tuple = PyTuple_New( 10 );
    const_str_plain_dispatch_args = UNSTREAM_STRING( &constant_bin[ 76111 ], 13, 1 );
    PyTuple_SET_ITEM( const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 0, const_str_plain_dispatch_args ); Py_INCREF( const_str_plain_dispatch_args );
    PyTuple_SET_ITEM( const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 1, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 2, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    PyTuple_SET_ITEM( const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 3, const_str_plain_types ); Py_INCREF( const_str_plain_types );
    PyTuple_SET_ITEM( const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 4, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    const_str_plain_combinations = UNSTREAM_STRING( &constant_bin[ 76124 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 5, const_str_plain_combinations ); Py_INCREF( const_str_plain_combinations );
    const_str_plain_types_ = UNSTREAM_STRING( &constant_bin[ 76136 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 6, const_str_plain_types_ ); Py_INCREF( const_str_plain_types_ );
    const_str_plain_typemap = UNSTREAM_STRING( &constant_bin[ 76142 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 7, const_str_plain_typemap ); Py_INCREF( const_str_plain_typemap );
    const_str_plain_ancestors = UNSTREAM_STRING( &constant_bin[ 76149 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 8, const_str_plain_ancestors ); Py_INCREF( const_str_plain_ancestors );
    PyTuple_SET_ITEM( const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 9, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_str_digest_e82ede2dd9091d0e1c257095721c50e7 = UNSTREAM_STRING( &constant_bin[ 76158 ], 63, 0 );
    const_tuple_str_plain_types_str_plain_dec_str_plain_check_tuple = PyTuple_New( 3 );
    PyTuple_SET_ITEM( const_tuple_str_plain_types_str_plain_dec_str_plain_check_tuple, 0, const_str_plain_types ); Py_INCREF( const_str_plain_types );
    PyTuple_SET_ITEM( const_tuple_str_plain_types_str_plain_dec_str_plain_check_tuple, 1, const_str_plain_dec ); Py_INCREF( const_str_plain_dec );
    PyTuple_SET_ITEM( const_tuple_str_plain_types_str_plain_dec_str_plain_check_tuple, 2, const_str_plain_check ); Py_INCREF( const_str_plain_check );
    const_str_plain_create = UNSTREAM_STRING( &constant_bin[ 6406 ], 6, 1 );
    const_str_plain_vancestors = UNSTREAM_STRING( &constant_bin[ 76221 ], 10, 1 );
    const_tuple_5a37177e48ebe509045f4b3820873fc0_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_5a37177e48ebe509045f4b3820873fc0_tuple, 0, const_str_plain_caller ); Py_INCREF( const_str_plain_caller );
    PyTuple_SET_ITEM( const_tuple_5a37177e48ebe509045f4b3820873fc0_tuple, 1, const_str_plain__func ); Py_INCREF( const_str_plain__func );
    PyTuple_SET_ITEM( const_tuple_5a37177e48ebe509045f4b3820873fc0_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_5a37177e48ebe509045f4b3820873fc0_tuple, 3, const_str_plain_doc ); Py_INCREF( const_str_plain_doc );
    const_str_plain_evaldict = UNSTREAM_STRING( &constant_bin[ 76231 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_5a37177e48ebe509045f4b3820873fc0_tuple, 4, const_str_plain_evaldict ); Py_INCREF( const_str_plain_evaldict );
    const_str_plain_wrong = UNSTREAM_STRING( &constant_bin[ 5896 ], 5, 1 );
    const_str_plain__compile_count = UNSTREAM_STRING( &constant_bin[ 76239 ], 14, 1 );
    const_str_plain_ras = UNSTREAM_STRING( &constant_bin[ 76253 ], 3, 1 );
    const_str_digest_8d1070f3ec0b689636f2b2df2cae6a10 = UNSTREAM_STRING( &constant_bin[ 76256 ], 24, 0 );
    const_str_digest_1b9c5408d0d7f90686a9bbc3738e03d0 = UNSTREAM_STRING( &constant_bin[ 76280 ], 85, 0 );
    const_str_plain_allargs = UNSTREAM_STRING( &constant_bin[ 76365 ], 7, 1 );
    const_str_plain___qualname__ = UNSTREAM_STRING( &constant_bin[ 76372 ], 12, 1 );
    const_tuple_5139c0d43b4cbf9581a06d1f7112a263_tuple = PyTuple_New( 6 );
    PyTuple_SET_ITEM( const_tuple_5139c0d43b4cbf9581a06d1f7112a263_tuple, 0, const_str_plain_args ); Py_INCREF( const_str_plain_args );
    PyTuple_SET_ITEM( const_tuple_5139c0d43b4cbf9581a06d1f7112a263_tuple, 1, const_str_plain_varargs ); Py_INCREF( const_str_plain_varargs );
    PyTuple_SET_ITEM( const_tuple_5139c0d43b4cbf9581a06d1f7112a263_tuple, 2, const_str_plain_varkw ); Py_INCREF( const_str_plain_varkw );
    PyTuple_SET_ITEM( const_tuple_5139c0d43b4cbf9581a06d1f7112a263_tuple, 3, const_str_plain_defaults ); Py_INCREF( const_str_plain_defaults );
    PyTuple_SET_ITEM( const_tuple_5139c0d43b4cbf9581a06d1f7112a263_tuple, 4, const_str_plain_kwonlyargs ); Py_INCREF( const_str_plain_kwonlyargs );
    const_str_plain_kwonlydefaults = UNSTREAM_STRING( &constant_bin[ 76384 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_5139c0d43b4cbf9581a06d1f7112a263_tuple, 5, const_str_plain_kwonlydefaults ); Py_INCREF( const_str_plain_kwonlydefaults );
    const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 2, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 3, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 4, const_str_plain_defaults ); Py_INCREF( const_str_plain_defaults );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 5, const_str_plain_doc ); Py_INCREF( const_str_plain_doc );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 6, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    const_str_plain_funcdict = UNSTREAM_STRING( &constant_bin[ 76398 ], 8, 1 );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 7, const_str_plain_funcdict ); Py_INCREF( const_str_plain_funcdict );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 8, const_str_plain_argspec ); Py_INCREF( const_str_plain_argspec );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 9, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 10, const_str_plain_i ); Py_INCREF( const_str_plain_i );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 11, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 12, const_str_plain_allargs ); Py_INCREF( const_str_plain_allargs );
    const_str_plain_allshortargs = UNSTREAM_STRING( &constant_bin[ 76406 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 13, const_str_plain_allshortargs ); Py_INCREF( const_str_plain_allshortargs );
    const_tuple_79063cf2cbec4e346466f1a51248e60f_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_79063cf2cbec4e346466f1a51248e60f_tuple, 0, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_79063cf2cbec4e346466f1a51248e60f_tuple, 1, const_str_plain_vancestors ); Py_INCREF( const_str_plain_vancestors );
    PyTuple_SET_ITEM( const_tuple_79063cf2cbec4e346466f1a51248e60f_tuple, 2, const_str_plain_add ); Py_INCREF( const_str_plain_add );
    PyTuple_SET_ITEM( const_tuple_79063cf2cbec4e346466f1a51248e60f_tuple, 3, const_str_plain_j ); Py_INCREF( const_str_plain_j );
    PyTuple_SET_ITEM( const_tuple_79063cf2cbec4e346466f1a51248e60f_tuple, 4, const_str_plain_va ); Py_INCREF( const_str_plain_va );
    const_tuple_str_plain_getfullargspec_tuple = PyTuple_New( 1 );
    const_str_plain_getfullargspec = UNSTREAM_STRING( &constant_bin[ 76192 ], 14, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_getfullargspec_tuple, 0, const_str_plain_getfullargspec ); Py_INCREF( const_str_plain_getfullargspec );
    const_str_digest_83058204cc7c29a0c12cc9901c5a34a9 = UNSTREAM_STRING( &constant_bin[ 76418 ], 250, 0 );
    const_tuple_44ab271dedb8384fb4b0e72f035742be_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_44ab271dedb8384fb4b0e72f035742be_tuple, 0, const_str_plain_arguments ); Py_INCREF( const_str_plain_arguments );
    PyTuple_SET_ITEM( const_tuple_44ab271dedb8384fb4b0e72f035742be_tuple, 1, const_str_plain_wrong ); Py_INCREF( const_str_plain_wrong );
    PyTuple_SET_ITEM( const_tuple_44ab271dedb8384fb4b0e72f035742be_tuple, 2, const_str_plain_msg ); Py_INCREF( const_str_plain_msg );
    PyTuple_SET_ITEM( const_tuple_44ab271dedb8384fb4b0e72f035742be_tuple, 3, const_str_plain_dispatch_args ); Py_INCREF( const_str_plain_dispatch_args );
    const_str_digest_24b533134e7bfdfbe7ee6a416afabf77 = UNSTREAM_STRING( &constant_bin[ 76668 ], 50, 0 );
    const_str_digest_26f251a20ec31364dfb2955ee00c53bd = UNSTREAM_STRING( &constant_bin[ 76718 ], 23, 0 );
    const_tuple_461ba62d30306dc23e110ed804603932_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_461ba62d30306dc23e110ed804603932_tuple, 0, const_str_plain_types ); Py_INCREF( const_str_plain_types );
    PyTuple_SET_ITEM( const_tuple_461ba62d30306dc23e110ed804603932_tuple, 1, const_str_plain_lst ); Py_INCREF( const_str_plain_lst );
    const_str_plain_anc = UNSTREAM_STRING( &constant_bin[ 3813 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_461ba62d30306dc23e110ed804603932_tuple, 2, const_str_plain_anc ); Py_INCREF( const_str_plain_anc );
    PyTuple_SET_ITEM( const_tuple_461ba62d30306dc23e110ed804603932_tuple, 3, const_str_plain_check ); Py_INCREF( const_str_plain_check );
    PyTuple_SET_ITEM( const_tuple_461ba62d30306dc23e110ed804603932_tuple, 4, const_str_plain_ancestors ); Py_INCREF( const_str_plain_ancestors );
    const_str_digest_572531bfcad60285f60020f46f02d5fe = UNSTREAM_STRING( &constant_bin[ 76741 ], 37, 0 );
    const_str_plain_contextmanager = UNSTREAM_STRING( &constant_bin[ 76778 ], 14, 1 );
    const_str_digest_a81fad7c88023869cb16004c9b953f13 = UNSTREAM_STRING( &constant_bin[ 76792 ], 72, 0 );
    const_str_plain_make = UNSTREAM_STRING( &constant_bin[ 3823 ], 4, 1 );
    const_str_plain_addsource = UNSTREAM_STRING( &constant_bin[ 76538 ], 9, 1 );
    const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple = PyTuple_New( 15 );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 0, const_str_plain_cls ); Py_INCREF( const_str_plain_cls );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 1, const_str_plain_obj ); Py_INCREF( const_str_plain_obj );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 2, const_str_plain_body ); Py_INCREF( const_str_plain_body );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 3, const_str_plain_evaldict ); Py_INCREF( const_str_plain_evaldict );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 4, const_str_plain_defaults ); Py_INCREF( const_str_plain_defaults );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 5, const_str_plain_doc ); Py_INCREF( const_str_plain_doc );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 6, const_str_plain_module ); Py_INCREF( const_str_plain_module );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 7, const_str_plain_addsource ); Py_INCREF( const_str_plain_addsource );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 8, const_str_plain_attrs ); Py_INCREF( const_str_plain_attrs );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 9, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 10, const_str_plain_rest ); Py_INCREF( const_str_plain_rest );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 11, const_str_plain_signature ); Py_INCREF( const_str_plain_signature );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 12, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 13, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_ibody = UNSTREAM_STRING( &constant_bin[ 76864 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 14, const_str_plain_ibody ); Py_INCREF( const_str_plain_ibody );
    const_str_digest_80d8bc0cd0afc8334e909b7a9d31bd0a = UNSTREAM_STRING( &constant_bin[ 76869 ], 25, 0 );
    const_str_plain_lt = UNSTREAM_STRING( &constant_bin[ 1121 ], 2, 1 );
    const_str_plain_gen_func_dec = UNSTREAM_STRING( &constant_bin[ 76894 ], 12, 1 );
    const_str_plain___source__ = UNSTREAM_STRING( &constant_bin[ 76577 ], 10, 1 );
    const_str_plain_n_args = UNSTREAM_STRING( &constant_bin[ 76906 ], 6, 1 );
    const_str_plain_ra = UNSTREAM_STRING( &constant_bin[ 1048 ], 2, 1 );
    const_tuple_str_chr_40_int_pos_1_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_chr_40_int_pos_1_tuple, 0, const_str_chr_40 ); Py_INCREF( const_str_chr_40 );
    PyTuple_SET_ITEM( const_tuple_str_chr_40_int_pos_1_tuple, 1, const_int_pos_1 ); Py_INCREF( const_int_pos_1 );
    const_tuple_0ecc13e499a9659cc8848fb0a6a125ff_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_0ecc13e499a9659cc8848fb0a6a125ff_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_0ecc13e499a9659cc8848fb0a6a125ff_tuple, 1, const_str_plain_check ); Py_INCREF( const_str_plain_check );
    PyTuple_SET_ITEM( const_tuple_0ecc13e499a9659cc8848fb0a6a125ff_tuple, 2, const_str_plain_typemap ); Py_INCREF( const_str_plain_typemap );
    PyTuple_SET_ITEM( const_tuple_0ecc13e499a9659cc8848fb0a6a125ff_tuple, 3, const_str_plain_types ); Py_INCREF( const_str_plain_types );
    const_str_plain__f_ = UNSTREAM_STRING( &constant_bin[ 76912 ], 3, 1 );
    const_str_digest_8a27378908ae1576c5783b8639eaba83 = UNSTREAM_STRING( &constant_bin[ 76915 ], 29, 0 );
    const_str_plain_ContextManager = UNSTREAM_STRING( &constant_bin[ 76944 ], 14, 1 );
    const_str_plain_argset = UNSTREAM_STRING( &constant_bin[ 76958 ], 6, 1 );
    const_str_digest_02f364acb97851233ca35f4dd4bbced6 = UNSTREAM_STRING( &constant_bin[ 76964 ], 84, 0 );
    const_str_digest_8fdfe459caa9e8e39903ecfd373ccaa4 = UNSTREAM_STRING( &constant_bin[ 77048 ], 27, 0 );
    const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 0, const_str_plain_types ); Py_INCREF( const_str_plain_types );
    PyTuple_SET_ITEM( const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 1, const_str_plain__ ); Py_INCREF( const_str_plain__ );
    PyTuple_SET_ITEM( const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 2, const_str_plain_ras ); Py_INCREF( const_str_plain_ras );
    PyTuple_SET_ITEM( const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 3, const_str_plain_types_ ); Py_INCREF( const_str_plain_types_ );
    PyTuple_SET_ITEM( const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 4, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_type_ = UNSTREAM_STRING( &constant_bin[ 77075 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 5, const_str_plain_type_ ); Py_INCREF( const_str_plain_type_ );
    PyTuple_SET_ITEM( const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 6, const_str_plain_ra ); Py_INCREF( const_str_plain_ra );
    PyTuple_SET_ITEM( const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 7, const_str_plain_check ); Py_INCREF( const_str_plain_check );
    PyTuple_SET_ITEM( const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 8, const_str_plain_dispatch_args ); Py_INCREF( const_str_plain_dispatch_args );
    PyTuple_SET_ITEM( const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 9, const_str_plain_typemap ); Py_INCREF( const_str_plain_typemap );
    const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple = PyTuple_New( 14 );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    const_str_plain_src_templ = UNSTREAM_STRING( &constant_bin[ 77080 ], 9, 1 );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 1, const_str_plain_src_templ ); Py_INCREF( const_str_plain_src_templ );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 2, const_str_plain_evaldict ); Py_INCREF( const_str_plain_evaldict );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 3, const_str_plain_addsource ); Py_INCREF( const_str_plain_addsource );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 4, const_str_plain_attrs ); Py_INCREF( const_str_plain_attrs );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 5, const_str_plain_src ); Py_INCREF( const_str_plain_src );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 6, const_str_plain_mo ); Py_INCREF( const_str_plain_mo );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 7, const_str_plain_name ); Py_INCREF( const_str_plain_name );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 8, const_str_plain_arg ); Py_INCREF( const_str_plain_arg );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 9, const_str_plain_names ); Py_INCREF( const_str_plain_names );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 10, const_str_plain_n ); Py_INCREF( const_str_plain_n );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 11, const_str_plain_filename ); Py_INCREF( const_str_plain_filename );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 12, const_str_plain_code ); Py_INCREF( const_str_plain_code );
    PyTuple_SET_ITEM( const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 13, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_str_plain__self_ = UNSTREAM_STRING( &constant_bin[ 77089 ], 6, 1 );
    const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple = PyTuple_New( 9 );
    PyTuple_SET_ITEM( const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple, 0, const_str_plain_types ); Py_INCREF( const_str_plain_types );
    PyTuple_SET_ITEM( const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple, 1, const_str_plain_lists ); Py_INCREF( const_str_plain_lists );
    PyTuple_SET_ITEM( const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple, 2, const_str_plain_t ); Py_INCREF( const_str_plain_t );
    const_str_plain_vas = UNSTREAM_STRING( &constant_bin[ 77095 ], 3, 1 );
    PyTuple_SET_ITEM( const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple, 3, const_str_plain_vas ); Py_INCREF( const_str_plain_vas );
    const_str_plain_n_vas = UNSTREAM_STRING( &constant_bin[ 77098 ], 5, 1 );
    PyTuple_SET_ITEM( const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple, 4, const_str_plain_n_vas ); Py_INCREF( const_str_plain_n_vas );
    PyTuple_SET_ITEM( const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple, 5, const_str_plain_va ); Py_INCREF( const_str_plain_va );
    PyTuple_SET_ITEM( const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple, 6, const_str_plain_mro ); Py_INCREF( const_str_plain_mro );
    PyTuple_SET_ITEM( const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple, 7, const_str_plain_check ); Py_INCREF( const_str_plain_check );
    PyTuple_SET_ITEM( const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple, 8, const_str_plain_vancestors ); Py_INCREF( const_str_plain_vancestors );
    const_tuple_str_digest_26f251a20ec31364dfb2955ee00c53bd_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_26f251a20ec31364dfb2955ee00c53bd_tuple, 0, const_str_digest_26f251a20ec31364dfb2955ee00c53bd ); Py_INCREF( const_str_digest_26f251a20ec31364dfb2955ee00c53bd );
    const_str_plain_fun = UNSTREAM_STRING( &constant_bin[ 1531 ], 3, 1 );
    const_str_digest_3da9ef48ddf25c4f005539e6d3568ee3 = UNSTREAM_STRING( &constant_bin[ 77103 ], 51, 0 );
    const_str_digest_b3b714263f67b9d2f5c6ce70eff61ce4 = UNSTREAM_STRING( &constant_bin[ 77154 ], 69, 0 );
    const_str_digest_b5adfd3e93c63c1708fdd6cd15209b19 = UNSTREAM_STRING( &constant_bin[ 77223 ], 29, 0 );
    const_tuple_str_plain_self_str_plain_g_str_plain_a_str_plain_k_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_g_str_plain_a_str_plain_k_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_g_str_plain_a_str_plain_k_tuple, 1, const_str_plain_g ); Py_INCREF( const_str_plain_g );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_g_str_plain_a_str_plain_k_tuple, 2, const_str_plain_a ); Py_INCREF( const_str_plain_a );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_g_str_plain_a_str_plain_k_tuple, 3, const_str_plain_k ); Py_INCREF( const_str_plain_k );
    const_str_plain_dispatch_info = UNSTREAM_STRING( &constant_bin[ 77252 ], 13, 1 );
    const_str_digest_cbec1a6d9fb9469cc33871a88074cd17 = UNSTREAM_STRING( &constant_bin[ 77265 ], 18, 0 );
    const_str_plain_shortsignature = UNSTREAM_STRING( &constant_bin[ 77283 ], 14, 1 );
    const_str_digest_ad6767dd346ed7a57ba4ae45193274f3 = UNSTREAM_STRING( &constant_bin[ 77297 ], 85, 0 );
    const_str_plain_dispatch_on = UNSTREAM_STRING( &constant_bin[ 77382 ], 11, 1 );
    const_tuple_str_plain_GeneratorContextManager_tuple = PyTuple_New( 1 );
    const_str_plain_GeneratorContextManager = UNSTREAM_STRING( &constant_bin[ 77393 ], 23, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain_GeneratorContextManager_tuple, 0, const_str_plain_GeneratorContextManager ); Py_INCREF( const_str_plain_GeneratorContextManager );
    const_tuple_str_plain_f_str_plain_spec_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_spec_tuple, 0, const_str_plain_f ); Py_INCREF( const_str_plain_f );
    PyTuple_SET_ITEM( const_tuple_str_plain_f_str_plain_spec_tuple, 1, const_str_plain_spec ); Py_INCREF( const_str_plain_spec );
    const_tuple_str_plain___name___str_chr_63_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain___name___str_chr_63_tuple, 0, const_str_plain___name__ ); Py_INCREF( const_str_plain___name__ );
    PyTuple_SET_ITEM( const_tuple_str_plain___name___str_chr_63_tuple, 1, const_str_chr_63 ); Py_INCREF( const_str_chr_63 );
    const_str_digest_ba404227acfb2985143075d0d2f0a4b3 = UNSTREAM_STRING( &constant_bin[ 77416 ], 66, 0 );
    const_str_digest_d854840e83e586b4eb505d8c62d6a43e = UNSTREAM_STRING( &constant_bin[ 77482 ], 32, 0 );
    const_str_digest_a8aa334e433c89f0a3d0ec4c2dcbd4b7 = UNSTREAM_STRING( &constant_bin[ 77514 ], 71, 0 );
    const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple = PyTuple_New( 10 );
    PyTuple_SET_ITEM( const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 1, const_str_plain_argset ); Py_INCREF( const_str_plain_argset );
    PyTuple_SET_ITEM( const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 2, const_str_plain_typemap ); Py_INCREF( const_str_plain_typemap );
    PyTuple_SET_ITEM( const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 3, const_str_plain_vancestors ); Py_INCREF( const_str_plain_vancestors );
    PyTuple_SET_ITEM( const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 4, const_str_plain_ancestors ); Py_INCREF( const_str_plain_ancestors );
    PyTuple_SET_ITEM( const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 5, const_str_plain_register ); Py_INCREF( const_str_plain_register );
    PyTuple_SET_ITEM( const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 6, const_str_plain_dispatch_info ); Py_INCREF( const_str_plain_dispatch_info );
    PyTuple_SET_ITEM( const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 7, const_str_plain__dispatch ); Py_INCREF( const_str_plain__dispatch );
    PyTuple_SET_ITEM( const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 8, const_str_plain_dispatch_args ); Py_INCREF( const_str_plain_dispatch_args );
    const_str_plain_dispatch_str = UNSTREAM_STRING( &constant_bin[ 77585 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 9, const_str_plain_dispatch_str ); Py_INCREF( const_str_plain_dispatch_str );
    const_str_digest_b3a893de82773ac4f9c8a5a70fbc8734 = UNSTREAM_STRING( &constant_bin[ 77597 ], 73, 0 );
    const_str_digest_6f8a4fd0af59b46148045f2f01b4ff99 = UNSTREAM_STRING( &constant_bin[ 77670 ], 31, 0 );
    const_str_plain__GeneratorContextManager = UNSTREAM_STRING( &constant_bin[ 77701 ], 24, 1 );
    const_str_digest_2908d31d41d56cf67cc50d1badb5cceb = UNSTREAM_STRING( &constant_bin[ 77725 ], 5, 0 );
    const_str_digest_a023d63b9c15bfdce5d1b4448c2836e6 = UNSTREAM_STRING( &constant_bin[ 77730 ], 41, 0 );
    const_str_digest_b5e689fe317d81a94304c921fd79cf1d = UNSTREAM_STRING( &constant_bin[ 77771 ], 95, 0 );
    const_tuple_a8495f8089661ac1f43015c4b7b2168d_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a8495f8089661ac1f43015c4b7b2168d_tuple, 0, const_str_plain_dispatch_args ); Py_INCREF( const_str_plain_dispatch_args );
    PyTuple_SET_ITEM( const_tuple_a8495f8089661ac1f43015c4b7b2168d_tuple, 1, const_str_plain_dispatch_str ); Py_INCREF( const_str_plain_dispatch_str );
    PyTuple_SET_ITEM( const_tuple_a8495f8089661ac1f43015c4b7b2168d_tuple, 2, const_str_plain_check ); Py_INCREF( const_str_plain_check );
    PyTuple_SET_ITEM( const_tuple_a8495f8089661ac1f43015c4b7b2168d_tuple, 3, const_str_plain_gen_func_dec ); Py_INCREF( const_str_plain_gen_func_dec );
    const_str_digest_b9485c75310361a952820ae03328877b = UNSTREAM_STRING( &constant_bin[ 77866 ], 6, 0 );
    const_str_plain_3 = UNSTREAM_CHAR( 51, 0 );
    const_str_digest_33b4a946800be54b364e48504e54f9d6 = UNSTREAM_STRING( &constant_bin[ 77872 ], 29, 0 );
    const_str_plain___kwdefaults__ = UNSTREAM_STRING( &constant_bin[ 77901 ], 14, 1 );
    const_str_digest_446a6626957cbb5f09303fc95b158cf6 = UNSTREAM_STRING( &constant_bin[ 77915 ], 22, 0 );
    const_str_plain_annotations = UNSTREAM_STRING( &constant_bin[ 77937 ], 11, 1 );
    const_tuple_1a850df3427b47e3968a5472b1c59617_tuple = PyTuple_New( 5 );
    PyTuple_SET_ITEM( const_tuple_1a850df3427b47e3968a5472b1c59617_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_1a850df3427b47e3968a5472b1c59617_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_1a850df3427b47e3968a5472b1c59617_tuple, 2, const_str_plain_kw ); Py_INCREF( const_str_plain_kw );
    PyTuple_SET_ITEM( const_tuple_1a850df3427b47e3968a5472b1c59617_tuple, 3, const_str_plain_frame ); Py_INCREF( const_str_plain_frame );
    const_str_plain_callermodule = UNSTREAM_STRING( &constant_bin[ 77948 ], 12, 1 );
    PyTuple_SET_ITEM( const_tuple_1a850df3427b47e3968a5472b1c59617_tuple, 4, const_str_plain_callermodule ); Py_INCREF( const_str_plain_callermodule );
    const_tuple_str_plain__GeneratorContextManager_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__GeneratorContextManager_tuple, 0, const_str_plain__GeneratorContextManager ); Py_INCREF( const_str_plain__GeneratorContextManager );
    const_str_plain_FunctionMaker = UNSTREAM_STRING( &constant_bin[ 77960 ], 13, 1 );
    const_tuple_str_plain__func__str_plain__call__tuple = PyTuple_New( 2 );
    const_str_plain__func_ = UNSTREAM_STRING( &constant_bin[ 76897 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__func__str_plain__call__tuple, 0, const_str_plain__func_ ); Py_INCREF( const_str_plain__func_ );
    const_str_plain__call_ = UNSTREAM_STRING( &constant_bin[ 354 ], 6, 1 );
    PyTuple_SET_ITEM( const_tuple_str_plain__func__str_plain__call__tuple, 1, const_str_plain__call_ ); Py_INCREF( const_str_plain__call_ );
    const_str_plain_ne = UNSTREAM_STRING( &constant_bin[ 22 ], 2, 1 );
    const_str_plain__lambda_ = UNSTREAM_STRING( &constant_bin[ 77973 ], 8, 1 );
    const_tuple_str_digest_b5adfd3e93c63c1708fdd6cd15209b19_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_b5adfd3e93c63c1708fdd6cd15209b19_tuple, 0, const_str_digest_b5adfd3e93c63c1708fdd6cd15209b19 ); Py_INCREF( const_str_digest_b5adfd3e93c63c1708fdd6cd15209b19 );
    const_str_digest_b414214c46af27a57d0801f18980a2c6 = UNSTREAM_STRING( &constant_bin[ 77981 ], 31, 0 );
    const_str_plain__decorate_ = UNSTREAM_STRING( &constant_bin[ 77988 ], 10, 1 );
    const_str_digest_6458234be484c525b40a86c4703a1178 = UNSTREAM_STRING( &constant_bin[ 78012 ], 46, 0 );
    const_str_digest_42e473a1d1d474d04bd4619c0aa4e073 = UNSTREAM_STRING( &constant_bin[ 78058 ], 53, 0 );
    const_tuple_str_digest_8d1070f3ec0b689636f2b2df2cae6a10_tuple = PyTuple_New( 1 );
    PyTuple_SET_ITEM( const_tuple_str_digest_8d1070f3ec0b689636f2b2df2cae6a10_tuple, 0, const_str_digest_8d1070f3ec0b689636f2b2df2cae6a10 ); Py_INCREF( const_str_digest_8d1070f3ec0b689636f2b2df2cae6a10 );
    const_tuple_638c0fe1a24e7599b856024c9965ad58_tuple = PyTuple_New( 2 );
    const_str_plain_ArgSpec = UNSTREAM_STRING( &constant_bin[ 78111 ], 7, 1 );
    PyTuple_SET_ITEM( const_tuple_638c0fe1a24e7599b856024c9965ad58_tuple, 0, const_str_plain_ArgSpec ); Py_INCREF( const_str_plain_ArgSpec );
    PyTuple_SET_ITEM( const_tuple_638c0fe1a24e7599b856024c9965ad58_tuple, 1, const_str_digest_8fdfe459caa9e8e39903ecfd373ccaa4 ); Py_INCREF( const_str_digest_8fdfe459caa9e8e39903ecfd373ccaa4 );
    const_str_digest_5e32d622bb3d7fe45179faa959fd65fd = UNSTREAM_STRING( &constant_bin[ 78118 ], 180, 0 );
    const_tuple_str_digest_0e7d284c0ec0d54ad8fe000fd9e6be8e_tuple = PyTuple_New( 1 );
    const_str_digest_0e7d284c0ec0d54ad8fe000fd9e6be8e = UNSTREAM_STRING( &constant_bin[ 3901 ], 2, 0 );
    PyTuple_SET_ITEM( const_tuple_str_digest_0e7d284c0ec0d54ad8fe000fd9e6be8e_tuple, 0, const_str_digest_0e7d284c0ec0d54ad8fe000fd9e6be8e ); Py_INCREF( const_str_digest_0e7d284c0ec0d54ad8fe000fd9e6be8e );
    const_str_digest_f59f1563f2b4763dee1df6bbd3b62c81 = UNSTREAM_STRING( &constant_bin[ 78298 ], 52, 0 );
    const_str_digest_0369903b4cbed9727b19f7009af53fc3 = UNSTREAM_STRING( &constant_bin[ 78350 ], 36, 0 );
    const_str_digest_f0fc4c23d9b9bc5eb86d1623a43f94e0 = UNSTREAM_STRING( &constant_bin[ 78386 ], 7, 0 );
    const_tuple_a43d84e8df0651f81066d1c9b74151ea_tuple = PyTuple_New( 4 );
    PyTuple_SET_ITEM( const_tuple_a43d84e8df0651f81066d1c9b74151ea_tuple, 0, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    PyTuple_SET_ITEM( const_tuple_a43d84e8df0651f81066d1c9b74151ea_tuple, 1, const_str_plain_caller ); Py_INCREF( const_str_plain_caller );
    PyTuple_SET_ITEM( const_tuple_a43d84e8df0651f81066d1c9b74151ea_tuple, 2, const_str_plain_evaldict ); Py_INCREF( const_str_plain_evaldict );
    PyTuple_SET_ITEM( const_tuple_a43d84e8df0651f81066d1c9b74151ea_tuple, 3, const_str_plain_fun ); Py_INCREF( const_str_plain_fun );
    const_str_digest_5daadf20330cb766c29ad4806d625316 = UNSTREAM_STRING( &constant_bin[ 78393 ], 8, 0 );
    const_str_digest_1a810626c001febcbe29670d3efcd714 = UNSTREAM_STRING( &constant_bin[ 78401 ], 114, 0 );
    const_str_plain_get_init = UNSTREAM_STRING( &constant_bin[ 78515 ], 8, 1 );
    const_str_digest_108ea5b456b342f5d15c2f6fd94e4746 = UNSTREAM_STRING( &constant_bin[ 78523 ], 29, 0 );
    const_tuple_str_plain_self_str_plain_func_tuple = PyTuple_New( 2 );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_func_tuple, 0, const_str_plain_self ); Py_INCREF( const_str_plain_self );
    PyTuple_SET_ITEM( const_tuple_str_plain_self_str_plain_func_tuple, 1, const_str_plain_func ); Py_INCREF( const_str_plain_func );
    const_str_digest_06a0636793b7f71eda2b528403ace91d = UNSTREAM_STRING( &constant_bin[ 78552 ], 61, 0 );
    const_str_digest_4533638b14e5ea4e173e64ab7162b17d = UNSTREAM_STRING( &constant_bin[ 78613 ], 35, 0 );
    const_str_plain_DEF = UNSTREAM_STRING( &constant_bin[ 23296 ], 3, 1 );

    constants_created = true;
}

#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_decorator( void )
{
    // The module may not have been used at all.
    if (constants_created == false) return;


}
#endif

// The module code objects.
static PyCodeObject *codeobj_fb34112db4f3495a05979b1ac2c701d1;
static PyCodeObject *codeobj_7b2e59cdf9e72653749f8cdf4506a297;
static PyCodeObject *codeobj_f1023fa583c8fdcb67529bd7c8606d87;
static PyCodeObject *codeobj_0643a08f40788dcdda16972bc7ff3cf4;
static PyCodeObject *codeobj_ae4a71ee80ee71cadbc6361ccea90b66;
static PyCodeObject *codeobj_4e69cf1f15fbde31b13e81019690fd27;
static PyCodeObject *codeobj_a0a5030d2ff8e0a113e829436e73a960;
static PyCodeObject *codeobj_babe54f4babc1220f79d69aa998f7537;
static PyCodeObject *codeobj_d05f6b1b057aff330d9ae3c330fc65b2;
static PyCodeObject *codeobj_41321b3e9e2368b92b4f3fd183d574c2;
static PyCodeObject *codeobj_232f74c9bdc8ec34be25b372e304c395;
static PyCodeObject *codeobj_50055935082f446926cba4f710d784a0;
static PyCodeObject *codeobj_85c356e5e417b803f51c3cfd423bc8ff;
static PyCodeObject *codeobj_a1f5eff386395f39c641e7d074e971c1;
static PyCodeObject *codeobj_05bcb355f09393b6cb44afedbb12bdb3;
static PyCodeObject *codeobj_79654b47c1122848faa1440d8af23c1c;
static PyCodeObject *codeobj_7ee777894a9cc5dd8d0277cc246762db;
static PyCodeObject *codeobj_0b2aaae991c5e251f07f4ee4bd1add2f;
static PyCodeObject *codeobj_fe3cee60129716c5db9d030cd1969bc0;
static PyCodeObject *codeobj_f6ab55573d60febf92972bf0366b1fd9;
static PyCodeObject *codeobj_f2757f4d71fdd787d14c07cf2c8b28df;
static PyCodeObject *codeobj_422be427cea742a626d32a33f9362ee5;
static PyCodeObject *codeobj_7274dd9fa3f8e44777be913570dd2fe5;
static PyCodeObject *codeobj_bf11a01774ba29600797beff3bfab264;
static PyCodeObject *codeobj_d0d533d017a94069b6baea52e4954a02;
static PyCodeObject *codeobj_7be976306880574491ec8011abfc4ccb;
static PyCodeObject *codeobj_ea92bd54999aa33083b7596a4bbcc6e6;
static PyCodeObject *codeobj_3e9917c5f6e0d474eb0712afac3192fe;
static PyCodeObject *codeobj_0ea975a92b2427450ae98523b3d02d5b;
static PyCodeObject *codeobj_3d51a68a421f9a9c30faa2f122cbb45a;
static PyCodeObject *codeobj_6ff6f7669e6c7be5cf6d16f69dd21eb8;
static PyCodeObject *codeobj_da11367ebdfb783f3e25558365f12485;
static PyCodeObject *codeobj_f0be9381eb3129a3437bf565dcbeffdf;
static PyCodeObject *codeobj_6c82a5f212f14e9f04c76564c3e0c2ad;
static PyCodeObject *codeobj_9274fec079ad3daaa615dd3b2bf72492;
static PyCodeObject *codeobj_3c98a1c1752535da77e9c20500676f25;

static void createModuleCodeObjects(void)
{
    module_filename_obj = const_str_digest_3da9ef48ddf25c4f005539e6d3568ee3;
    codeobj_fb34112db4f3495a05979b1ac2c701d1 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 220, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7b2e59cdf9e72653749f8cdf4506a297 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 220, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f1023fa583c8fdcb67529bd7c8606d87 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 389, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0643a08f40788dcdda16972bc7ff3cf4 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 389, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ae4a71ee80ee71cadbc6361ccea90b66 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 393, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_4e69cf1f15fbde31b13e81019690fd27 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_genexpr, 393, const_tuple_str_digest_b9c4baf879ebd882d40843df3a4dead7_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a0a5030d2ff8e0a113e829436e73a960 = MAKE_CODEOBJ( module_filename_obj, const_str_angle_lambda, 115, const_tuple_str_plain_val_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_babe54f4babc1220f79d69aa998f7537 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_FunctionMaker, 84, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d05f6b1b057aff330d9ae3c330fc65b2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___call__, 273, const_tuple_str_plain_self_str_plain_func_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_41321b3e9e2368b92b4f3fd183d574c2 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 53, const_tuple_str_plain_self_str_plain_f_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_232f74c9bdc8ec34be25b372e304c395 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 94, const_tuple_8d723545af47c71be21c1ea4ea06687b_tuple, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_50055935082f446926cba4f710d784a0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 282, const_tuple_str_plain_self_str_plain_g_str_plain_a_str_plain_k_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_85c356e5e417b803f51c3cfd423bc8ff = MAKE_CODEOBJ( module_filename_obj, const_str_plain___init__, 288, const_tuple_str_plain_self_str_plain_g_str_plain_a_str_plain_k_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_a1f5eff386395f39c641e7d074e971c1 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 59, const_tuple_str_plain_self_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_05bcb355f09393b6cb44afedbb12bdb3 = MAKE_CODEOBJ( module_filename_obj, const_str_plain___iter__, 59, const_tuple_str_plain_self_tuple, 1, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_79654b47c1122848faa1440d8af23c1c = MAKE_CODEOBJ( module_filename_obj, const_str_plain__dispatch, 392, const_tuple_6109a7a112ba47143b23385b2dbab345_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_VARKEYWORDS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7ee777894a9cc5dd8d0277cc246762db = MAKE_CODEOBJ( module_filename_obj, const_str_plain_ancestors, 351, const_tuple_3f3415900ed636302ed67f567f06f1f4_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0b2aaae991c5e251f07f4ee4bd1add2f = MAKE_CODEOBJ( module_filename_obj, const_str_plain_append, 297, const_tuple_79063cf2cbec4e346466f1a51248e60f_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_fe3cee60129716c5db9d030cd1969bc0 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_check, 323, const_tuple_44ab271dedb8384fb4b0e72f035742be_tuple, 3, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f6ab55573d60febf92972bf0366b1fd9 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_create, 202, const_tuple_86ce8c69ff8f306e87422004390f9eca_tuple, 8, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f2757f4d71fdd787d14c07cf2c8b28df = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dec, 376, const_tuple_0ecc13e499a9659cc8848fb0a6a125ff_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_422be427cea742a626d32a33f9362ee5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decorate, 225, const_tuple_a43d84e8df0651f81066d1c9b74151ea_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7274dd9fa3f8e44777be913570dd2fe5 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decorator, 1, const_tuple_empty, 0, CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_bf11a01774ba29600797beff3bfab264 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_decorator, 238, const_tuple_5a37177e48ebe509045f4b3820873fc0_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_d0d533d017a94069b6baea52e4954a02 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dispatch_info, 382, const_tuple_461ba62d30306dc23e110ed804603932_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_7be976306880574491ec8011abfc4ccb = MAKE_CODEOBJ( module_filename_obj, const_str_plain_dispatch_on, 315, const_tuple_a8495f8089661ac1f43015c4b7b2168d_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_ea92bd54999aa33083b7596a4bbcc6e6 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_gen_func_dec, 329, const_tuple_57b40afa3a8c9158f9857551991c4c9f_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3e9917c5f6e0d474eb0712afac3192fe = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_init, 48, const_tuple_str_plain_cls_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_0ea975a92b2427450ae98523b3d02d5b = MAKE_CODEOBJ( module_filename_obj, const_str_plain_get_init, 67, const_tuple_str_plain_cls_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3d51a68a421f9a9c30faa2f122cbb45a = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getargspec, 75, const_tuple_str_plain_f_str_plain_spec_tuple, 1, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6ff6f7669e6c7be5cf6d16f69dd21eb8 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_getfullargspec, 51, const_tuple_empty, 0, CO_NEWLOCALS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_da11367ebdfb783f3e25558365f12485 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make, 168, const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 4, CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_f0be9381eb3129a3437bf565dcbeffdf = MAKE_CODEOBJ( module_filename_obj, const_str_plain_make, 168, const_tuple_ed6b280da416bbcaa7fe0f421fc287de_tuple, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_6c82a5f212f14e9f04c76564c3e0c2ad = MAKE_CODEOBJ( module_filename_obj, const_str_plain_register, 370, const_tuple_str_plain_types_str_plain_dec_str_plain_check_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_PRINT_FUNCTION );
    codeobj_9274fec079ad3daaa615dd3b2bf72492 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_update, 151, const_tuple_1a850df3427b47e3968a5472b1c59617_tuple, 2, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE | CO_FUTURE_PRINT_FUNCTION );
    codeobj_3c98a1c1752535da77e9c20500676f25 = MAKE_CODEOBJ( module_filename_obj, const_str_plain_vancestors, 339, const_tuple_1fba4ec31d579f8e64f9dbb274639f4f_tuple, 0, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS | CO_FUTURE_PRINT_FUNCTION );
}

// The module function declarations.
NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$class_1_getfullargspec( PyObject **python_pars );


static void decorator$$$class_1_getfullargspec$$$function_2___iter__$$$genobj_1___iter___context( Nuitka_GeneratorObject *generator );


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$class_2_FunctionMaker( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$class_2_FunctionMaker$$$function_4_create$$$function_1_genexpr( PyObject **python_pars );


static void decorator$$$class_2_FunctionMaker$$$function_4_create$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator );


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$class_3_ContextManager( PyObject **python_pars );


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info$$$function_1_genexpr( PyObject **python_pars );


static void decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator );


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch$$$function_1_genexpr( PyObject **python_pars );


static void decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_8_complex_call_helper_keywords_star_list( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_9_complex_call_helper_pos_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( PyObject **python_pars );


NUITKA_CROSS_MODULE PyObject *impl___internal__$$$function_5_complex_call_helper_star_list( PyObject **python_pars );


static PyObject *MAKE_FUNCTION_decorator$$$class_1_getfullargspec$$$function_1___init__(  );


static PyObject *MAKE_FUNCTION_decorator$$$class_1_getfullargspec$$$function_2___iter__(  );


static PyObject *MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_1___init__( PyObject *defaults );


static PyObject *MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_1___init__$$$function_1_lambda(  );


static PyObject *MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_2_update(  );


static PyObject *MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_3_make( PyObject *defaults );


static PyObject *MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_4_create( PyObject *defaults );


static PyObject *MAKE_FUNCTION_decorator$$$class_3_ContextManager$$$function_1___call__(  );


static PyObject *MAKE_FUNCTION_decorator$$$function_1_get_init(  );


static PyObject *MAKE_FUNCTION_decorator$$$function_2_get_init(  );


static PyObject *MAKE_FUNCTION_decorator$$$function_3_getargspec(  );


static PyObject *MAKE_FUNCTION_decorator$$$function_4_decorate(  );


static PyObject *MAKE_FUNCTION_decorator$$$function_5_decorator( PyObject *defaults );


static PyObject *MAKE_FUNCTION_decorator$$$function_6___init__(  );


static PyObject *MAKE_FUNCTION_decorator$$$function_7___init__(  );


static PyObject *MAKE_FUNCTION_decorator$$$function_8_append(  );


static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on(  );


static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_1_check( PyObject *defaults, PyCellObject *closure_dispatch_args );


static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec( PyCellObject *closure_check, PyCellObject *closure_dispatch_args, PyCellObject *closure_dispatch_str );


static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors( PyCellObject *closure_check, PyCellObject *closure_dispatch_args, PyCellObject *closure_typemap );


static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_2_ancestors( PyCellObject *closure_check, PyCellObject *closure_vancestors );


static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register( PyCellObject *closure_check, PyCellObject *closure_typemap );


static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register$$$function_1_dec( PyCellObject *closure_check, PyCellObject *closure_typemap, PyCellObject *closure_types );


static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info( PyCellObject *closure_ancestors, PyCellObject *closure_check );


static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch( PyCellObject *closure_ancestors, PyCellObject *closure_func, PyCellObject *closure_typemap );


// The module function definitions.
static PyObject *impl_decorator$$$function_1_get_init( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3e9917c5f6e0d474eb0712afac3192fe, module_decorator );
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
    tmp_source_name_1 = par_cls;

    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 49;
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
            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_1_get_init );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_1_get_init );
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


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$class_1_getfullargspec( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var___iter__ = NULL;
    PyObject *var_getargspec = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_plain_decorator;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_e82ede2dd9091d0e1c257095721c50e7;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    tmp_assign_source_3 = MAKE_FUNCTION_decorator$$$class_1_getfullargspec$$$function_1___init__(  );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_3;

    tmp_assign_source_4 = MAKE_FUNCTION_decorator$$$class_1_getfullargspec$$$function_2___iter__(  );
    assert( var___iter__ == NULL );
    var___iter__ = tmp_assign_source_4;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6ff6f7669e6c7be5cf6d16f69dd21eb8, module_decorator );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_inspect );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "inspect" );
        exception_tb = NULL;

        exception_lineno = 65;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getargspec );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 65;
        goto frame_exception_exit_1;
    }
    assert( var_getargspec == NULL );
    var_getargspec = tmp_assign_source_5;


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
            if ( var___module__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___module__,
                    var___module__
                );

                assert( res == 0 );
            }

            if ( var___doc__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___doc__,
                    var___doc__
                );

                assert( res == 0 );
            }

            if ( var___init__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___init__,
                    var___init__
                );

                assert( res == 0 );
            }

            if ( var___iter__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___iter__,
                    var___iter__
                );

                assert( res == 0 );
            }

            if ( var_getargspec )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_getargspec,
                    var_getargspec
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

    tmp_return_value = PyDict_New();
    if ( var___module__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__
        );

        assert( res == 0 );
    }

    if ( var___doc__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__
        );

        assert( res == 0 );
    }

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var___iter__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___iter__,
            var___iter__
        );

        assert( res == 0 );
    }

    if ( var_getargspec )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_getargspec,
            var_getargspec
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$class_1_getfullargspec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var___iter__ );
    Py_DECREF( var___iter__ );
    var___iter__ = NULL;

    CHECK_OBJECT( (PyObject *)var_getargspec );
    Py_DECREF( var_getargspec );
    var_getargspec = NULL;

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

    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var___iter__ );
    Py_DECREF( var___iter__ );
    var___iter__ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_1_getfullargspec );
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


static PyObject *impl_decorator$$$class_1_getfullargspec$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_f = python_pars[ 1 ];
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    PyObject *tmp_unpack_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_41321b3e9e2368b92b4f3fd183d574c2, module_decorator );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_inspect );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inspect" );
        exception_tb = NULL;

        exception_lineno = 55;
        goto try_except_handler_2;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_getargspec );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_2;
    }
    tmp_args_element_name_1 = par_f;

    frame_function->f_lineno = 55;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 55;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
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


        exception_lineno = 54;
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


        exception_lineno = 54;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_2 == NULL );
    tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_4 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_4 == NULL )
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


        exception_lineno = 54;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_3 == NULL );
    tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;

    tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_4, 3 );
    if ( tmp_assign_source_5 == NULL )
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


        exception_lineno = 54;
        goto try_except_handler_2;
    }
    assert( tmp_tuple_unpack_1__element_4 == NULL );
    tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;

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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 4)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_2;
    }
    tmp_assattr_name_1 = tmp_tuple_unpack_1__element_1;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_args, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_2;
    }
    tmp_assattr_name_2 = tmp_tuple_unpack_1__element_2;

    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_varargs, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_2;
    }
    tmp_assattr_name_3 = tmp_tuple_unpack_1__element_3;

    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_varkw, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
        goto try_except_handler_2;
    }
    tmp_assattr_name_4 = tmp_tuple_unpack_1__element_4;

    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_defaults, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 54;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    Py_XDECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_3 );
    Py_DECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_4 );
    Py_DECREF( tmp_tuple_unpack_1__element_4 );
    tmp_tuple_unpack_1__element_4 = NULL;

    tmp_assattr_name_5 = PyList_New( 0 );
    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_kwonlyargs, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 56;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_assattr_name_6 = Py_None;
    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_kwonlydefaults, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 57;
        goto frame_exception_exit_1;
    }

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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    par_f
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
    NUITKA_CANNOT_GET_HERE( decorator$$$class_1_getfullargspec$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_1_getfullargspec$$$function_1___init__ );
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


static PyObject *impl_decorator$$$class_1_getfullargspec$$$function_2___iter__( Nuitka_FunctionObject const *self, PyObject **python_pars )
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
            decorator$$$class_1_getfullargspec$$$function_2___iter__$$$genobj_1___iter___context,
            const_str_plain___iter__,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_05bcb355f09393b6cb44afedbb12bdb3,
            closure,
            1
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$class_1_getfullargspec$$$function_2___iter__ );
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
    NUITKA_CANNOT_GET_HERE( decorator$$$class_1_getfullargspec$$$function_2___iter__ );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void decorator$$$class_1_getfullargspec$$$function_2___iter__$$$genobj_1___iter___context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *tmp_expression_name_1;
    PyObject *tmp_expression_name_2;
    PyObject *tmp_expression_name_3;
    PyObject *tmp_expression_name_4;
    PyObject *tmp_frame_locals;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_a1f5eff386395f39c641e7d074e971c1, module_decorator );
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
            exception_lineno = 59;
            goto frame_exception_exit_1;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    tmp_source_name_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 60;
        goto frame_exception_exit_1;
    }

    tmp_expression_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_args );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 60;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 61;
        goto frame_exception_exit_1;
    }

    tmp_expression_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_varargs );
    if ( tmp_expression_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 61;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 62;
        goto frame_exception_exit_1;
    }

    tmp_expression_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_varkw );
    if ( tmp_expression_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 62;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "self" );
        exception_tb = NULL;

        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

    tmp_expression_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_defaults );
    if ( tmp_expression_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 63;
        goto frame_exception_exit_1;
    }

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
    goto function_exception_exit;
    frame_no_exception_1:;


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


static PyObject *impl_decorator$$$function_2_get_init( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0ea975a92b2427450ae98523b3d02d5b, module_decorator );
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
    tmp_source_name_2 = par_cls;

    tmp_source_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___init__ );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
        goto frame_exception_exit_1;
    }
    tmp_return_value = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___func__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 68;
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
            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_2_get_init );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_2_get_init );
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


static PyObject *impl_decorator$$$function_3_getargspec( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *var_spec = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3d51a68a421f9a9c30faa2f122cbb45a, module_decorator );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_getfullargspec );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfullargspec );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getfullargspec" );
        exception_tb = NULL;

        exception_lineno = 77;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_f;

    frame_function->f_lineno = 77;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 77;
        goto frame_exception_exit_1;
    }
    assert( var_spec == NULL );
    var_spec = tmp_assign_source_1;

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_ArgSpec );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ArgSpec );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "ArgSpec" );
        exception_tb = NULL;

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }

    tmp_source_name_1 = var_spec;

    tmp_args_element_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_args );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = var_spec;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_varargs );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_source_name_3 = var_spec;

    tmp_args_element_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_varkw );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    tmp_source_name_4 = var_spec;

    tmp_args_element_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_defaults );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_2 );
        Py_DECREF( tmp_args_element_name_3 );
        Py_DECREF( tmp_args_element_name_4 );

        exception_lineno = 78;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 78;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_2 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    Py_DECREF( tmp_args_element_name_5 );
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
            if ( par_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    par_f
                );

                assert( res == 0 );
            }

            if ( var_spec )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_spec,
                    var_spec
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_3_getargspec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    CHECK_OBJECT( (PyObject *)var_spec );
    Py_DECREF( var_spec );
    var_spec = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    Py_XDECREF( var_spec );
    var_spec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_3_getargspec );
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


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$class_2_FunctionMaker( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___doc__ = NULL;
    PyObject *var__compile_count = NULL;
    PyObject *var___init__ = NULL;
    PyObject *var_update = NULL;
    PyObject *var_make = NULL;
    PyObject *var_create = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
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
    PyObject *tmp_defaults_1;
    PyObject *tmp_defaults_2;
    PyObject *tmp_defaults_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_plain_decorator;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = const_str_digest_5e32d622bb3d7fe45179faa959fd65fd;
    assert( var___doc__ == NULL );
    Py_INCREF( tmp_assign_source_2 );
    var___doc__ = tmp_assign_source_2;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_babe54f4babc1220f79d69aa998f7537, module_decorator );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_itertools );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_itertools );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "itertools" );
        exception_tb = NULL;

        exception_lineno = 92;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_count );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 92;
    tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS( tmp_called_name_1 );
    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 92;
        goto frame_exception_exit_1;
    }
    assert( var__compile_count == NULL );
    var__compile_count = tmp_assign_source_3;

    tmp_defaults_1 = const_tuple_none_none_none_none_none_none_none_tuple;
    tmp_assign_source_4 = MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_1___init__( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    assert( var___init__ == NULL );
    var___init__ = tmp_assign_source_4;

    tmp_assign_source_5 = MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_2_update(  );
    assert( var_update == NULL );
    var_update = tmp_assign_source_5;

    tmp_defaults_2 = const_tuple_none_false_tuple;
    tmp_assign_source_6 = MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_3_make( INCREASE_REFCOUNT( tmp_defaults_2 ) );
    assert( var_make == NULL );
    var_make = tmp_assign_source_6;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_classmethod );
    assert( tmp_called_name_2 != NULL );
    tmp_defaults_3 = const_tuple_none_none_none_true_tuple;
    tmp_args_element_name_1 = MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_4_create( INCREASE_REFCOUNT( tmp_defaults_3 ) );
    frame_function->f_lineno = 202;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 202;
        goto frame_exception_exit_1;
    }
    assert( var_create == NULL );
    var_create = tmp_assign_source_7;


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
            if ( var___module__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___module__,
                    var___module__
                );

                assert( res == 0 );
            }

            if ( var___doc__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___doc__,
                    var___doc__
                );

                assert( res == 0 );
            }

            if ( var__compile_count )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__compile_count,
                    var__compile_count
                );

                assert( res == 0 );
            }

            if ( var___init__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain___init__,
                    var___init__
                );

                assert( res == 0 );
            }

            if ( var_update )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_update,
                    var_update
                );

                assert( res == 0 );
            }

            if ( var_make )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_make,
                    var_make
                );

                assert( res == 0 );
            }

            if ( var_create )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_create,
                    var_create
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

    tmp_return_value = PyDict_New();
    if ( var___module__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__
        );

        assert( res == 0 );
    }

    if ( var___doc__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___doc__,
            var___doc__
        );

        assert( res == 0 );
    }

    if ( var__compile_count )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain__compile_count,
            var__compile_count
        );

        assert( res == 0 );
    }

    if ( var___init__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___init__,
            var___init__
        );

        assert( res == 0 );
    }

    if ( var_update )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_update,
            var_update
        );

        assert( res == 0 );
    }

    if ( var_make )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_make,
            var_make
        );

        assert( res == 0 );
    }

    if ( var_create )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain_create,
            var_create
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    CHECK_OBJECT( (PyObject *)var__compile_count );
    Py_DECREF( var__compile_count );
    var__compile_count = NULL;

    CHECK_OBJECT( (PyObject *)var___init__ );
    Py_DECREF( var___init__ );
    var___init__ = NULL;

    CHECK_OBJECT( (PyObject *)var_update );
    Py_DECREF( var_update );
    var_update = NULL;

    CHECK_OBJECT( (PyObject *)var_make );
    Py_DECREF( var_make );
    var_make = NULL;

    CHECK_OBJECT( (PyObject *)var_create );
    Py_DECREF( var_create );
    var_create = NULL;

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

    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___doc__ );
    Py_DECREF( var___doc__ );
    var___doc__ = NULL;

    Py_XDECREF( var__compile_count );
    var__compile_count = NULL;

    Py_XDECREF( var___init__ );
    var___init__ = NULL;

    Py_XDECREF( var_update );
    var_update = NULL;

    Py_XDECREF( var_make );
    var_make = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker );
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


static PyObject *impl_decorator$$$class_2_FunctionMaker$$$function_1___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *par_name = python_pars[ 2 ];
    PyObject *par_signature = python_pars[ 3 ];
    PyObject *par_defaults = python_pars[ 4 ];
    PyObject *par_doc = python_pars[ 5 ];
    PyObject *par_module = python_pars[ 6 ];
    PyObject *par_funcdict = python_pars[ 7 ];
    PyObject *var_argspec = NULL;
    PyObject *var_a = NULL;
    PyObject *var_i = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_allargs = NULL;
    PyObject *var_allshortargs = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_name_8;
    PyObject *tmp_assattr_name_9;
    PyObject *tmp_assattr_name_10;
    PyObject *tmp_assattr_name_11;
    PyObject *tmp_assattr_name_12;
    PyObject *tmp_assattr_name_13;
    PyObject *tmp_assattr_name_14;
    PyObject *tmp_assattr_name_15;
    PyObject *tmp_assattr_name_16;
    PyObject *tmp_assattr_name_17;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assattr_target_8;
    PyObject *tmp_assattr_target_9;
    PyObject *tmp_assattr_target_10;
    PyObject *tmp_assattr_target_11;
    PyObject *tmp_assattr_target_12;
    PyObject *tmp_assattr_target_13;
    PyObject *tmp_assattr_target_14;
    PyObject *tmp_assattr_target_15;
    PyObject *tmp_assattr_target_16;
    PyObject *tmp_assattr_target_17;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    PyObject *tmp_called_name_9;
    PyObject *tmp_called_name_10;
    PyObject *tmp_called_name_11;
    PyObject *tmp_called_name_12;
    PyObject *tmp_called_name_13;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Lt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    int tmp_cond_truth_4;
    int tmp_cond_truth_5;
    int tmp_cond_truth_6;
    int tmp_cond_truth_7;
    int tmp_cond_truth_8;
    int tmp_cond_truth_9;
    int tmp_cond_truth_10;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_cond_value_4;
    PyObject *tmp_cond_value_5;
    PyObject *tmp_cond_value_6;
    PyObject *tmp_cond_value_7;
    PyObject *tmp_cond_value_8;
    PyObject *tmp_cond_value_9;
    PyObject *tmp_cond_value_10;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_attr_2;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_hasattr_source_2;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_left_name_7;
    PyObject *tmp_left_name_8;
    PyObject *tmp_list_arg_1;
    PyObject *tmp_list_arg_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_right_name_7;
    PyObject *tmp_right_name_8;
    PyObject *tmp_setattr_attr_1;
    PyObject *tmp_setattr_attr_2;
    PyObject *tmp_setattr_target_1;
    PyObject *tmp_setattr_target_2;
    PyObject *tmp_setattr_value_1;
    PyObject *tmp_setattr_value_2;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_source_name_17;
    PyObject *tmp_source_name_18;
    PyObject *tmp_source_name_19;
    PyObject *tmp_source_name_20;
    PyObject *tmp_source_name_21;
    PyObject *tmp_source_name_22;
    PyObject *tmp_source_name_23;
    PyObject *tmp_source_name_24;
    PyObject *tmp_source_name_25;
    PyObject *tmp_source_name_26;
    PyObject *tmp_source_name_27;
    PyObject *tmp_source_name_28;
    PyObject *tmp_source_name_29;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_232f74c9bdc8ec34be25b372e304c395, module_decorator );
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
    tmp_assattr_name_1 = par_signature;

    tmp_assattr_target_1 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain_shortsignature, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 96;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_1 = par_func;

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 97;
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
    tmp_source_name_1 = par_func;

    tmp_assattr_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain_name, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 99;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_source_name_2 = par_self;

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_name );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_angle_lambda;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 100;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_assattr_name_3 = const_str_plain__lambda_;
    tmp_assattr_target_3 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_3, const_str_plain_name, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 101;
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    tmp_source_name_3 = par_func;

    tmp_assattr_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___doc__ );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain_doc, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 102;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_source_name_4 = par_func;

    tmp_assattr_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___module__ );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain_module, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 103;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_inspect );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inspect" );
        exception_tb = NULL;

        exception_lineno = 104;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_isfunction );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_func;

    frame_function->f_lineno = 104;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 104;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 104;
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
    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_getfullargspec );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfullargspec );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getfullargspec" );
        exception_tb = NULL;

        exception_lineno = 105;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_func;

    frame_function->f_lineno = 105;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 105;
        goto frame_exception_exit_1;
    }
    assert( var_argspec == NULL );
    var_argspec = tmp_assign_source_1;

    tmp_getattr_target_1 = par_func;

    tmp_getattr_attr_1 = const_str_plain___annotations__;
    tmp_getattr_default_1 = PyDict_New();
    tmp_assattr_name_6 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    Py_DECREF( tmp_getattr_default_1 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain_annotations, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 106;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_iter_arg_1 = const_tuple_5139c0d43b4cbf9581a06d1f7112a263_tuple;
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    assert( tmp_assign_source_2 != NULL );
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 107;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_4;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_setattr_target_1 = par_self;

    tmp_setattr_attr_1 = var_a;

    tmp_getattr_target_2 = var_argspec;

    tmp_getattr_attr_2 = var_a;

    tmp_setattr_value_1 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, NULL );
    if ( tmp_setattr_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto try_except_handler_2;
    }
    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1 );
    Py_DECREF( tmp_setattr_value_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 109;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 107;
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

    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    assert( tmp_called_name_3 != NULL );
    tmp_source_name_6 = par_self;

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_args );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 110;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_2__for_iterator == NULL );
    tmp_for_loop_2__for_iterator = tmp_assign_source_5;

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
            frame_function->f_lineno = 110;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_6;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_3 = tmp_for_loop_2__iter_value;

    tmp_assign_source_7 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_8 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_8 == NULL )
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


        exception_lineno = 110;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_9 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_9 == NULL )
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


        exception_lineno = 110;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
        Py_XDECREF( old );
    }

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

                goto try_except_handler_4;
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

        goto try_except_handler_4;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_i;
        var_i = tmp_assign_source_10;
        Py_INCREF( var_i );
        Py_XDECREF( old );
    }

    tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_arg;
        var_arg = tmp_assign_source_11;
        Py_INCREF( var_arg );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_setattr_target_2 = par_self;

    tmp_left_name_1 = const_str_digest_c0323250114388bba72015953b71209c;
    tmp_right_name_1 = var_i;

    tmp_setattr_attr_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_setattr_attr_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto try_except_handler_3;
    }
    tmp_setattr_value_2 = var_arg;

    tmp_unused = BUILTIN_SETATTR( tmp_setattr_target_2, tmp_setattr_attr_2, tmp_setattr_value_2 );
    Py_DECREF( tmp_setattr_attr_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 111;
        goto try_except_handler_3;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 110;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_version );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_plain_3;
    tmp_cmp_Lt_1 = RICH_COMPARE_BOOL_LT( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Lt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 112;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Lt_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    // Tried code:
    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = -1;
    tmp_source_name_8 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_inspect );

    if (unlikely( tmp_source_name_8 == NULL ))
    {
        tmp_source_name_8 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect );
    }

    if ( tmp_source_name_8 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inspect" );
        exception_tb = NULL;

        exception_lineno = 114;
        goto try_except_handler_5;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_formatargspec );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto try_except_handler_5;
    }
    tmp_dircall_arg2_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_1___init__$$$function_1_lambda(  );
    tmp_dict_key_1 = const_str_plain_formatvalue;
    PyDict_SetItem( tmp_dircall_arg2_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    tmp_dircall_arg3_1 = var_argspec;

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_slice_source_1 = impl___internal__$$$function_8_complex_call_helper_keywords_star_list( dir_call_args );
    }
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 115;
        goto try_except_handler_5;
    }
    tmp_assign_source_12 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 114;
        goto try_except_handler_5;
    }
    assert( tmp_assign_unpack_1__assign_source == NULL );
    tmp_assign_unpack_1__assign_source = tmp_assign_source_12;

    tmp_assattr_name_7 = tmp_assign_unpack_1__assign_source;

    tmp_assattr_target_7 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain_shortsignature, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto try_except_handler_5;
    }
    tmp_assattr_name_8 = tmp_assign_unpack_1__assign_source;

    tmp_assattr_target_8 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_8, const_str_plain_signature, tmp_assattr_name_8 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 113;
        goto try_except_handler_5;
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT( (PyObject *)tmp_assign_unpack_1__assign_source );
    Py_DECREF( tmp_assign_unpack_1__assign_source );
    tmp_assign_unpack_1__assign_source = NULL;

    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_9 = par_self;

    tmp_list_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_args );
    if ( tmp_list_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_13 = PySequence_List( tmp_list_arg_1 );
    Py_DECREF( tmp_list_arg_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 117;
        goto frame_exception_exit_1;
    }
    assert( var_allargs == NULL );
    var_allargs = tmp_assign_source_13;

    tmp_source_name_10 = par_self;

    tmp_list_arg_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_args );
    if ( tmp_list_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_14 = PySequence_List( tmp_list_arg_2 );
    Py_DECREF( tmp_list_arg_2 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 118;
        goto frame_exception_exit_1;
    }
    assert( var_allshortargs == NULL );
    var_allshortargs = tmp_assign_source_14;

    tmp_source_name_11 = par_self;

    tmp_cond_value_3 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_varargs );
    if ( tmp_cond_value_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_3 );

        exception_lineno = 119;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_12 = var_allargs;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_12, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_left_name_2 = const_str_chr_42;
    tmp_source_name_13 = par_self;

    tmp_right_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain_varargs );
    if ( tmp_right_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    Py_DECREF( tmp_right_name_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 120;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 120;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_14 = var_allshortargs;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain_append );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_left_name_3 = const_str_chr_42;
    tmp_source_name_15 = par_self;

    tmp_right_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_varargs );
    if ( tmp_right_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_5 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_args_element_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_5 );

        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 121;
    {
        PyObject *call_args[] = { tmp_args_element_name_5 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, call_args );
    }

    Py_DECREF( tmp_called_name_5 );
    Py_DECREF( tmp_args_element_name_5 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 121;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    goto branch_end_5;
    branch_no_5:;
    tmp_source_name_16 = par_self;

    tmp_cond_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain_kwonlyargs );
    if ( tmp_cond_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_4 = CHECK_IF_TRUE( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_4 );

        exception_lineno = 122;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_4 );
    if ( tmp_cond_truth_4 == 1 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_source_name_17 = var_allargs;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_17, const_str_plain_append );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 123;
    tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, &PyTuple_GET_ITEM( const_tuple_str_chr_42_tuple, 0 ) );

    Py_DECREF( tmp_called_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 123;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_6:;
    branch_end_5:;
    tmp_source_name_18 = par_self;

    tmp_iter_arg_4 = LOOKUP_ATTRIBUTE( tmp_source_name_18, const_str_plain_kwonlyargs );
    if ( tmp_iter_arg_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_15 = MAKE_ITERATOR( tmp_iter_arg_4 );
    Py_DECREF( tmp_iter_arg_4 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_3__for_iterator == NULL );
    tmp_for_loop_3__for_iterator = tmp_assign_source_15;

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_3__for_iterator;

    tmp_assign_source_16 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_16 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 124;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_for_loop_3__iter_value;
        tmp_for_loop_3__iter_value = tmp_assign_source_16;
        Py_XDECREF( old );
    }

    tmp_assign_source_17 = tmp_for_loop_3__iter_value;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_17;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_source_name_19 = var_allargs;

    tmp_called_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_19, const_str_plain_append );
    if ( tmp_called_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto try_except_handler_6;
    }
    tmp_left_name_4 = const_str_digest_f0fc4c23d9b9bc5eb86d1623a43f94e0;
    tmp_right_name_4 = var_a;

    tmp_args_element_name_6 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    if ( tmp_args_element_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_7 );

        exception_lineno = 125;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 125;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    Py_DECREF( tmp_called_name_7 );
    Py_DECREF( tmp_args_element_name_6 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 125;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_20 = var_allshortargs;

    tmp_called_name_8 = LOOKUP_ATTRIBUTE( tmp_source_name_20, const_str_plain_append );
    if ( tmp_called_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto try_except_handler_6;
    }
    tmp_left_name_5 = const_str_digest_d26f52d432ccf199e53ad3ddfa46aa69;
    tmp_right_name_5 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_a;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_5, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_a;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_5, 1, tmp_tuple_element_1 );
    tmp_args_element_name_7 = BINARY_OPERATION_REMAINDER( tmp_left_name_5, tmp_right_name_5 );
    Py_DECREF( tmp_right_name_5 );
    if ( tmp_args_element_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_8 );

        exception_lineno = 126;
        goto try_except_handler_6;
    }
    frame_function->f_lineno = 126;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_8, call_args );
    }

    Py_DECREF( tmp_called_name_8 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 126;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 124;
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_5;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    Py_XDECREF( tmp_for_loop_3__iter_value );
    tmp_for_loop_3__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_3__for_iterator );
    Py_DECREF( tmp_for_loop_3__for_iterator );
    tmp_for_loop_3__for_iterator = NULL;

    tmp_source_name_21 = par_self;

    tmp_cond_value_5 = LOOKUP_ATTRIBUTE( tmp_source_name_21, const_str_plain_varkw );
    if ( tmp_cond_value_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_5 = CHECK_IF_TRUE( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_5 );

        exception_lineno = 127;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_5 );
    if ( tmp_cond_truth_5 == 1 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_source_name_22 = var_allargs;

    tmp_called_name_9 = LOOKUP_ATTRIBUTE( tmp_source_name_22, const_str_plain_append );
    if ( tmp_called_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_left_name_6 = const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e;
    tmp_source_name_23 = par_self;

    tmp_right_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_23, const_str_plain_varkw );
    if ( tmp_right_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_8 = BINARY_OPERATION_ADD( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_args_element_name_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_9 );

        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 128;
    {
        PyObject *call_args[] = { tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_9, call_args );
    }

    Py_DECREF( tmp_called_name_9 );
    Py_DECREF( tmp_args_element_name_8 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 128;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_source_name_24 = var_allshortargs;

    tmp_called_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_24, const_str_plain_append );
    if ( tmp_called_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_left_name_7 = const_str_digest_29bbf2a0ea668f7cb550eb66ebe90f9e;
    tmp_source_name_25 = par_self;

    tmp_right_name_7 = LOOKUP_ATTRIBUTE( tmp_source_name_25, const_str_plain_varkw );
    if ( tmp_right_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_9 = BINARY_OPERATION_ADD( tmp_left_name_7, tmp_right_name_7 );
    Py_DECREF( tmp_right_name_7 );
    if ( tmp_args_element_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_10 );

        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 129;
    {
        PyObject *call_args[] = { tmp_args_element_name_9 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_10, call_args );
    }

    Py_DECREF( tmp_called_name_10 );
    Py_DECREF( tmp_args_element_name_9 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 129;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    branch_no_7:;
    tmp_source_name_26 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_11 = LOOKUP_ATTRIBUTE( tmp_source_name_26, const_str_plain_join );
    assert( tmp_called_name_11 != NULL );
    tmp_args_element_name_10 = var_allargs;

    frame_function->f_lineno = 130;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assattr_name_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_11, call_args );
    }

    Py_DECREF( tmp_called_name_11 );
    if ( tmp_assattr_name_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_9 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_9, const_str_plain_signature, tmp_assattr_name_9 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_9 );

        exception_lineno = 130;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_9 );
    tmp_source_name_27 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_12 = LOOKUP_ATTRIBUTE( tmp_source_name_27, const_str_plain_join );
    assert( tmp_called_name_12 != NULL );
    tmp_args_element_name_11 = var_allshortargs;

    frame_function->f_lineno = 131;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assattr_name_10 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_12, call_args );
    }

    Py_DECREF( tmp_called_name_12 );
    if ( tmp_assattr_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_10 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_10, const_str_plain_shortsignature, tmp_assattr_name_10 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_10 );

        exception_lineno = 131;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_10 );
    branch_end_4:;
    tmp_source_name_29 = par_func;

    tmp_source_name_28 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_29 );
    if ( tmp_source_name_28 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_called_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_28, const_str_plain_copy );
    Py_DECREF( tmp_source_name_28 );
    if ( tmp_called_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 132;
    tmp_assattr_name_11 = CALL_FUNCTION_NO_ARGS( tmp_called_name_13 );
    Py_DECREF( tmp_called_name_13 );
    if ( tmp_assattr_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_11 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_11, const_str_plain_dict, tmp_assattr_name_11 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_11 );

        exception_lineno = 132;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_11 );
    branch_no_3:;
    branch_no_1:;
    tmp_cond_value_6 = par_name;

    tmp_cond_truth_6 = CHECK_IF_TRUE( tmp_cond_value_6 );
    if ( tmp_cond_truth_6 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 134;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_6 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_assattr_name_12 = par_name;

    tmp_assattr_target_12 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_12, const_str_plain_name, tmp_assattr_name_12 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 135;
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    tmp_compare_left_3 = par_signature;

    tmp_compare_right_3 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_9;
    }
    else
    {
        goto branch_no_9;
    }
    branch_yes_9:;
    tmp_assattr_name_13 = par_signature;

    tmp_assattr_target_13 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_13, const_str_plain_signature, tmp_assattr_name_13 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 137;
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    tmp_cond_value_7 = par_defaults;

    tmp_cond_truth_7 = CHECK_IF_TRUE( tmp_cond_value_7 );
    if ( tmp_cond_truth_7 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 138;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_7 == 1 )
    {
        goto branch_yes_10;
    }
    else
    {
        goto branch_no_10;
    }
    branch_yes_10:;
    tmp_assattr_name_14 = par_defaults;

    tmp_assattr_target_14 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_14, const_str_plain_defaults, tmp_assattr_name_14 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 139;
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    tmp_cond_value_8 = par_doc;

    tmp_cond_truth_8 = CHECK_IF_TRUE( tmp_cond_value_8 );
    if ( tmp_cond_truth_8 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 140;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_8 == 1 )
    {
        goto branch_yes_11;
    }
    else
    {
        goto branch_no_11;
    }
    branch_yes_11:;
    tmp_assattr_name_15 = par_doc;

    tmp_assattr_target_15 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_15, const_str_plain_doc, tmp_assattr_name_15 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 141;
        goto frame_exception_exit_1;
    }
    branch_no_11:;
    tmp_cond_value_9 = par_module;

    tmp_cond_truth_9 = CHECK_IF_TRUE( tmp_cond_value_9 );
    if ( tmp_cond_truth_9 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 142;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_9 == 1 )
    {
        goto branch_yes_12;
    }
    else
    {
        goto branch_no_12;
    }
    branch_yes_12:;
    tmp_assattr_name_16 = par_module;

    tmp_assattr_target_16 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_16, const_str_plain_module, tmp_assattr_name_16 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 143;
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    tmp_cond_value_10 = par_funcdict;

    tmp_cond_truth_10 = CHECK_IF_TRUE( tmp_cond_value_10 );
    if ( tmp_cond_truth_10 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 144;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_10 == 1 )
    {
        goto branch_yes_13;
    }
    else
    {
        goto branch_no_13;
    }
    branch_yes_13:;
    tmp_assattr_name_17 = par_funcdict;

    tmp_assattr_target_17 = par_self;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_17, const_str_plain_dict, tmp_assattr_name_17 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 145;
        goto frame_exception_exit_1;
    }
    branch_no_13:;
    tmp_hasattr_source_1 = par_self;

    tmp_hasattr_attr_1 = const_str_plain_name;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 147;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_14;
    }
    else
    {
        goto branch_yes_14;
    }
    branch_yes_14:;
    tmp_raise_type_1 = PyExc_AssertionError;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_lineno = 147;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_14:;
    tmp_hasattr_source_2 = par_self;

    tmp_hasattr_attr_2 = const_str_plain_signature;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_2, tmp_hasattr_attr_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 148;
        goto frame_exception_exit_1;
    }
    if ( tmp_res == 1 )
    {
        goto branch_no_15;
    }
    else
    {
        goto branch_yes_15;
    }
    branch_yes_15:;
    tmp_left_name_8 = const_str_digest_572531bfcad60285f60020f46f02d5fe;
    tmp_right_name_8 = par_func;

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_8, tmp_right_name_8 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 149;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 149;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 149;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_15:;

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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func
                );

                assert( res == 0 );
            }

            if ( par_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    par_name
                );

                assert( res == 0 );
            }

            if ( par_signature )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_signature,
                    par_signature
                );

                assert( res == 0 );
            }

            if ( par_defaults )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defaults,
                    par_defaults
                );

                assert( res == 0 );
            }

            if ( par_doc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_doc,
                    par_doc
                );

                assert( res == 0 );
            }

            if ( par_module )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module,
                    par_module
                );

                assert( res == 0 );
            }

            if ( par_funcdict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_funcdict,
                    par_funcdict
                );

                assert( res == 0 );
            }

            if ( var_argspec )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_argspec,
                    var_argspec
                );

                assert( res == 0 );
            }

            if ( var_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    var_a
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

            if ( var_arg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arg,
                    var_arg
                );

                assert( res == 0 );
            }

            if ( var_allargs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_allargs,
                    var_allargs
                );

                assert( res == 0 );
            }

            if ( var_allshortargs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_allshortargs,
                    var_allshortargs
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
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_1___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_defaults );
    Py_DECREF( par_defaults );
    par_defaults = NULL;

    CHECK_OBJECT( (PyObject *)par_doc );
    Py_DECREF( par_doc );
    par_doc = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_funcdict );
    Py_DECREF( par_funcdict );
    par_funcdict = NULL;

    Py_XDECREF( var_argspec );
    var_argspec = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_allargs );
    var_allargs = NULL;

    Py_XDECREF( var_allshortargs );
    var_allshortargs = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_name );
    Py_DECREF( par_name );
    par_name = NULL;

    CHECK_OBJECT( (PyObject *)par_signature );
    Py_DECREF( par_signature );
    par_signature = NULL;

    CHECK_OBJECT( (PyObject *)par_defaults );
    Py_DECREF( par_defaults );
    par_defaults = NULL;

    CHECK_OBJECT( (PyObject *)par_doc );
    Py_DECREF( par_doc );
    par_doc = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_funcdict );
    Py_DECREF( par_funcdict );
    par_funcdict = NULL;

    Py_XDECREF( var_argspec );
    var_argspec = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;

    Py_XDECREF( var_i );
    var_i = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_allargs );
    var_allargs = NULL;

    Py_XDECREF( var_allshortargs );
    var_allshortargs = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_1___init__ );
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


static PyObject *impl_decorator$$$class_2_FunctionMaker$$$function_1___init__$$$function_1_lambda( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_val = python_pars[ 0 ];
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    tmp_return_value = const_str_empty;
    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_1___init__$$$function_1_lambda );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_val );
    Py_DECREF( par_val );
    par_val = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_1___init__$$$function_1_lambda );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_decorator$$$class_2_FunctionMaker$$$function_2_update( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *par_kw = python_pars[ 2 ];
    PyObject *var_frame = NULL;
    PyObject *var_callermodule = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_name_3;
    PyObject *tmp_assattr_name_4;
    PyObject *tmp_assattr_name_5;
    PyObject *tmp_assattr_name_6;
    PyObject *tmp_assattr_name_7;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
    PyObject *tmp_assattr_target_3;
    PyObject *tmp_assattr_target_4;
    PyObject *tmp_assattr_target_5;
    PyObject *tmp_assattr_target_6;
    PyObject *tmp_assattr_target_7;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_getattr_attr_1;
    PyObject *tmp_getattr_attr_2;
    PyObject *tmp_getattr_attr_3;
    PyObject *tmp_getattr_attr_4;
    PyObject *tmp_getattr_attr_5;
    PyObject *tmp_getattr_attr_6;
    PyObject *tmp_getattr_default_1;
    PyObject *tmp_getattr_default_2;
    PyObject *tmp_getattr_default_3;
    PyObject *tmp_getattr_default_4;
    PyObject *tmp_getattr_default_5;
    PyObject *tmp_getattr_default_6;
    PyObject *tmp_getattr_target_1;
    PyObject *tmp_getattr_target_2;
    PyObject *tmp_getattr_target_3;
    PyObject *tmp_getattr_target_4;
    PyObject *tmp_getattr_target_5;
    PyObject *tmp_getattr_target_6;
    bool tmp_is_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_9274fec079ad3daaa615dd3b2bf72492, module_decorator );
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
    tmp_source_name_1 = par_self;

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_name );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = par_func;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 153;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
    tmp_getattr_target_1 = par_self;

    tmp_getattr_attr_1 = const_str_plain_doc;
    tmp_getattr_default_1 = Py_None;
    tmp_assattr_name_2 = BUILTIN_GETATTR( tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1 );
    if ( tmp_assattr_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 154;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_2 = par_func;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___doc__, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_2 );

        exception_lineno = 154;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_2 );
    tmp_getattr_target_2 = par_self;

    tmp_getattr_attr_2 = const_str_plain_dict;
    tmp_getattr_default_2 = PyDict_New();
    tmp_assattr_name_3 = BUILTIN_GETATTR( tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2 );
    Py_DECREF( tmp_getattr_default_2 );
    if ( tmp_assattr_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 155;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_3 = par_func;

    tmp_result = SET_ATTRIBUTE_DICT_SLOT( tmp_assattr_target_3, tmp_assattr_name_3 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_3 );

        exception_lineno = 155;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_3 );
    tmp_getattr_target_3 = par_self;

    tmp_getattr_attr_3 = const_str_plain_defaults;
    tmp_getattr_default_3 = const_tuple_empty;
    tmp_assattr_name_4 = BUILTIN_GETATTR( tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3 );
    if ( tmp_assattr_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_4 = par_func;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_4, const_str_plain___defaults__, tmp_assattr_name_4 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_4 );

        exception_lineno = 156;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_4 );
    tmp_getattr_target_4 = par_self;

    tmp_getattr_attr_4 = const_str_plain_kwonlydefaults;
    tmp_getattr_default_4 = Py_None;
    tmp_assattr_name_5 = BUILTIN_GETATTR( tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4 );
    if ( tmp_assattr_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 157;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_5 = par_func;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_5, const_str_plain___kwdefaults__, tmp_assattr_name_5 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_5 );

        exception_lineno = 157;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_5 );
    tmp_getattr_target_5 = par_self;

    tmp_getattr_attr_5 = const_str_plain_annotations;
    tmp_getattr_default_5 = Py_None;
    tmp_assattr_name_6 = BUILTIN_GETATTR( tmp_getattr_target_5, tmp_getattr_attr_5, tmp_getattr_default_5 );
    if ( tmp_assattr_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_6 = par_func;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_6, const_str_plain___annotations__, tmp_assattr_name_6 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_6 );

        exception_lineno = 158;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_6 );
    tmp_assign_source_1 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_1 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_1;

    // Tried code:
    // Tried code:
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 160;
        goto try_except_handler_3;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain__getframe );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 160;
    tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_int_pos_3_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 160;
        goto try_except_handler_3;
    }
    assert( var_frame == NULL );
    var_frame = tmp_assign_source_2;

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

    tmp_assign_source_3 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_3;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_AttributeError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 161;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_assign_source_4 = const_str_chr_63;
    assert( var_callermodule == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_callermodule = tmp_assign_source_4;

    goto branch_end_1;
    branch_no_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_2_update );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_source_name_4 = var_frame;

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "frame" );
        exception_tb = NULL;

        exception_lineno = 164;
        goto try_except_handler_2;
    }

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_f_globals );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto try_except_handler_2;
    }
    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_get );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 164;
    tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_str_plain___name___str_chr_63_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 164;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_callermodule;
        var_callermodule = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    branch_no_2:;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    tmp_getattr_target_6 = par_self;

    tmp_getattr_attr_6 = const_str_plain_module;
    tmp_getattr_default_6 = var_callermodule;

    if ( tmp_getattr_default_6 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "callermodule" );
        exception_tb = NULL;

        exception_lineno = 165;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_7 = BUILTIN_GETATTR( tmp_getattr_target_6, tmp_getattr_attr_6, tmp_getattr_default_6 );
    if ( tmp_assattr_name_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 165;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_7 = par_func;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_7, const_str_plain___module__, tmp_assattr_name_7 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_7 );

        exception_lineno = 165;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_7 );
    tmp_source_name_6 = par_func;

    tmp_source_name_5 = LOOKUP_ATTRIBUTE_DICT_SLOT( tmp_source_name_6 );
    if ( tmp_source_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_update );
    Py_DECREF( tmp_source_name_5 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_kw;

    frame_function->f_lineno = 166;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 166;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 1
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
#if 1
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func
                );

                assert( res == 0 );
            }

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
                );

                assert( res == 0 );
            }

            if ( var_frame )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_frame,
                    var_frame
                );

                assert( res == 0 );
            }

            if ( var_callermodule )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_callermodule,
                    var_callermodule
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
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_2_update );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_callermodule );
    var_callermodule = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_frame );
    var_frame = NULL;

    Py_XDECREF( var_callermodule );
    var_callermodule = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_2_update );
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


static PyObject *impl_decorator$$$class_2_FunctionMaker$$$function_3_make( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    // Locals dictionary setup.
    PyObject *locals_dict = PyDict_New();

    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_src_templ = python_pars[ 1 ];
    PyObject *par_evaldict = python_pars[ 2 ];
    PyObject *par_addsource = python_pars[ 3 ];
    PyObject *par_attrs = python_pars[ 4 ];
    PyObject *var_src = NULL;
    PyObject *var_mo = NULL;
    PyObject *var_name = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_names = NULL;
    PyObject *var_n = NULL;
    PyObject *var_filename = NULL;
    PyObject *var_code = NULL;
    PyObject *var_func = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_exec_1__exec_source = NULL;
    PyObject *tmp_exec_1__globals = NULL;
    PyObject *tmp_exec_1__locals = NULL;
    PyObject *tmp_exec_1__plain = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_value_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_args_name_2;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    PyObject *tmp_called_name_8;
    int tmp_cmp_In_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compile_filename_1;
    PyObject *tmp_compile_mode_1;
    PyObject *tmp_compile_source_1;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_eval_globals_1;
    PyObject *tmp_eval_locals_1;
    PyObject *tmp_eval_locals_2;
    PyObject *tmp_eval_locals_3;
    PyObject *tmp_eval_source_1;
    PyObject *tmp_exec_compiled_1;
    PyObject *tmp_exec_result_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_is_2;
    bool tmp_is_3;
    bool tmp_is_4;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_kw_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_left_name_3;
    PyObject *tmp_left_name_4;
    PyObject *tmp_left_name_5;
    PyObject *tmp_left_name_6;
    PyObject *tmp_list_element_1;
    PyObject *tmp_locals_value;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_make_exception_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    int tmp_or_left_truth_1;
    PyObject *tmp_or_left_value_1;
    PyObject *tmp_or_right_value_1;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_type_2;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_right_name_3;
    PyObject *tmp_right_name_4;
    PyObject *tmp_right_name_5;
    PyObject *tmp_right_name_6;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyObject *tmp_tuple_element_4;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    PyObject *tmp_vars_arg_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_da11367ebdfb783f3e25558365f12485, module_decorator );
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
    tmp_left_name_1 = par_src_templ;

    tmp_vars_arg_1 = par_self;

    tmp_right_name_1 = LOOKUP_VARS( tmp_vars_arg_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 170;
        goto frame_exception_exit_1;
    }
    assert( var_src == NULL );
    var_src = tmp_assign_source_1;

    tmp_or_left_value_1 = par_evaldict;

    tmp_or_left_truth_1 = CHECK_IF_TRUE( tmp_or_left_value_1 );
    if ( tmp_or_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 171;
        goto frame_exception_exit_1;
    }
    if ( tmp_or_left_truth_1 == 1 )
    {
        goto or_left_1;
    }
    else
    {
        goto or_right_1;
    }
    or_right_1:;
    tmp_or_right_value_1 = PyDict_New();
    tmp_assign_source_2 = tmp_or_right_value_1;
    goto or_end_1;
    or_left_1:;
    Py_INCREF( tmp_or_left_value_1 );
    tmp_assign_source_2 = tmp_or_left_value_1;
    or_end_1:;
    {
        PyObject *old = par_evaldict;
        assert( old != NULL );
        par_evaldict = tmp_assign_source_2;
        Py_DECREF( old );
    }

    tmp_source_name_1 = PyDict_GetItem( locals_dict, const_str_plain_DEF );

    if ( tmp_source_name_1 == NULL )
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_DEF );

        if (unlikely( tmp_source_name_1 == NULL ))
        {
            tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_DEF );
        }

        if ( tmp_source_name_1 == NULL )
        {

            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "DEF" );
            exception_tb = NULL;

            exception_lineno = 172;
            goto frame_exception_exit_1;
        }

    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_match );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = var_src;

    frame_function->f_lineno = 172;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 172;
        goto frame_exception_exit_1;
    }
    assert( var_mo == NULL );
    var_mo = tmp_assign_source_3;

    tmp_compare_left_1 = var_mo;

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
    tmp_left_name_2 = const_str_digest_d854840e83e586b4eb505d8c62d6a43e;
    tmp_right_name_2 = var_src;

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 174;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 174;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_SyntaxError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 174;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_source_name_2 = var_mo;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_group );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 175;
    tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 175;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_4;

    tmp_left_name_3 = PyList_New( 1 );
    tmp_list_element_1 = var_name;

    Py_INCREF( tmp_list_element_1 );
    PyList_SET_ITEM( tmp_left_name_3, 0, tmp_list_element_1 );
    // Tried code:
    tmp_source_name_4 = par_self;

    tmp_source_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_shortsignature );
    if ( tmp_source_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_split );
    Py_DECREF( tmp_source_name_3 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 177;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_chr_44_tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 177;
        goto try_except_handler_2;
    }
    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_6;

    tmp_assign_source_7 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_7;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

    tmp_assign_source_8 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 176;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_8;
        Py_XDECREF( old );
    }

    tmp_assign_source_9 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var_arg;
        var_arg = tmp_assign_source_9;
        Py_INCREF( var_arg );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_source_name_5 = var_arg;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_strip );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto try_except_handler_2;
    }
    PyThreadState_GET()->frame->f_lineno = 176;
    tmp_append_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, &PyTuple_GET_ITEM( const_tuple_str_digest_0e7d284c0ec0d54ad8fe000fd9e6be8e_tuple, 0 ) );

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_append_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto try_except_handler_2;
    }
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_3_make );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_3_make );
    return NULL;
    outline_result_1:;
    tmp_right_name_3 = tmp_outline_return_value_1;
    tmp_set_arg_1 = BINARY_OPERATION_ADD( tmp_left_name_3, tmp_right_name_3 );
    Py_DECREF( tmp_left_name_3 );
    Py_DECREF( tmp_right_name_3 );
    if ( tmp_set_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_5 = PySet_New( tmp_set_arg_1 );
    Py_DECREF( tmp_set_arg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 176;
        goto frame_exception_exit_1;
    }
    assert( var_names == NULL );
    var_names = tmp_assign_source_5;

    tmp_iter_arg_2 = var_names;

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_10;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_11 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_11 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 178;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_assign_source_12 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_n;
        var_n = tmp_assign_source_12;
        Py_INCREF( var_n );
        Py_XDECREF( old );
    }

    tmp_compare_left_2 = var_n;

    tmp_compare_right_2 = const_tuple_str_plain__func__str_plain__call__tuple;
    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_left_name_4 = const_str_digest_446a6626957cbb5f09303fc95b158cf6;
    tmp_right_name_4 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_n;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_4, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_src;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_4, 1, tmp_tuple_element_1 );
    tmp_make_exception_arg_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_4, tmp_right_name_4 );
    Py_DECREF( tmp_right_name_4 );
    if ( tmp_make_exception_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 180;
        goto try_except_handler_3;
    }
    frame_function->f_lineno = 180;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_2 };
        tmp_raise_type_2 = CALL_FUNCTION_WITH_ARGS1( PyExc_NameError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_2 );
    assert( tmp_raise_type_2 != NULL );
    exception_type = tmp_raise_type_2;
    exception_lineno = 180;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_3;
    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 178;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_3:;
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
    try_end_1:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_source_name_6 = var_src;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_endswith );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 182;
    tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_5, &PyTuple_GET_ITEM( const_tuple_str_newline_tuple, 0 ) );

    Py_DECREF( tmp_called_name_5 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 182;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_no_3;
    }
    else
    {
        goto branch_yes_3;
    }
    branch_yes_3:;
    tmp_left_name_5 = var_src;

    tmp_right_name_5 = const_str_newline;
    tmp_result = BINARY_OPERATION_ADD_INPLACE( &tmp_left_name_5, tmp_right_name_5 );
    tmp_assign_source_13 = tmp_left_name_5;
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 183;
        goto frame_exception_exit_1;
    }
    var_src = tmp_assign_source_13;

    branch_no_3:;
    tmp_left_name_6 = const_str_digest_cbec1a6d9fb9469cc33871a88074cd17;
    tmp_right_name_6 = PyTuple_New( 1 );
    tmp_source_name_7 = par_self;

    tmp_value_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain__compile_count );
    if ( tmp_value_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_6 );

        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    tmp_tuple_element_2 = ITERATOR_NEXT( tmp_value_name_1 );
    Py_DECREF( tmp_value_name_1 );
    if ( tmp_tuple_element_2 == NULL )
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
        Py_DECREF( tmp_right_name_6 );

        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_6, 0, tmp_tuple_element_2 );
    tmp_assign_source_14 = BINARY_OPERATION_REMAINDER( tmp_left_name_6, tmp_right_name_6 );
    Py_DECREF( tmp_right_name_6 );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 188;
        goto frame_exception_exit_1;
    }
    assert( var_filename == NULL );
    var_filename = tmp_assign_source_14;

    // Tried code:
    tmp_compile_source_1 = var_src;

    tmp_compile_filename_1 = var_filename;

    tmp_compile_mode_1 = const_str_plain_single;
    tmp_assign_source_15 = COMPILE_CODE( tmp_compile_source_1, tmp_compile_filename_1, tmp_compile_mode_1, NULL, NULL );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 190;
        goto try_except_handler_4;
    }
    assert( var_code == NULL );
    var_code = tmp_assign_source_15;

    tmp_assign_source_16 = var_code;

    assert( tmp_exec_1__exec_source == NULL );
    Py_INCREF( tmp_assign_source_16 );
    tmp_exec_1__exec_source = tmp_assign_source_16;

    tmp_assign_source_17 = par_evaldict;

    assert( tmp_exec_1__globals == NULL );
    Py_INCREF( tmp_assign_source_17 );
    tmp_exec_1__globals = tmp_assign_source_17;

    tmp_assign_source_18 = Py_False;
    assert( tmp_exec_1__plain == NULL );
    Py_INCREF( tmp_assign_source_18 );
    tmp_exec_1__plain = tmp_assign_source_18;

    tmp_compare_left_3 = tmp_exec_1__globals;

    tmp_compare_right_3 = Py_None;
    tmp_is_2 = ( tmp_compare_left_3 == tmp_compare_right_3 );
    if ( tmp_is_2 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_19 = ((PyModuleObject *)module_decorator)->md_dict;
    {
        PyObject *old = tmp_exec_1__globals;
        assert( old != NULL );
        tmp_exec_1__globals = tmp_assign_source_19;
        Py_INCREF( tmp_exec_1__globals );
        Py_DECREF( old );
    }

    tmp_assign_source_20 = locals_dict;
    Py_INCREF( locals_dict );
    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_self,
        par_self
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_src_templ,
        par_src_templ
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_evaldict,
        par_evaldict
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_addsource,
        par_addsource
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_attrs,
        par_attrs
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_src,
        var_src
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_mo,
        var_mo
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_name,
        var_name
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_arg,
        var_arg
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_names,
        var_names
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_n,
        var_n
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_filename,
        var_filename
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_code,
        var_code
    );

    DICT_SYNC_FROM_VARIABLE(
        tmp_assign_source_20,
        const_str_plain_func,
        var_func
    );

    assert( tmp_exec_1__locals == NULL );
    tmp_exec_1__locals = tmp_assign_source_20;

    tmp_assign_source_21 = Py_True;
    {
        PyObject *old = tmp_exec_1__plain;
        assert( old != NULL );
        tmp_exec_1__plain = tmp_assign_source_21;
        Py_INCREF( tmp_exec_1__plain );
        Py_DECREF( old );
    }

    goto branch_end_4;
    branch_no_4:;
    tmp_assign_source_22 = tmp_exec_1__globals;

    assert( tmp_exec_1__locals == NULL );
    Py_INCREF( tmp_assign_source_22 );
    tmp_exec_1__locals = tmp_assign_source_22;

    branch_end_4:;
    // Tried code:
    tmp_isinstance_inst_1 = tmp_exec_1__exec_source;

    tmp_isinstance_cls_1 = (PyObject *)&PyFile_Type;
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_5;
    }
    if ( tmp_res == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_source_name_8 = tmp_exec_1__exec_source;

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain_read );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_5;
    }
    frame_function->f_lineno = 191;
    tmp_assign_source_23 = CALL_FUNCTION_NO_ARGS( tmp_called_name_6 );
    Py_DECREF( tmp_called_name_6 );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_exec_1__exec_source;
        assert( old != NULL );
        tmp_exec_1__exec_source = tmp_assign_source_23;
        Py_DECREF( old );
    }

    branch_no_5:;
    // Tried code:
    tmp_eval_source_1 = tmp_exec_1__exec_source;

    tmp_eval_globals_1 = tmp_exec_1__globals;

    tmp_eval_locals_1 = tmp_exec_1__locals;

    tmp_exec_compiled_1 = COMPILE_CODE( tmp_eval_source_1, const_str_angle_string, const_str_plain_exec, NULL, NULL );
    if ( tmp_exec_compiled_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_6;
    }
    tmp_exec_result_1 = EVAL_CODE( tmp_exec_compiled_1, tmp_eval_globals_1, tmp_eval_locals_1 );
    Py_DECREF( tmp_exec_compiled_1 );
    if ( tmp_exec_result_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 191;
        goto try_except_handler_6;
    }
    Py_DECREF( tmp_exec_result_1 );
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    tmp_compare_left_4 = tmp_exec_1__plain;

    tmp_compare_right_4 = Py_True;
    tmp_is_3 = ( tmp_compare_left_4 == tmp_compare_right_4 );
    if ( tmp_is_3 )
    {
        goto branch_yes_6;
    }
    else
    {
        goto branch_no_6;
    }
    branch_yes_6:;
    tmp_eval_locals_2 = tmp_exec_1__locals;

    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_self );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = par_self;
        par_self = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_src_templ );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = par_src_templ;
        par_src_templ = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_evaldict );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = par_evaldict;
        par_evaldict = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_addsource );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = par_addsource;
        par_addsource = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_attrs );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = par_attrs;
        par_attrs = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_src );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_src;
        var_src = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_mo );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_mo;
        var_mo = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_name );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_name;
        var_name = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_arg );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_arg;
        var_arg = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_names );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_names;
        var_names = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_n );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_n;
        var_n = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_filename );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_filename;
        var_filename = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_code );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_code;
        var_code = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_2, const_str_plain_func );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        Py_DECREF( exception_keeper_type_3 );
        Py_XDECREF( exception_keeper_value_3 );
        Py_XDECREF( exception_keeper_tb_3 );


        goto try_except_handler_5;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_func;
        var_func = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_exec_1__exec_source );
    tmp_exec_1__exec_source = NULL;

    Py_XDECREF( tmp_exec_1__globals );
    tmp_exec_1__globals = NULL;

    Py_XDECREF( tmp_exec_1__locals );
    tmp_exec_1__locals = NULL;

    Py_XDECREF( tmp_exec_1__plain );
    tmp_exec_1__plain = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_5 == NULL )
    {
        exception_keeper_tb_5 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_5 );
    }
    else if ( exception_keeper_lineno_5 != -1 )
    {
        exception_keeper_tb_5 = ADD_TRACEBACK( exception_keeper_tb_5, frame_function, exception_keeper_lineno_5 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    PUBLISH_EXCEPTION( &exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5 );
    tmp_called_name_7 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_7 != NULL );
    tmp_args_name_1 = const_tuple_str_digest_8d1070f3ec0b689636f2b2df2cae6a10_tuple;
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_source_name_9 = PyDict_GetItem( locals_dict, const_str_plain_sys );

    if ( tmp_source_name_9 == NULL )
    {
        tmp_source_name_9 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_source_name_9 == NULL ))
        {
            tmp_source_name_9 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_source_name_9 == NULL )
        {
            Py_DECREF( tmp_kw_name_1 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
            exception_tb = NULL;

            exception_lineno = 193;
            goto frame_exception_exit_1;
        }

    }

    tmp_dict_value_1 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain_stderr );
    if ( tmp_dict_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_1 = const_str_plain_file;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_1, tmp_dict_value_1 );
    Py_DECREF( tmp_dict_value_1 );
    frame_function->f_lineno = 193;
    tmp_unused = CALL_FUNCTION( tmp_called_name_7, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 193;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_called_name_8 = LOOKUP_BUILTIN( const_str_plain_print );
    assert( tmp_called_name_8 != NULL );
    tmp_args_name_2 = PyTuple_New( 1 );
    tmp_tuple_element_3 = var_src;

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_args_name_2 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "src" );
        exception_tb = NULL;

        exception_lineno = 194;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_args_name_2, 0, tmp_tuple_element_3 );
    tmp_kw_name_2 = _PyDict_NewPresized( 1 );
    tmp_source_name_10 = PyDict_GetItem( locals_dict, const_str_plain_sys );

    if ( tmp_source_name_10 == NULL )
    {
        tmp_source_name_10 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_sys );

        if (unlikely( tmp_source_name_10 == NULL ))
        {
            tmp_source_name_10 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
        }

        if ( tmp_source_name_10 == NULL )
        {
            Py_DECREF( tmp_args_name_2 );
            Py_DECREF( tmp_kw_name_2 );
            exception_type = PyExc_NameError;
            Py_INCREF( exception_type );
            exception_value = PyString_FromFormat( "global name '%s' is not defined", "sys" );
            exception_tb = NULL;

            exception_lineno = 194;
            goto frame_exception_exit_1;
        }

    }

    tmp_dict_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_stderr );
    if ( tmp_dict_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_name_2 );
        Py_DECREF( tmp_kw_name_2 );

        exception_lineno = 194;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_2 = const_str_plain_file;
    PyDict_SetItem( tmp_kw_name_2, tmp_dict_key_2, tmp_dict_value_2 );
    Py_DECREF( tmp_dict_value_2 );
    frame_function->f_lineno = 194;
    tmp_unused = CALL_FUNCTION( tmp_called_name_8, tmp_args_name_2, tmp_kw_name_2 );
    Py_DECREF( tmp_args_name_2 );
    Py_DECREF( tmp_kw_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 194;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_compare_left_5 = tmp_exec_1__plain;

    tmp_compare_right_5 = Py_True;
    tmp_is_4 = ( tmp_compare_left_5 == tmp_compare_right_5 );
    if ( tmp_is_4 )
    {
        goto branch_yes_7;
    }
    else
    {
        goto branch_no_7;
    }
    branch_yes_7:;
    tmp_eval_locals_3 = tmp_exec_1__locals;

    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_self );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = par_self;
        par_self = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_src_templ );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = par_src_templ;
        par_src_templ = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_evaldict );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = par_evaldict;
        par_evaldict = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_addsource );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = par_addsource;
        par_addsource = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_attrs );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = par_attrs;
        par_attrs = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_src );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_src;
        var_src = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_mo );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_mo;
        var_mo = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_name );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_name;
        var_name = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_arg );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_arg;
        var_arg = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_names );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_names;
        var_names = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_n );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_n;
        var_n = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_filename );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_filename;
        var_filename = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_code );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_code;
        var_code = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    tmp_locals_value = PyObject_GetItem( tmp_eval_locals_3, const_str_plain_func );
    if ( tmp_locals_value == NULL && !EXCEPTION_MATCH_BOOL_SINGLE( GET_ERROR_OCCURRED(), PyExc_KeyError ) )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );



        goto frame_exception_exit_1;
    }
    CLEAR_ERROR_OCCURRED();
    if ( tmp_locals_value != NULL )
    {
    {
        PyObject *old = var_func;
        var_func = tmp_locals_value;
        Py_XDECREF( old );
    }

    }
    branch_no_7:;
    Py_XDECREF( tmp_exec_1__exec_source );
    tmp_exec_1__exec_source = NULL;

    Py_XDECREF( tmp_exec_1__globals );
    tmp_exec_1__globals = NULL;

    Py_XDECREF( tmp_exec_1__locals );
    tmp_exec_1__locals = NULL;

    Py_XDECREF( tmp_exec_1__plain );
    tmp_exec_1__plain = NULL;

    tmp_subscribed_name_1 = par_evaldict;

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "evaldict" );
        exception_tb = NULL;

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_subscript_name_1 = var_name;

    if ( tmp_subscript_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 196;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_24 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 196;
        goto frame_exception_exit_1;
    }
    assert( var_func == NULL );
    var_func = tmp_assign_source_24;

    tmp_cond_value_2 = par_addsource;

    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 197;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_yes_8;
    }
    else
    {
        goto branch_no_8;
    }
    branch_yes_8:;
    tmp_ass_subvalue_1 = var_src;

    if ( tmp_ass_subvalue_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "src" );
        exception_tb = NULL;

        exception_lineno = 198;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscribed_1 = par_attrs;

    tmp_ass_subscript_1 = const_str_plain___source__;
    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 198;
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    tmp_source_name_11 = par_self;

    if ( tmp_source_name_11 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "self" );
        exception_tb = NULL;

        exception_lineno = 199;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain_update );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 1 );
    tmp_tuple_element_4 = var_func;

    Py_INCREF( tmp_tuple_element_4 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_4 );
    tmp_dircall_arg3_1 = par_attrs;

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_unused = impl___internal__$$$function_9_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 199;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

#if 1
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
#if 1
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

            tmp_frame_locals = locals_dict;
            Py_INCREF( locals_dict );
            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_self,
                par_self
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_src_templ,
                par_src_templ
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_evaldict,
                par_evaldict
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_addsource,
                par_addsource
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_attrs,
                par_attrs
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_src,
                var_src
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_mo,
                var_mo
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_name,
                var_name
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_arg,
                var_arg
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_names,
                var_names
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_n,
                var_n
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_filename,
                var_filename
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_code,
                var_code
            );

            DICT_SYNC_FROM_VARIABLE(
                tmp_frame_locals,
                const_str_plain_func,
                var_func
            );



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

    tmp_return_value = var_func;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_3_make );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_src_templ );
    par_src_templ = NULL;

    Py_XDECREF( par_evaldict );
    par_evaldict = NULL;

    CHECK_OBJECT( (PyObject *)par_addsource );
    Py_DECREF( par_addsource );
    par_addsource = NULL;

    CHECK_OBJECT( (PyObject *)par_attrs );
    Py_DECREF( par_attrs );
    par_attrs = NULL;

    Py_XDECREF( var_src );
    var_src = NULL;

    Py_XDECREF( var_mo );
    var_mo = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( par_self );
    par_self = NULL;

    Py_XDECREF( par_src_templ );
    par_src_templ = NULL;

    Py_XDECREF( par_evaldict );
    par_evaldict = NULL;

    CHECK_OBJECT( (PyObject *)par_addsource );
    Py_DECREF( par_addsource );
    par_addsource = NULL;

    CHECK_OBJECT( (PyObject *)par_attrs );
    Py_DECREF( par_attrs );
    par_attrs = NULL;

    Py_XDECREF( var_src );
    var_src = NULL;

    Py_XDECREF( var_mo );
    var_mo = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;

    Py_XDECREF( var_names );
    var_names = NULL;

    Py_XDECREF( var_n );
    var_n = NULL;

    Py_XDECREF( var_filename );
    var_filename = NULL;

    Py_XDECREF( var_code );
    var_code = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_3_make );
    return NULL;

function_exception_exit:
Py_DECREF( locals_dict );
    assert( exception_type );
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );

    return NULL;
    function_return_exit:
        Py_DECREF( locals_dict );

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_decorator$$$class_2_FunctionMaker$$$function_4_create( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[ 0 ];
    PyObject *par_obj = python_pars[ 1 ];
    PyObject *par_body = python_pars[ 2 ];
    PyObject *par_evaldict = python_pars[ 3 ];
    PyObject *par_defaults = python_pars[ 4 ];
    PyObject *par_doc = python_pars[ 5 ];
    PyObject *par_module = python_pars[ 6 ];
    PyObject *par_addsource = python_pars[ 7 ];
    PyObject *par_attrs = python_pars[ 8 ];
    PyObject *var_name = NULL;
    PyObject *var_rest = NULL;
    PyObject *var_signature = NULL;
    PyObject *var_func = NULL;
    PyObject *var_self = NULL;
    PyObject *var_ibody = NULL;
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
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_assign_source_10;
    PyObject *tmp_assign_source_11;
    PyObject *tmp_assign_source_12;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_isinstance_cls_1;
    PyObject *tmp_isinstance_inst_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_left_name_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    PyObject *tmp_slice_source_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f6ab55573d60febf92972bf0366b1fd9, module_decorator );
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
    tmp_isinstance_inst_1 = par_obj;

    tmp_isinstance_cls_1 = LOOKUP_BUILTIN( const_str_plain_str );
    assert( tmp_isinstance_cls_1 != NULL );
    tmp_res = Nuitka_IsInstance( tmp_isinstance_inst_1, tmp_isinstance_cls_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 211;
        goto frame_exception_exit_1;
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
    // Tried code:
    tmp_source_name_2 = par_obj;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_strip );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 212;
    tmp_source_name_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_2 );
    Py_DECREF( tmp_called_name_2 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto try_except_handler_2;
    }
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_split );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 212;
    tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, &PyTuple_GET_ITEM( const_tuple_str_chr_40_int_pos_1_tuple, 0 ) );

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
        goto try_except_handler_2;
    }
    tmp_assign_source_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 212;
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


        exception_lineno = 212;
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


        exception_lineno = 212;
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

    assert( var_name == NULL );
    Py_INCREF( tmp_assign_source_4 );
    var_name = tmp_assign_source_4;

    tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;

    assert( var_rest == NULL );
    Py_INCREF( tmp_assign_source_5 );
    var_rest = tmp_assign_source_5;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_sliceslicedel_index_lower_1 = 0;
    tmp_slice_index_upper_1 = -1;
    tmp_slice_source_1 = var_rest;

    tmp_assign_source_6 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 213;
        goto frame_exception_exit_1;
    }
    assert( var_signature == NULL );
    var_signature = tmp_assign_source_6;

    tmp_assign_source_7 = Py_None;
    assert( var_func == NULL );
    Py_INCREF( tmp_assign_source_7 );
    var_func = tmp_assign_source_7;

    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_8 = Py_None;
    assert( var_name == NULL );
    Py_INCREF( tmp_assign_source_8 );
    var_name = tmp_assign_source_8;

    tmp_assign_source_9 = Py_None;
    assert( var_signature == NULL );
    Py_INCREF( tmp_assign_source_9 );
    var_signature = tmp_assign_source_9;

    tmp_assign_source_10 = par_obj;

    assert( var_func == NULL );
    Py_INCREF( tmp_assign_source_10 );
    var_func = tmp_assign_source_10;

    branch_end_1:;
    tmp_called_name_3 = par_cls;

    tmp_args_element_name_1 = var_func;

    tmp_args_element_name_2 = var_name;

    tmp_args_element_name_3 = var_signature;

    tmp_args_element_name_4 = par_defaults;

    tmp_args_element_name_5 = par_doc;

    tmp_args_element_name_6 = par_module;

    frame_function->f_lineno = 219;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS6( tmp_called_name_3, call_args );
    }

    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 219;
        goto frame_exception_exit_1;
    }
    assert( var_self == NULL );
    var_self = tmp_assign_source_11;

    tmp_source_name_3 = const_str_newline;
    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_join );
    assert( tmp_called_name_4 != NULL );
    tmp_source_name_4 = par_body;

    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain_splitlines );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 220;
    tmp_iter_arg_2 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_iter_arg_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_1 = MAKE_ITERATOR( tmp_iter_arg_2 );
    Py_DECREF( tmp_iter_arg_2 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_4 );

        exception_lineno = 220;
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_args_element_name_7 = impl_decorator$$$class_2_FunctionMaker$$$function_4_create$$$function_1_genexpr( dir_call_args );
    }
    assert( tmp_args_element_name_7 != NULL );
    frame_function->f_lineno = 220;
    {
        PyObject *call_args[] = { tmp_args_element_name_7 };
        tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    Py_DECREF( tmp_args_element_name_7 );
    if ( tmp_assign_source_12 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto frame_exception_exit_1;
    }
    assert( var_ibody == NULL );
    var_ibody = tmp_assign_source_12;

    tmp_source_name_5 = var_self;

    tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_make );
    if ( tmp_dircall_arg1_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg2_1 = PyTuple_New( 3 );
    tmp_left_name_1 = const_str_digest_8a27378908ae1576c5783b8639eaba83;
    tmp_right_name_1 = var_ibody;

    tmp_tuple_element_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_2 );
        Py_DECREF( tmp_dircall_arg2_1 );

        exception_lineno = 221;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_evaldict;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_addsource;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_dircall_arg2_1, 2, tmp_tuple_element_1 );
    tmp_dircall_arg3_1 = par_attrs;

    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_9_complex_call_helper_pos_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 222;
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
            if ( par_cls )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_cls,
                    par_cls
                );

                assert( res == 0 );
            }

            if ( par_obj )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_obj,
                    par_obj
                );

                assert( res == 0 );
            }

            if ( par_body )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_body,
                    par_body
                );

                assert( res == 0 );
            }

            if ( par_evaldict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_evaldict,
                    par_evaldict
                );

                assert( res == 0 );
            }

            if ( par_defaults )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_defaults,
                    par_defaults
                );

                assert( res == 0 );
            }

            if ( par_doc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_doc,
                    par_doc
                );

                assert( res == 0 );
            }

            if ( par_module )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_module,
                    par_module
                );

                assert( res == 0 );
            }

            if ( par_addsource )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_addsource,
                    par_addsource
                );

                assert( res == 0 );
            }

            if ( par_attrs )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_attrs,
                    par_attrs
                );

                assert( res == 0 );
            }

            if ( var_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    var_name
                );

                assert( res == 0 );
            }

            if ( var_rest )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_rest,
                    var_rest
                );

                assert( res == 0 );
            }

            if ( var_signature )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_signature,
                    var_signature
                );

                assert( res == 0 );
            }

            if ( var_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    var_func
                );

                assert( res == 0 );
            }

            if ( var_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    var_self
                );

                assert( res == 0 );
            }

            if ( var_ibody )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ibody,
                    var_ibody
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
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_4_create );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_body );
    Py_DECREF( par_body );
    par_body = NULL;

    CHECK_OBJECT( (PyObject *)par_evaldict );
    Py_DECREF( par_evaldict );
    par_evaldict = NULL;

    CHECK_OBJECT( (PyObject *)par_defaults );
    Py_DECREF( par_defaults );
    par_defaults = NULL;

    CHECK_OBJECT( (PyObject *)par_doc );
    Py_DECREF( par_doc );
    par_doc = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_addsource );
    Py_DECREF( par_addsource );
    par_addsource = NULL;

    CHECK_OBJECT( (PyObject *)par_attrs );
    Py_DECREF( par_attrs );
    par_attrs = NULL;

    CHECK_OBJECT( (PyObject *)var_name );
    Py_DECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_rest );
    var_rest = NULL;

    CHECK_OBJECT( (PyObject *)var_signature );
    Py_DECREF( var_signature );
    var_signature = NULL;

    CHECK_OBJECT( (PyObject *)var_func );
    Py_DECREF( var_func );
    var_func = NULL;

    CHECK_OBJECT( (PyObject *)var_self );
    Py_DECREF( var_self );
    var_self = NULL;

    CHECK_OBJECT( (PyObject *)var_ibody );
    Py_DECREF( var_ibody );
    var_ibody = NULL;

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

    CHECK_OBJECT( (PyObject *)par_cls );
    Py_DECREF( par_cls );
    par_cls = NULL;

    CHECK_OBJECT( (PyObject *)par_obj );
    Py_DECREF( par_obj );
    par_obj = NULL;

    CHECK_OBJECT( (PyObject *)par_body );
    Py_DECREF( par_body );
    par_body = NULL;

    CHECK_OBJECT( (PyObject *)par_evaldict );
    Py_DECREF( par_evaldict );
    par_evaldict = NULL;

    CHECK_OBJECT( (PyObject *)par_defaults );
    Py_DECREF( par_defaults );
    par_defaults = NULL;

    CHECK_OBJECT( (PyObject *)par_doc );
    Py_DECREF( par_doc );
    par_doc = NULL;

    CHECK_OBJECT( (PyObject *)par_module );
    Py_DECREF( par_module );
    par_module = NULL;

    CHECK_OBJECT( (PyObject *)par_addsource );
    Py_DECREF( par_addsource );
    par_addsource = NULL;

    CHECK_OBJECT( (PyObject *)par_attrs );
    Py_DECREF( par_attrs );
    par_attrs = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_rest );
    var_rest = NULL;

    Py_XDECREF( var_signature );
    var_signature = NULL;

    Py_XDECREF( var_func );
    var_func = NULL;

    Py_XDECREF( var_self );
    var_self = NULL;

    Py_XDECREF( var_ibody );
    var_ibody = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_4_create );
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


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$class_2_FunctionMaker$$$function_4_create$$$function_1_genexpr( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyCellObject *par_$0 = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
        closure[0] = par_$0;
        Py_INCREF( closure[0] );

        tmp_return_value = Nuitka_Generator_New(
            decorator$$$class_2_FunctionMaker$$$function_4_create$$$function_1_genexpr$$$genexpr_1_genexpr_context,
            const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_7b2e59cdf9e72653749f8cdf4506a297,
            closure,
            1
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_4_create$$$function_1_genexpr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_$0 );
    Py_DECREF( par_$0 );
    par_$0 = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_$0 );
    Py_DECREF( par_$0 );
    par_$0 = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_2_FunctionMaker$$$function_4_create$$$function_1_genexpr );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void decorator$$$class_2_FunctionMaker$$$function_4_create$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_line = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_right_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_fb34112db4f3495a05979b1ac2c701d1, module_decorator );
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
    // Tried code:
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
            exception_lineno = 220;
            goto try_except_handler_2;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    loop_start_1:;
    tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_next_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", ".0" );
        exception_tb = NULL;

        exception_lineno = 220;
        goto try_except_handler_2;
    }

    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 220;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = tmp_iter_value_0;

    {
        PyObject *old = var_line;
        var_line = tmp_assign_source_2;
        Py_INCREF( var_line );
        Py_XDECREF( old );
    }

    tmp_left_name_1 = const_str_digest_f65c0a7d4cdaee5f484bffe48dc96c38;
    tmp_right_name_1 = var_line;

    tmp_expression_name_1 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto try_except_handler_2;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 220;
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

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
            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_digest_b9c4baf879ebd882d40843df3a4dead7,
                    generator->m_closure[0]->ob_ref
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

    Py_XDECREF( var_line );
    var_line = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

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


static PyObject *impl_decorator$$$function_4_decorate( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_func = python_pars[ 0 ];
    PyObject *par_caller = python_pars[ 1 ];
    PyObject *var_evaldict = NULL;
    PyObject *var_fun = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_hasattr_attr_1;
    PyObject *tmp_hasattr_source_1;
    PyObject *tmp_kw_name_1;
    int tmp_res;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_caller;

    tmp_dict_key_1 = const_str_plain__call_;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_func;

    tmp_dict_key_2 = const_str_plain__func_;
    PyDict_SetItem( tmp_assign_source_1, tmp_dict_key_2, tmp_dict_value_2 );
    assert( var_evaldict == NULL );
    var_evaldict = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_422be427cea742a626d32a33f9362ee5, module_decorator );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_FunctionMaker );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FunctionMaker );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FunctionMaker" );
        exception_tb = NULL;

        exception_lineno = 230;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_create );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 230;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_func;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_digest_a023d63b9c15bfdce5d1b4448c2836e6;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_evaldict;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = par_func;

    tmp_dict_key_3 = const_str_plain___wrapped__;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 232;
    tmp_assign_source_2 = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 232;
        goto frame_exception_exit_1;
    }
    assert( var_fun == NULL );
    var_fun = tmp_assign_source_2;

    tmp_hasattr_source_1 = par_func;

    tmp_hasattr_attr_1 = const_str_plain___qualname__;
    tmp_res = PyObject_HasAttr( tmp_hasattr_source_1, tmp_hasattr_attr_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 233;
        goto frame_exception_exit_1;
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
    tmp_source_name_2 = par_func;

    tmp_assattr_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___qualname__ );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 234;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_fun;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___qualname__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 234;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );
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
            if ( par_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func
                );

                assert( res == 0 );
            }

            if ( par_caller )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_caller,
                    par_caller
                );

                assert( res == 0 );
            }

            if ( var_evaldict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_evaldict,
                    var_evaldict
                );

                assert( res == 0 );
            }

            if ( var_fun )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_fun,
                    var_fun
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

    tmp_return_value = var_fun;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_4_decorate );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_caller );
    Py_DECREF( par_caller );
    par_caller = NULL;

    CHECK_OBJECT( (PyObject *)var_evaldict );
    Py_DECREF( var_evaldict );
    var_evaldict = NULL;

    CHECK_OBJECT( (PyObject *)var_fun );
    Py_DECREF( var_fun );
    var_fun = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)par_caller );
    Py_DECREF( par_caller );
    par_caller = NULL;

    CHECK_OBJECT( (PyObject *)var_evaldict );
    Py_DECREF( var_evaldict );
    var_evaldict = NULL;

    Py_XDECREF( var_fun );
    var_fun = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_4_decorate );
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


static PyObject *impl_decorator$$$function_5_decorator( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_caller = python_pars[ 0 ];
    PyObject *par__func = python_pars[ 1 ];
    PyObject *var_name = NULL;
    PyObject *var_doc = NULL;
    PyObject *var_evaldict = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    int tmp_cmp_Eq_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_frame_locals;
    bool tmp_isnot_1;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_source_name_8;
    PyObject *tmp_source_name_9;
    PyObject *tmp_source_name_10;
    PyObject *tmp_source_name_11;
    PyObject *tmp_source_name_12;
    PyObject *tmp_source_name_13;
    PyObject *tmp_source_name_14;
    PyObject *tmp_source_name_15;
    PyObject *tmp_source_name_16;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_bf11a01774ba29600797beff3bfab264, module_decorator );
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
    tmp_compare_left_1 = par__func;

    tmp_compare_right_1 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_1 != tmp_compare_right_1 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_decorate );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decorate );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "decorate" );
        exception_tb = NULL;

        exception_lineno = 242;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par__func;

    tmp_args_element_name_2 = par_caller;

    frame_function->f_lineno = 242;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 242;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;
    branch_no_1:;
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_inspect );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inspect" );
        exception_tb = NULL;

        exception_lineno = 244;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_isclass );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_3 = par_caller;

    frame_function->f_lineno = 244;
    {
        PyObject *call_args[] = { tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 244;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 244;
        goto frame_exception_exit_1;
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
    tmp_source_name_3 = par_caller;

    tmp_source_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___name__ );
    if ( tmp_source_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_lower );
    Py_DECREF( tmp_source_name_2 );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 245;
    tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS( tmp_called_name_3 );
    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 245;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_1;

    tmp_left_name_1 = const_str_digest_a81fad7c88023869cb16004c9b953f13;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_source_name_4 = par_caller;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___name__ );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_source_name_5 = par_caller;

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain___name__ );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 247;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 246;
        goto frame_exception_exit_1;
    }
    assert( var_doc == NULL );
    var_doc = tmp_assign_source_2;

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_inspect );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_inspect );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "inspect" );
        exception_tb = NULL;

        exception_lineno = 248;
        goto frame_exception_exit_1;
    }

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_isfunction );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = par_caller;

    frame_function->f_lineno = 248;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 248;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 248;
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
    tmp_source_name_7 = par_caller;

    tmp_compare_left_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain___name__ );
    if ( tmp_compare_left_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 249;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_2 = const_str_angle_lambda;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_2 );

        exception_lineno = 249;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_2 );
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_4;
    }
    else
    {
        goto branch_no_4;
    }
    branch_yes_4:;
    tmp_assign_source_3 = const_str_plain__lambda_;
    assert( var_name == NULL );
    Py_INCREF( tmp_assign_source_3 );
    var_name = tmp_assign_source_3;

    goto branch_end_4;
    branch_no_4:;
    tmp_source_name_8 = par_caller;

    tmp_assign_source_4 = LOOKUP_ATTRIBUTE( tmp_source_name_8, const_str_plain___name__ );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 252;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_4;

    branch_end_4:;
    tmp_source_name_9 = par_caller;

    tmp_assign_source_5 = LOOKUP_ATTRIBUTE( tmp_source_name_9, const_str_plain___doc__ );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 253;
        goto frame_exception_exit_1;
    }
    assert( var_doc == NULL );
    var_doc = tmp_assign_source_5;

    goto branch_end_3;
    branch_no_3:;
    tmp_source_name_12 = par_caller;

    tmp_source_name_11 = LOOKUP_ATTRIBUTE_CLASS_SLOT( tmp_source_name_12 );
    if ( tmp_source_name_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_source_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_11, const_str_plain___name__ );
    Py_DECREF( tmp_source_name_11 );
    if ( tmp_source_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    tmp_called_name_5 = LOOKUP_ATTRIBUTE( tmp_source_name_10, const_str_plain_lower );
    Py_DECREF( tmp_source_name_10 );
    if ( tmp_called_name_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 255;
    tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS( tmp_called_name_5 );
    Py_DECREF( tmp_called_name_5 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 255;
        goto frame_exception_exit_1;
    }
    assert( var_name == NULL );
    var_name = tmp_assign_source_6;

    tmp_source_name_14 = par_caller;

    tmp_source_name_13 = LOOKUP_ATTRIBUTE( tmp_source_name_14, const_str_plain___call__ );
    if ( tmp_source_name_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_7 = LOOKUP_ATTRIBUTE( tmp_source_name_13, const_str_plain___doc__ );
    Py_DECREF( tmp_source_name_13 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 256;
        goto frame_exception_exit_1;
    }
    assert( var_doc == NULL );
    var_doc = tmp_assign_source_7;

    branch_end_3:;
    branch_end_2:;
    tmp_assign_source_8 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_caller;

    tmp_dict_key_1 = const_str_plain__call_;
    PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_decorate );

    if (unlikely( tmp_dict_value_2 == NULL ))
    {
        tmp_dict_value_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decorate );
    }

    if ( tmp_dict_value_2 == NULL )
    {
        Py_DECREF( tmp_assign_source_8 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "decorate" );
        exception_tb = NULL;

        exception_lineno = 257;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_2 = const_str_plain__decorate_;
    PyDict_SetItem( tmp_assign_source_8, tmp_dict_key_2, tmp_dict_value_2 );
    assert( var_evaldict == NULL );
    var_evaldict = tmp_assign_source_8;

    tmp_source_name_15 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_FunctionMaker );

    if (unlikely( tmp_source_name_15 == NULL ))
    {
        tmp_source_name_15 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FunctionMaker );
    }

    if ( tmp_source_name_15 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FunctionMaker" );
        exception_tb = NULL;

        exception_lineno = 258;
        goto frame_exception_exit_1;
    }

    tmp_called_name_6 = LOOKUP_ATTRIBUTE( tmp_source_name_15, const_str_plain_create );
    if ( tmp_called_name_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 258;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_left_name_2 = const_str_digest_5daadf20330cb766c29ad4806d625316;
    tmp_right_name_2 = var_name;

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "name" );
        exception_tb = NULL;

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_2 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_tuple_element_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 259;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = const_str_digest_b414214c46af27a57d0801f18980a2c6;
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_evaldict;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_2 );
    tmp_kw_name_1 = _PyDict_NewPresized( 3 );
    tmp_dict_value_3 = var_doc;

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "doc" );
        exception_tb = NULL;

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_doc;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_source_name_16 = par_caller;

    tmp_dict_value_4 = LOOKUP_ATTRIBUTE( tmp_source_name_16, const_str_plain___module__ );
    if ( tmp_dict_value_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_6 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );

        exception_lineno = 260;
        goto frame_exception_exit_1;
    }
    tmp_dict_key_4 = const_str_plain_module;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    Py_DECREF( tmp_dict_value_4 );
    tmp_dict_value_5 = par_caller;

    tmp_dict_key_5 = const_str_plain___wrapped__;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    frame_function->f_lineno = 261;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_6, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_6 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 261;
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
            if ( par_caller )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_caller,
                    par_caller
                );

                assert( res == 0 );
            }

            if ( par__func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__func,
                    par__func
                );

                assert( res == 0 );
            }

            if ( var_name )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_name,
                    var_name
                );

                assert( res == 0 );
            }

            if ( var_doc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_doc,
                    var_doc
                );

                assert( res == 0 );
            }

            if ( var_evaldict )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_evaldict,
                    var_evaldict
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_5_decorator );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_caller );
    Py_DECREF( par_caller );
    par_caller = NULL;

    CHECK_OBJECT( (PyObject *)par__func );
    Py_DECREF( par__func );
    par__func = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_doc );
    var_doc = NULL;

    Py_XDECREF( var_evaldict );
    var_evaldict = NULL;

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

    CHECK_OBJECT( (PyObject *)par_caller );
    Py_DECREF( par_caller );
    par_caller = NULL;

    CHECK_OBJECT( (PyObject *)par__func );
    Py_DECREF( par__func );
    par__func = NULL;

    Py_XDECREF( var_name );
    var_name = NULL;

    Py_XDECREF( var_doc );
    var_doc = NULL;

    Py_XDECREF( var_evaldict );
    var_evaldict = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_5_decorator );
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


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$class_3_ContextManager( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyObject *var___module__ = NULL;
    PyObject *var___call__ = NULL;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = const_str_plain_decorator;
    assert( var___module__ == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var___module__ = tmp_assign_source_1;

    tmp_assign_source_2 = MAKE_FUNCTION_decorator$$$class_3_ContextManager$$$function_1___call__(  );
    assert( var___call__ == NULL );
    var___call__ = tmp_assign_source_2;

    // Tried code:
    tmp_return_value = PyDict_New();
    if ( var___module__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___module__,
            var___module__
        );

        assert( res == 0 );
    }

    if ( var___call__ )
    {
        int res = PyDict_SetItem(
            tmp_return_value,
            const_str_plain___call__,
            var___call__
        );

        assert( res == 0 );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$class_3_ContextManager );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___call__ );
    Py_DECREF( var___call__ );
    var___call__ = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)var___module__ );
    Py_DECREF( var___module__ );
    var___module__ = NULL;

    CHECK_OBJECT( (PyObject *)var___call__ );
    Py_DECREF( var___call__ );
    var___call__ = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_3_ContextManager );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}


static PyObject *impl_decorator$$$class_3_ContextManager$$$function_1___call__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_func = python_pars[ 1 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d05f6b1b057aff330d9ae3c330fc65b2, module_decorator );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_FunctionMaker );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FunctionMaker );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FunctionMaker" );
        exception_tb = NULL;

        exception_lineno = 275;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_create );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 275;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = par_func;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_digest_6458234be484c525b40a86c4703a1178;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = _PyDict_NewPresized( 2 );
    tmp_dict_value_1 = par_self;

    tmp_dict_key_1 = const_str_plain__self_;
    PyDict_SetItem( tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1 );
    tmp_dict_value_2 = par_func;

    tmp_dict_key_2 = const_str_plain__func_;
    PyDict_SetItem( tmp_tuple_element_1, tmp_dict_key_2, tmp_dict_value_2 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_3 = par_func;

    tmp_dict_key_3 = const_str_plain___wrapped__;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    frame_function->f_lineno = 277;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_1, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 277;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_func )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func
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
    NUITKA_CANNOT_GET_HERE( decorator$$$class_3_ContextManager$$$function_1___call__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$class_3_ContextManager$$$function_1___call__ );
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


static PyObject *impl_decorator$$$function_6___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_g = python_pars[ 1 ];
    PyObject *par_a = python_pars[ 2 ];
    PyObject *par_k = python_pars[ 3 ];
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
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_50055935082f446926cba4f710d784a0, module_decorator );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain__GeneratorContextManager );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__GeneratorContextManager );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_GeneratorContextManager" );
        exception_tb = NULL;

        exception_lineno = 283;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    tmp_dircall_arg1_1 = par_g;

    tmp_dircall_arg2_1 = par_a;

    tmp_dircall_arg3_1 = par_k;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_args_element_name_2 = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_1 );

        exception_lineno = 283;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 283;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 283;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_g )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_g,
                    par_g
                );

                assert( res == 0 );
            }

            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_6___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_6___init__ );
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


static PyObject *impl_decorator$$$function_7___init__( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[ 0 ];
    PyObject *par_g = python_pars[ 1 ];
    PyObject *par_a = python_pars[ 2 ];
    PyObject *par_k = python_pars[ 3 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_85c356e5e417b803f51c3cfd423bc8ff, module_decorator );
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
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain__GeneratorContextManager );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__GeneratorContextManager );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "_GeneratorContextManager" );
        exception_tb = NULL;

        exception_lineno = 289;
        goto frame_exception_exit_1;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___init__ );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = par_self;

    tmp_args_element_name_2 = par_g;

    tmp_args_element_name_3 = par_a;

    tmp_args_element_name_4 = par_k;

    frame_function->f_lineno = 289;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_return_value = CALL_FUNCTION_WITH_ARGS4( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 289;
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
            if ( par_self )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_self,
                    par_self
                );

                assert( res == 0 );
            }

            if ( par_g )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_g,
                    par_g
                );

                assert( res == 0 );
            }

            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
                );

                assert( res == 0 );
            }

            if ( par_k )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_k,
                    par_k
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_7___init__ );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

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

    CHECK_OBJECT( (PyObject *)par_self );
    Py_DECREF( par_self );
    par_self = NULL;

    CHECK_OBJECT( (PyObject *)par_g );
    Py_DECREF( par_g );
    par_g = NULL;

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_k );
    Py_DECREF( par_k );
    par_k = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_7___init__ );
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


static PyObject *impl_decorator$$$function_8_append( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_a = python_pars[ 0 ];
    PyObject *par_vancestors = python_pars[ 1 ];
    PyObject *var_add = NULL;
    PyObject *var_j = NULL;
    PyObject *var_va = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    int tmp_cond_truth_3;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_cond_value_3;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_next_source_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    tmp_assign_source_1 = Py_True;
    assert( var_add == NULL );
    Py_INCREF( tmp_assign_source_1 );
    var_add = tmp_assign_source_1;

    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_0b2aaae991c5e251f07f4ee4bd1add2f, module_decorator );
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
    tmp_called_name_1 = LOOKUP_BUILTIN( const_str_plain_enumerate );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = par_vancestors;

    frame_function->f_lineno = 303;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 303;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_5 == NULL )
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


        exception_lineno = 303;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_6 == NULL )
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


        exception_lineno = 303;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

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

                goto try_except_handler_3;
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

        goto try_except_handler_3;
    }
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_j;
        var_j = tmp_assign_source_7;
        Py_INCREF( var_j );
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_va;
        var_va = tmp_assign_source_8;
        Py_INCREF( var_va );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = var_va;

    tmp_args_element_name_3 = par_a;

    frame_function->f_lineno = 304;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 304;
        goto try_except_handler_2;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 304;
        goto try_except_handler_2;
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
    tmp_assign_source_9 = Py_False;
    {
        PyObject *old = var_add;
        var_add = tmp_assign_source_9;
        Py_INCREF( var_add );
        Py_XDECREF( old );
    }

    goto loop_end_1;
    branch_no_1:;
    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_4 = par_a;

    tmp_args_element_name_5 = var_va;

    frame_function->f_lineno = 307;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5 };
        tmp_cond_value_2 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_cond_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 307;
        goto try_except_handler_2;
    }
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 307;
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
    tmp_ass_subvalue_1 = par_a;

    tmp_ass_subscribed_1 = par_vancestors;

    tmp_ass_subscript_1 = var_j;

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 308;
        goto try_except_handler_2;
    }
    tmp_assign_source_10 = Py_False;
    {
        PyObject *old = var_add;
        var_add = tmp_assign_source_10;
        Py_INCREF( var_add );
        Py_XDECREF( old );
    }

    branch_no_2:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 303;
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

    tmp_cond_value_3 = var_add;

    if ( tmp_cond_value_3 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "add" );
        exception_tb = NULL;

        exception_lineno = 310;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_3 = CHECK_IF_TRUE( tmp_cond_value_3 );
    if ( tmp_cond_truth_3 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 310;
        goto frame_exception_exit_1;
    }
    if ( tmp_cond_truth_3 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_source_name_1 = par_vancestors;

    tmp_called_name_4 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_append );
    if ( tmp_called_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_6 = par_a;

    frame_function->f_lineno = 311;
    {
        PyObject *call_args[] = { tmp_args_element_name_6 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_4, call_args );
    }

    Py_DECREF( tmp_called_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 311;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
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
            if ( par_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    par_a
                );

                assert( res == 0 );
            }

            if ( par_vancestors )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vancestors,
                    par_vancestors
                );

                assert( res == 0 );
            }

            if ( var_add )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_add,
                    var_add
                );

                assert( res == 0 );
            }

            if ( var_j )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_j,
                    var_j
                );

                assert( res == 0 );
            }

            if ( var_va )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_va,
                    var_va
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_8_append );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_vancestors );
    Py_DECREF( par_vancestors );
    par_vancestors = NULL;

    Py_XDECREF( var_add );
    var_add = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_va );
    var_va = NULL;

    goto function_return_exit;
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

    CHECK_OBJECT( (PyObject *)par_a );
    Py_DECREF( par_a );
    par_a = NULL;

    CHECK_OBJECT( (PyObject *)par_vancestors );
    Py_DECREF( par_vancestors );
    par_vancestors = NULL;

    Py_XDECREF( var_add );
    var_add = NULL;

    Py_XDECREF( var_j );
    var_j = NULL;

    Py_XDECREF( var_va );
    var_va = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_8_append );
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


static PyObject *impl_decorator$$$function_9_dispatch_on( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_dispatch_args = PyCell_NEW1( python_pars[ 0 ] );
    PyCellObject *var_dispatch_str = PyCell_EMPTY();
    PyCellObject *var_check = PyCell_EMPTY();
    PyObject *var_gen_func_dec = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_called_name_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_defaults_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_raise_value_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7be976306880574491ec8011abfc4ccb, module_decorator );
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
    tmp_cond_value_1 = PyCell_GET( par_dispatch_args );

    if ( tmp_cond_value_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dispatch_args" );
        exception_tb = NULL;

        exception_lineno = 320;
        goto frame_exception_exit_1;
    }

    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 320;
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
    tmp_raise_type_1 = PyExc_AssertionError;
    tmp_raise_value_1 = const_tuple_str_digest_26f251a20ec31364dfb2955ee00c53bd_tuple;
    exception_type = tmp_raise_type_1;
    Py_INCREF( tmp_raise_type_1 );
    exception_value = tmp_raise_value_1;
    Py_INCREF( tmp_raise_value_1 );
    exception_lineno = 320;
    RAISE_EXCEPTION_WITH_VALUE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_left_name_1 = const_str_digest_2908d31d41d56cf67cc50d1badb5cceb;
    tmp_source_name_1 = const_str_digest_db35ab94a03c3cbeb13cbe2a1d728b77;
    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_join );
    assert( tmp_called_name_1 != NULL );
    tmp_args_element_name_1 = PyCell_GET( par_dispatch_args );

    if ( tmp_args_element_name_1 == NULL )
    {
        Py_DECREF( tmp_called_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dispatch_args" );
        exception_tb = NULL;

        exception_lineno = 321;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 321;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_right_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 321;
        goto frame_exception_exit_1;
    }
    {
        PyObject *old = PyCell_GET( var_dispatch_str );
        PyCell_SET( var_dispatch_str, tmp_assign_source_1 );
        Py_XDECREF( old );
    }

    tmp_defaults_1 = PyTuple_New( 2 );
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_operator );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_defaults_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "operator" );
        exception_tb = NULL;

        exception_lineno = 323;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_ne );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_defaults_1 );

        exception_lineno = 323;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_defaults_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = const_str_empty;
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_defaults_1, 1, tmp_tuple_element_1 );
    tmp_assign_source_2 = MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_1_check( tmp_defaults_1, par_dispatch_args );
    {
        PyObject *old = PyCell_GET( var_check );
        PyCell_SET( var_check, tmp_assign_source_2 );
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec( var_check, par_dispatch_args, var_dispatch_str );
    assert( var_gen_func_dec == NULL );
    var_gen_func_dec = tmp_assign_source_3;

    tmp_left_name_2 = const_str_plain_dispatch_on;
    tmp_right_name_2 = PyCell_GET( var_dispatch_str );

    if ( tmp_right_name_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "dispatch_str" );
        exception_tb = NULL;

        exception_lineno = 416;
        goto frame_exception_exit_1;
    }

    tmp_assattr_name_1 = BINARY_OPERATION_ADD( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_assattr_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 416;
        goto frame_exception_exit_1;
    }
    tmp_assattr_target_1 = var_gen_func_dec;

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___name__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_assattr_name_1 );

        exception_lineno = 416;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_assattr_name_1 );

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
            if ( par_dispatch_args->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dispatch_args,
                    par_dispatch_args->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_dispatch_str->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dispatch_str,
                    var_dispatch_str->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_check->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_check,
                    var_check->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_gen_func_dec )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_gen_func_dec,
                    var_gen_func_dec
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

    tmp_return_value = var_gen_func_dec;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dispatch_args );
    Py_DECREF( par_dispatch_args );
    par_dispatch_args = NULL;

    CHECK_OBJECT( (PyObject *)var_dispatch_str );
    Py_DECREF( var_dispatch_str );
    var_dispatch_str = NULL;

    CHECK_OBJECT( (PyObject *)var_check );
    Py_DECREF( var_check );
    var_check = NULL;

    CHECK_OBJECT( (PyObject *)var_gen_func_dec );
    Py_DECREF( var_gen_func_dec );
    var_gen_func_dec = NULL;

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

    CHECK_OBJECT( (PyObject *)par_dispatch_args );
    Py_DECREF( par_dispatch_args );
    par_dispatch_args = NULL;

    CHECK_OBJECT( (PyObject *)var_dispatch_str );
    Py_DECREF( var_dispatch_str );
    var_dispatch_str = NULL;

    CHECK_OBJECT( (PyObject *)var_check );
    Py_DECREF( var_check );
    var_check = NULL;

    Py_XDECREF( var_gen_func_dec );
    var_gen_func_dec = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on );
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


static PyObject *impl_decorator$$$function_9_dispatch_on$$$function_1_check( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arguments = python_pars[ 0 ];
    PyObject *par_wrong = python_pars[ 1 ];
    PyObject *par_msg = python_pars[ 2 ];
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
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_len_arg_2;
    PyObject *tmp_len_arg_3;
    PyObject *tmp_len_arg_4;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_fe3cee60129716c5db9d030cd1969bc0, module_decorator );
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
    tmp_called_name_1 = par_wrong;

    tmp_len_arg_1 = par_arguments;

    tmp_args_element_name_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_len_arg_2 = PyCell_GET( self->m_closure[0] );

    if ( tmp_len_arg_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dispatch_args" );
        exception_tb = NULL;

        exception_lineno = 325;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = BUILTIN_LEN( tmp_len_arg_2 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 325;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2 };
        tmp_cond_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_cond_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 325;
        goto frame_exception_exit_1;
    }
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 325;
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
    tmp_left_name_1 = const_str_digest_6f8a4fd0af59b46148045f2f01b4ff99;
    tmp_right_name_1 = PyTuple_New( 3 );
    tmp_len_arg_3 = PyCell_GET( self->m_closure[0] );

    if ( tmp_len_arg_3 == NULL )
    {
        Py_DECREF( tmp_right_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dispatch_args" );
        exception_tb = NULL;

        exception_lineno = 327;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_3 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 327;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_len_arg_4 = par_arguments;

    tmp_tuple_element_1 = BUILTIN_LEN( tmp_len_arg_4 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_right_name_1 );

        exception_lineno = 327;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = par_msg;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 2, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 326;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 326;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_TypeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 327;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
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
            if ( par_arguments )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arguments,
                    par_arguments
                );

                assert( res == 0 );
            }

            if ( par_wrong )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_wrong,
                    par_wrong
                );

                assert( res == 0 );
            }

            if ( par_msg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_msg,
                    par_msg
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dispatch_args,
                    self->m_closure[0]->ob_ref
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_1_check );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_arguments );
    Py_DECREF( par_arguments );
    par_arguments = NULL;

    CHECK_OBJECT( (PyObject *)par_wrong );
    Py_DECREF( par_wrong );
    par_wrong = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

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

    CHECK_OBJECT( (PyObject *)par_arguments );
    Py_DECREF( par_arguments );
    par_arguments = NULL;

    CHECK_OBJECT( (PyObject *)par_wrong );
    Py_DECREF( par_wrong );
    par_wrong = NULL;

    CHECK_OBJECT( (PyObject *)par_msg );
    Py_DECREF( par_msg );
    par_msg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_1_check );
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


static PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_func = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_argset = NULL;
    PyCellObject *var_typemap = PyCell_EMPTY();
    PyCellObject *var_vancestors = PyCell_EMPTY();
    PyCellObject *var_ancestors = PyCell_EMPTY();
    PyObject *var_register = NULL;
    PyObject *var_dispatch_info = NULL;
    PyObject *var__dispatch = NULL;
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    int tmp_cmp_LtE_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_dict_key_1;
    PyObject *tmp_dict_key_2;
    PyObject *tmp_dict_key_3;
    PyObject *tmp_dict_key_4;
    PyObject *tmp_dict_key_5;
    PyObject *tmp_dict_key_6;
    PyObject *tmp_dict_key_7;
    PyObject *tmp_dict_key_8;
    PyObject *tmp_dict_value_1;
    PyObject *tmp_dict_value_2;
    PyObject *tmp_dict_value_3;
    PyObject *tmp_dict_value_4;
    PyObject *tmp_dict_value_5;
    PyObject *tmp_dict_value_6;
    PyObject *tmp_dict_value_7;
    PyObject *tmp_dict_value_8;
    PyObject *tmp_frame_locals;
    PyObject *tmp_kw_name_1;
    PyObject *tmp_left_name_1;
    PyObject *tmp_left_name_2;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_right_name_2;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_set_arg_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_element_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_ea92bd54999aa33083b7596a4bbcc6e6, module_decorator );
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
    tmp_called_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_getfullargspec );

    if (unlikely( tmp_called_name_1 == NULL ))
    {
        tmp_called_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfullargspec );
    }

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getfullargspec" );
        exception_tb = NULL;

        exception_lineno = 333;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = PyCell_GET( par_func );

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "func" );
        exception_tb = NULL;

        exception_lineno = 333;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 333;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    tmp_set_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_args );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_set_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_1 = PySet_New( tmp_set_arg_1 );
    Py_DECREF( tmp_set_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 333;
        goto frame_exception_exit_1;
    }
    assert( var_argset == NULL );
    var_argset = tmp_assign_source_1;

    tmp_set_arg_2 = PyCell_GET( self->m_closure[1] );

    if ( tmp_set_arg_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dispatch_args" );
        exception_tb = NULL;

        exception_lineno = 334;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = PySet_New( tmp_set_arg_2 );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 334;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = var_argset;

    tmp_cmp_LtE_1 = RICH_COMPARE_BOOL_LE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_LtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 334;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_LtE_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = const_str_digest_108ea5b456b342f5d15c2f6fd94e4746;
    tmp_right_name_1 = PyCell_GET( self->m_closure[2] );

    if ( tmp_right_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dispatch_str" );
        exception_tb = NULL;

        exception_lineno = 335;
        goto frame_exception_exit_1;
    }

    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 335;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 335;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_NameError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 335;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto frame_exception_exit_1;
    branch_no_1:;
    tmp_assign_source_2 = PyDict_New();
    {
        PyObject *old = PyCell_GET( var_typemap );
        PyCell_SET( var_typemap, tmp_assign_source_2 );
        Py_XDECREF( old );
    }

    tmp_assign_source_3 = MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors( self->m_closure[0], self->m_closure[1], var_typemap );
    {
        PyObject *old = PyCell_GET( var_vancestors );
        PyCell_SET( var_vancestors, tmp_assign_source_3 );
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_2_ancestors( self->m_closure[0], var_vancestors );
    {
        PyObject *old = PyCell_GET( var_ancestors );
        PyCell_SET( var_ancestors, tmp_assign_source_4 );
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register( self->m_closure[0], var_typemap );
    assert( var_register == NULL );
    var_register = tmp_assign_source_5;

    tmp_assign_source_6 = MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info( var_ancestors, self->m_closure[0] );
    assert( var_dispatch_info == NULL );
    var_dispatch_info = tmp_assign_source_6;

    tmp_assign_source_7 = MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch( var_ancestors, par_func, var_typemap );
    assert( var__dispatch == NULL );
    var__dispatch = tmp_assign_source_7;

    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_FunctionMaker );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_FunctionMaker );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "FunctionMaker" );
        exception_tb = NULL;

        exception_lineno = 410;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_create );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 410;
        goto frame_exception_exit_1;
    }
    tmp_args_name_1 = PyTuple_New( 3 );
    tmp_tuple_element_1 = PyCell_GET( par_func );

    if ( tmp_tuple_element_1 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "func" );
        exception_tb = NULL;

        exception_lineno = 411;
        goto frame_exception_exit_1;
    }

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 0, tmp_tuple_element_1 );
    tmp_left_name_2 = const_str_digest_4533638b14e5ea4e173e64ab7162b17d;
    tmp_right_name_2 = PyCell_GET( self->m_closure[2] );

    if ( tmp_right_name_2 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dispatch_str" );
        exception_tb = NULL;

        exception_lineno = 411;
        goto frame_exception_exit_1;
    }

    tmp_tuple_element_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_2, tmp_right_name_2 );
    if ( tmp_tuple_element_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );

        exception_lineno = 411;
        goto frame_exception_exit_1;
    }
    PyTuple_SET_ITEM( tmp_args_name_1, 1, tmp_tuple_element_1 );
    tmp_tuple_element_1 = _PyDict_NewPresized( 1 );
    tmp_dict_value_1 = var__dispatch;

    tmp_dict_key_1 = const_str_plain__f_;
    PyDict_SetItem( tmp_tuple_element_1, tmp_dict_key_1, tmp_dict_value_1 );
    PyTuple_SET_ITEM( tmp_args_name_1, 2, tmp_tuple_element_1 );
    tmp_kw_name_1 = _PyDict_NewPresized( 7 );
    tmp_dict_value_2 = var_register;

    tmp_dict_key_2 = const_str_plain_register;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_2, tmp_dict_value_2 );
    tmp_dict_value_3 = PyCell_GET( par_func );

    if ( tmp_dict_value_3 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "func" );
        exception_tb = NULL;

        exception_lineno = 412;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_3 = const_str_plain_default;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_3, tmp_dict_value_3 );
    tmp_dict_value_4 = PyCell_GET( var_typemap );

    if ( tmp_dict_value_4 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "typemap" );
        exception_tb = NULL;

        exception_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_4 = const_str_plain_typemap;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_4, tmp_dict_value_4 );
    tmp_dict_value_5 = PyCell_GET( var_vancestors );

    if ( tmp_dict_value_5 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "vancestors" );
        exception_tb = NULL;

        exception_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_5 = const_str_plain_vancestors;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_5, tmp_dict_value_5 );
    tmp_dict_value_6 = PyCell_GET( var_ancestors );

    if ( tmp_dict_value_6 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "ancestors" );
        exception_tb = NULL;

        exception_lineno = 413;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_6 = const_str_plain_ancestors;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_6, tmp_dict_value_6 );
    tmp_dict_value_7 = var_dispatch_info;

    tmp_dict_key_7 = const_str_plain_dispatch_info;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_7, tmp_dict_value_7 );
    tmp_dict_value_8 = PyCell_GET( par_func );

    if ( tmp_dict_value_8 == NULL )
    {
        Py_DECREF( tmp_called_name_2 );
        Py_DECREF( tmp_args_name_1 );
        Py_DECREF( tmp_kw_name_1 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "func" );
        exception_tb = NULL;

        exception_lineno = 414;
        goto frame_exception_exit_1;
    }

    tmp_dict_key_8 = const_str_plain___wrapped__;
    PyDict_SetItem( tmp_kw_name_1, tmp_dict_key_8, tmp_dict_value_8 );
    frame_function->f_lineno = 414;
    tmp_return_value = CALL_FUNCTION( tmp_called_name_2, tmp_args_name_1, tmp_kw_name_1 );
    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_name_1 );
    Py_DECREF( tmp_kw_name_1 );
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 414;
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
            if ( par_func->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    par_func->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_argset )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_argset,
                    var_argset
                );

                assert( res == 0 );
            }

            if ( var_typemap->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typemap,
                    var_typemap->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_vancestors->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vancestors,
                    var_vancestors->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_ancestors->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ancestors,
                    var_ancestors->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_register )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_register,
                    var_register
                );

                assert( res == 0 );
            }

            if ( var_dispatch_info )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dispatch_info,
                    var_dispatch_info
                );

                assert( res == 0 );
            }

            if ( var__dispatch )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__dispatch,
                    var__dispatch
                );

                assert( res == 0 );
            }

            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dispatch_args,
                    self->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[2]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dispatch_str,
                    self->m_closure[2]->ob_ref
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    CHECK_OBJECT( (PyObject *)var_argset );
    Py_DECREF( var_argset );
    var_argset = NULL;

    CHECK_OBJECT( (PyObject *)var_typemap );
    Py_DECREF( var_typemap );
    var_typemap = NULL;

    CHECK_OBJECT( (PyObject *)var_vancestors );
    Py_DECREF( var_vancestors );
    var_vancestors = NULL;

    CHECK_OBJECT( (PyObject *)var_ancestors );
    Py_DECREF( var_ancestors );
    var_ancestors = NULL;

    CHECK_OBJECT( (PyObject *)var_register );
    Py_DECREF( var_register );
    var_register = NULL;

    CHECK_OBJECT( (PyObject *)var_dispatch_info );
    Py_DECREF( var_dispatch_info );
    var_dispatch_info = NULL;

    CHECK_OBJECT( (PyObject *)var__dispatch );
    Py_DECREF( var__dispatch );
    var__dispatch = NULL;

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

    CHECK_OBJECT( (PyObject *)par_func );
    Py_DECREF( par_func );
    par_func = NULL;

    Py_XDECREF( var_argset );
    var_argset = NULL;

    CHECK_OBJECT( (PyObject *)var_typemap );
    Py_DECREF( var_typemap );
    var_typemap = NULL;

    CHECK_OBJECT( (PyObject *)var_vancestors );
    Py_DECREF( var_vancestors );
    var_vancestors = NULL;

    CHECK_OBJECT( (PyObject *)var_ancestors );
    Py_DECREF( var_ancestors );
    var_ancestors = NULL;

    Py_XDECREF( var_register );
    var_register = NULL;

    Py_XDECREF( var_dispatch_info );
    var_dispatch_info = NULL;

    Py_XDECREF( var__dispatch );
    var__dispatch = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec );
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


static PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_types = python_pars[ 0 ];
    PyObject *var__ = NULL;
    PyObject *var_ras = NULL;
    PyObject *var_types_ = NULL;
    PyObject *var_t = NULL;
    PyObject *var_type_ = NULL;
    PyObject *var_ra = NULL;
    PyObject *tmp_list_contraction_1__$0 = NULL;
    PyObject *tmp_list_contraction_1__contraction_result = NULL;
    PyObject *tmp_list_contraction_1__iter_value_0 = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_list_contraction_2__$0 = NULL;
    PyObject *tmp_list_contraction_2__contraction_result = NULL;
    PyObject *tmp_list_contraction_2__iter_value_0 = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    int tmp_and_left_truth_1;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_append_list_1;
    PyObject *tmp_append_list_2;
    PyObject *tmp_append_value_1;
    PyObject *tmp_append_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
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
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_right_1;
    int tmp_cond_truth_1;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iter_arg_4;
    PyObject *tmp_iter_arg_5;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_next_source_2;
    PyObject *tmp_next_source_3;
    PyObject *tmp_next_source_4;
    PyObject *tmp_outline_return_value_1;
    PyObject *tmp_outline_return_value_2;
    PyObject *tmp_range_arg_1;
    int tmp_res;
    PyObject *tmp_return_value;
    PyObject *tmp_set_arg_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;
    tmp_outline_return_value_1 = NULL;
    tmp_outline_return_value_2 = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_3c98a1c1752535da77e9c20500676f25, module_decorator );
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
    tmp_called_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "check" );
        exception_tb = NULL;

        exception_lineno = 343;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_types;

    frame_function->f_lineno = 343;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 343;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    // Tried code:
    tmp_len_arg_1 = PyCell_GET( self->m_closure[1] );

    if ( tmp_len_arg_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "dispatch_args" );
        exception_tb = NULL;

        exception_lineno = 344;
        goto try_except_handler_2;
    }

    tmp_range_arg_1 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_range_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        goto try_except_handler_2;
    }
    tmp_iter_arg_1 = BUILTIN_RANGE( tmp_range_arg_1 );
    Py_DECREF( tmp_range_arg_1 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        goto try_except_handler_2;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        goto try_except_handler_2;
    }
    assert( tmp_list_contraction_1__$0 == NULL );
    tmp_list_contraction_1__$0 = tmp_assign_source_2;

    tmp_assign_source_3 = PyList_New( 0 );
    assert( tmp_list_contraction_1__contraction_result == NULL );
    tmp_list_contraction_1__contraction_result = tmp_assign_source_3;

    loop_start_1:;
    tmp_next_source_1 = tmp_list_contraction_1__$0;

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
            PyThreadState_GET()->frame->f_lineno = 344;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_list_contraction_1__iter_value_0;
        tmp_list_contraction_1__iter_value_0 = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_assign_source_5 = tmp_list_contraction_1__iter_value_0;

    {
        PyObject *old = var__;
        var__ = tmp_assign_source_5;
        Py_INCREF( var__ );
        Py_XDECREF( old );
    }

    tmp_append_list_1 = tmp_list_contraction_1__contraction_result;

    tmp_append_value_1 = PyList_New( 0 );
    assert( PyList_Check( tmp_append_list_1 ) );
    tmp_res = PyList_Append( tmp_append_list_1, tmp_append_value_1 );
    Py_DECREF( tmp_append_value_1 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 344;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    tmp_outline_return_value_1 = tmp_list_contraction_1__contraction_result;

    Py_INCREF( tmp_outline_return_value_1 );
    goto try_return_handler_2;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors );
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__$0 );
    Py_DECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_1__contraction_result );
    Py_DECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    goto outline_result_1;
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

    Py_XDECREF( tmp_list_contraction_1__$0 );
    tmp_list_contraction_1__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_1__contraction_result );
    tmp_list_contraction_1__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_1__iter_value_0 );
    tmp_list_contraction_1__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors );
    return NULL;
    outline_result_1:;
    tmp_assign_source_1 = tmp_outline_return_value_1;
    assert( var_ras == NULL );
    var_ras = tmp_assign_source_1;

    tmp_iter_arg_2 = PyCell_GET( self->m_closure[2] );

    if ( tmp_iter_arg_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typemap" );
        exception_tb = NULL;

        exception_lineno = 345;
        goto frame_exception_exit_1;
    }

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_2:;
    tmp_next_source_2 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_2 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_2;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 345;
            goto try_except_handler_3;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_types_;
        var_types_ = tmp_assign_source_8;
        Py_INCREF( var_types_ );
        Py_XDECREF( old );
    }

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = par_types;

    tmp_args_element_name_3 = var_types_;

    tmp_args_element_name_4 = var_ras;

    frame_function->f_lineno = 346;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_2, call_args );
    }

    if ( tmp_iter_arg_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        goto try_except_handler_3;
    }
    tmp_assign_source_9 = MAKE_ITERATOR( tmp_iter_arg_3 );
    Py_DECREF( tmp_iter_arg_3 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_for_loop_2__for_iterator;
        tmp_for_loop_2__for_iterator = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    // Tried code:
    loop_start_3:;
    tmp_next_source_3 = tmp_for_loop_2__for_iterator;

    tmp_assign_source_10 = ITERATOR_NEXT( tmp_next_source_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_3;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 346;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_2__iter_value;
        tmp_for_loop_2__iter_value = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_4 = tmp_for_loop_2__iter_value;

    tmp_assign_source_11 = MAKE_ITERATOR( tmp_iter_arg_4 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_12 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_12 == NULL )
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


        exception_lineno = 346;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_13 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_13 == NULL )
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


        exception_lineno = 346;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_14 = UNPACK_NEXT( tmp_unpack_3, 2 );
    if ( tmp_assign_source_14 == NULL )
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


        exception_lineno = 346;
        goto try_except_handler_5;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_3;
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_14;
        Py_XDECREF( old );
    }

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

                goto try_except_handler_5;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 3)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_5;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
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

    Py_XDECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    tmp_assign_source_15 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_15;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    tmp_assign_source_16 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_type_;
        var_type_ = tmp_assign_source_16;
        Py_INCREF( var_type_ );
        Py_XDECREF( old );
    }

    tmp_assign_source_17 = tmp_tuple_unpack_1__element_3;

    {
        PyObject *old = var_ra;
        var_ra = tmp_assign_source_17;
        Py_INCREF( var_ra );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_3 );
    Py_DECREF( tmp_tuple_unpack_1__element_3 );
    tmp_tuple_unpack_1__element_3 = NULL;

    tmp_called_name_3 = LOOKUP_BUILTIN( const_str_plain_issubclass );
    assert( tmp_called_name_3 != NULL );
    tmp_args_element_name_5 = var_t;

    tmp_args_element_name_6 = var_type_;

    frame_function->f_lineno = 347;
    {
        PyObject *call_args[] = { tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_and_left_value_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_3, call_args );
    }

    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        goto try_except_handler_4;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 347;
        goto try_except_handler_4;
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
    tmp_compexpr_left_1 = var_type_;

    tmp_source_name_1 = var_t;

    tmp_compexpr_right_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___mro__ );
    if ( tmp_compexpr_right_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        goto try_except_handler_4;
    }
    tmp_and_right_value_1 = SEQUENCE_CONTAINS_NOT( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    Py_DECREF( tmp_compexpr_right_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 347;
        goto try_except_handler_4;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 347;
        goto try_except_handler_4;
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
    tmp_called_name_4 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_append );

    if (unlikely( tmp_called_name_4 == NULL ))
    {
        tmp_called_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_append );
    }

    if ( tmp_called_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "append" );
        exception_tb = NULL;

        exception_lineno = 348;
        goto try_except_handler_4;
    }

    tmp_args_element_name_7 = var_type_;

    tmp_args_element_name_8 = var_ra;

    frame_function->f_lineno = 348;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_4, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 348;
        goto try_except_handler_4;
    }
    Py_DECREF( tmp_unused );
    branch_no_1:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 346;
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_for_loop_2__iter_value );
    tmp_for_loop_2__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_2__for_iterator );
    Py_DECREF( tmp_for_loop_2__for_iterator );
    tmp_for_loop_2__for_iterator = NULL;

    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 345;
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
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
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    // Tried code:
    tmp_iter_arg_5 = var_ras;

    tmp_assign_source_18 = MAKE_ITERATOR( tmp_iter_arg_5 );
    if ( tmp_assign_source_18 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto try_except_handler_6;
    }
    assert( tmp_list_contraction_2__$0 == NULL );
    tmp_list_contraction_2__$0 = tmp_assign_source_18;

    tmp_assign_source_19 = PyList_New( 0 );
    assert( tmp_list_contraction_2__contraction_result == NULL );
    tmp_list_contraction_2__contraction_result = tmp_assign_source_19;

    loop_start_4:;
    tmp_next_source_4 = tmp_list_contraction_2__$0;

    tmp_assign_source_20 = ITERATOR_NEXT( tmp_next_source_4 );
    if ( tmp_assign_source_20 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_4;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            PyThreadState_GET()->frame->f_lineno = 349;
            goto try_except_handler_6;
        }
    }

    {
        PyObject *old = tmp_list_contraction_2__iter_value_0;
        tmp_list_contraction_2__iter_value_0 = tmp_assign_source_20;
        Py_XDECREF( old );
    }

    tmp_assign_source_21 = tmp_list_contraction_2__iter_value_0;

    {
        PyObject *old = var_ra;
        var_ra = tmp_assign_source_21;
        Py_INCREF( var_ra );
        Py_XDECREF( old );
    }

    tmp_append_list_2 = tmp_list_contraction_2__contraction_result;

    tmp_set_arg_1 = var_ra;

    tmp_append_value_2 = PySet_New( tmp_set_arg_1 );
    if ( tmp_append_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto try_except_handler_6;
    }
    assert( PyList_Check( tmp_append_list_2 ) );
    tmp_res = PyList_Append( tmp_append_list_2, tmp_append_value_2 );
    Py_DECREF( tmp_append_value_2 );
    if ( tmp_res == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto try_except_handler_6;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 349;
        goto try_except_handler_6;
    }
    goto loop_start_4;
    loop_end_4:;
    tmp_outline_return_value_2 = tmp_list_contraction_2__contraction_result;

    Py_INCREF( tmp_outline_return_value_2 );
    goto try_return_handler_6;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors );
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__$0 );
    Py_DECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_list_contraction_2__contraction_result );
    Py_DECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

    goto outline_result_2;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_list_contraction_2__$0 );
    tmp_list_contraction_2__$0 = NULL;

    Py_XDECREF( tmp_list_contraction_2__contraction_result );
    tmp_list_contraction_2__contraction_result = NULL;

    Py_XDECREF( tmp_list_contraction_2__iter_value_0 );
    tmp_list_contraction_2__iter_value_0 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors );
    return NULL;
    outline_result_2:;
    tmp_return_value = tmp_outline_return_value_2;
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
            if ( par_types )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_types,
                    par_types
                );

                assert( res == 0 );
            }

            if ( var__ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain__,
                    var__
                );

                assert( res == 0 );
            }

            if ( var_ras )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ras,
                    var_ras
                );

                assert( res == 0 );
            }

            if ( var_types_ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_types_,
                    var_types_
                );

                assert( res == 0 );
            }

            if ( var_t )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_t,
                    var_t
                );

                assert( res == 0 );
            }

            if ( var_type_ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_type_,
                    var_type_
                );

                assert( res == 0 );
            }

            if ( var_ra )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ra,
                    var_ra
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_check,
                    self->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dispatch_args,
                    self->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[2]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typemap,
                    self->m_closure[2]->ob_ref
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_types );
    Py_DECREF( par_types );
    par_types = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    CHECK_OBJECT( (PyObject *)var_ras );
    Py_DECREF( var_ras );
    var_ras = NULL;

    Py_XDECREF( var_types_ );
    var_types_ = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_type_ );
    var_type_ = NULL;

    Py_XDECREF( var_ra );
    var_ra = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_types );
    Py_DECREF( par_types );
    par_types = NULL;

    Py_XDECREF( var__ );
    var__ = NULL;

    Py_XDECREF( var_ras );
    var_ras = NULL;

    Py_XDECREF( var_types_ );
    var_types_ = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_type_ );
    var_type_ = NULL;

    Py_XDECREF( var_ra );
    var_ra = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors );
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


static PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_2_ancestors( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_types = python_pars[ 0 ];
    PyObject *var_lists = NULL;
    PyObject *var_t = NULL;
    PyObject *var_vas = NULL;
    PyObject *var_n_vas = NULL;
    PyObject *var_va = NULL;
    PyObject *var_mro = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
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
    PyObject *tmp_bases_name_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    int tmp_cmp_Eq_1;
    int tmp_cmp_Gt_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_iter_arg_3;
    PyObject *tmp_iterator_attempt;
    PyObject *tmp_iterator_name_1;
    PyObject *tmp_iterator_name_2;
    PyObject *tmp_left_name_1;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_make_exception_arg_1;
    PyObject *tmp_next_source_1;
    PyObject *tmp_raise_type_1;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    Py_ssize_t tmp_slice_index_upper_1;
    Py_ssize_t tmp_slice_index_upper_2;
    PyObject *tmp_slice_source_1;
    PyObject *tmp_slice_source_2;
    Py_ssize_t tmp_sliceslicedel_index_lower_1;
    Py_ssize_t tmp_sliceslicedel_index_lower_2;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_type_name_name_1;
    PyObject *tmp_unpack_1;
    PyObject *tmp_unpack_2;
    PyObject *tmp_unpack_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_7ee777894a9cc5dd8d0277cc246762db, module_decorator );
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
    tmp_called_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "check" );
        exception_tb = NULL;

        exception_lineno = 355;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_types;

    frame_function->f_lineno = 355;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 355;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_lists == NULL );
    var_lists = tmp_assign_source_1;

    tmp_called_name_2 = LOOKUP_BUILTIN( const_str_plain_zip );
    assert( tmp_called_name_2 != NULL );
    tmp_args_element_name_2 = par_types;

    tmp_dircall_arg1_1 = PyCell_GET( self->m_closure[1] );

    if ( tmp_dircall_arg1_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "vancestors" );
        exception_tb = NULL;

        exception_lineno = 357;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_1 = par_types;

    Py_INCREF( tmp_dircall_arg1_1 );
    Py_INCREF( tmp_dircall_arg2_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_args_element_name_3 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 357;
    {
        PyObject *call_args[] = { tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_args_element_name_3 );
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 357;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    // Tried code:
    tmp_iter_arg_2 = tmp_for_loop_1__iter_value;

    tmp_assign_source_4 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__source_iter;
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
        Py_XDECREF( old );
    }

    tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_5 = UNPACK_NEXT( tmp_unpack_1, 0 );
    if ( tmp_assign_source_5 == NULL )
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


        exception_lineno = 357;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_1;
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
        Py_XDECREF( old );
    }

    tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;

    tmp_assign_source_6 = UNPACK_NEXT( tmp_unpack_2, 1 );
    if ( tmp_assign_source_6 == NULL )
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


        exception_lineno = 357;
        goto try_except_handler_3;
    }
    {
        PyObject *old = tmp_tuple_unpack_1__element_2;
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
        Py_XDECREF( old );
    }

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

                goto try_except_handler_3;
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

        goto try_except_handler_3;
    }
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

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;

    {
        PyObject *old = var_t;
        var_t = tmp_assign_source_7;
        Py_INCREF( var_t );
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_tuple_unpack_1__element_2;

    {
        PyObject *old = var_vas;
        var_vas = tmp_assign_source_8;
        Py_INCREF( var_vas );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__source_iter );
    Py_DECREF( tmp_tuple_unpack_1__source_iter );
    tmp_tuple_unpack_1__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_1 );
    Py_DECREF( tmp_tuple_unpack_1__element_1 );
    tmp_tuple_unpack_1__element_1 = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_1__element_2 );
    Py_DECREF( tmp_tuple_unpack_1__element_2 );
    tmp_tuple_unpack_1__element_2 = NULL;

    tmp_len_arg_1 = var_vas;

    tmp_assign_source_9 = BUILTIN_LEN( tmp_len_arg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 358;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_n_vas;
        var_n_vas = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_compare_left_1 = var_n_vas;

    tmp_compare_right_1 = const_int_pos_1;
    tmp_cmp_Gt_1 = RICH_COMPARE_BOOL_GT( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_Gt_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 359;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Gt_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_left_name_1 = const_str_digest_33b4a946800be54b364e48504e54f9d6;
    tmp_right_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_1 = var_t;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 0, tmp_tuple_element_1 );
    tmp_tuple_element_1 = var_vas;

    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_right_name_1, 1, tmp_tuple_element_1 );
    tmp_make_exception_arg_1 = BINARY_OPERATION_REMAINDER( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_make_exception_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 361;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 360;
    {
        PyObject *call_args[] = { tmp_make_exception_arg_1 };
        tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS1( PyExc_RuntimeError, call_args );
    }

    Py_DECREF( tmp_make_exception_arg_1 );
    assert( tmp_raise_type_1 != NULL );
    exception_type = tmp_raise_type_1;
    exception_lineno = 361;
    RAISE_EXCEPTION_WITH_TYPE( &exception_type, &exception_value, &exception_tb );
    goto try_except_handler_2;
    goto branch_end_1;
    branch_no_1:;
    tmp_compare_left_2 = var_n_vas;

    tmp_compare_right_2 = const_int_pos_1;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ( tmp_compare_left_2, tmp_compare_right_2 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 362;
        goto try_except_handler_2;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    // Tried code:
    tmp_iter_arg_3 = var_vas;

    tmp_assign_source_10 = MAKE_ITERATOR( tmp_iter_arg_3 );
    if ( tmp_assign_source_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 363;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__source_iter;
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
        Py_XDECREF( old );
    }

    tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;

    tmp_assign_source_11 = UNPACK_NEXT( tmp_unpack_3, 0 );
    if ( tmp_assign_source_11 == NULL )
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


        exception_lineno = 363;
        goto try_except_handler_4;
    }
    {
        PyObject *old = tmp_tuple_unpack_2__element_1;
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
        Py_XDECREF( old );
    }

    tmp_iterator_name_2 = tmp_tuple_unpack_2__source_iter;

    // Check if iterator has left-over elements.
    CHECK_OBJECT( tmp_iterator_name_2 ); assert( HAS_ITERNEXT( tmp_iterator_name_2 ) );

    tmp_iterator_attempt = (*Py_TYPE( tmp_iterator_name_2 )->tp_iternext)( tmp_iterator_name_2 );

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

                goto try_except_handler_4;
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
        PyErr_Format( PyExc_ValueError, "too many values to unpack (expected 1)" );
#endif
        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );

        goto try_except_handler_4;
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    Py_XDECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    tmp_assign_source_12 = tmp_tuple_unpack_2__element_1;

    {
        PyObject *old = var_va;
        var_va = tmp_assign_source_12;
        Py_INCREF( var_va );
        Py_XDECREF( old );
    }

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__source_iter );
    Py_DECREF( tmp_tuple_unpack_2__source_iter );
    tmp_tuple_unpack_2__source_iter = NULL;

    CHECK_OBJECT( (PyObject *)tmp_tuple_unpack_2__element_1 );
    Py_DECREF( tmp_tuple_unpack_2__element_1 );
    tmp_tuple_unpack_2__element_1 = NULL;

    tmp_sliceslicedel_index_lower_1 = 1;
    tmp_slice_index_upper_1 = PY_SSIZE_T_MAX;
    tmp_type_name_name_1 = const_str_plain_t;
    tmp_bases_name_1 = PyTuple_New( 2 );
    tmp_tuple_element_2 = var_t;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_bases_name_1, 0, tmp_tuple_element_2 );
    tmp_tuple_element_2 = var_va;

    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_bases_name_1, 1, tmp_tuple_element_2 );
    tmp_dict_name_1 = PyDict_New();
    tmp_source_name_1 = BUILTIN_TYPE3( const_str_plain_decorator, tmp_type_name_name_1, tmp_bases_name_1, tmp_dict_name_1 );
    Py_DECREF( tmp_bases_name_1 );
    Py_DECREF( tmp_dict_name_1 );
    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto try_except_handler_2;
    }
    tmp_slice_source_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___mro__ );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_slice_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto try_except_handler_2;
    }
    tmp_assign_source_13 = LOOKUP_INDEX_SLICE( tmp_slice_source_1, tmp_sliceslicedel_index_lower_1, tmp_slice_index_upper_1 );
    Py_DECREF( tmp_slice_source_1 );
    if ( tmp_assign_source_13 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 364;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_mro;
        var_mro = tmp_assign_source_13;
        Py_XDECREF( old );
    }

    goto branch_end_2;
    branch_no_2:;
    tmp_source_name_2 = var_t;

    tmp_assign_source_14 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain___mro__ );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 366;
        goto try_except_handler_2;
    }
    {
        PyObject *old = var_mro;
        var_mro = tmp_assign_source_14;
        Py_XDECREF( old );
    }

    branch_end_2:;
    branch_end_1:;
    tmp_source_name_3 = var_lists;

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_append );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto try_except_handler_2;
    }
    tmp_sliceslicedel_index_lower_2 = 0;
    tmp_slice_index_upper_2 = -1;
    tmp_slice_source_2 = var_mro;

    if ( tmp_slice_source_2 == NULL )
    {
        Py_DECREF( tmp_called_name_3 );
        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "mro" );
        exception_tb = NULL;

        exception_lineno = 367;
        goto try_except_handler_2;
    }

    tmp_args_element_name_4 = LOOKUP_INDEX_SLICE( tmp_slice_source_2, tmp_sliceslicedel_index_lower_2, tmp_slice_index_upper_2 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_3 );

        exception_lineno = 367;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 367;
    {
        PyObject *call_args[] = { tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, call_args );
    }

    Py_DECREF( tmp_called_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 367;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 357;
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
            if ( par_types )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_types,
                    par_types
                );

                assert( res == 0 );
            }

            if ( var_lists )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lists,
                    var_lists
                );

                assert( res == 0 );
            }

            if ( var_t )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_t,
                    var_t
                );

                assert( res == 0 );
            }

            if ( var_vas )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vas,
                    var_vas
                );

                assert( res == 0 );
            }

            if ( var_n_vas )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_n_vas,
                    var_n_vas
                );

                assert( res == 0 );
            }

            if ( var_va )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_va,
                    var_va
                );

                assert( res == 0 );
            }

            if ( var_mro )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_mro,
                    var_mro
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_check,
                    self->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_vancestors,
                    self->m_closure[1]->ob_ref
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_lists;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_2_ancestors );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_types );
    Py_DECREF( par_types );
    par_types = NULL;

    CHECK_OBJECT( (PyObject *)var_lists );
    Py_DECREF( var_lists );
    var_lists = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_vas );
    var_vas = NULL;

    Py_XDECREF( var_n_vas );
    var_n_vas = NULL;

    Py_XDECREF( var_va );
    var_va = NULL;

    Py_XDECREF( var_mro );
    var_mro = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_types );
    Py_DECREF( par_types );
    par_types = NULL;

    Py_XDECREF( var_lists );
    var_lists = NULL;

    Py_XDECREF( var_t );
    var_t = NULL;

    Py_XDECREF( var_vas );
    var_vas = NULL;

    Py_XDECREF( var_n_vas );
    var_n_vas = NULL;

    Py_XDECREF( var_va );
    var_va = NULL;

    Py_XDECREF( var_mro );
    var_mro = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_2_ancestors );
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


static PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyCellObject *par_types = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *var_dec = NULL;
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
    PyObject *tmp_frame_locals;
    PyObject *tmp_return_value;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_6c82a5f212f14e9f04c76564c3e0c2ad, module_decorator );
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
    tmp_called_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "check" );
        exception_tb = NULL;

        exception_lineno = 374;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = PyCell_GET( par_types );

    if ( tmp_args_element_name_1 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "types" );
        exception_tb = NULL;

        exception_lineno = 374;
        goto frame_exception_exit_1;
    }

    frame_function->f_lineno = 374;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 374;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );

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
            if ( par_types->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_types,
                    par_types->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_dec )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dec,
                    var_dec
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_check,
                    self->m_closure[0]->ob_ref
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

    tmp_assign_source_1 = MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register$$$function_1_dec( self->m_closure[0], self->m_closure[1], par_types );
    assert( var_dec == NULL );
    var_dec = tmp_assign_source_1;

    tmp_return_value = var_dec;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_types );
    Py_DECREF( par_types );
    par_types = NULL;

    CHECK_OBJECT( (PyObject *)var_dec );
    Py_DECREF( var_dec );
    var_dec = NULL;

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

    CHECK_OBJECT( (PyObject *)par_types );
    Py_DECREF( par_types );
    par_types = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register );
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


static PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register$$$function_1_dec( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[ 0 ];
    PyObject *exception_type = NULL, *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = -1;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_ass_subscribed_1;
    PyObject *tmp_ass_subscript_1;
    PyObject *tmp_ass_subvalue_1;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_left_name_1;
    bool tmp_result;
    PyObject *tmp_return_value;
    PyObject *tmp_right_name_1;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_f2757f4d71fdd787d14c07cf2c8b28df, module_decorator );
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
    tmp_called_name_1 = PyCell_GET( self->m_closure[0] );

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "check" );
        exception_tb = NULL;

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_getfullargspec );

    if (unlikely( tmp_called_name_2 == NULL ))
    {
        tmp_called_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfullargspec );
    }

    if ( tmp_called_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "getfullargspec" );
        exception_tb = NULL;

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_2 = par_f;

    frame_function->f_lineno = 377;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_source_name_1 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    if ( tmp_source_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_args );
    Py_DECREF( tmp_source_name_1 );
    if ( tmp_args_element_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_operator );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_operator );
    }

    if ( tmp_source_name_2 == NULL )
    {
        Py_DECREF( tmp_args_element_name_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "operator" );
        exception_tb = NULL;

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_lt );
    if ( tmp_args_element_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_left_name_1 = const_str_digest_789430c10aaa72b7d685699173aceee7;
    tmp_source_name_3 = par_f;

    tmp_right_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain___name__ );
    if ( tmp_right_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    tmp_args_element_name_4 = BINARY_OPERATION_ADD( tmp_left_name_1, tmp_right_name_1 );
    Py_DECREF( tmp_right_name_1 );
    if ( tmp_args_element_name_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_args_element_name_1 );
        Py_DECREF( tmp_args_element_name_3 );

        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    frame_function->f_lineno = 377;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_3, tmp_args_element_name_4 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_args_element_name_1 );
    Py_DECREF( tmp_args_element_name_3 );
    Py_DECREF( tmp_args_element_name_4 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 377;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_ass_subvalue_1 = par_f;

    tmp_ass_subscribed_1 = PyCell_GET( self->m_closure[1] );

    if ( tmp_ass_subscribed_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typemap" );
        exception_tb = NULL;

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }

    tmp_ass_subscript_1 = PyCell_GET( self->m_closure[2] );

    if ( tmp_ass_subscript_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "types" );
        exception_tb = NULL;

        exception_lineno = 378;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_SUBSCRIPT( tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 378;
        goto frame_exception_exit_1;
    }

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
            if ( par_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    par_f
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_check,
                    self->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typemap,
                    self->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[2]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_types,
                    self->m_closure[2]->ob_ref
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

    tmp_return_value = par_f;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register$$$function_1_dec );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

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

    CHECK_OBJECT( (PyObject *)par_f );
    Py_DECREF( par_f );
    par_f = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register$$$function_1_dec );
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


static PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_types = python_pars[ 0 ];
    PyObject *var_lst = NULL;
    PyObject *var_anc = NULL;
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
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_frame_locals;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_tuple_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_d0d533d017a94069b6baea52e4954a02, module_decorator );
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
    tmp_called_name_1 = PyCell_GET( self->m_closure[1] );

    if ( tmp_called_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "check" );
        exception_tb = NULL;

        exception_lineno = 386;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_1 = par_types;

    frame_function->f_lineno = 386;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 386;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_assign_source_1 = PyList_New( 0 );
    assert( var_lst == NULL );
    var_lst = tmp_assign_source_1;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_itertools );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_itertools );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "itertools" );
        exception_tb = NULL;

        exception_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_product );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_2 = PyCell_GET( self->m_closure[0] );

    if ( tmp_dircall_arg1_2 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_1 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ancestors" );
        exception_tb = NULL;

        exception_lineno = 388;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_2 = par_types;

    Py_INCREF( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg2_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
        tmp_dircall_arg2_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_dircall_arg2_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_1 );

        exception_lineno = 388;
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
        tmp_iter_arg_1 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_iter_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_2 = MAKE_ITERATOR( tmp_iter_arg_1 );
    Py_DECREF( tmp_iter_arg_1 );
    if ( tmp_assign_source_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_2;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_3 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 388;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_3;
        Py_XDECREF( old );
    }

    tmp_assign_source_4 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_anc;
        var_anc = tmp_assign_source_4;
        Py_INCREF( var_anc );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = var_lst;

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_append );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        goto try_except_handler_2;
    }
    tmp_iter_arg_2 = var_anc;

    tmp_dircall_arg1_3 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_dircall_arg1_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 389;
        goto try_except_handler_2;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
        tmp_tuple_arg_1 = impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info$$$function_1_genexpr( dir_call_args );
    }
    assert( tmp_tuple_arg_1 != NULL );
    tmp_args_element_name_2 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_args_element_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_called_name_2 );

        exception_lineno = 389;
        goto try_except_handler_2;
    }
    frame_function->f_lineno = 389;
    {
        PyObject *call_args[] = { tmp_args_element_name_2 };
        tmp_unused = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_2, call_args );
    }

    Py_DECREF( tmp_called_name_2 );
    Py_DECREF( tmp_args_element_name_2 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        goto try_except_handler_2;
    }
    Py_DECREF( tmp_unused );
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 388;
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
            if ( par_types )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_types,
                    par_types
                );

                assert( res == 0 );
            }

            if ( var_lst )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_lst,
                    var_lst
                );

                assert( res == 0 );
            }

            if ( var_anc )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_anc,
                    var_anc
                );

                assert( res == 0 );
            }

            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_check,
                    self->m_closure[1]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ancestors,
                    self->m_closure[0]->ob_ref
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

    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_return_value = var_lst;

    Py_INCREF( tmp_return_value );
    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_types );
    Py_DECREF( par_types );
    par_types = NULL;

    CHECK_OBJECT( (PyObject *)var_lst );
    Py_DECREF( var_lst );
    var_lst = NULL;

    Py_XDECREF( var_anc );
    var_anc = NULL;

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

    CHECK_OBJECT( (PyObject *)par_types );
    Py_DECREF( par_types );
    par_types = NULL;

    Py_XDECREF( var_lst );
    var_lst = NULL;

    Py_XDECREF( var_anc );
    var_anc = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info );
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


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info$$$function_1_genexpr( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyCellObject *par_$0 = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
        closure[0] = par_$0;
        Py_INCREF( closure[0] );

        tmp_return_value = Nuitka_Generator_New(
            decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info$$$function_1_genexpr$$$genexpr_1_genexpr_context,
            const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_0643a08f40788dcdda16972bc7ff3cf4,
            closure,
            1
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info$$$function_1_genexpr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_$0 );
    Py_DECREF( par_$0 );
    par_$0 = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_$0 );
    Py_DECREF( par_$0 );
    par_$0 = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info$$$function_1_genexpr );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_a = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_next_source_1;
    PyObject *tmp_source_name_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_f1023fa583c8fdcb67529bd7c8606d87, module_decorator );
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
    // Tried code:
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
            exception_lineno = 389;
            goto try_except_handler_2;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    loop_start_1:;
    tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_next_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", ".0" );
        exception_tb = NULL;

        exception_lineno = 389;
        goto try_except_handler_2;
    }

    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 389;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = tmp_iter_value_0;

    {
        PyObject *old = var_a;
        var_a = tmp_assign_source_2;
        Py_INCREF( var_a );
        Py_XDECREF( old );
    }

    tmp_source_name_1 = var_a;

    tmp_expression_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain___name__ );
    if ( tmp_expression_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        goto try_except_handler_2;
    }
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 389;
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

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
            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_digest_b9c4baf879ebd882d40843df3a4dead7,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_a )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_a,
                    var_a
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

    Py_XDECREF( var_a );
    var_a = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_a );
    var_a = NULL;


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


static PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch( Nuitka_FunctionObject const *self, PyObject **python_pars )
{
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_dispatch_args = python_pars[ 0 ];
    PyObject *par_args = python_pars[ 1 ];
    PyObject *par_kw = python_pars[ 2 ];
    PyObject *var_types = NULL;
    PyObject *var_f = NULL;
    PyObject *var_combinations = NULL;
    PyObject *var_types_ = NULL;
    PyObject *tmp_try_except_1__unhandled_indicator = NULL;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_assign_source_1;
    PyObject *tmp_assign_source_2;
    PyObject *tmp_assign_source_3;
    PyObject *tmp_assign_source_4;
    PyObject *tmp_assign_source_5;
    PyObject *tmp_assign_source_6;
    PyObject *tmp_assign_source_7;
    PyObject *tmp_assign_source_8;
    PyObject *tmp_assign_source_9;
    PyObject *tmp_called_name_1;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_dircall_arg1_1;
    PyObject *tmp_dircall_arg1_2;
    PyObject *tmp_dircall_arg1_3;
    PyObject *tmp_dircall_arg1_4;
    PyObject *tmp_dircall_arg1_5;
    PyObject *tmp_dircall_arg1_6;
    PyObject *tmp_dircall_arg2_1;
    PyObject *tmp_dircall_arg2_2;
    PyObject *tmp_dircall_arg2_3;
    PyObject *tmp_dircall_arg2_4;
    PyObject *tmp_dircall_arg2_5;
    PyObject *tmp_dircall_arg3_1;
    PyObject *tmp_dircall_arg3_2;
    PyObject *tmp_dircall_arg3_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_frame_locals;
    bool tmp_is_1;
    bool tmp_isnot_1;
    PyObject *tmp_iter_arg_1;
    PyObject *tmp_iter_arg_2;
    PyObject *tmp_next_source_1;
    PyObject *tmp_return_value;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_subscribed_name_1;
    PyObject *tmp_subscript_name_1;
    PyObject *tmp_tuple_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    PyObject *tmp_value_name_1;
    static PyFrameObject *cache_frame_function = NULL;

    PyFrameObject *frame_function;

    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_function, codeobj_79654b47c1122848faa1440d8af23c1c, module_decorator );
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
    tmp_iter_arg_1 = par_dispatch_args;

    tmp_dircall_arg1_1 = MAKE_ITERATOR( tmp_iter_arg_1 );
    if ( tmp_dircall_arg1_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
        tmp_tuple_arg_1 = impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch$$$function_1_genexpr( dir_call_args );
    }
    assert( tmp_tuple_arg_1 != NULL );
    tmp_assign_source_1 = PySequence_Tuple( tmp_tuple_arg_1 );
    Py_DECREF( tmp_tuple_arg_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto frame_exception_exit_1;
    }
    assert( var_types == NULL );
    var_types = tmp_assign_source_1;

    tmp_assign_source_2 = Py_True;
    assert( tmp_try_except_1__unhandled_indicator == NULL );
    Py_INCREF( tmp_assign_source_2 );
    tmp_try_except_1__unhandled_indicator = tmp_assign_source_2;

    // Tried code:
    // Tried code:
    tmp_subscribed_name_1 = PyCell_GET( self->m_closure[2] );

    if ( tmp_subscribed_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typemap" );
        exception_tb = NULL;

        exception_lineno = 395;
        goto try_except_handler_3;
    }

    tmp_subscript_name_1 = var_types;

    tmp_assign_source_3 = LOOKUP_SUBSCRIPT( tmp_subscribed_name_1, tmp_subscript_name_1 );
    if ( tmp_assign_source_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 395;
        goto try_except_handler_3;
    }
    assert( var_f == NULL );
    var_f = tmp_assign_source_3;

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

    tmp_assign_source_4 = Py_False;
    {
        PyObject *old = tmp_try_except_1__unhandled_indicator;
        assert( old != NULL );
        tmp_try_except_1__unhandled_indicator = tmp_assign_source_4;
        Py_INCREF( tmp_try_except_1__unhandled_indicator );
        Py_DECREF( old );
    }

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_function );
    if ( exception_keeper_tb_1 == NULL )
    {
        exception_keeper_tb_1 = MAKE_TRACEBACK( frame_function, exception_keeper_lineno_1 );
    }
    else if ( exception_keeper_lineno_1 != -1 )
    {
        exception_keeper_tb_1 = ADD_TRACEBACK( exception_keeper_tb_1, frame_function, exception_keeper_lineno_1 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    PUBLISH_EXCEPTION( &exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1 );
    tmp_compare_left_1 = PyThreadState_GET()->exc_type;
    tmp_compare_right_1 = PyExc_KeyError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 396;
        goto try_except_handler_2;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_no_1;
    }
    else
    {
        goto branch_yes_1;
    }
    branch_yes_1:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_function) frame_function->f_lineno = exception_tb->tb_lineno;
    goto try_except_handler_2;
    branch_no_1:;
    goto try_end_1;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch );
    return NULL;
    // End of try:
    try_end_1:;
    tmp_compare_left_2 = tmp_try_except_1__unhandled_indicator;

    tmp_compare_right_2 = Py_True;
    tmp_is_1 = ( tmp_compare_left_2 == tmp_compare_right_2 );
    if ( tmp_is_1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_dircall_arg1_2 = var_f;

    if ( tmp_dircall_arg1_2 == NULL )
    {

        exception_type = PyExc_UnboundLocalError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "local variable '%s' referenced before assignment", "f" );
        exception_tb = NULL;

        exception_lineno = 399;
        goto try_except_handler_2;
    }

    tmp_dircall_arg2_1 = par_args;

    tmp_dircall_arg3_1 = par_kw;

    Py_INCREF( tmp_dircall_arg1_2 );
    Py_INCREF( tmp_dircall_arg2_1 );
    Py_INCREF( tmp_dircall_arg3_1 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 399;
        goto try_except_handler_2;
    }
    goto try_return_handler_2;
    branch_no_2:;
    goto try_end_2;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    goto frame_return_exit_1;
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

    Py_XDECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT( (PyObject *)tmp_try_except_1__unhandled_indicator );
    Py_DECREF( tmp_try_except_1__unhandled_indicator );
    tmp_try_except_1__unhandled_indicator = NULL;

    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_itertools );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_itertools );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "global name '%s' is not defined", "itertools" );
        exception_tb = NULL;

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg1_3 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_product );
    if ( tmp_dircall_arg1_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto frame_exception_exit_1;
    }
    tmp_dircall_arg1_4 = PyCell_GET( self->m_closure[0] );

    if ( tmp_dircall_arg1_4 == NULL )
    {
        Py_DECREF( tmp_dircall_arg1_3 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "ancestors" );
        exception_tb = NULL;

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_3 = var_types;

    Py_INCREF( tmp_dircall_arg1_4 );
    Py_INCREF( tmp_dircall_arg2_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_3};
        tmp_dircall_arg2_2 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_dircall_arg2_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_dircall_arg1_3 );

        exception_lineno = 400;
        goto frame_exception_exit_1;
    }

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_2};
        tmp_assign_source_5 = impl___internal__$$$function_5_complex_call_helper_star_list( dir_call_args );
    }
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 400;
        goto frame_exception_exit_1;
    }
    assert( var_combinations == NULL );
    var_combinations = tmp_assign_source_5;

    tmp_value_name_1 = var_combinations;

    tmp_unused = ITERATOR_NEXT( tmp_value_name_1 );
    if ( tmp_unused == NULL )
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


        exception_lineno = 401;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_unused );
    tmp_iter_arg_2 = var_combinations;

    tmp_assign_source_6 = MAKE_ITERATOR( tmp_iter_arg_2 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        goto frame_exception_exit_1;
    }
    assert( tmp_for_loop_1__for_iterator == NULL );
    tmp_for_loop_1__for_iterator = tmp_assign_source_6;

    // Tried code:
    loop_start_1:;
    tmp_next_source_1 = tmp_for_loop_1__for_iterator;

    tmp_assign_source_7 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            frame_function->f_lineno = 402;
            goto try_except_handler_4;
        }
    }

    {
        PyObject *old = tmp_for_loop_1__iter_value;
        tmp_for_loop_1__iter_value = tmp_assign_source_7;
        Py_XDECREF( old );
    }

    tmp_assign_source_8 = tmp_for_loop_1__iter_value;

    {
        PyObject *old = var_types_;
        var_types_ = tmp_assign_source_8;
        Py_INCREF( var_types_ );
        Py_XDECREF( old );
    }

    tmp_source_name_2 = PyCell_GET( self->m_closure[2] );

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "typemap" );
        exception_tb = NULL;

        exception_lineno = 403;
        goto try_except_handler_4;
    }

    tmp_called_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_get );
    if ( tmp_called_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        goto try_except_handler_4;
    }
    tmp_args_element_name_1 = var_types_;

    frame_function->f_lineno = 403;
    {
        PyObject *call_args[] = { tmp_args_element_name_1 };
        tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_1, call_args );
    }

    Py_DECREF( tmp_called_name_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 403;
        goto try_except_handler_4;
    }
    {
        PyObject *old = var_f;
        var_f = tmp_assign_source_9;
        Py_XDECREF( old );
    }

    tmp_compare_left_3 = var_f;

    tmp_compare_right_3 = Py_None;
    tmp_isnot_1 = ( tmp_compare_left_3 != tmp_compare_right_3 );
    if ( tmp_isnot_1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_dircall_arg1_5 = var_f;

    tmp_dircall_arg2_4 = par_args;

    tmp_dircall_arg3_2 = par_kw;

    Py_INCREF( tmp_dircall_arg1_5 );
    Py_INCREF( tmp_dircall_arg2_4 );
    Py_INCREF( tmp_dircall_arg3_2 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_5, tmp_dircall_arg2_4, tmp_dircall_arg3_2};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 405;
        goto try_except_handler_4;
    }
    goto try_return_handler_4;
    branch_no_3:;
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 402;
        goto try_except_handler_4;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_4:;
    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__iter_value );
    Py_DECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
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
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    Py_XDECREF( tmp_for_loop_1__iter_value );
    tmp_for_loop_1__iter_value = NULL;

    CHECK_OBJECT( (PyObject *)tmp_for_loop_1__for_iterator );
    Py_DECREF( tmp_for_loop_1__for_iterator );
    tmp_for_loop_1__for_iterator = NULL;

    tmp_dircall_arg1_6 = PyCell_GET( self->m_closure[1] );

    if ( tmp_dircall_arg1_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", "func" );
        exception_tb = NULL;

        exception_lineno = 408;
        goto frame_exception_exit_1;
    }

    tmp_dircall_arg2_5 = par_args;

    tmp_dircall_arg3_3 = par_kw;

    Py_INCREF( tmp_dircall_arg1_6 );
    Py_INCREF( tmp_dircall_arg2_5 );
    Py_INCREF( tmp_dircall_arg3_3 );

    {
        PyObject *dir_call_args[] = {tmp_dircall_arg1_6, tmp_dircall_arg2_5, tmp_dircall_arg3_3};
        tmp_return_value = impl___internal__$$$function_1_complex_call_helper_star_list_star_dict( dir_call_args );
    }
    if ( tmp_return_value == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 408;
        goto frame_exception_exit_1;
    }
    goto frame_return_exit_1;

#if 1
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
#if 1
    RESTORE_FRAME_EXCEPTION( frame_function );
#endif
    popFrameStack();
#if PYTHON_VERSION >= 340
    frame_function->f_executing -= 1;
#endif
    Py_DECREF( frame_function );
    goto try_return_handler_1;

    frame_exception_exit_1:;
#if 1
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
            if ( par_dispatch_args )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_dispatch_args,
                    par_dispatch_args
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

            if ( par_kw )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_kw,
                    par_kw
                );

                assert( res == 0 );
            }

            if ( var_types )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_types,
                    var_types
                );

                assert( res == 0 );
            }

            if ( var_f )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_f,
                    var_f
                );

                assert( res == 0 );
            }

            if ( var_combinations )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_combinations,
                    var_combinations
                );

                assert( res == 0 );
            }

            if ( var_types_ )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_types_,
                    var_types_
                );

                assert( res == 0 );
            }

            if ( self->m_closure[2]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_typemap,
                    self->m_closure[2]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_ancestors,
                    self->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( self->m_closure[1]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_func,
                    self->m_closure[1]->ob_ref
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
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_dispatch_args );
    Py_DECREF( par_dispatch_args );
    par_dispatch_args = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    CHECK_OBJECT( (PyObject *)var_types );
    Py_DECREF( var_types );
    var_types = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_combinations );
    var_combinations = NULL;

    Py_XDECREF( var_types_ );
    var_types_ = NULL;

    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    CHECK_OBJECT( (PyObject *)par_dispatch_args );
    Py_DECREF( par_dispatch_args );
    par_dispatch_args = NULL;

    CHECK_OBJECT( (PyObject *)par_args );
    Py_DECREF( par_args );
    par_args = NULL;

    CHECK_OBJECT( (PyObject *)par_kw );
    Py_DECREF( par_kw );
    par_kw = NULL;

    Py_XDECREF( var_types );
    var_types = NULL;

    Py_XDECREF( var_f );
    var_f = NULL;

    Py_XDECREF( var_combinations );
    var_combinations = NULL;

    Py_XDECREF( var_types_ );
    var_types_ = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:

    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch );
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


NUITKA_LOCAL_MODULE PyObject *impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch$$$function_1_genexpr( PyObject **python_pars )
{
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
    assert(!had_error); // Do not enter inlined functions with error set.
#endif

    // Local variable declarations.
    PyCellObject *par_$0 = PyCell_NEW1( python_pars[ 0 ] );
    PyObject *tmp_return_value;
    tmp_return_value = NULL;

    // Actual function code.
    // Tried code:
    {
        PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
        closure[0] = par_$0;
        Py_INCREF( closure[0] );

        tmp_return_value = Nuitka_Generator_New(
            decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch$$$function_1_genexpr$$$genexpr_1_genexpr_context,
            const_str_angle_genexpr,
#if PYTHON_VERSION >= 350
            NULL,
#endif
            codeobj_4e69cf1f15fbde31b13e81019690fd27,
            closure,
            1
        );
    }

    goto try_return_handler_1;
    // tried codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch$$$function_1_genexpr );
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT( (PyObject *)par_$0 );
    Py_DECREF( par_$0 );
    par_$0 = NULL;

    goto function_return_exit;
    // End of try:
    CHECK_OBJECT( (PyObject *)par_$0 );
    Py_DECREF( par_$0 );
    par_$0 = NULL;


    // Return statement must have exited already.
    NUITKA_CANNOT_GET_HERE( decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch$$$function_1_genexpr );
    return NULL;

    function_return_exit:

    CHECK_OBJECT( tmp_return_value );
    assert( had_error || !ERROR_OCCURRED() );
    return tmp_return_value;

}



static void decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch$$$function_1_genexpr$$$genexpr_1_genexpr_context( Nuitka_GeneratorObject *generator )
{
    CHECK_OBJECT( (PyObject *)generator );
    assert( Nuitka_Generator_Check( (PyObject *)generator ) );

    // Local variable initialization
    PyObject *var_arg = NULL;
    PyObject *tmp_iter_value_0 = NULL;
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
    PyObject *tmp_expression_name_1;
    PyObject *tmp_frame_locals;
    PyObject *tmp_next_source_1;
    PyObject *tmp_type_arg_1;
    NUITKA_MAY_BE_UNUSED PyObject *tmp_unused;
    static PyFrameObject *cache_frame_generator = NULL;


    // Actual function code.
    // Tried code:
    MAKE_OR_REUSE_FRAME( cache_frame_generator, codeobj_ae4a71ee80ee71cadbc6361ccea90b66, module_decorator );
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
    // Tried code:
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
            exception_lineno = 393;
            goto try_except_handler_2;
        }
        else
        {
            goto function_exception_exit;
        }
    }

    loop_start_1:;
    tmp_next_source_1 = PyCell_GET( generator->m_closure[0] );

    if ( tmp_next_source_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "free variable '%s' referenced before assignment in enclosing scope", ".0" );
        exception_tb = NULL;

        exception_lineno = 393;
        goto try_except_handler_2;
    }

    tmp_assign_source_1 = ITERATOR_NEXT( tmp_next_source_1 );
    if ( tmp_assign_source_1 == NULL )
    {
        if ( CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED() )
        {

            goto loop_end_1;
        }
        else
        {

            FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
            generator->m_frame->f_lineno = 393;
            goto try_except_handler_2;
        }
    }

    {
        PyObject *old = tmp_iter_value_0;
        tmp_iter_value_0 = tmp_assign_source_1;
        Py_XDECREF( old );
    }

    tmp_assign_source_2 = tmp_iter_value_0;

    {
        PyObject *old = var_arg;
        var_arg = tmp_assign_source_2;
        Py_INCREF( var_arg );
        Py_XDECREF( old );
    }

    tmp_type_arg_1 = var_arg;

    tmp_expression_name_1 = BUILTIN_TYPE1( tmp_type_arg_1 );
    assert( tmp_expression_name_1 != NULL );
    tmp_unused = YIELD( generator, tmp_expression_name_1 );
    if ( tmp_unused == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
        goto try_except_handler_2;
    }
    if ( CONSIDER_THREADING() == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 393;
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

    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

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
            if ( generator->m_closure[0]->ob_ref )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_digest_b9c4baf879ebd882d40843df3a4dead7,
                    generator->m_closure[0]->ob_ref
                );

                assert( res == 0 );
            }

            if ( var_arg )
            {
                int res = PyDict_SetItem(
                    tmp_frame_locals,
                    const_str_plain_arg,
                    var_arg
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

    Py_XDECREF( var_arg );
    var_arg = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF( tmp_iter_value_0 );
    tmp_iter_value_0 = NULL;

    Py_XDECREF( var_arg );
    var_arg = NULL;


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



static PyObject *MAKE_FUNCTION_decorator$$$class_1_getfullargspec$$$function_1___init__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$class_1_getfullargspec$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_41321b3e9e2368b92b4f3fd183d574c2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$class_1_getfullargspec$$$function_2___iter__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$class_1_getfullargspec$$$function_2___iter__,
        const_str_plain___iter__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a1f5eff386395f39c641e7d074e971c1,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_1___init__( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$class_2_FunctionMaker$$$function_1___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_232f74c9bdc8ec34be25b372e304c395,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_1___init__$$$function_1_lambda(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$class_2_FunctionMaker$$$function_1___init__$$$function_1_lambda,
        const_str_angle_lambda,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_a0a5030d2ff8e0a113e829436e73a960,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_2_update(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$class_2_FunctionMaker$$$function_2_update,
        const_str_plain_update,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_9274fec079ad3daaa615dd3b2bf72492,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_24b533134e7bfdfbe7ee6a416afabf77
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_3_make( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$class_2_FunctionMaker$$$function_3_make,
        const_str_plain_make,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f0be9381eb3129a3437bf565dcbeffdf,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_ba404227acfb2985143075d0d2f0a4b3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$class_2_FunctionMaker$$$function_4_create( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$class_2_FunctionMaker$$$function_4_create,
        const_str_plain_create,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f6ab55573d60febf92972bf0366b1fd9,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_83058204cc7c29a0c12cc9901c5a34a9
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$class_3_ContextManager$$$function_1___call__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$class_3_ContextManager$$$function_1___call__,
        const_str_plain___call__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d05f6b1b057aff330d9ae3c330fc65b2,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_80d8bc0cd0afc8334e909b7a9d31bd0a
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_1_get_init(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_1_get_init,
        const_str_plain_get_init,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3e9917c5f6e0d474eb0712afac3192fe,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_2_get_init(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_2_get_init,
        const_str_plain_get_init,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0ea975a92b2427450ae98523b3d02d5b,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_3_getargspec(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_3_getargspec,
        const_str_plain_getargspec,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3d51a68a421f9a9c30faa2f122cbb45a,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_0369903b4cbed9727b19f7009af53fc3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_4_decorate(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_4_decorate,
        const_str_plain_decorate,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_422be427cea742a626d32a33f9362ee5,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_b3b714263f67b9d2f5c6ce70eff61ce4
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_5_decorator( PyObject *defaults )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_5_decorator,
        const_str_plain_decorator,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_bf11a01774ba29600797beff3bfab264,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_06a0636793b7f71eda2b528403ace91d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_6___init__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_6___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_50055935082f446926cba4f710d784a0,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_7___init__(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_7___init__,
        const_str_plain___init__,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_85c356e5e417b803f51c3cfd423bc8ff,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        Py_None
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_8_append(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_8_append,
        const_str_plain_append,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_0b2aaae991c5e251f07f4ee4bd1add2f,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_b5e689fe317d81a94304c921fd79cf1d
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on(  )
{
    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_9_dispatch_on,
        const_str_plain_dispatch_on,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7be976306880574491ec8011abfc4ccb,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_1a810626c001febcbe29670d3efcd714
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_1_check( PyObject *defaults, PyCellObject *closure_dispatch_args )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(1 * sizeof(PyCellObject *));
    closure[0] = closure_dispatch_args;
    Py_INCREF( closure[0] );


    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_9_dispatch_on$$$function_1_check,
        const_str_plain_check,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_fe3cee60129716c5db9d030cd1969bc0,
        defaults,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_42e473a1d1d474d04bd4619c0aa4e073,
        closure,
        1
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec( PyCellObject *closure_check, PyCellObject *closure_dispatch_args, PyCellObject *closure_dispatch_str )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(3 * sizeof(PyCellObject *));
    closure[0] = closure_check;
    Py_INCREF( closure[0] );
    closure[1] = closure_dispatch_args;
    Py_INCREF( closure[1] );
    closure[2] = closure_dispatch_str;
    Py_INCREF( closure[2] );


    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec,
        const_str_plain_gen_func_dec,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_ea92bd54999aa33083b7596a4bbcc6e6,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_f59f1563f2b4763dee1df6bbd3b62c81,
        closure,
        3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors( PyCellObject *closure_check, PyCellObject *closure_dispatch_args, PyCellObject *closure_typemap )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(3 * sizeof(PyCellObject *));
    closure[0] = closure_check;
    Py_INCREF( closure[0] );
    closure[1] = closure_dispatch_args;
    Py_INCREF( closure[1] );
    closure[2] = closure_typemap;
    Py_INCREF( closure[2] );


    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_1_vancestors,
        const_str_plain_vancestors,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_3c98a1c1752535da77e9c20500676f25,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_1b9c5408d0d7f90686a9bbc3738e03d0,
        closure,
        3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_2_ancestors( PyCellObject *closure_check, PyCellObject *closure_vancestors )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
    closure[0] = closure_check;
    Py_INCREF( closure[0] );
    closure[1] = closure_vancestors;
    Py_INCREF( closure[1] );


    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_2_ancestors,
        const_str_plain_ancestors,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_7ee777894a9cc5dd8d0277cc246762db,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_a8aa334e433c89f0a3d0ec4c2dcbd4b7,
        closure,
        2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register( PyCellObject *closure_check, PyCellObject *closure_typemap )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
    closure[0] = closure_check;
    Py_INCREF( closure[0] );
    closure[1] = closure_typemap;
    Py_INCREF( closure[1] );


    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register,
        const_str_plain_register,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_6c82a5f212f14e9f04c76564c3e0c2ad,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_ad6767dd346ed7a57ba4ae45193274f3,
        closure,
        2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register$$$function_1_dec( PyCellObject *closure_check, PyCellObject *closure_typemap, PyCellObject *closure_types )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(3 * sizeof(PyCellObject *));
    closure[0] = closure_check;
    Py_INCREF( closure[0] );
    closure[1] = closure_typemap;
    Py_INCREF( closure[1] );
    closure[2] = closure_types;
    Py_INCREF( closure[2] );


    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_3_register$$$function_1_dec,
        const_str_plain_dec,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_f2757f4d71fdd787d14c07cf2c8b28df,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        Py_None,
        closure,
        3
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info( PyCellObject *closure_ancestors, PyCellObject *closure_check )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(2 * sizeof(PyCellObject *));
    closure[0] = closure_ancestors;
    Py_INCREF( closure[0] );
    closure[1] = closure_check;
    Py_INCREF( closure[1] );


    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_4_dispatch_info,
        const_str_plain_dispatch_info,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_d0d533d017a94069b6baea52e4954a02,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        const_str_digest_b3a893de82773ac4f9c8a5a70fbc8734,
        closure,
        2
    );

    return result;
}



static PyObject *MAKE_FUNCTION_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch( PyCellObject *closure_ancestors, PyCellObject *closure_func, PyCellObject *closure_typemap )
{
    // Copy the parameter default values and closure values over.
    PyCellObject **closure = (PyCellObject **)malloc(3 * sizeof(PyCellObject *));
    closure[0] = closure_ancestors;
    Py_INCREF( closure[0] );
    closure[1] = closure_func;
    Py_INCREF( closure[1] );
    closure[2] = closure_typemap;
    Py_INCREF( closure[2] );


    PyObject *result = Nuitka_Function_New(
        impl_decorator$$$function_9_dispatch_on$$$function_2_gen_func_dec$$$function_5__dispatch,
        const_str_plain__dispatch,
#if PYTHON_VERSION >= 330
        NULL,
#endif
        codeobj_79654b47c1122848faa1440d8af23c1c,
        NULL,
#if PYTHON_VERSION >= 300
        NULL,
        const_dict_empty,
#endif
        module_decorator,
        Py_None,
        closure,
        3
    );

    return result;
}



#if PYTHON_VERSION >= 300
static struct PyModuleDef mdef_decorator =
{
    PyModuleDef_HEAD_INIT,
    "decorator",   /* m_name */
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

MOD_INIT_DECL( decorator )
{
#if defined(_NUITKA_EXE) || PYTHON_VERSION >= 300
    static bool _init_done = false;

    // Modules might be imported repeatedly, which is to be ignored.
    if ( _init_done )
    {
        return MOD_RETURN_VALUE( module_decorator );
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

    // puts( "in initdecorator" );

    // Create the module object first. There are no methods initially, all are
    // added dynamically in actual code only.  Also no "__doc__" is initially
    // set at this time, as it could not contain NUL characters this way, they
    // are instead set in early module code.  No "self" for modules, we have no
    // use for it.
#if PYTHON_VERSION < 300
    module_decorator = Py_InitModule4(
        "decorator",       // Module Name
        NULL,                    // No methods initially, all are added
                                 // dynamically in actual module code only.
        NULL,                    // No __doc__ is initially set, as it could
                                 // not contain NUL this way, added early in
                                 // actual code.
        NULL,                    // No self for modules, we don't use it.
        PYTHON_API_VERSION
    );
#else
    module_decorator = PyModule_Create( &mdef_decorator );
#endif

    moduledict_decorator = (PyDictObject *)((PyModuleObject *)module_decorator)->md_dict;

    CHECK_OBJECT( module_decorator );

// Seems to work for Python2.7 out of the box, but for Python3, the module
// doesn't automatically enter "sys.modules", so do it manually.
#if PYTHON_VERSION >= 300
    {
        int r = PyObject_SetItem( PySys_GetObject( (char *)"modules" ), const_str_plain_decorator, module_decorator );

        assert( r != -1 );
    }
#endif

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    PyObject *module_dict = PyModule_GetDict( module_decorator );

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
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__class = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__class = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__class = NULL;
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
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    int tmp_and_left_truth_1;
    int tmp_and_left_truth_2;
    PyObject *tmp_and_left_value_1;
    PyObject *tmp_and_left_value_2;
    PyObject *tmp_and_right_value_1;
    PyObject *tmp_and_right_value_2;
    PyObject *tmp_args_element_name_1;
    PyObject *tmp_args_element_name_2;
    PyObject *tmp_args_element_name_3;
    PyObject *tmp_args_element_name_4;
    PyObject *tmp_args_element_name_5;
    PyObject *tmp_args_element_name_6;
    PyObject *tmp_args_element_name_7;
    PyObject *tmp_args_element_name_8;
    PyObject *tmp_args_element_name_9;
    PyObject *tmp_args_element_name_10;
    PyObject *tmp_args_element_name_11;
    PyObject *tmp_assattr_name_1;
    PyObject *tmp_assattr_name_2;
    PyObject *tmp_assattr_target_1;
    PyObject *tmp_assattr_target_2;
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
    PyObject *tmp_assign_source_38;
    PyObject *tmp_assign_source_39;
    PyObject *tmp_assign_source_40;
    PyObject *tmp_assign_source_41;
    PyObject *tmp_assign_source_42;
    PyObject *tmp_bases_name_1;
    PyObject *tmp_bases_name_2;
    PyObject *tmp_bases_name_3;
    PyObject *tmp_called_name_1;
    PyObject *tmp_called_name_2;
    PyObject *tmp_called_name_3;
    PyObject *tmp_called_name_4;
    PyObject *tmp_called_name_5;
    PyObject *tmp_called_name_6;
    PyObject *tmp_called_name_7;
    int tmp_cmp_Eq_1;
    int tmp_cmp_GtE_1;
    int tmp_cmp_In_1;
    int tmp_cmp_In_2;
    int tmp_cmp_In_3;
    PyObject *tmp_compare_left_1;
    PyObject *tmp_compare_left_2;
    PyObject *tmp_compare_left_3;
    PyObject *tmp_compare_left_4;
    PyObject *tmp_compare_left_5;
    PyObject *tmp_compare_left_6;
    PyObject *tmp_compare_right_1;
    PyObject *tmp_compare_right_2;
    PyObject *tmp_compare_right_3;
    PyObject *tmp_compare_right_4;
    PyObject *tmp_compare_right_5;
    PyObject *tmp_compare_right_6;
    PyObject *tmp_compexpr_left_1;
    PyObject *tmp_compexpr_left_2;
    PyObject *tmp_compexpr_right_1;
    PyObject *tmp_compexpr_right_2;
    int tmp_cond_truth_1;
    int tmp_cond_truth_2;
    PyObject *tmp_cond_value_1;
    PyObject *tmp_cond_value_2;
    PyObject *tmp_defaults_1;
    PyObject *tmp_dict_name_1;
    PyObject *tmp_dict_name_2;
    PyObject *tmp_dict_name_3;
    int tmp_exc_match_exception_match_1;
    PyObject *tmp_import_globals_1;
    PyObject *tmp_import_globals_2;
    PyObject *tmp_import_globals_3;
    PyObject *tmp_import_globals_4;
    PyObject *tmp_import_globals_5;
    PyObject *tmp_import_globals_6;
    PyObject *tmp_import_globals_7;
    PyObject *tmp_import_globals_8;
    PyObject *tmp_import_globals_9;
    PyObject *tmp_import_name_from_1;
    PyObject *tmp_import_name_from_2;
    PyObject *tmp_import_name_from_3;
    PyObject *tmp_key_name_1;
    PyObject *tmp_key_name_2;
    PyObject *tmp_key_name_3;
    PyObject *tmp_len_arg_1;
    PyObject *tmp_operand_name_1;
    bool tmp_result;
    PyObject *tmp_source_name_1;
    PyObject *tmp_source_name_2;
    PyObject *tmp_source_name_3;
    PyObject *tmp_source_name_4;
    PyObject *tmp_source_name_5;
    PyObject *tmp_source_name_6;
    PyObject *tmp_source_name_7;
    PyObject *tmp_tuple_element_1;
    PyObject *tmp_tuple_element_2;
    PyObject *tmp_tuple_element_3;
    PyFrameObject *frame_module;


    // Module code.
    tmp_assign_source_1 = const_str_digest_02f364acb97851233ca35f4dd4bbced6;
    UPDATE_STRING_DICT0( moduledict_decorator, (Nuitka_StringObject *)const_str_plain___doc__, tmp_assign_source_1 );
    tmp_assign_source_2 = const_str_digest_3da9ef48ddf25c4f005539e6d3568ee3;
    UPDATE_STRING_DICT0( moduledict_decorator, (Nuitka_StringObject *)const_str_plain___file__, tmp_assign_source_2 );
    tmp_assign_source_3 = PyObject_GetAttrString(PyImport_ImportModule("__future__"), "print_function");
    UPDATE_STRING_DICT0( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_print_function, tmp_assign_source_3 );
    // Frame without reuse.
    frame_module = MAKE_MODULE_FRAME( codeobj_7274dd9fa3f8e44777be913570dd2fe5, module_decorator );

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStack( frame_module );
    assert( Py_REFCNT( frame_module ) == 1 );

#if PYTHON_VERSION >= 340
    frame_module->f_executing += 1;
#endif

    // Framed code:
    tmp_import_globals_1 = ((PyModuleObject *)module_decorator)->md_dict;
    frame_module->f_lineno = 36;
    tmp_assign_source_4 = IMPORT_MODULE( const_str_plain_re, tmp_import_globals_1, tmp_import_globals_1, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_4 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 36;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_re, tmp_assign_source_4 );
    tmp_import_globals_2 = ((PyModuleObject *)module_decorator)->md_dict;
    frame_module->f_lineno = 37;
    tmp_assign_source_5 = IMPORT_MODULE( const_str_plain_sys, tmp_import_globals_2, tmp_import_globals_2, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_5 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 37;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_sys, tmp_assign_source_5 );
    tmp_import_globals_3 = ((PyModuleObject *)module_decorator)->md_dict;
    frame_module->f_lineno = 38;
    tmp_assign_source_6 = IMPORT_MODULE( const_str_plain_inspect, tmp_import_globals_3, tmp_import_globals_3, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_6 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 38;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_inspect, tmp_assign_source_6 );
    tmp_import_globals_4 = ((PyModuleObject *)module_decorator)->md_dict;
    frame_module->f_lineno = 39;
    tmp_assign_source_7 = IMPORT_MODULE( const_str_plain_operator, tmp_import_globals_4, tmp_import_globals_4, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_7 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 39;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_operator, tmp_assign_source_7 );
    tmp_import_globals_5 = ((PyModuleObject *)module_decorator)->md_dict;
    frame_module->f_lineno = 40;
    tmp_assign_source_8 = IMPORT_MODULE( const_str_plain_itertools, tmp_import_globals_5, tmp_import_globals_5, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_8 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 40;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_itertools, tmp_assign_source_8 );
    tmp_import_globals_6 = ((PyModuleObject *)module_decorator)->md_dict;
    frame_module->f_lineno = 41;
    tmp_assign_source_9 = IMPORT_MODULE( const_str_plain_collections, tmp_import_globals_6, tmp_import_globals_6, Py_None, const_int_neg_1 );
    if ( tmp_assign_source_9 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 41;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_collections, tmp_assign_source_9 );
    tmp_assign_source_10 = const_str_digest_b9485c75310361a952820ae03328877b;
    UPDATE_STRING_DICT0( moduledict_decorator, (Nuitka_StringObject *)const_str_plain___version__, tmp_assign_source_10 );
    tmp_source_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_sys );

    if (unlikely( tmp_source_name_1 == NULL ))
    {
        tmp_source_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_sys );
    }

    if ( tmp_source_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "sys" );
        exception_tb = NULL;

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }

    tmp_compare_left_1 = LOOKUP_ATTRIBUTE( tmp_source_name_1, const_str_plain_version );
    if ( tmp_compare_left_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    tmp_compare_right_1 = const_str_plain_3;
    tmp_cmp_GtE_1 = RICH_COMPARE_BOOL_GE( tmp_compare_left_1, tmp_compare_right_1 );
    if ( tmp_cmp_GtE_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_compare_left_1 );

        exception_lineno = 45;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_compare_left_1 );
    if ( tmp_cmp_GtE_1 == 1 )
    {
        goto branch_yes_1;
    }
    else
    {
        goto branch_no_1;
    }
    branch_yes_1:;
    tmp_import_globals_7 = ((PyModuleObject *)module_decorator)->md_dict;
    frame_module->f_lineno = 46;
    tmp_import_name_from_1 = IMPORT_MODULE( const_str_plain_inspect, tmp_import_globals_7, tmp_import_globals_7, const_tuple_str_plain_getfullargspec_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_11 = IMPORT_NAME( tmp_import_name_from_1, const_str_plain_getfullargspec );
    Py_DECREF( tmp_import_name_from_1 );
    if ( tmp_assign_source_11 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 46;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_getfullargspec, tmp_assign_source_11 );
    tmp_assign_source_12 = MAKE_FUNCTION_decorator$$$function_1_get_init(  );
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_get_init, tmp_assign_source_12 );
    goto branch_end_1;
    branch_no_1:;
    tmp_assign_source_13 = PyTuple_New( 1 );
    tmp_tuple_element_1 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_1 != NULL );
    Py_INCREF( tmp_tuple_element_1 );
    PyTuple_SET_ITEM( tmp_assign_source_13, 0, tmp_tuple_element_1 );
    assert( tmp_class_creation_1__bases == NULL );
    tmp_class_creation_1__bases = tmp_assign_source_13;

    // Tried code:
    tmp_assign_source_14 = impl_decorator$$$class_1_getfullargspec( NULL );
    if ( tmp_assign_source_14 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class_dict == NULL );
    tmp_class_creation_1__class_dict = tmp_assign_source_14;

    tmp_compare_left_2 = const_str_plain___metaclass__;
    tmp_compare_right_2 = tmp_class_creation_1__class_dict;

    tmp_cmp_In_1 = PySequence_Contains( tmp_compare_right_2, tmp_compare_left_2 );
    assert( !(tmp_cmp_In_1 == -1) );
    if ( tmp_cmp_In_1 == 1 )
    {
        goto condexpr_true_1;
    }
    else
    {
        goto condexpr_false_1;
    }
    condexpr_true_1:;
    tmp_dict_name_1 = tmp_class_creation_1__class_dict;

    tmp_key_name_1 = const_str_plain___metaclass__;
    tmp_assign_source_15 = DICT_GET_ITEM( tmp_dict_name_1, tmp_key_name_1 );
    if ( tmp_assign_source_15 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_1;
    }
    goto condexpr_end_1;
    condexpr_false_1:;
    tmp_bases_name_1 = tmp_class_creation_1__bases;

    tmp_assign_source_15 = SELECT_METACLASS( tmp_bases_name_1, GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_1:;
    assert( tmp_class_creation_1__metaclass == NULL );
    tmp_class_creation_1__metaclass = tmp_assign_source_15;

    tmp_called_name_1 = tmp_class_creation_1__metaclass;

    tmp_args_element_name_1 = const_str_plain_getfullargspec;
    tmp_args_element_name_2 = tmp_class_creation_1__bases;

    tmp_args_element_name_3 = tmp_class_creation_1__class_dict;

    frame_module->f_lineno = 51;
    {
        PyObject *call_args[] = { tmp_args_element_name_1, tmp_args_element_name_2, tmp_args_element_name_3 };
        tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_1, call_args );
    }

    if ( tmp_assign_source_16 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 51;
        goto try_except_handler_1;
    }
    assert( tmp_class_creation_1__class == NULL );
    tmp_class_creation_1__class = tmp_assign_source_16;

    goto try_end_1;
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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    Py_XDECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    tmp_assign_source_17 = tmp_class_creation_1__class;

    UPDATE_STRING_DICT0( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_getfullargspec, tmp_assign_source_17 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class );
    Py_DECREF( tmp_class_creation_1__class );
    tmp_class_creation_1__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__bases );
    Py_DECREF( tmp_class_creation_1__bases );
    tmp_class_creation_1__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__class_dict );
    Py_DECREF( tmp_class_creation_1__class_dict );
    tmp_class_creation_1__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_1__metaclass );
    Py_DECREF( tmp_class_creation_1__metaclass );
    tmp_class_creation_1__metaclass = NULL;

    tmp_assign_source_18 = MAKE_FUNCTION_decorator$$$function_2_get_init(  );
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_get_init, tmp_assign_source_18 );
    branch_end_1:;
    tmp_source_name_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_collections );

    if (unlikely( tmp_source_name_2 == NULL ))
    {
        tmp_source_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_collections );
    }

    if ( tmp_source_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "collections" );
        exception_tb = NULL;

        exception_lineno = 71;
        goto frame_exception_exit_1;
    }

    tmp_called_name_2 = LOOKUP_ATTRIBUTE( tmp_source_name_2, const_str_plain_namedtuple );
    if ( tmp_called_name_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 71;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 72;
    tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2( tmp_called_name_2, &PyTuple_GET_ITEM( const_tuple_638c0fe1a24e7599b856024c9965ad58_tuple, 0 ) );

    Py_DECREF( tmp_called_name_2 );
    if ( tmp_assign_source_19 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 72;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_ArgSpec, tmp_assign_source_19 );
    tmp_assign_source_20 = MAKE_FUNCTION_decorator$$$function_3_getargspec(  );
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_getargspec, tmp_assign_source_20 );
    tmp_source_name_3 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_re );

    if (unlikely( tmp_source_name_3 == NULL ))
    {
        tmp_source_name_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_re );
    }

    if ( tmp_source_name_3 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "re" );
        exception_tb = NULL;

        exception_lineno = 80;
        goto frame_exception_exit_1;
    }

    tmp_called_name_3 = LOOKUP_ATTRIBUTE( tmp_source_name_3, const_str_plain_compile );
    if ( tmp_called_name_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 80;
    tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_3, &PyTuple_GET_ITEM( const_tuple_str_digest_b5adfd3e93c63c1708fdd6cd15209b19_tuple, 0 ) );

    Py_DECREF( tmp_called_name_3 );
    if ( tmp_assign_source_21 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 80;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_DEF, tmp_assign_source_21 );
    tmp_assign_source_22 = PyTuple_New( 1 );
    tmp_tuple_element_2 = LOOKUP_BUILTIN( const_str_plain_object );
    assert( tmp_tuple_element_2 != NULL );
    Py_INCREF( tmp_tuple_element_2 );
    PyTuple_SET_ITEM( tmp_assign_source_22, 0, tmp_tuple_element_2 );
    assert( tmp_class_creation_2__bases == NULL );
    tmp_class_creation_2__bases = tmp_assign_source_22;

    // Tried code:
    tmp_assign_source_23 = impl_decorator$$$class_2_FunctionMaker( NULL );
    if ( tmp_assign_source_23 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_2__class_dict == NULL );
    tmp_class_creation_2__class_dict = tmp_assign_source_23;

    tmp_compare_left_3 = const_str_plain___metaclass__;
    tmp_compare_right_3 = tmp_class_creation_2__class_dict;

    tmp_cmp_In_2 = PySequence_Contains( tmp_compare_right_3, tmp_compare_left_3 );
    assert( !(tmp_cmp_In_2 == -1) );
    if ( tmp_cmp_In_2 == 1 )
    {
        goto condexpr_true_2;
    }
    else
    {
        goto condexpr_false_2;
    }
    condexpr_true_2:;
    tmp_dict_name_2 = tmp_class_creation_2__class_dict;

    tmp_key_name_2 = const_str_plain___metaclass__;
    tmp_assign_source_24 = DICT_GET_ITEM( tmp_dict_name_2, tmp_key_name_2 );
    if ( tmp_assign_source_24 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto try_except_handler_2;
    }
    goto condexpr_end_2;
    condexpr_false_2:;
    tmp_bases_name_2 = tmp_class_creation_2__bases;

    tmp_assign_source_24 = SELECT_METACLASS( tmp_bases_name_2, GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_2:;
    assert( tmp_class_creation_2__metaclass == NULL );
    tmp_class_creation_2__metaclass = tmp_assign_source_24;

    tmp_called_name_4 = tmp_class_creation_2__metaclass;

    tmp_args_element_name_4 = const_str_plain_FunctionMaker;
    tmp_args_element_name_5 = tmp_class_creation_2__bases;

    tmp_args_element_name_6 = tmp_class_creation_2__class_dict;

    frame_module->f_lineno = 84;
    {
        PyObject *call_args[] = { tmp_args_element_name_4, tmp_args_element_name_5, tmp_args_element_name_6 };
        tmp_assign_source_25 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_4, call_args );
    }

    if ( tmp_assign_source_25 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 84;
        goto try_except_handler_2;
    }
    assert( tmp_class_creation_2__class == NULL );
    tmp_class_creation_2__class = tmp_assign_source_25;

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

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    Py_XDECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    tmp_assign_source_26 = tmp_class_creation_2__class;

    UPDATE_STRING_DICT0( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_FunctionMaker, tmp_assign_source_26 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class );
    Py_DECREF( tmp_class_creation_2__class );
    tmp_class_creation_2__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__bases );
    Py_DECREF( tmp_class_creation_2__bases );
    tmp_class_creation_2__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__class_dict );
    Py_DECREF( tmp_class_creation_2__class_dict );
    tmp_class_creation_2__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_2__metaclass );
    Py_DECREF( tmp_class_creation_2__metaclass );
    tmp_class_creation_2__metaclass = NULL;

    tmp_assign_source_27 = MAKE_FUNCTION_decorator$$$function_4_decorate(  );
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_decorate, tmp_assign_source_27 );
    tmp_defaults_1 = const_tuple_none_tuple;
    tmp_assign_source_28 = MAKE_FUNCTION_decorator$$$function_5_decorator( INCREASE_REFCOUNT( tmp_defaults_1 ) );
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_decorator, tmp_assign_source_28 );
    // Tried code:
    tmp_import_globals_8 = ((PyModuleObject *)module_decorator)->md_dict;
    frame_module->f_lineno = 267;
    tmp_import_name_from_2 = IMPORT_MODULE( const_str_plain_contextlib, tmp_import_globals_8, tmp_import_globals_8, const_tuple_str_plain__GeneratorContextManager_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto try_except_handler_3;
    }
    tmp_assign_source_29 = IMPORT_NAME( tmp_import_name_from_2, const_str_plain__GeneratorContextManager );
    Py_DECREF( tmp_import_name_from_2 );
    if ( tmp_assign_source_29 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 267;
        goto try_except_handler_3;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain__GeneratorContextManager, tmp_assign_source_29 );
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    // Preserve existing published exception.
    PRESERVE_FRAME_EXCEPTION( frame_module );
    if ( exception_keeper_tb_3 == NULL )
    {
        exception_keeper_tb_3 = MAKE_TRACEBACK( frame_module, exception_keeper_lineno_3 );
    }
    else if ( exception_keeper_lineno_3 != -1 )
    {
        exception_keeper_tb_3 = ADD_TRACEBACK( exception_keeper_tb_3, frame_module, exception_keeper_lineno_3 );
    }

    NORMALIZE_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    PUBLISH_EXCEPTION( &exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3 );
    tmp_compare_left_4 = PyThreadState_GET()->exc_type;
    tmp_compare_right_4 = PyExc_ImportError;
    tmp_exc_match_exception_match_1 = EXCEPTION_MATCH_BOOL( tmp_compare_left_4, tmp_compare_right_4 );
    if ( tmp_exc_match_exception_match_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 268;
        goto frame_exception_exit_1;
    }
    if ( tmp_exc_match_exception_match_1 == 1 )
    {
        goto branch_yes_2;
    }
    else
    {
        goto branch_no_2;
    }
    branch_yes_2:;
    tmp_import_globals_9 = ((PyModuleObject *)module_decorator)->md_dict;
    frame_module->f_lineno = 269;
    tmp_import_name_from_3 = IMPORT_MODULE( const_str_plain_contextlib, tmp_import_globals_9, tmp_import_globals_9, const_tuple_str_plain_GeneratorContextManager_tuple, const_int_neg_1 );
    if ( tmp_import_name_from_3 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_30 = IMPORT_NAME( tmp_import_name_from_3, const_str_plain_GeneratorContextManager );
    Py_DECREF( tmp_import_name_from_3 );
    if ( tmp_assign_source_30 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 269;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain__GeneratorContextManager, tmp_assign_source_30 );
    goto branch_end_2;
    branch_no_2:;
    RERAISE_EXCEPTION( &exception_type, &exception_value, &exception_tb );
    if (exception_tb && exception_tb->tb_frame == frame_module) frame_module->f_lineno = exception_tb->tb_lineno;
    goto frame_exception_exit_1;
    branch_end_2:;
    goto try_end_3;
    // exception handler codes exits in all cases
    NUITKA_CANNOT_GET_HERE( decorator );
    return MOD_RETURN_VALUE( NULL );
    // End of try:
    try_end_3:;
    // Tried code:
    tmp_assign_source_31 = PyTuple_New( 1 );
    tmp_tuple_element_3 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain__GeneratorContextManager );

    if (unlikely( tmp_tuple_element_3 == NULL ))
    {
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__GeneratorContextManager );
    }

    if ( tmp_tuple_element_3 == NULL )
    {
        Py_DECREF( tmp_assign_source_31 );
        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_GeneratorContextManager" );
        exception_tb = NULL;

        exception_lineno = 272;
        goto try_except_handler_4;
    }

    Py_INCREF( tmp_tuple_element_3 );
    PyTuple_SET_ITEM( tmp_assign_source_31, 0, tmp_tuple_element_3 );
    assert( tmp_class_creation_3__bases == NULL );
    tmp_class_creation_3__bases = tmp_assign_source_31;

    tmp_assign_source_32 = impl_decorator$$$class_3_ContextManager( NULL );
    assert( tmp_assign_source_32 != NULL );
    assert( tmp_class_creation_3__class_dict == NULL );
    tmp_class_creation_3__class_dict = tmp_assign_source_32;

    tmp_compare_left_5 = const_str_plain___metaclass__;
    tmp_compare_right_5 = tmp_class_creation_3__class_dict;

    tmp_cmp_In_3 = PySequence_Contains( tmp_compare_right_5, tmp_compare_left_5 );
    assert( !(tmp_cmp_In_3 == -1) );
    if ( tmp_cmp_In_3 == 1 )
    {
        goto condexpr_true_3;
    }
    else
    {
        goto condexpr_false_3;
    }
    condexpr_true_3:;
    tmp_dict_name_3 = tmp_class_creation_3__class_dict;

    tmp_key_name_3 = const_str_plain___metaclass__;
    tmp_assign_source_33 = DICT_GET_ITEM( tmp_dict_name_3, tmp_key_name_3 );
    if ( tmp_assign_source_33 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_4;
    }
    goto condexpr_end_3;
    condexpr_false_3:;
    tmp_bases_name_3 = tmp_class_creation_3__bases;

    tmp_assign_source_33 = SELECT_METACLASS( tmp_bases_name_3, GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain___metaclass__ ) );
    condexpr_end_3:;
    assert( tmp_class_creation_3__metaclass == NULL );
    tmp_class_creation_3__metaclass = tmp_assign_source_33;

    tmp_called_name_5 = tmp_class_creation_3__metaclass;

    tmp_args_element_name_7 = const_str_plain_ContextManager;
    tmp_args_element_name_8 = tmp_class_creation_3__bases;

    tmp_args_element_name_9 = tmp_class_creation_3__class_dict;

    frame_module->f_lineno = 272;
    {
        PyObject *call_args[] = { tmp_args_element_name_7, tmp_args_element_name_8, tmp_args_element_name_9 };
        tmp_assign_source_34 = CALL_FUNCTION_WITH_ARGS3( tmp_called_name_5, call_args );
    }

    if ( tmp_assign_source_34 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 272;
        goto try_except_handler_4;
    }
    assert( tmp_class_creation_3__class == NULL );
    tmp_class_creation_3__class = tmp_assign_source_34;

    goto try_end_4;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = -1;

    Py_XDECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    Py_XDECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    Py_XDECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    tmp_assign_source_35 = tmp_class_creation_3__class;

    UPDATE_STRING_DICT0( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_ContextManager, tmp_assign_source_35 );
    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class );
    Py_DECREF( tmp_class_creation_3__class );
    tmp_class_creation_3__class = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__bases );
    Py_DECREF( tmp_class_creation_3__bases );
    tmp_class_creation_3__bases = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__class_dict );
    Py_DECREF( tmp_class_creation_3__class_dict );
    tmp_class_creation_3__class_dict = NULL;

    CHECK_OBJECT( (PyObject *)tmp_class_creation_3__metaclass );
    Py_DECREF( tmp_class_creation_3__metaclass );
    tmp_class_creation_3__metaclass = NULL;

    tmp_called_name_6 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_getfullargspec );

    if (unlikely( tmp_called_name_6 == NULL ))
    {
        tmp_called_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_getfullargspec );
    }

    if ( tmp_called_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "getfullargspec" );
        exception_tb = NULL;

        exception_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_source_name_4 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain__GeneratorContextManager );

    if (unlikely( tmp_source_name_4 == NULL ))
    {
        tmp_source_name_4 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain__GeneratorContextManager );
    }

    if ( tmp_source_name_4 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "_GeneratorContextManager" );
        exception_tb = NULL;

        exception_lineno = 279;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_10 = LOOKUP_ATTRIBUTE( tmp_source_name_4, const_str_plain___init__ );
    if ( tmp_args_element_name_10 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    frame_module->f_lineno = 279;
    {
        PyObject *call_args[] = { tmp_args_element_name_10 };
        tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_6, call_args );
    }

    Py_DECREF( tmp_args_element_name_10 );
    if ( tmp_assign_source_36 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 279;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_init, tmp_assign_source_36 );
    tmp_source_name_5 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_init );

    if (unlikely( tmp_source_name_5 == NULL ))
    {
        tmp_source_name_5 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_init );
    }

    if ( tmp_source_name_5 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "init" );
        exception_tb = NULL;

        exception_lineno = 280;
        goto frame_exception_exit_1;
    }

    tmp_len_arg_1 = LOOKUP_ATTRIBUTE( tmp_source_name_5, const_str_plain_args );
    if ( tmp_len_arg_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    tmp_assign_source_37 = BUILTIN_LEN( tmp_len_arg_1 );
    Py_DECREF( tmp_len_arg_1 );
    if ( tmp_assign_source_37 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 280;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_n_args, tmp_assign_source_37 );
    tmp_compexpr_left_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_n_args );

    if (unlikely( tmp_compexpr_left_1 == NULL ))
    {
        tmp_compexpr_left_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_n_args );
    }

    if ( tmp_compexpr_left_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "n_args" );
        exception_tb = NULL;

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_1 = const_int_pos_2;
    tmp_and_left_value_1 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_1, tmp_compexpr_right_1 );
    if ( tmp_and_left_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_1 = CHECK_IF_TRUE( tmp_and_left_value_1 );
    if ( tmp_and_left_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_1 );

        exception_lineno = 281;
        goto frame_exception_exit_1;
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
    tmp_source_name_6 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_init );

    if (unlikely( tmp_source_name_6 == NULL ))
    {
        tmp_source_name_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_init );
    }

    if ( tmp_source_name_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "init" );
        exception_tb = NULL;

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }

    tmp_operand_name_1 = LOOKUP_ATTRIBUTE( tmp_source_name_6, const_str_plain_varargs );
    if ( tmp_operand_name_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    tmp_and_right_value_1 = UNARY_OPERATION( UNARY_NOT, tmp_operand_name_1 );
    Py_DECREF( tmp_operand_name_1 );
    if ( tmp_and_right_value_1 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    Py_INCREF( tmp_and_right_value_1 );
    tmp_cond_value_1 = tmp_and_right_value_1;
    goto and_end_1;
    and_left_1:;
    tmp_cond_value_1 = tmp_and_left_value_1;
    and_end_1:;
    tmp_cond_truth_1 = CHECK_IF_TRUE( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_1 );

        exception_lineno = 281;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_1 );
    if ( tmp_cond_truth_1 == 1 )
    {
        goto branch_yes_3;
    }
    else
    {
        goto branch_no_3;
    }
    branch_yes_3:;
    tmp_assign_source_38 = MAKE_FUNCTION_decorator$$$function_6___init__(  );
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain___init__, tmp_assign_source_38 );
    tmp_assattr_name_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain___init__ );

    if (unlikely( tmp_assattr_name_1 == NULL ))
    {
        tmp_assattr_name_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___init__ );
    }

    if ( tmp_assattr_name_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__init__" );
        exception_tb = NULL;

        exception_lineno = 284;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_1 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_ContextManager );

    if (unlikely( tmp_assattr_target_1 == NULL ))
    {
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContextManager );
    }

    if ( tmp_assattr_target_1 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ContextManager" );
        exception_tb = NULL;

        exception_lineno = 284;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_1, const_str_plain___init__, tmp_assattr_name_1 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 284;
        goto frame_exception_exit_1;
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_compexpr_left_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_n_args );

    if (unlikely( tmp_compexpr_left_2 == NULL ))
    {
        tmp_compexpr_left_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_n_args );
    }

    if ( tmp_compexpr_left_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "n_args" );
        exception_tb = NULL;

        exception_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_compexpr_right_2 = const_int_pos_2;
    tmp_and_left_value_2 = RICH_COMPARE_EQ_NORECURSE( tmp_compexpr_left_2, tmp_compexpr_right_2 );
    if ( tmp_and_left_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_and_left_truth_2 = CHECK_IF_TRUE( tmp_and_left_value_2 );
    if ( tmp_and_left_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_and_left_value_2 );

        exception_lineno = 285;
        goto frame_exception_exit_1;
    }
    if ( tmp_and_left_truth_2 == 1 )
    {
        goto and_right_2;
    }
    else
    {
        goto and_left_2;
    }
    and_right_2:;
    Py_DECREF( tmp_and_left_value_2 );
    tmp_source_name_7 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_init );

    if (unlikely( tmp_source_name_7 == NULL ))
    {
        tmp_source_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_init );
    }

    if ( tmp_source_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "init" );
        exception_tb = NULL;

        exception_lineno = 285;
        goto frame_exception_exit_1;
    }

    tmp_and_right_value_2 = LOOKUP_ATTRIBUTE( tmp_source_name_7, const_str_plain_varargs );
    if ( tmp_and_right_value_2 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 285;
        goto frame_exception_exit_1;
    }
    tmp_cond_value_2 = tmp_and_right_value_2;
    goto and_end_2;
    and_left_2:;
    tmp_cond_value_2 = tmp_and_left_value_2;
    and_end_2:;
    tmp_cond_truth_2 = CHECK_IF_TRUE( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );
        Py_DECREF( tmp_cond_value_2 );

        exception_lineno = 285;
        goto frame_exception_exit_1;
    }
    Py_DECREF( tmp_cond_value_2 );
    if ( tmp_cond_truth_2 == 1 )
    {
        goto branch_no_4;
    }
    else
    {
        goto branch_yes_4;
    }
    branch_yes_4:;
    tmp_compare_left_6 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_n_args );

    if (unlikely( tmp_compare_left_6 == NULL ))
    {
        tmp_compare_left_6 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_n_args );
    }

    if ( tmp_compare_left_6 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "n_args" );
        exception_tb = NULL;

        exception_lineno = 287;
        goto frame_exception_exit_1;
    }

    tmp_compare_right_6 = const_int_pos_4;
    tmp_cmp_Eq_1 = RICH_COMPARE_BOOL_EQ_NORECURSE( tmp_compare_left_6, tmp_compare_right_6 );
    if ( tmp_cmp_Eq_1 == -1 )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 287;
        goto frame_exception_exit_1;
    }
    if ( tmp_cmp_Eq_1 == 1 )
    {
        goto branch_yes_5;
    }
    else
    {
        goto branch_no_5;
    }
    branch_yes_5:;
    tmp_assign_source_39 = MAKE_FUNCTION_decorator$$$function_7___init__(  );
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain___init__, tmp_assign_source_39 );
    tmp_assattr_name_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain___init__ );

    if (unlikely( tmp_assattr_name_2 == NULL ))
    {
        tmp_assattr_name_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain___init__ );
    }

    if ( tmp_assattr_name_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "__init__" );
        exception_tb = NULL;

        exception_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_assattr_target_2 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_ContextManager );

    if (unlikely( tmp_assattr_target_2 == NULL ))
    {
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContextManager );
    }

    if ( tmp_assattr_target_2 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ContextManager" );
        exception_tb = NULL;

        exception_lineno = 290;
        goto frame_exception_exit_1;
    }

    tmp_result = SET_ATTRIBUTE( tmp_assattr_target_2, const_str_plain___init__, tmp_assattr_name_2 );
    if ( tmp_result == false )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 290;
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    branch_no_4:;
    branch_end_3:;
    tmp_called_name_7 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_decorator );

    if (unlikely( tmp_called_name_7 == NULL ))
    {
        tmp_called_name_7 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_decorator );
    }

    if ( tmp_called_name_7 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "decorator" );
        exception_tb = NULL;

        exception_lineno = 292;
        goto frame_exception_exit_1;
    }

    tmp_args_element_name_11 = GET_STRING_DICT_VALUE( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_ContextManager );

    if (unlikely( tmp_args_element_name_11 == NULL ))
    {
        tmp_args_element_name_11 = GET_STRING_DICT_VALUE( dict_builtin, (Nuitka_StringObject *)const_str_plain_ContextManager );
    }

    if ( tmp_args_element_name_11 == NULL )
    {

        exception_type = PyExc_NameError;
        Py_INCREF( exception_type );
        exception_value = PyString_FromFormat( "name '%s' is not defined", "ContextManager" );
        exception_tb = NULL;

        exception_lineno = 292;
        goto frame_exception_exit_1;
    }

    frame_module->f_lineno = 292;
    {
        PyObject *call_args[] = { tmp_args_element_name_11 };
        tmp_assign_source_40 = CALL_FUNCTION_WITH_ARGS1( tmp_called_name_7, call_args );
    }

    if ( tmp_assign_source_40 == NULL )
    {
        assert( ERROR_OCCURRED() );

        FETCH_ERROR_OCCURRED( &exception_type, &exception_value, &exception_tb );


        exception_lineno = 292;
        goto frame_exception_exit_1;
    }
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_contextmanager, tmp_assign_source_40 );

    // Restore frame exception if necessary.
#if 1
    RESTORE_FRAME_EXCEPTION( frame_module );
#endif
    popFrameStack();

    assertFrameObject( frame_module );
    Py_DECREF( frame_module );

    goto frame_no_exception_1;
    frame_exception_exit_1:;
#if 1
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
    tmp_assign_source_41 = MAKE_FUNCTION_decorator$$$function_8_append(  );
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_append, tmp_assign_source_41 );
    tmp_assign_source_42 = MAKE_FUNCTION_decorator$$$function_9_dispatch_on(  );
    UPDATE_STRING_DICT1( moduledict_decorator, (Nuitka_StringObject *)const_str_plain_dispatch_on, tmp_assign_source_42 );

    return MOD_RETURN_VALUE( module_decorator );
    module_exception_exit:
    RESTORE_ERROR_OCCURRED( exception_type, exception_value, exception_tb );
    return MOD_RETURN_VALUE( NULL );
}
