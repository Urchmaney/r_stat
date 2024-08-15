#include "ruby.h"
#include "extconf.h"
#include "./r_statistics.h"


void Init_r_statistics(void) {
    VALUE mod = rb_define_module("RStatistics");
    rb_define_method(mod, "sum", rb_sum, 1);
    rb_define_method(mod, "mean", rb_mean, 1);
    rb_define_method(mod, "standard_deviation", rb_standard_deviation, 1);
    rb_define_method(mod, "variance", rb_variance, 1);
}

long sum(VALUE *data, long length) {
    int i  = 0 ;
    long result = 0;

    for(; i < length; i++) {
        result += FIX2LONG(data[i]);
    }

    return result;
}

long mean(VALUE *data, long length) {
    long total_sum = sum(data, length);
    return total_sum / length;
}

long variance(VALUE *data, long length) {
    long mean_value = mean(data, length);
    long v_sum = 0;
    for(int i = 0; i < length; i++) {
        long element = FIX2LONG(data[i]);
        v_sum += (element - mean_value) * (element - mean_value);
    }
    return v_sum / length;   
}

VALUE rb_sum(VALUE self, VALUE arr) {
    long rtype = TYPE(arr);
    if (rtype != T_ARRAY) {
        return LONG2FIX(0);
    }
    // RUBY_ASSERT(RB_TYPE_P(arr, T_ARRAY));
    long len = RARRAY_LEN(arr);
    VALUE *elements = RARRAY_PTR(arr);
    return LONG2FIX(sum(elements, len));
}

VALUE rb_mean(VALUE self, VALUE arr) {
    long rtype = TYPE(arr);
    if (rtype != T_ARRAY) {
        return LONG2FIX(0);
    }
    // RUBY_ASSERT(RB_TYPE_P(arr, T_ARRAY));
    long len = RARRAY_LEN(arr);
    VALUE *elements = RARRAY_PTR(arr);
    return LONG2FIX(mean(elements, len));
}

VALUE rb_variance(VALUE self, VALUE arr) {
    long rtype = TYPE(arr);
    if (rtype != T_ARRAY) {
        return LONG2FIX(0);
    }
    long len = RARRAY_LEN(arr);
    VALUE *elements = RARRAY_PTR(arr);   
    return LONG2FIX(variance(elements, len));
}

VALUE rb_standard_deviation(VALUE self, VALUE arr) {
    return 2;
}