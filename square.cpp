/*
 * This file contains the implementations of functions we defined in
 * square.hpp.
 *
 * We need to #include square.hpp here so our function prototypes are included
 * in this file and to make available any structs, classes, or constants we
 * defined in that header file.
 */
#include "square.hpp"

/*
 * This is the implementation of the circle_area() function we prototyped in
 * circle.hpp.
 */
float square_area(float side) {
  return side * side;
}
