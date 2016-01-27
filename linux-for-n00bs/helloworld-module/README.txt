Usage:
1.To build the against existing kernel
	$ make
2.To buils against any installed kernel
	$ make

To clear dmesg buffer:
	$ sudo dmesg -C


Observations:
1.The "\n" was not included in printk statements.So,the output of printk messages were not reflected on dmesg.
2.Usage of __init and __exit http://stackoverflow.com/questions/11680641/init-and-exit-macros-usage-for-built-in-and-loadable-modules
3.If you use __init for mod_clean function..you will not be able to remove the module as that function will be removed from memory because of __init. 



Kernel Log Level:

#define KERN_EMERG "<0>" /* system is unusable*/
#define KERN_ALERT "<1>" /* action must be taken immediately*/
#define KERN_CRIT "<2>" /* critical conditions*/
#define KERN_ERR "<3>" /* error conditions*/
#define KERN_WARNING "<4>" /* warning conditions*/
#define KERN_NOTICE "<5>" /* normal but significant condition*/
#define KERN_INFO "<6>" /* informational*/
#define KERN_DEBUG "<7>" /* debug-level messages*/
