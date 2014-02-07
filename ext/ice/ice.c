#include <ruby.h>

VALUE Ice = Qnil;
VALUE Baby = Qnil;

void Init_ice();
VALUE method_ice_chill();

void Init_ice() {
	Ice = rb_define_module("Ice");
	Baby = rb_define_class_under(Ice, "Baby", rb_cObject);
	rb_define_singleton_method(Baby, "chill", method_ice_chill, 0);
}

VALUE method_ice_chill() {
	printf("Tonight hell freezes over!");
	return Qnil;
}
