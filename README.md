This repo provides basic implementations to see if library calls call syscalls

Build and run with:
ninja -C build && sudo dtrace -q -s ./syscall_check.d -c ./build/libcProbe
