#include "iotjs_def.h"
#include "lib/libdemo.h"

static jerry_value_t
lib_calculate (const jerry_value_t func_value, /**< function object */
                 const jerry_value_t this_value, /**< this arg */
                 const jerry_value_t *args_p, /**< function arguments */
                 const jerry_length_t args_cnt) /**< number of function arguments */
{
  int arg_a = jerry_get_number_value(args_p[0]);
  int arg_b = jerry_get_number_value(args_p[1]);

  return jerry_create_number(calculate(arg_a, arg_b));
}

iotjs_jval_t InitMyNativeModule() {
  jerry_value_t mymodule = jerry_create_object();
  iotjs_jval_set_property_string_raw(mymodule, "message", "Hello world!");

  iotjs_jval_set_method(mymodule, "calcer", lib_calculate);

  return mymodule;
}

