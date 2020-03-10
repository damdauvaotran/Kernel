run  `make` to make file *.ko 

run `sudo insmod [filename].ko` to install kernel to system (In this case, this is `simple.ko`)

run `dmesg` to check the kernel log (You should see "Loading module" message)

run `sudo rmmod [kernel name]` to remove kernel form system

To clear buffer, run `sudo dmesg -c`
