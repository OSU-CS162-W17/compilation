/*
 * This is our header file for things related to circles.  Here, we can define
 * structs, classes, or constants, and we can prototype functions that are
 * useful when working with circles.  We can use these things elsewhere by
 * #including this header file there.
 */

/*
 * These preprocessor statements, along with the #endif at the end of this
 * file, should be included in pretty much every header file you write.  These
 * ensure that the stuff between the #ifndef and the #endif happen only once.
 * Specifically, they check whether the preprocessor constant CIRCLE_HPP is not
 * already defined (ifndef), and if it's not, they define it (so the ifndef
 * will fail next time the function is included) and then continue to define
 * the rest of the stuff in this header file.
 *
 * If CIRCLE_HPP is already defined (i.e. because we've already included this
 * header file somewhere), then the #ifndef will fail, and nothing between the
 * #ifndef and the #endif will be executed.
 */
#ifndef CIRCLE_HPP
#define CIRCLE_HPP

// This is a constant representing the value of PI, which we can use elsewhere.
#define PI 3.1415

/*
 * This function computes the area of a circle given the radius.
 *
 * Params:
 *   radius - The radius of a circle.
 *
 * Returns: returns the area of a circle with the specified radius.
 */
float circle_area(float radius);

#endif
