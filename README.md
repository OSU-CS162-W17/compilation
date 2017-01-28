Program file factorization and compilation with make
====================================================

This repo contains a small example program demonstrating how to factor a program into multiple source code files comprising the interface, implementation, and application:
  * Interface: `circle.hpp` and `square.hpp`
  * Implementation: `circle.cpp` and `square.cpp`
  * Application: `compute_areas.cpp`

The repo also demonstrates how to use a makefile to specify compilation for a factored program.  You can use the makefile to compile the program, after which you can run it, as follows:
```
make
./compute_areas <length>
```

You can also run the command `make clean` to clean up all of the `.o` files and the executable program produced by compilation.
