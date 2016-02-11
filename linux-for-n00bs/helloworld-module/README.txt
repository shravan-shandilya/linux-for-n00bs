Usage:
1.To build the against existing kernel
	$ make all
2.To build against any installed kernel
	$ export KDIR=/lib/modules/<your-kernel>/build
	$ make kernel

To clear dmesg buffer:
	$ sudo dmesg -C


Observations:
1.The "\n" was not included in printk statements.So,the output of printk messages were not reflected on dmesg.
2.Usage of __init and __exit http://stackoverflow.com/questions/11680641/init-and-exit-macros-usage-for-built-in-and-loadable-modules
3.If you use __init for mod_clean function..you will not be able to remove the module as that function will be removed from memory because of __init. 
4.In the makefile..if the first character is not a <TAB> but a space(for indentation),it will be executed as shell command.
https://compgroups.net/comp.unix.programmer/ifdef-not-working-in-gnu-make-version-3/53220

5.If the Current directory varaible (M) is used as (m),got some permission denied error.(Couldn't get to the root of the error)    


Kernel Log Level:

#define KERN_EMERG "<0>" /* system is unusable*/
#define KERN_ALERT "<1>" /* action must be taken immediately*/
#define KERN_CRIT "<2>" /* critical conditions*/
#define KERN_ERR "<3>" /* error conditions*/
#define KERN_WARNING "<4>" /* warning conditions*/
#define KERN_NOTICE "<5>" /* normal but significant condition*/
#define KERN_INFO "<6>" /* informational*/
#define KERN_DEBUG "<7>" /* debug-level messages*/
