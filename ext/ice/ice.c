#include <ruby.h>
#include "vm.h"

VALUE Ice = Qnil;
VALUE Baby = Qnil;

void Init_ice();
VALUE method_ice_chill();
VALUE method_ice_running();

void Init_ice() {
	printf("Init_ice\n");
	Ice = rb_define_module("Ice");
	rb_define_singleton_method(Ice, "chill", method_ice_chill, 0);
	rb_define_singleton_method(Ice, "running?", method_ice_running, 0);
}

VALUE method_ice_chill() {
	const char *msg_str = "Tonight hell freezes over!";
	VALUE msg = rb_str_new2(msg_str);
	printf("%s\n", msg_str);
	return msg;
}

VALUE method_ice_running() {
	rb_vm_t *vm = ruby_current_vm;
	int running = vm->running;
	printf("Running: %i\n", running);
	return Qnil;
}
