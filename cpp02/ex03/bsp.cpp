#include "Point.hpp"

//
// bool bsp( Point const a, Point const b, Point const c, Point const point);
// •a, b, c: The vertices of our beloved triangle.
// •point: The point to check.
// •Returns: True if the point is inside the triangle. False otherwise.
// Thus, if the point is a vertex or on edge, it will return False.

bool bsp(Point const a, Point const b, Point const c, Point const point) {
    Fixed a1 = b.getX() - a.getX();
    Fixed b1 = c.getX() - a.getX();
    Fixed c1 = point.getX() - a.getX();
    Fixed a2 = b.getY() - a.getY();
    Fixed b2 = c.getY() - a.getY();
    Fixed c2 = point.getY() - a.getY();
    Fixed d = a1 * b2 - a2 * b1;
    Fixed wa = (c1 * b2 - c2 * b1) / d;
    Fixed wb = (a1 * c2 - a2 * c1) / d;
    Fixed wc = Fixed(1) - wa - wb;

    // Check if the point is inside the triangle excluding edges and vertices
    if (wa > 0 && wa < 1 && wb > 0 && wb < 1 && wc > 0 && wc < 1) {
        return true;
    }
    return false;
}


