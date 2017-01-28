/*
 * This is our header file for things related to squares.  Here, we can define
 * structs, classes, or constants, and we can prototype functions that are
 * useful when working with squares.  We can use these things elsewhere by
 * #including this header file there.
 */

/*
 * These preprocessor statements, along with the #endif at the end of this
 * file, should be included in pretty much every header file you write.  These
 * ensure that the stuff between the #ifndef and the #endif happen only once.
 * Specifically, they check whether the preprocessor constant SQUARE_HPP is not
 * already defined (ifndef), and if it's not, they define it (so the ifndef
 * will fail next time the function is included) and then continue to define
 * the rest of the stuff in this header file.
 *
 * If SQUARE_HPP is already defined (i.e. because we've already included this
 * header file somewhere), then the #ifndef will fail, and nothing between the
 * #ifndef and the #endif will be executed.
 */
#ifndef SQUARE_HPP
#define SQUARE_HPP

/*
 * This function computes the area of a square given the length of a side.
 *
 * Params:
 *   side - The length of a square's side.
 *
 * Returns: returns the area of a square with the specified side length.
 */
float square_area(float side);

#endif
