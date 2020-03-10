#include <linux/init.h>
#include <linux/kernel.h>
#include <linux/module.h>

static int simple_init(void){
    printk(KERN_INFO "Loading module\n");
    return 0;
}

static void simple_exit(void){
    printk(KERN_INFO "Removing module\n");
}

module_init(simple_init);
module_exit(simple_exit);

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello world");
MODULE_AUTHOR("NGUYEN");

