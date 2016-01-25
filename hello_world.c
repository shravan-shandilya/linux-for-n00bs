#include<linux/kernel.h>
#include<linux/module.h>
MODULE_LICENSE("GPL");

static int __init module_in(void)
{
	printk(KERN_DEBUG "Hello world\n");
	return 0;
}

static void __exit module_out(void)
{
	printk(KERN_DEBUG "Goodbye world\n");
}

module_init(module_in);
module_exit(module_out);
