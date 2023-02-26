#include <linux/module.h>
#include <linux/kernel.h>
#include <linux/init.h>

MODULE_LICENSE("GPL");
MODULE_AUTHOR("katharsis");


static int __init hello_init(void){
        printk(KERN_INFO "Hello, World! \n");
        return 0;
        }
        
static void __exit hello_cleanup(void){
        printk(KERN_INFO "Cleaning up the module");
        }

module_init(hello_init);
module_exit(hello_cleanup);
