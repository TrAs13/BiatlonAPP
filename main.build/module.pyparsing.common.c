/* Generated code for Python module 'pyparsing.common'
 * created by Nuitka version 1.5.7
 *
 * This code is in part copyright 2022 Kay Hayen.
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

#include "nuitka/prelude.h"

#include "nuitka/unfreezing.h"

#include "__helpers.h"

/* The "module_pyparsing$common" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_pyparsing$common;
PyDictObject *moduledict_pyparsing$common;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[201];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[201];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("pyparsing.common"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 201; i++) {
            mod_consts_hash[i] = DEEP_HASH(mod_consts[i]);
        }
#endif
    }
}

// We want to be able to initialize the "__main__" constants in any case.
#if 0
void createMainModuleConstants(void) {
    createModuleConstants();
}
#endif

/* Function to verify module private constants for non-corruption. */
#ifndef __NUITKA_NO_ASSERT__
void checkModuleConstants_pyparsing$common(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 201; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_0bda72fc32f43eb3fb6eddc29ab62d84;
static PyCodeObject *codeobj_ab579572a461ddaa424bded274d2bd75;
static PyCodeObject *codeobj_e7b6453059af3935814e718706d66efd;
static PyCodeObject *codeobj_b33c39acd3d63556d5bfe46e1c822136;
static PyCodeObject *codeobj_23cbe09eed8339392906b5696dddf6a2;
static PyCodeObject *codeobj_700a9d50803f166bedd13cb83d68d82c;
static PyCodeObject *codeobj_f92cac0e0f59f131f4987b06d5311b0d;
static PyCodeObject *codeobj_71382db6633791defad1cacaa1482037;
static PyCodeObject *codeobj_e14c81f4ded42ed03994fef8baa258ff;
static PyCodeObject *codeobj_d01983d210a615b2a635e113e4d6049c;
static PyCodeObject *codeobj_bf2efeb6445483bd454de993d56160f6;
static PyCodeObject *codeobj_171df5f0ec011f226437c145d1c2a58d;
static PyCodeObject *codeobj_30cbb8810b7c0dc64f2cd5e9d57fc160;

static void createModuleCodeObjects(void) {
    module_filename_obj = mod_consts[28]; CHECK_OBJECT(module_filename_obj);
    codeobj_0bda72fc32f43eb3fb6eddc29ab62d84 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[8], mod_consts[8], mod_consts[188], NULL, 1, 0, 0);
    codeobj_ab579572a461ddaa424bded274d2bd75 = MAKE_CODE_OBJECT(module_filename_obj, 237, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[69], mod_consts[69], mod_consts[189], NULL, 1, 0, 0);
    codeobj_e7b6453059af3935814e718706d66efd = MAKE_CODE_OBJECT(module_filename_obj, 356, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[69], mod_consts[69], mod_consts[189], NULL, 1, 0, 0);
    codeobj_b33c39acd3d63556d5bfe46e1c822136 = MAKE_CODE_OBJECT(module_filename_obj, 359, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[69], mod_consts[69], mod_consts[189], NULL, 1, 0, 0);
    codeobj_23cbe09eed8339392906b5696dddf6a2 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[69], mod_consts[69], mod_consts[190], NULL, 1, 0, 0);
    codeobj_700a9d50803f166bedd13cb83d68d82c = MAKE_CODE_OBJECT(module_filename_obj, 422, CO_NEWLOCALS, mod_consts[191], mod_consts[191], mod_consts[192], NULL, 1, 0, 0);
    codeobj_f92cac0e0f59f131f4987b06d5311b0d = MAKE_CODE_OBJECT(module_filename_obj, 1, 0, mod_consts[193], mod_consts[193], NULL, NULL, 0, 0, 0);
    codeobj_71382db6633791defad1cacaa1482037 = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[118], mod_consts[118], mod_consts[194], NULL, 1, 0, 0);
    codeobj_e14c81f4ded42ed03994fef8baa258ff = MAKE_CODE_OBJECT(module_filename_obj, 280, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[121], mod_consts[121], mod_consts[194], NULL, 1, 0, 0);
    codeobj_d01983d210a615b2a635e113e4d6049c = MAKE_CODE_OBJECT(module_filename_obj, 298, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[10], mod_consts[10], mod_consts[195], mod_consts[196], 3, 0, 0);
    codeobj_bf2efeb6445483bd454de993d56160f6 = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[10], mod_consts[10], mod_consts[197], mod_consts[196], 3, 0, 0);
    codeobj_171df5f0ec011f226437c145d1c2a58d = MAKE_CODE_OBJECT(module_filename_obj, 8, 0, mod_consts[4], mod_consts[4], mod_consts[198], NULL, 0, 0, 0);
    codeobj_30cbb8810b7c0dc64f2cd5e9d57fc160 = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[136], mod_consts[136], mod_consts[199], NULL, 3, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_pyparsing$common$$$function__2_lambda$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__1_lambda();


static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__2_lambda();


static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__3_convert_to_date(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__3_convert_to_date$$$function__1_cvt_fn(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__4_convert_to_datetime(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__4_convert_to_datetime$$$function__1_cvt_fn(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__5_strip_html_tags(PyObject *annotations);


static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__6_lambda();


static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__7_lambda();


// The module function definitions.
static PyObject *impl_pyparsing$common$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tt = python_pars[0];
    struct Nuitka_FrameObject *frame_23cbe09eed8339392906b5696dddf6a2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_23cbe09eed8339392906b5696dddf6a2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_23cbe09eed8339392906b5696dddf6a2)) {
        Py_XDECREF(cache_frame_23cbe09eed8339392906b5696dddf6a2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_23cbe09eed8339392906b5696dddf6a2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_23cbe09eed8339392906b5696dddf6a2 = MAKE_FUNCTION_FRAME(codeobj_23cbe09eed8339392906b5696dddf6a2, module_pyparsing$common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_23cbe09eed8339392906b5696dddf6a2->m_type_description == NULL);
    frame_23cbe09eed8339392906b5696dddf6a2 = cache_frame_23cbe09eed8339392906b5696dddf6a2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_23cbe09eed8339392906b5696dddf6a2);
    assert(Py_REFCNT(frame_23cbe09eed8339392906b5696dddf6a2) == 2);

    // Framed code:
    {
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_tt);
        tmp_expression_value_1 = par_tt;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tt);
        tmp_expression_value_2 = par_tt;
        tmp_subscript_value_2 = mod_consts[1];
        tmp_truediv_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, -1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 185;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_23cbe09eed8339392906b5696dddf6a2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_23cbe09eed8339392906b5696dddf6a2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_23cbe09eed8339392906b5696dddf6a2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_23cbe09eed8339392906b5696dddf6a2,
        type_description_1,
        par_tt
    );


    // Release cached frame if used for exception.
    if (frame_23cbe09eed8339392906b5696dddf6a2 == cache_frame_23cbe09eed8339392906b5696dddf6a2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_23cbe09eed8339392906b5696dddf6a2);
        cache_frame_23cbe09eed8339392906b5696dddf6a2 = NULL;
    }

    assertFrameObject(frame_23cbe09eed8339392906b5696dddf6a2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_tt);
    Py_DECREF(par_tt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tt);
    Py_DECREF(par_tt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$common$$$function__2_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_ab579572a461ddaa424bded274d2bd75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ab579572a461ddaa424bded274d2bd75 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ab579572a461ddaa424bded274d2bd75)) {
        Py_XDECREF(cache_frame_ab579572a461ddaa424bded274d2bd75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ab579572a461ddaa424bded274d2bd75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ab579572a461ddaa424bded274d2bd75 = MAKE_FUNCTION_FRAME(codeobj_ab579572a461ddaa424bded274d2bd75, module_pyparsing$common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ab579572a461ddaa424bded274d2bd75->m_type_description == NULL);
    frame_ab579572a461ddaa424bded274d2bd75 = cache_frame_ab579572a461ddaa424bded274d2bd75;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ab579572a461ddaa424bded274d2bd75);
    assert(Py_REFCNT(frame_ab579572a461ddaa424bded274d2bd75) == 2);

    // Framed code:
    {
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_t);
            tmp_iter_arg_1 = par_t;
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_1 = "o";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_args_element_value_1 = MAKE_GENERATOR_pyparsing$common$$$function__2_lambda$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_1;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        frame_ab579572a461ddaa424bded274d2bd75->m_frame.f_lineno = 237;
        tmp_cmp_expr_left_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_return_value = RICH_COMPARE_LT_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ab579572a461ddaa424bded274d2bd75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ab579572a461ddaa424bded274d2bd75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ab579572a461ddaa424bded274d2bd75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ab579572a461ddaa424bded274d2bd75,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_ab579572a461ddaa424bded274d2bd75 == cache_frame_ab579572a461ddaa424bded274d2bd75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ab579572a461ddaa424bded274d2bd75);
        cache_frame_ab579572a461ddaa424bded274d2bd75 = NULL;
    }

    assertFrameObject(frame_ab579572a461ddaa424bded274d2bd75);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct pyparsing$common$$$function__2_lambda$$$genexpr__1_genexpr_locals {
    PyObject *var_tt;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *pyparsing$common$$$function__2_lambda$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct pyparsing$common$$$function__2_lambda$$$genexpr__1_genexpr_locals *generator_heap = (struct pyparsing$common$$$function__2_lambda$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_tt = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_0bda72fc32f43eb3fb6eddc29ab62d84, module_pyparsing$common, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 237;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_tt;
            generator_heap->var_tt = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_tt);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        int tmp_truth_name_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 237;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[5]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 237;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_tt);
        tmp_args_element_value_1 = generator_heap->var_tt;
        generator->m_frame->m_frame.f_lineno = 237;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 237;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_call_result_1);

            generator_heap->exception_lineno = 237;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_2 = mod_consts[7];
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 237;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 237;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_tt
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_tt);
    generator_heap->var_tt = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_tt);
    generator_heap->var_tt = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_pyparsing$common$$$function__2_lambda$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        pyparsing$common$$$function__2_lambda$$$genexpr__1_genexpr_context,
        module_pyparsing$common,
        mod_consts[8],
#if PYTHON_VERSION >= 0x350
        mod_consts[9],
#endif
        codeobj_0bda72fc32f43eb3fb6eddc29ab62d84,
        closure,
        1,
        sizeof(struct pyparsing$common$$$function__2_lambda$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_pyparsing$common$$$function__3_convert_to_date(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_fmt = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_cvt_fn = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_fmt;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_pyparsing$common$$$function__3_convert_to_date$$$function__1_cvt_fn(tmp_closure_1);

        assert(var_cvt_fn == NULL);
        var_cvt_fn = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_cvt_fn);
    tmp_return_value = var_cvt_fn;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cvt_fn);
    Py_DECREF(var_cvt_fn);
    var_cvt_fn = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$common$$$function__3_convert_to_date$$$function__1_cvt_fn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ss = python_pars[0];
    PyObject *par_ll = python_pars[1];
    PyObject *par_tt = python_pars[2];
    PyObject *var_ve = NULL;
    struct Nuitka_FrameObject *frame_bf2efeb6445483bd454de993d56160f6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_bf2efeb6445483bd454de993d56160f6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bf2efeb6445483bd454de993d56160f6)) {
        Py_XDECREF(cache_frame_bf2efeb6445483bd454de993d56160f6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bf2efeb6445483bd454de993d56160f6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bf2efeb6445483bd454de993d56160f6 = MAKE_FUNCTION_FRAME(codeobj_bf2efeb6445483bd454de993d56160f6, module_pyparsing$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bf2efeb6445483bd454de993d56160f6->m_type_description == NULL);
    frame_bf2efeb6445483bd454de993d56160f6 = cache_frame_bf2efeb6445483bd454de993d56160f6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bf2efeb6445483bd454de993d56160f6);
    assert(Py_REFCNT(frame_bf2efeb6445483bd454de993d56160f6) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_tt);
        tmp_expression_value_2 = par_tt;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 273;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_bf2efeb6445483bd454de993d56160f6->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_called_instance_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }
        frame_bf2efeb6445483bd454de993d56160f6->m_frame.f_lineno = 273;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[16]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_bf2efeb6445483bd454de993d56160f6, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_bf2efeb6445483bd454de993d56160f6, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_ve == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_ve = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_ss);
        tmp_args_element_value_3 = par_ss;
        CHECK_OBJECT(par_ll);
        tmp_args_element_value_4 = par_ll;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_ve);
        tmp_args_element_value_6 = var_ve;
        frame_bf2efeb6445483bd454de993d56160f6->m_frame.f_lineno = 275;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooc";
            goto try_except_handler_3;
        }
        frame_bf2efeb6445483bd454de993d56160f6->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooc";
            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 275;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooc";
        goto try_except_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ve);
    var_ve = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 272;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_bf2efeb6445483bd454de993d56160f6->m_frame) frame_bf2efeb6445483bd454de993d56160f6->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooc";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bf2efeb6445483bd454de993d56160f6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bf2efeb6445483bd454de993d56160f6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bf2efeb6445483bd454de993d56160f6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bf2efeb6445483bd454de993d56160f6,
        type_description_1,
        par_ss,
        par_ll,
        par_tt,
        var_ve,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_bf2efeb6445483bd454de993d56160f6 == cache_frame_bf2efeb6445483bd454de993d56160f6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bf2efeb6445483bd454de993d56160f6);
        cache_frame_bf2efeb6445483bd454de993d56160f6 = NULL;
    }

    assertFrameObject(frame_bf2efeb6445483bd454de993d56160f6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_ss);
    Py_DECREF(par_ss);
    CHECK_OBJECT(par_ll);
    Py_DECREF(par_ll);
    CHECK_OBJECT(par_tt);
    Py_DECREF(par_tt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ss);
    Py_DECREF(par_ss);
    CHECK_OBJECT(par_ll);
    Py_DECREF(par_ll);
    CHECK_OBJECT(par_tt);
    Py_DECREF(par_tt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$common$$$function__4_convert_to_datetime(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_fmt = Nuitka_Cell_New1(python_pars[0]);
    PyObject *var_cvt_fn = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_fmt;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_pyparsing$common$$$function__4_convert_to_datetime$$$function__1_cvt_fn(tmp_closure_1);

        assert(var_cvt_fn == NULL);
        var_cvt_fn = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_cvt_fn);
    tmp_return_value = var_cvt_fn;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_cvt_fn);
    Py_DECREF(var_cvt_fn);
    var_cvt_fn = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$common$$$function__4_convert_to_datetime$$$function__1_cvt_fn(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_l = python_pars[1];
    PyObject *par_t = python_pars[2];
    PyObject *var_ve = NULL;
    struct Nuitka_FrameObject *frame_d01983d210a615b2a635e113e4d6049c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_d01983d210a615b2a635e113e4d6049c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d01983d210a615b2a635e113e4d6049c)) {
        Py_XDECREF(cache_frame_d01983d210a615b2a635e113e4d6049c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d01983d210a615b2a635e113e4d6049c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d01983d210a615b2a635e113e4d6049c = MAKE_FUNCTION_FRAME(codeobj_d01983d210a615b2a635e113e4d6049c, module_pyparsing$common, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d01983d210a615b2a635e113e4d6049c->m_type_description == NULL);
    frame_d01983d210a615b2a635e113e4d6049c = cache_frame_d01983d210a615b2a635e113e4d6049c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d01983d210a615b2a635e113e4d6049c);
    assert(Py_REFCNT(frame_d01983d210a615b2a635e113e4d6049c) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }
        CHECK_OBJECT(par_t);
        tmp_expression_value_2 = par_t;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 300;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 300;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_d01983d210a615b2a635e113e4d6049c->m_frame.f_lineno = 300;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooooc";
            goto try_except_handler_1;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_1 = exception_type;
    exception_keeper_value_1 = exception_value;
    exception_keeper_tb_1 = exception_tb;
    exception_keeper_lineno_1 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_d01983d210a615b2a635e113e4d6049c, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_d01983d210a615b2a635e113e4d6049c, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooooc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_ve == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_ve = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(par_s);
        tmp_args_element_value_3 = par_s;
        CHECK_OBJECT(par_l);
        tmp_args_element_value_4 = par_l;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooc";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_ve);
        tmp_args_element_value_6 = var_ve;
        frame_d01983d210a615b2a635e113e4d6049c->m_frame.f_lineno = 302;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_6);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooc";
            goto try_except_handler_3;
        }
        frame_d01983d210a615b2a635e113e4d6049c->m_frame.f_lineno = 302;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_raise_type_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_raise_type_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooooc";
            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        exception_lineno = 302;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooc";
        goto try_except_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_2 = exception_type;
    exception_keeper_value_2 = exception_value;
    exception_keeper_tb_2 = exception_tb;
    exception_keeper_lineno_2 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_ve);
    var_ve = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 299;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_d01983d210a615b2a635e113e4d6049c->m_frame) frame_d01983d210a615b2a635e113e4d6049c->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooc";
    goto try_except_handler_2;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_3 = exception_type;
    exception_keeper_value_3 = exception_value;
    exception_keeper_tb_3 = exception_tb;
    exception_keeper_lineno_3 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d01983d210a615b2a635e113e4d6049c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d01983d210a615b2a635e113e4d6049c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d01983d210a615b2a635e113e4d6049c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d01983d210a615b2a635e113e4d6049c,
        type_description_1,
        par_s,
        par_l,
        par_t,
        var_ve,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d01983d210a615b2a635e113e4d6049c == cache_frame_d01983d210a615b2a635e113e4d6049c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d01983d210a615b2a635e113e4d6049c);
        cache_frame_d01983d210a615b2a635e113e4d6049c = NULL;
    }

    assertFrameObject(frame_d01983d210a615b2a635e113e4d6049c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$common$$$function__5_strip_html_tags(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_s = python_pars[0];
    PyObject *par_l = python_pars[1];
    PyObject *par_tokens = python_pars[2];
    struct Nuitka_FrameObject *frame_30cbb8810b7c0dc64f2cd5e9d57fc160;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_30cbb8810b7c0dc64f2cd5e9d57fc160 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_30cbb8810b7c0dc64f2cd5e9d57fc160)) {
        Py_XDECREF(cache_frame_30cbb8810b7c0dc64f2cd5e9d57fc160);

#if _DEBUG_REFCOUNTS
        if (cache_frame_30cbb8810b7c0dc64f2cd5e9d57fc160 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_30cbb8810b7c0dc64f2cd5e9d57fc160 = MAKE_FUNCTION_FRAME(codeobj_30cbb8810b7c0dc64f2cd5e9d57fc160, module_pyparsing$common, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_30cbb8810b7c0dc64f2cd5e9d57fc160->m_type_description == NULL);
    frame_30cbb8810b7c0dc64f2cd5e9d57fc160 = cache_frame_30cbb8810b7c0dc64f2cd5e9d57fc160;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_30cbb8810b7c0dc64f2cd5e9d57fc160);
    assert(Py_REFCNT(frame_30cbb8810b7c0dc64f2cd5e9d57fc160) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tokens);
        tmp_expression_value_3 = par_tokens;
        tmp_subscript_value_1 = mod_consts[0];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_30cbb8810b7c0dc64f2cd5e9d57fc160->m_frame.f_lineno = 337;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_30cbb8810b7c0dc64f2cd5e9d57fc160, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_30cbb8810b7c0dc64f2cd5e9d57fc160->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_30cbb8810b7c0dc64f2cd5e9d57fc160, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_30cbb8810b7c0dc64f2cd5e9d57fc160,
        type_description_1,
        par_s,
        par_l,
        par_tokens
    );


    // Release cached frame if used for exception.
    if (frame_30cbb8810b7c0dc64f2cd5e9d57fc160 == cache_frame_30cbb8810b7c0dc64f2cd5e9d57fc160) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_30cbb8810b7c0dc64f2cd5e9d57fc160);
        cache_frame_30cbb8810b7c0dc64f2cd5e9d57fc160 = NULL;
    }

    assertFrameObject(frame_30cbb8810b7c0dc64f2cd5e9d57fc160);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    CHECK_OBJECT(par_tokens);
    Py_DECREF(par_tokens);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_s);
    Py_DECREF(par_s);
    CHECK_OBJECT(par_l);
    Py_DECREF(par_l);
    CHECK_OBJECT(par_tokens);
    Py_DECREF(par_tokens);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$common$$$function__6_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_e7b6453059af3935814e718706d66efd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e7b6453059af3935814e718706d66efd = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e7b6453059af3935814e718706d66efd)) {
        Py_XDECREF(cache_frame_e7b6453059af3935814e718706d66efd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e7b6453059af3935814e718706d66efd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e7b6453059af3935814e718706d66efd = MAKE_FUNCTION_FRAME(codeobj_e7b6453059af3935814e718706d66efd, module_pyparsing$common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e7b6453059af3935814e718706d66efd->m_type_description == NULL);
    frame_e7b6453059af3935814e718706d66efd = cache_frame_e7b6453059af3935814e718706d66efd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e7b6453059af3935814e718706d66efd);
    assert(Py_REFCNT(frame_e7b6453059af3935814e718706d66efd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[25]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_e7b6453059af3935814e718706d66efd->m_frame.f_lineno = 356;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e7b6453059af3935814e718706d66efd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e7b6453059af3935814e718706d66efd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e7b6453059af3935814e718706d66efd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e7b6453059af3935814e718706d66efd,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_e7b6453059af3935814e718706d66efd == cache_frame_e7b6453059af3935814e718706d66efd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e7b6453059af3935814e718706d66efd);
        cache_frame_e7b6453059af3935814e718706d66efd = NULL;
    }

    assertFrameObject(frame_e7b6453059af3935814e718706d66efd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_pyparsing$common$$$function__7_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_t = python_pars[0];
    struct Nuitka_FrameObject *frame_b33c39acd3d63556d5bfe46e1c822136;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b33c39acd3d63556d5bfe46e1c822136 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b33c39acd3d63556d5bfe46e1c822136)) {
        Py_XDECREF(cache_frame_b33c39acd3d63556d5bfe46e1c822136);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b33c39acd3d63556d5bfe46e1c822136 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b33c39acd3d63556d5bfe46e1c822136 = MAKE_FUNCTION_FRAME(codeobj_b33c39acd3d63556d5bfe46e1c822136, module_pyparsing$common, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b33c39acd3d63556d5bfe46e1c822136->m_type_description == NULL);
    frame_b33c39acd3d63556d5bfe46e1c822136 = cache_frame_b33c39acd3d63556d5bfe46e1c822136;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b33c39acd3d63556d5bfe46e1c822136);
    assert(Py_REFCNT(frame_b33c39acd3d63556d5bfe46e1c822136) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_t);
        tmp_expression_value_1 = par_t;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_b33c39acd3d63556d5bfe46e1c822136->m_frame.f_lineno = 359;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b33c39acd3d63556d5bfe46e1c822136, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b33c39acd3d63556d5bfe46e1c822136->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b33c39acd3d63556d5bfe46e1c822136, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b33c39acd3d63556d5bfe46e1c822136,
        type_description_1,
        par_t
    );


    // Release cached frame if used for exception.
    if (frame_b33c39acd3d63556d5bfe46e1c822136 == cache_frame_b33c39acd3d63556d5bfe46e1c822136) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b33c39acd3d63556d5bfe46e1c822136);
        cache_frame_b33c39acd3d63556d5bfe46e1c822136 = NULL;
    }

    assertFrameObject(frame_b33c39acd3d63556d5bfe46e1c822136);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_t);
    Py_DECREF(par_t);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__1_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$common$$$function__1_lambda,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_23cbe09eed8339392906b5696dddf6a2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__2_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$common$$$function__2_lambda,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_ab579572a461ddaa424bded274d2bd75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__3_convert_to_date(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$common$$$function__3_convert_to_date,
        mod_consts[118],
#if PYTHON_VERSION >= 0x300
        mod_consts[119],
#endif
        codeobj_71382db6633791defad1cacaa1482037,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pyparsing$common,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__3_convert_to_date$$$function__1_cvt_fn(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$common$$$function__3_convert_to_date$$$function__1_cvt_fn,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[11],
#endif
        codeobj_bf2efeb6445483bd454de993d56160f6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$common,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__4_convert_to_datetime(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$common$$$function__4_convert_to_datetime,
        mod_consts[121],
#if PYTHON_VERSION >= 0x300
        mod_consts[122],
#endif
        codeobj_e14c81f4ded42ed03994fef8baa258ff,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pyparsing$common,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__4_convert_to_datetime$$$function__1_cvt_fn(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$common$$$function__4_convert_to_datetime$$$function__1_cvt_fn,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        codeobj_d01983d210a615b2a635e113e4d6049c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$common,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__5_strip_html_tags(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$common$$$function__5_strip_html_tags,
        mod_consts[136],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_30cbb8810b7c0dc64f2cd5e9d57fc160,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_pyparsing$common,
        mod_consts[24],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__6_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$common$$$function__6_lambda,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_e7b6453059af3935814e718706d66efd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_pyparsing$common$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_pyparsing$common$$$function__7_lambda,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_b33c39acd3d63556d5bfe46e1c822136,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_pyparsing$common,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}


extern void _initCompiledCellType();
extern void _initCompiledGeneratorType();
extern void _initCompiledFunctionType();
extern void _initCompiledMethodType();
extern void _initCompiledFrameType();

extern PyTypeObject Nuitka_Loader_Type;

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
// Provide a way to create find a function via its C code and create it back
// in another process, useful for multiprocessing extensions like dill
extern void registerDillPluginTables(char const *module_name, PyMethodDef *reduce_compiled_function, PyMethodDef *create_compiled_function);

function_impl_code functable_pyparsing$common[] = {
    impl_pyparsing$common$$$function__3_convert_to_date$$$function__1_cvt_fn,
    impl_pyparsing$common$$$function__4_convert_to_datetime$$$function__1_cvt_fn,
    impl_pyparsing$common$$$function__1_lambda,
    impl_pyparsing$common$$$function__2_lambda,
    impl_pyparsing$common$$$function__3_convert_to_date,
    impl_pyparsing$common$$$function__4_convert_to_datetime,
    impl_pyparsing$common$$$function__5_strip_html_tags,
    impl_pyparsing$common$$$function__6_lambda,
    impl_pyparsing$common$$$function__7_lambda,
    NULL
};

static char const *_reduce_compiled_function_argnames[] = {
    "func",
    NULL
};

static PyObject *_reduce_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    PyObject *func;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "O:reduce_compiled_function", (char **)_reduce_compiled_function_argnames, &func, NULL)) {
        return NULL;
    }

    if (Nuitka_Function_Check(func) == false) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "not a compiled function");
        return NULL;
    }

    struct Nuitka_FunctionObject *function = (struct Nuitka_FunctionObject *)func;

    function_impl_code *current = functable_pyparsing$common;
    int offset = 0;

    while (*current != NULL) {
        if (*current == function->m_c_code) {
            break;
        }

        current += 1;
        offset += 1;
    }

    if (*current == NULL) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Cannot find compiled function in module.");
        return NULL;
    }

    PyObject *code_object_desc = MAKE_TUPLE_EMPTY(6);
    PyTuple_SET_ITEM0(code_object_desc, 0, function->m_code_object->co_filename);
    PyTuple_SET_ITEM0(code_object_desc, 1, function->m_code_object->co_name);
    PyTuple_SET_ITEM(code_object_desc, 2, PyLong_FromLong(function->m_code_object->co_firstlineno));
    PyTuple_SET_ITEM0(code_object_desc, 3, function->m_code_object->co_varnames);
    PyTuple_SET_ITEM(code_object_desc, 4, PyLong_FromLong(function->m_code_object->co_argcount));
    PyTuple_SET_ITEM(code_object_desc, 5, PyLong_FromLong(function->m_code_object->co_flags));

    CHECK_OBJECT_DEEP(code_object_desc);

    PyObject *result = MAKE_TUPLE_EMPTY(4);
    PyTuple_SET_ITEM(result, 0, PyLong_FromLong(offset));
    PyTuple_SET_ITEM(result, 1, code_object_desc);
    PyTuple_SET_ITEM0(result, 2, function->m_defaults);
    PyTuple_SET_ITEM0(result, 3, function->m_doc != NULL ? function->m_doc : Py_None);

    CHECK_OBJECT_DEEP(result);

    return result;
}

static PyMethodDef _method_def_reduce_compiled_function = {"reduce_compiled_function", (PyCFunction)_reduce_compiled_function,
                                                           METH_VARARGS | METH_KEYWORDS, NULL};

static char const *_create_compiled_function_argnames[] = {
    "func",
    "code_object_desc",
    "defaults",
    "doc",
    NULL
};


static PyObject *_create_compiled_function(PyObject *self, PyObject *args, PyObject *kwds) {
    CHECK_OBJECT_DEEP(args);

    PyObject *func;
    PyObject *code_object_desc;
    PyObject *defaults;
    PyObject *doc;

    if (!PyArg_ParseTupleAndKeywords(args, kwds, "OOOO:create_compiled_function", (char **)_create_compiled_function_argnames, &func, &code_object_desc, &defaults, &doc, NULL)) {
        return NULL;
    }

    int offset = PyLong_AsLong(func);

    if (offset == -1 && ERROR_OCCURRED()) {
        return NULL;
    }

    if (offset > sizeof(functable_pyparsing$common) || offset < 0) {
        SET_CURRENT_EXCEPTION_TYPE0_STR(PyExc_TypeError, "Wrong offset for compiled function.");
        return NULL;
    }

    PyObject *filename = PyTuple_GET_ITEM(code_object_desc, 0);
    PyObject *function_name = PyTuple_GET_ITEM(code_object_desc, 1);
    PyObject *line = PyTuple_GET_ITEM(code_object_desc, 2);
    int line_int = PyLong_AsLong(line);
    assert(!ERROR_OCCURRED());

    PyObject *argnames = PyTuple_GET_ITEM(code_object_desc, 3);
    PyObject *arg_count = PyTuple_GET_ITEM(code_object_desc, 4);
    int arg_count_int = PyLong_AsLong(arg_count);
    assert(!ERROR_OCCURRED());
    PyObject *flags = PyTuple_GET_ITEM(code_object_desc, 5);
    int flags_int = PyLong_AsLong(flags);
    assert(!ERROR_OCCURRED());

    PyCodeObject *code_object = MAKE_CODE_OBJECT(
        filename,
        line_int,
        flags_int,
        function_name,
        function_name, // TODO: function_qualname
        argnames,
        NULL, // freevars
        arg_count_int,
        0, // TODO: Missing kw_only_count
        0 // TODO: Missing pos_only_count
    );

    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        functable_pyparsing$common[offset],
        code_object->co_name,
#if PYTHON_VERSION >= 0x300
        NULL, // TODO: Not transferring qualname yet
#endif
        code_object,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL, // kwdefaults are done on the outside currently
        NULL, // TODO: Not transferring annotations
#endif
        module_pyparsing$common,
        doc,
        NULL,
        0
    );

    return (PyObject *)result;
}

static PyMethodDef _method_def_create_compiled_function = {
    "create_compiled_function",
    (PyCFunction)_create_compiled_function,
    METH_VARARGS | METH_KEYWORDS, NULL
};


#endif

// Internal entry point for module code.
PyObject *modulecode_pyparsing$common(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("pyparsing.common");

    // Store the module for future use.
    module_pyparsing$common = module;

    // Modules can be loaded again in case of errors, avoid the init being done again.
    static bool init_done = false;

    if (init_done == false) {
#if defined(_NUITKA_MODULE) && 0
        // In case of an extension module loaded into a process, we need to call
        // initialization here because that's the first and potentially only time
        // we are going called.

        // Initialize the constant values used.
        _initBuiltinModule();
        createGlobalConstants();

        /* Initialize the compiled types of Nuitka. */
        _initCompiledCellType();
        _initCompiledGeneratorType();
        _initCompiledFunctionType();
        _initCompiledMethodType();
        _initCompiledFrameType();

        _initSlotCompare();
#if PYTHON_VERSION >= 0x270
        _initSlotIterNext();
#endif

        patchTypeComparison();

        // Enable meta path based loader if not already done.
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyparsing.common: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyparsing.common: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("pyparsing.common: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initpyparsing$common\n");

    moduledict_pyparsing$common = MODULE_DICT(module_pyparsing$common);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_pyparsing$common,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_pyparsing$common,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[200]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_pyparsing$common,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_pyparsing$common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_pyparsing$common,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_pyparsing$common);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_pyparsing$common, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_pyparsing$common, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_pyparsing$common, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_pyparsing$common);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_pyparsing$common, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var_v = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_f92cac0e0f59f131f4987b06d5311b0d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *locals_pyparsing$common$$$class__1_pyparsing_common_8 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_171df5f0ec011f226437c145d1c2a58d_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    struct Nuitka_FrameObject *frame_700a9d50803f166bedd13cb83d68d82c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_700a9d50803f166bedd13cb83d68d82c_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[28];
        UPDATE_STRING_DICT0(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_2);
    }
    frame_f92cac0e0f59f131f4987b06d5311b0d = MAKE_MODULE_FRAME(codeobj_f92cac0e0f59f131f4987b06d5311b0d, module_pyparsing$common);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f92cac0e0f59f131f4987b06d5311b0d);
    assert(Py_REFCNT(frame_f92cac0e0f59f131f4987b06d5311b0d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[28];
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[31], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_True;
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[32], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        UPDATE_STRING_DICT0(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_3);
    }
    {
        PyObject *tmp_star_imported_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[34];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_pyparsing$common;
        tmp_locals_arg_value_1 = (PyObject *)moduledict_pyparsing$common;
        tmp_fromlist_value_1 = mod_consts[35];
        tmp_level_value_1 = mod_consts[7];
        frame_f92cac0e0f59f131f4987b06d5311b0d->m_frame.f_lineno = 2;
        tmp_star_imported_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_star_imported_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        tmp_result = IMPORT_MODULE_STAR(module_pyparsing$common, true, tmp_star_imported_1);
        Py_DECREF(tmp_star_imported_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[36];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_pyparsing$common;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[37];
        tmp_level_value_2 = mod_consts[7];
        frame_f92cac0e0f59f131f4987b06d5311b0d->m_frame.f_lineno = 3;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_pyparsing$common,
                mod_consts[38],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[38]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_pyparsing$common,
                mod_consts[39],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[39]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_pyparsing$common,
                mod_consts[40],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[40]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_7);
    }
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
    exception_lineno = 0;

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[13];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_pyparsing$common;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[41];
        tmp_level_value_3 = mod_consts[0];
        frame_f92cac0e0f59f131f4987b06d5311b0d->m_frame.f_lineno = 4;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_pyparsing$common,
                mod_consts[13],
                mod_consts[0]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[13]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_pyparsing$common$$$class__1_pyparsing_common_8 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[42];
        tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[43], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[44];
        tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[27], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[4];
        tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[45], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_171df5f0ec011f226437c145d1c2a58d_2 = MAKE_CLASS_FRAME(codeobj_171df5f0ec011f226437c145d1c2a58d, module_pyparsing$common, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_171df5f0ec011f226437c145d1c2a58d_2);
        assert(Py_REFCNT(frame_171df5f0ec011f226437c145d1c2a58d_2) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_called_value_1 == NULL)) {
                tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_args_element_value_1 == NULL)) {
                tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_args_element_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 154;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[48], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 154;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_args_element_value_2 == NULL)) {
                tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 159;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[50], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 159;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[52]);

            if (unlikely(tmp_args_element_value_3 == NULL)) {
                tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
            }

            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 164;
            tmp_called_instance_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 164;
            tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_1,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[54], 0)
            );

            Py_DECREF(tmp_called_instance_1);
            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
            Py_DECREF(tmp_expression_value_1);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_4 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[48]);

            if (unlikely(tmp_args_element_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_value_3);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[48]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 164;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
            Py_DECREF(tmp_called_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[56], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_called_value_6 == NULL)) {
                tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
            }

            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_args_element_value_5 == NULL)) {
                tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_args_element_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 168;
            tmp_called_instance_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 168;
            tmp_expression_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_2,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[58], 0)
            );

            Py_DECREF(tmp_called_instance_2);
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[55]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_args_element_value_7 == NULL)) {
                tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_args_element_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_8 = mod_consts[59];
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 168;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
                tmp_args_element_value_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
            }

            if (tmp_args_element_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_5);

                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 168;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 168;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[60], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_8;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_9;
            tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_9 == NULL)) {
                tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 173;
            tmp_called_instance_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[62]);

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 173;
            tmp_expression_value_3 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_3,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[63], 0)
            );

            Py_DECREF(tmp_called_instance_3);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_9 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[48]);

            if (unlikely(tmp_args_element_value_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_value_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[48]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_8);

                exception_lineno = 175;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 173;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_9);
            Py_DECREF(tmp_called_value_8);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 173;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[64], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 172;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_4;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_add_expr_left_2;
            PyObject *tmp_add_expr_right_2;
            PyObject *tmp_called_value_10;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_called_value_12;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_11;
            tmp_called_value_11 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[64]);

            if (unlikely(tmp_called_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[64]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 180;
            tmp_expression_value_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[55]);
            Py_DECREF(tmp_expression_value_4);
            if (tmp_called_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_10 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[50]);

            if (unlikely(tmp_args_element_value_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_value_10);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[50]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_10);

                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 180;
            tmp_add_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
            Py_DECREF(tmp_called_value_10);
            if (tmp_add_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 180;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_right_2 = mod_consts[65];
            tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
            Py_DECREF(tmp_add_expr_left_2);
            if (tmp_add_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 181;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_13 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[64]);

            if (unlikely(tmp_called_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_add_expr_left_1);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[64]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 182;
            tmp_expression_value_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[55]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_called_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_11 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[50]);

            if (unlikely(tmp_args_element_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_called_value_12);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[50]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);
                Py_DECREF(tmp_called_value_12);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 182;
            tmp_add_expr_right_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_11);
            Py_DECREF(tmp_called_value_12);
            if (tmp_add_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 182;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 179;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_4,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[66], 0)
            );

            Py_DECREF(tmp_called_instance_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_5;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_value_12;
            tmp_called_instance_5 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[67]);

            if (unlikely(tmp_called_instance_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[67]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 185;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_12 = MAKE_FUNCTION_pyparsing$common$$$function__1_lambda();

            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 185;
            tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[68], tmp_args_element_value_12);
            Py_DECREF(tmp_args_element_value_12);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            Py_DECREF(tmp_call_result_1);
        }
        {
            PyObject *tmp_called_instance_6;
            PyObject *tmp_bitor_expr_left_1;
            PyObject *tmp_bitor_expr_right_1;
            PyObject *tmp_add_expr_left_3;
            PyObject *tmp_add_expr_right_3;
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_add_expr_left_4;
            PyObject *tmp_add_expr_right_4;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_called_value_15;
            tmp_bitor_expr_left_1 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[67]);

            if (unlikely(tmp_bitor_expr_left_1 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[67]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_bitor_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_3 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[64]);

            if (unlikely(tmp_add_expr_left_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[64]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_add_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_value_14 == NULL)) {
                tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_value_15 == NULL)) {
                tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 188;
            tmp_called_instance_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[72]);

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 188;
            tmp_add_expr_left_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[73]);
            Py_DECREF(tmp_called_instance_7);
            if (tmp_add_expr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_right_4 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[67]);

            if (unlikely(tmp_add_expr_right_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_add_expr_left_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[67]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_add_expr_right_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_4);

                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_13 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
            Py_DECREF(tmp_add_expr_left_4);
            if (tmp_args_element_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 188;
            tmp_add_expr_right_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_13);
            Py_DECREF(tmp_args_element_value_13);
            if (tmp_add_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_bitor_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
            Py_DECREF(tmp_add_expr_right_3);
            if (tmp_bitor_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_6 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
            Py_DECREF(tmp_bitor_expr_right_1);
            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 187;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_6,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[74], 0)
            );

            Py_DECREF(tmp_called_instance_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 187;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_16;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_call_result_2;
            PyObject *tmp_args_element_value_14;
            tmp_expression_value_6 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[75]);

            if (unlikely(tmp_expression_value_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[75]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[68]);
            if (tmp_called_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[2]);

            if (unlikely(tmp_args_element_value_14 == NULL)) {
                tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
            }

            if (tmp_args_element_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_16);

                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 191;
            tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_16, tmp_args_element_value_14);
            Py_DECREF(tmp_called_value_16);
            if (tmp_call_result_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            Py_DECREF(tmp_call_result_2);
        }
        {
            PyObject *tmp_called_value_17;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_called_value_18;
            PyObject *tmp_args_element_value_15;
            tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_18 == NULL)) {
                tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 194;
            tmp_called_instance_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[76]);

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 194;
            tmp_expression_value_7 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_8,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[77], 0)
            );

            Py_DECREF(tmp_called_instance_8);
            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[55]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_called_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_15 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[50]);

            if (unlikely(tmp_args_element_value_15 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_value_17);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[50]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_17);

                exception_lineno = 196;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 194;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_17, tmp_args_element_value_15);
            Py_DECREF(tmp_called_value_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 194;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 193;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_19;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_called_value_20;
            PyObject *tmp_args_element_value_16;
            tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_20 == NULL)) {
                tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 201;
            tmp_called_instance_9 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_20, mod_consts[79]);

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 201;
            tmp_expression_value_8 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_9,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[80], 0)
            );

            Py_DECREF(tmp_called_instance_9);
            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[55]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_called_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_16 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[50]);

            if (unlikely(tmp_args_element_value_16 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_value_19);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[50]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_19);

                exception_lineno = 203;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 201;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_19, tmp_args_element_value_16);
            Py_DECREF(tmp_called_value_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 201;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[81], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_10;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_bitor_expr_left_2;
            PyObject *tmp_bitor_expr_right_2;
            PyObject *tmp_bitor_expr_left_3;
            PyObject *tmp_bitor_expr_right_3;
            tmp_bitor_expr_left_3 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[81]);

            if (unlikely(tmp_bitor_expr_left_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[81]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_bitor_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_bitor_expr_right_3 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[78]);

            if (unlikely(tmp_bitor_expr_right_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[78]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_bitor_expr_right_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_bitor_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
            if (tmp_bitor_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_bitor_expr_right_2 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[64]);

            if (unlikely(tmp_bitor_expr_right_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_bitor_expr_left_2);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[64]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_bitor_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_bitor_expr_left_2);

                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_11 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
            Py_DECREF(tmp_bitor_expr_left_2);
            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 209;
            tmp_called_instance_10 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_11,
                mod_consts[82],
                PyTuple_GET_ITEM(mod_consts[83], 0)
            );

            Py_DECREF(tmp_called_instance_11);
            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 209;
            tmp_dictset_value = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[84]);
            Py_DECREF(tmp_called_instance_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[85], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 209;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_21;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_called_value_22;
            PyObject *tmp_args_element_value_17;
            tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_22 == NULL)) {
                tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 213;
            tmp_called_instance_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_22, mod_consts[86]);

            if (tmp_called_instance_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 213;
            tmp_expression_value_9 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_12,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[87], 0)
            );

            Py_DECREF(tmp_called_instance_12);
            if (tmp_expression_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[55]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_called_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_17 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[50]);

            if (unlikely(tmp_args_element_value_17 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_called_value_21);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[50]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_args_element_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_21);

                exception_lineno = 215;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 213;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_17);
            Py_DECREF(tmp_called_value_21);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 213;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 212;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_13;
            PyObject *tmp_called_value_23;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_args_element_value_19;
            tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_called_value_23 == NULL)) {
                tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
            }

            if (tmp_called_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_18 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[89]);

            if (unlikely(tmp_args_element_value_18 == NULL)) {
                tmp_args_element_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
            }

            if (tmp_args_element_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_19 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_args_element_value_19 == NULL)) {
                tmp_args_element_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_args_element_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 219;
            {
                PyObject *call_args[] = {tmp_args_element_value_18, tmp_args_element_value_19};
                tmp_called_instance_13 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_23, call_args);
            }

            if (tmp_called_instance_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 219;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_13,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[91], 0)
            );

            Py_DECREF(tmp_called_instance_13);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 219;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_14;
            PyObject *tmp_called_value_24;
            tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_24 == NULL)) {
                tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 222;
            tmp_called_instance_14 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_24, mod_consts[93]);

            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 222;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_14,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[94], 0)
            );

            Py_DECREF(tmp_called_instance_14);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[95], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 222;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_15;
            PyObject *tmp_called_value_25;
            tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_25 == NULL)) {
                tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 227;
            tmp_called_instance_15 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_25, mod_consts[96]);

            if (tmp_called_instance_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 227;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_15,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[97], 0)
            );

            Py_DECREF(tmp_called_instance_15);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_16;
            PyObject *tmp_add_expr_left_5;
            PyObject *tmp_add_expr_right_5;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_add_expr_left_6;
            PyObject *tmp_add_expr_right_6;
            tmp_add_expr_left_5 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[5]);

            if (unlikely(tmp_add_expr_left_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_add_expr_left_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_6 = mod_consts[98];
            tmp_add_expr_right_6 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[5]);

            if (unlikely(tmp_add_expr_right_6 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_add_expr_right_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_mult_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
            if (tmp_mult_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_mult_expr_right_1 = mod_consts[99];
            tmp_add_expr_right_5 = BINARY_OPERATION_MULT_OBJECT_OBJECT_LONG(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_left_1);
            if (tmp_add_expr_right_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
            Py_DECREF(tmp_add_expr_right_5);
            if (tmp_called_instance_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 228;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_16,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[100], 0)
            );

            Py_DECREF(tmp_called_instance_16);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[101], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_17;
            PyObject *tmp_add_expr_left_7;
            PyObject *tmp_add_expr_right_7;
            PyObject *tmp_add_expr_left_8;
            PyObject *tmp_add_expr_right_8;
            PyObject *tmp_called_value_26;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_add_expr_left_9;
            PyObject *tmp_add_expr_right_9;
            PyObject *tmp_mult_expr_left_2;
            PyObject *tmp_mult_expr_right_2;
            PyObject *tmp_add_expr_left_10;
            PyObject *tmp_add_expr_right_10;
            PyObject *tmp_called_value_27;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_add_expr_left_11;
            PyObject *tmp_add_expr_right_11;
            PyObject *tmp_mult_expr_left_3;
            PyObject *tmp_mult_expr_right_3;
            PyObject *tmp_add_expr_left_12;
            PyObject *tmp_add_expr_right_12;
            tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_value_26 == NULL)) {
                tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_9 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[5]);

            if (unlikely(tmp_add_expr_left_9 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_add_expr_left_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_10 = mod_consts[98];
            tmp_add_expr_right_10 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[5]);

            if (unlikely(tmp_add_expr_right_10 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_add_expr_right_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_mult_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_10, tmp_add_expr_right_10);
            if (tmp_mult_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_mult_expr_right_2 = mod_consts[102];
            tmp_add_expr_right_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_TUPLE(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
            Py_DECREF(tmp_mult_expr_left_2);
            if (tmp_add_expr_right_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_9, tmp_add_expr_right_9);
            Py_DECREF(tmp_add_expr_right_9);
            if (tmp_args_element_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 232;
            tmp_add_expr_left_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_26, tmp_args_element_value_20);
            Py_DECREF(tmp_args_element_value_20);
            if (tmp_add_expr_left_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_right_8 = mod_consts[103];
            tmp_add_expr_left_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
            Py_DECREF(tmp_add_expr_left_8);
            if (tmp_add_expr_left_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_27 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_value_27 == NULL)) {
                tmp_called_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_11 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[5]);

            if (unlikely(tmp_add_expr_left_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_add_expr_left_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_add_expr_left_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_12 = mod_consts[98];
            tmp_add_expr_right_12 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[5]);

            if (unlikely(tmp_add_expr_right_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_add_expr_left_7);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[5]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_add_expr_right_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_mult_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_12, tmp_add_expr_right_12);
            if (tmp_mult_expr_left_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_mult_expr_right_3 = mod_consts[102];
            tmp_add_expr_right_11 = BINARY_OPERATION_MULT_OBJECT_OBJECT_TUPLE(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
            Py_DECREF(tmp_mult_expr_left_3);
            if (tmp_add_expr_right_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_11, tmp_add_expr_right_11);
            Py_DECREF(tmp_add_expr_right_11);
            if (tmp_args_element_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 234;
            tmp_add_expr_right_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_21);
            if (tmp_add_expr_right_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_7);

                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_17 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_7, tmp_add_expr_right_7);
            Py_DECREF(tmp_add_expr_left_7);
            Py_DECREF(tmp_add_expr_right_7);
            if (tmp_called_instance_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 231;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_17,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[104], 0)
            );

            Py_DECREF(tmp_called_instance_17);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[105], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_18;
            PyObject *tmp_call_result_3;
            PyObject *tmp_args_element_value_22;
            tmp_called_instance_18 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[105]);

            if (unlikely(tmp_called_instance_18 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[105]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 236;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_instance_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_22 = MAKE_FUNCTION_pyparsing$common$$$function__2_lambda();

            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 236;
            tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_18, mod_consts[106], tmp_args_element_value_22);
            Py_DECREF(tmp_args_element_value_22);
            if (tmp_call_result_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            Py_DECREF(tmp_call_result_3);
        }
        {
            PyObject *tmp_called_instance_19;
            PyObject *tmp_add_expr_left_13;
            PyObject *tmp_add_expr_right_13;
            tmp_add_expr_left_13 = mod_consts[107];
            tmp_add_expr_right_13 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[95]);

            if (unlikely(tmp_add_expr_right_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[95]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_add_expr_right_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_19 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_13, tmp_add_expr_right_13);
            if (tmp_called_instance_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 239;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_19,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[108], 0)
            );

            Py_DECREF(tmp_called_instance_19);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[109], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_20;
            PyObject *tmp_called_value_28;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_called_instance_21;
            PyObject *tmp_bitor_expr_left_4;
            PyObject *tmp_bitor_expr_right_4;
            PyObject *tmp_bitor_expr_left_5;
            PyObject *tmp_bitor_expr_right_5;
            tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_28 == NULL)) {
                tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
            }

            if (tmp_called_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_bitor_expr_left_5 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[101]);

            if (unlikely(tmp_bitor_expr_left_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[101]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_bitor_expr_left_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_bitor_expr_right_5 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[109]);

            if (unlikely(tmp_bitor_expr_right_5 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[109]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_bitor_expr_right_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_bitor_expr_left_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
            if (tmp_bitor_expr_left_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_bitor_expr_right_4 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[105]);

            if (unlikely(tmp_bitor_expr_right_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_bitor_expr_left_4);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[105]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_bitor_expr_right_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_bitor_expr_left_4);

                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_21 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
            Py_DECREF(tmp_bitor_expr_left_4);
            if (tmp_called_instance_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 241;
            tmp_args_element_value_23 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_21,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[111], 0)
            );

            Py_DECREF(tmp_called_instance_21);
            if (tmp_args_element_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 240;
            tmp_called_instance_20 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_23);
            Py_DECREF(tmp_args_element_value_23);
            if (tmp_called_instance_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 240;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_20,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[111], 0)
            );

            Py_DECREF(tmp_called_instance_20);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[112], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 240;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_22;
            PyObject *tmp_called_value_29;
            tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_29 == NULL)) {
                tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 247;
            tmp_called_instance_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_29, mod_consts[113]);

            if (tmp_called_instance_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 247;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_22,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[114], 0)
            );

            Py_DECREF(tmp_called_instance_22);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[115], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 247;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_30;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_called_value_30 == NULL)) {
                tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_called_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_1 = mod_consts[117];
            tmp_dict_key_1 = mod_consts[15];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_1 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_1);


            tmp_args_element_value_24 = MAKE_FUNCTION_pyparsing$common$$$function__3_convert_to_date(tmp_defaults_1, tmp_annotations_1);

            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 252;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_24);
            Py_DECREF(tmp_args_element_value_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 252;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[118], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 253;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_31;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_called_value_31 == NULL)) {
                tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_called_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_defaults_2 = mod_consts[120];
            tmp_dict_key_2 = mod_consts[15];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            Py_INCREF(tmp_defaults_2);


            tmp_args_element_value_25 = MAKE_FUNCTION_pyparsing$common$$$function__4_convert_to_datetime(tmp_defaults_2, tmp_annotations_2);

            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 279;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_31, tmp_args_element_value_25);
            Py_DECREF(tmp_args_element_value_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 279;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[121], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 280;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_23;
            PyObject *tmp_called_value_32;
            tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_32 == NULL)) {
                tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 306;
            tmp_called_instance_23 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_32, mod_consts[123]);

            if (tmp_called_instance_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 306;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_23,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[124], 0)
            );

            Py_DECREF(tmp_called_instance_23);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[125], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 306;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_24;
            PyObject *tmp_called_value_33;
            tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_33 == NULL)) {
                tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 311;
            tmp_called_instance_24 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_33, mod_consts[126]);

            if (tmp_called_instance_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 311;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_24,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[127], 0)
            );

            Py_DECREF(tmp_called_instance_24);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[128], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 311;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_25;
            PyObject *tmp_called_value_34;
            tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_34 == NULL)) {
                tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 316;
            tmp_called_instance_25 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[129]);

            if (tmp_called_instance_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 316;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_25,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[130], 0)
            );

            Py_DECREF(tmp_called_instance_25);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[131], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 316;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_bitor_expr_left_6;
            PyObject *tmp_bitor_expr_right_6;
            PyObject *tmp_called_instance_26;
            PyObject *tmp_called_instance_27;
            tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[39]);

            if (unlikely(tmp_called_instance_26 == NULL)) {
                tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
            }

            if (tmp_called_instance_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 319;
            tmp_bitor_expr_left_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_26, mod_consts[73]);
            if (tmp_bitor_expr_left_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_called_instance_27 == NULL)) {
                tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_called_instance_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_bitor_expr_left_6);

                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 319;
            tmp_bitor_expr_right_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_27, mod_consts[73]);
            if (tmp_bitor_expr_right_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_bitor_expr_left_6);

                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
            Py_DECREF(tmp_bitor_expr_left_6);
            Py_DECREF(tmp_bitor_expr_right_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 319;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_35;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_called_value_35 == NULL)) {
                tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_called_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_key_3 = mod_consts[132];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[19]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_3 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[133];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[47]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[134];
            tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[135]);

            if (unlikely(tmp_dict_value_3 == NULL)) {
                tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
            }

            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_args_element_value_26 = MAKE_FUNCTION_pyparsing$common$$$function__5_strip_html_tags(tmp_annotations_3);

            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 321;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_26);
            Py_DECREF(tmp_args_element_value_26);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 321;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[136], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_28;
            PyObject *tmp_called_instance_29;
            PyObject *tmp_called_value_36;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_called_value_37;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_add_expr_left_14;
            PyObject *tmp_add_expr_right_14;
            PyObject *tmp_add_expr_left_15;
            PyObject *tmp_add_expr_right_15;
            PyObject *tmp_add_expr_left_16;
            PyObject *tmp_add_expr_right_16;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_called_value_38;
            PyObject *tmp_operand_value_2;
            PyObject *tmp_called_value_39;
            PyObject *tmp_called_value_40;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            PyObject *tmp_called_value_41;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_add_expr_left_17;
            PyObject *tmp_add_expr_right_17;
            PyObject *tmp_called_value_42;
            PyObject *tmp_operand_value_3;
            PyObject *tmp_called_value_43;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_bitor_expr_left_7;
            PyObject *tmp_bitor_expr_right_7;
            PyObject *tmp_called_value_44;
            tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[110]);

            if (unlikely(tmp_called_value_36 == NULL)) {
                tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
            }

            if (tmp_called_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_37 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[138]);

            if (unlikely(tmp_called_value_37 == NULL)) {
                tmp_called_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[138]);
            }

            if (tmp_called_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[139]);

            if (unlikely(tmp_called_value_38 == NULL)) {
                tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
            }

            if (tmp_called_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 342;
            tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_38, mod_consts[140]);

            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_16 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_add_expr_left_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 342;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_called_value_39 == NULL)) {
                tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_called_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_16);

                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 343;
            tmp_operand_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_39);
            if (tmp_operand_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_16);

                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_right_16 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_2);
            Py_DECREF(tmp_operand_value_2);
            if (tmp_add_expr_right_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_16);

                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_16, tmp_add_expr_right_16);
            Py_DECREF(tmp_add_expr_left_16);
            Py_DECREF(tmp_add_expr_right_16);
            if (tmp_add_expr_left_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_40 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_called_value_40 == NULL)) {
                tmp_called_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
            }

            if (tmp_called_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_15);

                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[142]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[142]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_15);

                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_kwargs_value_1 = DICT_COPY(mod_consts[143]);
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 344;
            tmp_add_expr_right_15 = CALL_FUNCTION(tmp_called_value_40, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            Py_DECREF(tmp_kwargs_value_1);
            if (tmp_add_expr_right_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_15);

                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_14 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_15, tmp_add_expr_right_15);
            Py_DECREF(tmp_add_expr_left_15);
            Py_DECREF(tmp_add_expr_right_15);
            if (tmp_add_expr_left_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 344;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_41 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_value_41 == NULL)) {
                tmp_called_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[144]);

            if (unlikely(tmp_called_value_42 == NULL)) {
                tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
            }

            if (tmp_called_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 345;
            tmp_add_expr_left_17 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_42, mod_consts[145]);

            if (tmp_add_expr_left_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_43 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[146]);

            if (unlikely(tmp_called_value_43 == NULL)) {
                tmp_called_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
            }

            if (tmp_called_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);
                Py_DECREF(tmp_add_expr_left_17);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_44 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[141]);

            if (unlikely(tmp_called_value_44 == NULL)) {
                tmp_called_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[141]);
            }

            if (tmp_called_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);
                Py_DECREF(tmp_add_expr_left_17);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 345;
            tmp_bitor_expr_left_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_44);
            if (tmp_bitor_expr_left_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);
                Py_DECREF(tmp_add_expr_left_17);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_bitor_expr_right_7 = mod_consts[147];
            tmp_args_element_value_30 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_7, tmp_bitor_expr_right_7);
            Py_DECREF(tmp_bitor_expr_left_7);
            if (tmp_args_element_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);
                Py_DECREF(tmp_add_expr_left_17);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 345;
            tmp_operand_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_30);
            Py_DECREF(tmp_args_element_value_30);
            if (tmp_operand_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);
                Py_DECREF(tmp_add_expr_left_17);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_right_17 = UNARY_OPERATION(PyNumber_Invert, tmp_operand_value_3);
            Py_DECREF(tmp_operand_value_3);
            if (tmp_add_expr_right_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);
                Py_DECREF(tmp_add_expr_left_17);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_17, tmp_add_expr_right_17);
            Py_DECREF(tmp_add_expr_left_17);
            Py_DECREF(tmp_add_expr_right_17);
            if (tmp_args_element_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 345;
            tmp_add_expr_right_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_29);
            Py_DECREF(tmp_args_element_value_29);
            if (tmp_add_expr_right_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_14);

                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_element_value_28 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
            Py_DECREF(tmp_add_expr_left_14);
            Py_DECREF(tmp_add_expr_right_14);
            if (tmp_args_element_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 341;
            tmp_args_element_value_27 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_37, tmp_args_element_value_28);
            Py_DECREF(tmp_args_element_value_28);
            if (tmp_args_element_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 340;
            tmp_called_instance_29 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_27);
            Py_DECREF(tmp_args_element_value_27);
            if (tmp_called_instance_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 340;
            tmp_called_instance_28 = CALL_METHOD_NO_ARGS(tmp_called_instance_29, mod_consts[84]);
            Py_DECREF(tmp_called_instance_29);
            if (tmp_called_instance_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 340;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_28,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[148], 0)
            );

            Py_DECREF(tmp_called_instance_28);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[149], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_30;
            PyObject *tmp_called_value_45;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_called_value_46;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_bitor_expr_left_8;
            PyObject *tmp_bitor_expr_right_8;
            PyObject *tmp_called_value_47;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_called_value_45 == NULL)) {
                tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_called_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_46 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_called_value_46 == NULL)) {
                tmp_called_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_called_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[150]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[151]);
            if (tmp_called_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 352;
            tmp_bitor_expr_left_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_47);
            Py_DECREF(tmp_called_value_47);
            if (tmp_bitor_expr_left_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_bitor_expr_right_8 = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[149]);

            if (unlikely(tmp_bitor_expr_right_8 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {
                Py_DECREF(tmp_bitor_expr_left_8);
                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[149]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_bitor_expr_right_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_bitor_expr_left_8);

                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_tuple_element_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_8, tmp_bitor_expr_right_8);
            Py_DECREF(tmp_bitor_expr_left_8);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_kwargs_value_2 = DICT_COPY(mod_consts[152]);
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 352;
            tmp_args_element_value_31 = CALL_FUNCTION(tmp_called_value_46, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            Py_DECREF(tmp_kwargs_value_2);
            if (tmp_args_element_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 351;
            tmp_called_instance_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_45, tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_31);
            if (tmp_called_instance_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 351;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_30,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[153], 0)
            );

            Py_DECREF(tmp_called_instance_30);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[154], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_48;
            PyObject *tmp_args_element_value_32;
            PyObject *tmp_called_value_49;
            PyObject *tmp_args_element_value_33;
            tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_called_value_48 == NULL)) {
                tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_called_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_49 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_called_value_49 == NULL)) {
                tmp_called_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_called_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_33 = MAKE_FUNCTION_pyparsing$common$$$function__6_lambda();

            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 356;
            tmp_args_element_value_32 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_49, tmp_args_element_value_33);
            Py_DECREF(tmp_args_element_value_33);
            if (tmp_args_element_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 356;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_48, tmp_args_element_value_32);
            Py_DECREF(tmp_args_element_value_32);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[155], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 356;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_value_50;
            PyObject *tmp_args_element_value_34;
            PyObject *tmp_called_value_51;
            PyObject *tmp_args_element_value_35;
            tmp_called_value_50 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[116]);

            if (unlikely(tmp_called_value_50 == NULL)) {
                tmp_called_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
            }

            if (tmp_called_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_value_51 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_called_value_51 == NULL)) {
                tmp_called_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_called_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }


            tmp_args_element_value_35 = MAKE_FUNCTION_pyparsing$common$$$function__7_lambda();

            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 359;
            tmp_args_element_value_34 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_35);
            if (tmp_args_element_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 359;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_50, tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_34);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[156], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 359;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_called_instance_31;
            PyObject *tmp_called_value_52;
            PyObject *tmp_args_element_value_36;
            PyObject *tmp_add_expr_left_18;
            PyObject *tmp_add_expr_right_18;
            PyObject *tmp_add_expr_left_19;
            PyObject *tmp_add_expr_right_19;
            PyObject *tmp_add_expr_left_20;
            PyObject *tmp_add_expr_right_20;
            PyObject *tmp_add_expr_left_21;
            PyObject *tmp_add_expr_right_21;
            PyObject *tmp_add_expr_left_22;
            PyObject *tmp_add_expr_right_22;
            PyObject *tmp_add_expr_left_23;
            PyObject *tmp_add_expr_right_23;
            PyObject *tmp_add_expr_left_24;
            PyObject *tmp_add_expr_right_24;
            PyObject *tmp_add_expr_left_25;
            PyObject *tmp_add_expr_right_25;
            PyObject *tmp_add_expr_left_26;
            PyObject *tmp_add_expr_right_26;
            PyObject *tmp_add_expr_left_27;
            PyObject *tmp_add_expr_right_27;
            PyObject *tmp_add_expr_left_28;
            PyObject *tmp_add_expr_right_28;
            PyObject *tmp_add_expr_left_29;
            PyObject *tmp_add_expr_right_29;
            PyObject *tmp_add_expr_left_30;
            PyObject *tmp_add_expr_right_30;
            PyObject *tmp_add_expr_left_31;
            PyObject *tmp_add_expr_right_31;
            PyObject *tmp_add_expr_left_32;
            PyObject *tmp_add_expr_right_32;
            PyObject *tmp_add_expr_left_33;
            PyObject *tmp_add_expr_right_33;
            PyObject *tmp_add_expr_left_34;
            PyObject *tmp_add_expr_right_34;
            tmp_called_value_52 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_called_value_52 == NULL)) {
                tmp_called_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_called_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_add_expr_left_34 = mod_consts[157];
            tmp_add_expr_right_34 = mod_consts[158];
            tmp_add_expr_left_33 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_34, tmp_add_expr_right_34);
            assert(!(tmp_add_expr_left_33 == NULL));
            tmp_add_expr_right_33 = mod_consts[159];
            tmp_add_expr_left_32 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_33, tmp_add_expr_right_33);
            Py_DECREF(tmp_add_expr_left_33);
            assert(!(tmp_add_expr_left_32 == NULL));
            tmp_add_expr_right_32 = mod_consts[160];
            tmp_add_expr_left_31 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_32, tmp_add_expr_right_32);
            Py_DECREF(tmp_add_expr_left_32);
            assert(!(tmp_add_expr_left_31 == NULL));
            tmp_add_expr_right_31 = mod_consts[161];
            tmp_add_expr_left_30 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_31, tmp_add_expr_right_31);
            Py_DECREF(tmp_add_expr_left_31);
            assert(!(tmp_add_expr_left_30 == NULL));
            tmp_add_expr_right_30 = mod_consts[161];
            tmp_add_expr_left_29 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_30, tmp_add_expr_right_30);
            Py_DECREF(tmp_add_expr_left_30);
            assert(!(tmp_add_expr_left_29 == NULL));
            tmp_add_expr_right_29 = mod_consts[162];
            tmp_add_expr_left_28 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_29, tmp_add_expr_right_29);
            Py_DECREF(tmp_add_expr_left_29);
            assert(!(tmp_add_expr_left_28 == NULL));
            tmp_add_expr_right_28 = mod_consts[163];
            tmp_add_expr_left_27 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_28, tmp_add_expr_right_28);
            Py_DECREF(tmp_add_expr_left_28);
            assert(!(tmp_add_expr_left_27 == NULL));
            tmp_add_expr_right_27 = mod_consts[164];
            tmp_add_expr_left_26 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_27, tmp_add_expr_right_27);
            Py_DECREF(tmp_add_expr_left_27);
            assert(!(tmp_add_expr_left_26 == NULL));
            tmp_add_expr_right_26 = mod_consts[165];
            tmp_add_expr_left_25 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_26, tmp_add_expr_right_26);
            Py_DECREF(tmp_add_expr_left_26);
            assert(!(tmp_add_expr_left_25 == NULL));
            tmp_add_expr_right_25 = mod_consts[166];
            tmp_add_expr_left_24 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_25, tmp_add_expr_right_25);
            Py_DECREF(tmp_add_expr_left_25);
            assert(!(tmp_add_expr_left_24 == NULL));
            tmp_add_expr_right_24 = mod_consts[167];
            tmp_add_expr_left_23 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_24, tmp_add_expr_right_24);
            Py_DECREF(tmp_add_expr_left_24);
            assert(!(tmp_add_expr_left_23 == NULL));
            tmp_add_expr_right_23 = mod_consts[168];
            tmp_add_expr_left_22 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_23, tmp_add_expr_right_23);
            Py_DECREF(tmp_add_expr_left_23);
            assert(!(tmp_add_expr_left_22 == NULL));
            tmp_add_expr_right_22 = mod_consts[169];
            tmp_add_expr_left_21 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_22, tmp_add_expr_right_22);
            Py_DECREF(tmp_add_expr_left_22);
            assert(!(tmp_add_expr_left_21 == NULL));
            tmp_add_expr_right_21 = mod_consts[170];
            tmp_add_expr_left_20 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_21, tmp_add_expr_right_21);
            Py_DECREF(tmp_add_expr_left_21);
            assert(!(tmp_add_expr_left_20 == NULL));
            tmp_add_expr_right_20 = mod_consts[171];
            tmp_add_expr_left_19 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_20, tmp_add_expr_right_20);
            Py_DECREF(tmp_add_expr_left_20);
            assert(!(tmp_add_expr_left_19 == NULL));
            tmp_add_expr_right_19 = mod_consts[172];
            tmp_add_expr_left_18 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_19, tmp_add_expr_right_19);
            Py_DECREF(tmp_add_expr_left_19);
            assert(!(tmp_add_expr_left_18 == NULL));
            tmp_add_expr_right_18 = mod_consts[173];
            tmp_args_element_value_36 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_18, tmp_add_expr_right_18);
            Py_DECREF(tmp_add_expr_left_18);
            assert(!(tmp_args_element_value_36 == NULL));
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 363;
            tmp_called_instance_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_52, tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_36);
            if (tmp_called_instance_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame.f_lineno = 363;
            tmp_dictset_value = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_31,
                mod_consts[53],
                PyTuple_GET_ITEM(mod_consts[174], 0)
            );

            Py_DECREF(tmp_called_instance_31);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[175], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 363;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_171df5f0ec011f226437c145d1c2a58d_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_171df5f0ec011f226437c145d1c2a58d_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_171df5f0ec011f226437c145d1c2a58d_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_171df5f0ec011f226437c145d1c2a58d_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_171df5f0ec011f226437c145d1c2a58d_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_4;
        skip_nested_handling_1:;
        tmp_dictset_value = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[48]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[48]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 413;

            goto try_except_handler_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 413;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[176], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[50]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[50]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;

            goto try_except_handler_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[177], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[118]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[118]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 415;

            goto try_except_handler_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[178], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[121]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[121]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 416;

            goto try_except_handler_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[179], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[136]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[136]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 417;

            goto try_except_handler_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[180], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[155]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[155]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 418;

            goto try_except_handler_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[181], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_GET_ITEM0(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[156]);

        if (unlikely(tmp_dictset_value == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

            FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[156]);
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 419;

            goto try_except_handler_4;
        }

        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 419;

            goto try_except_handler_4;
        }
        tmp_res = PyDict_SetItem(locals_pyparsing$common$$$class__1_pyparsing_common_8, mod_consts[182], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_called_value_53;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_53 = (PyObject *)&PyType_Type;
            tmp_tuple_element_3 = mod_consts[4];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[183];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_pyparsing$common$$$class__1_pyparsing_common_8;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_1__class_decl_dict;
            frame_f92cac0e0f59f131f4987b06d5311b0d->m_frame.f_lineno = 8;
            tmp_assign_source_12 = CALL_FUNCTION(tmp_called_value_53, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 8;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_12;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_11 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_11);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_pyparsing$common$$$class__1_pyparsing_common_8);
        locals_pyparsing$common$$$class__1_pyparsing_common_8 = NULL;
        goto try_return_handler_3;
        // Exception handler code:
        try_except_handler_4:;
        exception_keeper_type_2 = exception_type;
        exception_keeper_value_2 = exception_value;
        exception_keeper_tb_2 = exception_tb;
        exception_keeper_lineno_2 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_pyparsing$common$$$class__1_pyparsing_common_8);
        locals_pyparsing$common$$$class__1_pyparsing_common_8 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_3:;
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 8;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_11);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_13;
        // Tried code:
        {
            PyObject *tmp_assign_source_14;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_54;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_vars_arg_1;
            tmp_vars_arg_1 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_vars_arg_1 == NULL)) {
                tmp_vars_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            assert(!(tmp_vars_arg_1 == NULL));
            tmp_expression_value_11 = LOOKUP_VARS(tmp_vars_arg_1);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;

                goto try_except_handler_5;
            }
            tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[184]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_called_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;

                goto try_except_handler_5;
            }
            frame_f92cac0e0f59f131f4987b06d5311b0d->m_frame.f_lineno = 423;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_54);
            Py_DECREF(tmp_called_value_54);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;

                goto try_except_handler_5;
            }
            tmp_assign_source_14 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;

                goto try_except_handler_5;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_14;
        }
        {
            PyObject *tmp_assign_source_15;
            tmp_assign_source_15 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_15;
        }
        if (isFrameUnusable(cache_frame_700a9d50803f166bedd13cb83d68d82c_3)) {
            Py_XDECREF(cache_frame_700a9d50803f166bedd13cb83d68d82c_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_700a9d50803f166bedd13cb83d68d82c_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_700a9d50803f166bedd13cb83d68d82c_3 = MAKE_FUNCTION_FRAME(codeobj_700a9d50803f166bedd13cb83d68d82c, module_pyparsing$common, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_700a9d50803f166bedd13cb83d68d82c_3->m_type_description == NULL);
        frame_700a9d50803f166bedd13cb83d68d82c_3 = cache_frame_700a9d50803f166bedd13cb83d68d82c_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_700a9d50803f166bedd13cb83d68d82c_3);
        assert(Py_REFCNT(frame_700a9d50803f166bedd13cb83d68d82c_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_16;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_16 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 422;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_16;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_17 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_1_var_v;
                outline_1_var_v = tmp_assign_source_17;
                Py_INCREF(outline_1_var_v);
                Py_XDECREF(old);
            }

        }
        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_called_value_55;
            PyObject *tmp_call_result_4;
            PyObject *tmp_args_element_value_37;
            PyObject *tmp_args_element_value_38;
            int tmp_truth_name_1;
            tmp_called_value_55 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[185]);

            if (unlikely(tmp_called_value_55 == NULL)) {
                tmp_called_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
            }

            if (tmp_called_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            CHECK_OBJECT(outline_1_var_v);
            tmp_args_element_value_37 = outline_1_var_v;
            tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[186]);

            if (unlikely(tmp_args_element_value_38 == NULL)) {
                tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
            }

            if (tmp_args_element_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            frame_700a9d50803f166bedd13cb83d68d82c_3->m_frame.f_lineno = 423;
            {
                PyObject *call_args[] = {tmp_args_element_value_37, tmp_args_element_value_38};
                tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_55, call_args);
            }

            if (tmp_call_result_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_4);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_4);

                exception_lineno = 423;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
            Py_DECREF(tmp_call_result_4);
            if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
                goto branch_yes_1;
            } else {
                goto branch_no_1;
            }
        }
        branch_yes_1:;
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_1_var_v);
            tmp_append_value_1 = outline_1_var_v;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 422;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_13 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_13);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        goto frame_return_exit_1;
        // Exception handler code:
        try_except_handler_6:;
        exception_keeper_type_5 = exception_type;
        exception_keeper_value_5 = exception_value;
        exception_keeper_tb_5 = exception_tb;
        exception_keeper_lineno_5 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_700a9d50803f166bedd13cb83d68d82c_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_700a9d50803f166bedd13cb83d68d82c_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_700a9d50803f166bedd13cb83d68d82c_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_700a9d50803f166bedd13cb83d68d82c_3,
            type_description_2,
            outline_1_var_v
        );


        // Release cached frame if used for exception.
        if (frame_700a9d50803f166bedd13cb83d68d82c_3 == cache_frame_700a9d50803f166bedd13cb83d68d82c_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_700a9d50803f166bedd13cb83d68d82c_3);
            cache_frame_700a9d50803f166bedd13cb83d68d82c_3 = NULL;
        }

        assertFrameObject(frame_700a9d50803f166bedd13cb83d68d82c_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_5;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_1_var_v);
        outline_1_var_v = NULL;
        goto outline_result_2;
        // Exception handler code:
        try_except_handler_5:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_1_var_v);
        outline_1_var_v = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 422;
        goto frame_exception_exit_1;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_pyparsing$common, (Nuitka_StringObject *)mod_consts[187], tmp_assign_source_13);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f92cac0e0f59f131f4987b06d5311b0d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f92cac0e0f59f131f4987b06d5311b0d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f92cac0e0f59f131f4987b06d5311b0d, exception_lineno);
    }



    assertFrameObject(frame_f92cac0e0f59f131f4987b06d5311b0d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("pyparsing.common", false);

    Py_INCREF(module_pyparsing$common);
    return module_pyparsing$common;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_pyparsing$common, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("pyparsing$common", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
