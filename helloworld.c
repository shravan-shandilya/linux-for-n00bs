#include<linux/kernel.h>
#include<linux/module.h>

static int __init load_module(void)
{
	printk(KERN_DEBUG "HELLO WORLD\n");
	return 0;
}

static void __exit unload_module(void)
{
	printk(KERN_DEBUG "GOODBYE\n");
}
module_init(load_module);
module_exit(unload_module);
MODULE_DESCRIPTION("HELLOWORLD");
MODULE_AUTHOR("SANDESH");
MODULE_LICENSE("GPL");
MODULE_VERSION("1.0");
