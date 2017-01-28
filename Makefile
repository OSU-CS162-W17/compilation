#
# This makefile specifies the compilation steps for our program.  Using a
# makefile allows us to compile our entire program by simply running the
# command `make` on the command line.
#

# Here, we define a make rule to compile our executable application program.
# This rule specifies the program name as the target and specifies several
# dependencies, including a source code file (compute_areas.cpp) as well as
# two other make targets (circle.o and square.o).  The command for the rule
# uses g++ to compile our object files and our source code file into our
# executable program.
compute_areas: compute_areas.cpp circle.o square.o
	g++ compute_areas.cpp circle.o square.o -o compute_areas

# Here, we define a make rule to compile the object file for our circle.cpp
# implementation.  The g++ command for this rule stops before linking to
# produce an object file (circle.o) that we can use in the compilation of
# our executable above.  By specifying compilation this way, we can skip
# running this step again if changes are not made to the dependencies for
# circle.o (i.e. our circle source code).
circle.o: circle.cpp circle.hpp
	g++ circle.cpp -c

# This rule is similar to the rule for circle.o above.  It specifies the
# compilation of square.o in such a way that we will not need to run this
# step again if our square cource code is not changed.
square.o: square.cpp square.hpp
	g++ square.cpp -c

# This special make rule allows us to run the command `make clean` on the
# command line to clean up our directory of all of the .o files and the
# executable file produced by compilation.
clean:
	rm -f *.o compute_areas
