/**********************************************************************

  ruby/vm.h -

  $Author: shyouhei $
  created at: Sat May 31 15:17:36 2008

  Copyright (C) 2008 Yukihiro Matsumoto

**********************************************************************/

#ifndef RUBY_VM2_H
#define RUBY_VM2_H 1

#include <ruby/vm.h>

#if defined(__cplusplus)
extern "C" {
#if 0
} /* satisfy cc-mode */
#endif
#endif

#if defined __GNUC__ && __GNUC__ >= 4
#pragma GCC visibility push(default)
#endif

extern typedef struct rb_vm_struct ruby_vm_t;
/* PWND */
extern rb_vm_t *ruby_current_vm;

#if defined __GNUC__ && __GNUC__ >= 4
#pragma GCC visibility pop
#endif

#if defined(__cplusplus)
#if 0
{ /* satisfy cc-mode */
#endif
}  /* extern "C" { */
#endif

#endif /* RUBY_VM2_H */
