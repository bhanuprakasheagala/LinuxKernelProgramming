/*
hello-1.c - The first kernel module.
*/
#include <linux/kernel.h> /* Needed for pr_info() */
#include <linux/module.h> /* Needed by all modules */

int init_module(void){
  pr_info("Hello World on Tue Apr 5 6:12 PM.\n");
 /* A non 0 return means init_module failed; module can't be loaded.*/
  return 0;
}

void cleanup_module(void){
  pr_info("Goodbye World\n");
}
MODULE_LICENSE("GPL");
MODULE_AUTHOR("Bhanuprakash");
MODULE_DESCRIPTION("My first Kernel module");
