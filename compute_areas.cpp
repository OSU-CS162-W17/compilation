/*
 * This is a simple application to demonstrate how we can write a program
 * that's separated into interface, implementation, and application.  It
 * reads a floating point value from the command line and computes the area
 * of a circle with that radius and the area of a square with that side length.
 */

#include <iostream>

/*
 * Here, we're including our local header files to allow us to use here the
 * area functions that are prototyped in those files.
 */
#include "circle.hpp"
#include "square.hpp"


int main(int argc, char** argv) {

  float length = atof(argv[1]);

  /*
   * Here, we use our square_area() function, which is prototyped in square.hpp
   * and implemented in square.cpp.
   */
  std::cout << "A square with side " << length << " has area "
    << square_area(length) << std::endl;

  /*
   * Here, we use our circle_area() function, which is prototyped in circle.hpp
   * and implemented in circle.cpp.
   */
  std::cout << "A circle with radius " << length << " has area "
    << circle_area(length) << std::endl;

}
