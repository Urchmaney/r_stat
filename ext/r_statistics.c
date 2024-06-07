#include "ruby.h"
#include "extconf.h"

VALUE rb_return_nil(VALUE);
VALUE rb_create_hash(VALUE, VALUE);
VALUE rb_sum(VALUE, VALUE);

void Init_r_statistics(void) {
    VALUE mod = rb_define_module("RStatistics");
    rb_define_method(mod, "show_nil", rb_return_nil, 0);
    rb_define_method(mod, "create_hash_with_val", rb_create_hash, 1);
    rb_define_method(mod, "sum", rb_sum, 1);
}

VALUE rb_return_nil(VALUE val) {
    return Qnil;
}

VALUE rb_create_hash(VALUE val, VALUE val1) {
    VALUE hash = rb_hash_new();
    rb_hash_aset(hash, rb_str_new2("test"), val1);
    return hash;
}

VALUE rb_sum(VALUE self, VALUE arr) {
    long rtype = TYPE(arr);
    if (rtype != T_ARRAY) {
        return LONG2FIX(0);
    }
    // RUBY_ASSERT(RB_TYPE_P(arr, T_ARRAY));
    long len = RARRAY_LEN(arr);
    VALUE *elements = RARRAY_PTR(arr);
    int i = 0;
    long res = 0;
    for(; i < len; i++) {
        res += FIX2LONG(elements[i]);
    }
    return LONG2FIX(res);
}