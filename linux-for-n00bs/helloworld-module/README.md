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
