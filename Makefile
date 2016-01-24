obj-m += helloworld.o

KDIR = "/home/sandesh/Desktop/Source_codes/linux-4.2.4"

all:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(shell pwd) clean
