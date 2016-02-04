obj-m += hello_module.o
installed_kernel:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modulesi
	export CUST_KERNEL="n"
clean:
#	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	ifeq($(CUST_KERNEL),n)
		make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
	else
		make -C $(KDIR) M=$(PWD) clean
	endif
custom_kernel:
	make -C $(KDIR) M=$(PWD) modules
	export CUST_KERNEL="y"
