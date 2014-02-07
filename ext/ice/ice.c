#include <ruby.h>

VALUE Ice = Qnil;
VALUE Baby = Qnil;

void Init_ice();
VALUE method_ice_chill();

void Init_ice() {
	printf("Init_ice\n");
	Ice = rb_define_module("Ice");
	rb_define_singleton_method(Ice, "chill", method_ice_chill, 0);
}

VALUE method_ice_chill() {
	printf("Tonight hell freezes over!");
	return Qnil;
}
