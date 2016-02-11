obj-m += hello_module.o
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
        DEF_KERNEL := "/lib/modules/$(shell uname -r)/build"
clean:
	$(info cleaning with $(DEF_KERNEL))
	make -C $(DEF_KERNEL) M=$(PWD) clean
kernel:
	$(info DEF $(DEF_KERNEL))
        ifdef KDIR
		$(info Using kernel $(KDIR))
		make -C $(KDIR) M=$(PWD) modules
                DEF_KERNEL := $(KDIR)
        else
		$(error Please export KDIR)
        endif
