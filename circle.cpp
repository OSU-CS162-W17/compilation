/*
 * This file contains the implementations of functions we defined in
 * circle.hpp.
 *
 * We need to #include circle.hpp here so our function prototypes are included
 * in this file and to make available any structs, classes, or constants we
 * defined in that header file.
 */
#include "circle.hpp"


/*
 * This is the implementation of the circle_area() function we prototyped in
 * circle.hpp.
 */
float circle_area(float radius) {
  return PI * radius * radius;
}
