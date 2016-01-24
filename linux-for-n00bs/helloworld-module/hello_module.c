#include<linux/module.h>
#include<linux/kernel.h>

MODULE_LICENSE("GPL");
MODULE_DESCRIPTION("Hello World");
MODULE_AUTHOR("Shravan Shandilya");

static int __init mod_init(void)
{
	printk(KERN_DEBUG"Hello,Module");
	return 0;
}

static void __exit mod_clean(void)
{
	printk(KERN_DEBUG"Module removed!!");
}
module_init(mod_init);
module_exit(mod_clean);
