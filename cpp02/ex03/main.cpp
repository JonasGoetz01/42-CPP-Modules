#include <iostream>

#include "Point.hpp"

bool bsp(Point const a, Point const b, Point const c, Point const point);

int main( void ) {
    {
        Point a(Fixed(0), Fixed(0));
        Point b(Fixed(0), Fixed(3));
        Point c(Fixed(3), Fixed(0));
        Point d(Fixed(1), Fixed(1));
        Point point(d);

        std::cout << "a: " << a.getX() << ", " << a.getY() << std::endl;
        std::cout << "b: " << b.getX() << ", " << b.getY() << std::endl;
        std::cout << "c: " << c.getX() << ", " << c.getY() << std::endl;
        std::cout << "point: " << point.getX() << ", " << point.getY() << std::endl;

        if (bsp(a, b, c, point)) {
            std::cout << "The point is inside the triangle." << std::endl;
        } else {
            std::cout << "The point is outside the triangle." << std::endl;
        }
    }
    {
        Point a(Fixed(0), Fixed(0));
        Point b(Fixed(0), Fixed(3));
        Point c(Fixed(3), Fixed(0));
        Point d(Fixed(1), Fixed(0));
        Point point(d);

        std::cout << "a: " << a.getX() << ", " << a.getY() << std::endl;
        std::cout << "b: " << b.getX() << ", " << b.getY() << std::endl;
        std::cout << "c: " << c.getX() << ", " << c.getY() << std::endl;
        std::cout << "point: " << point.getX() << ", " << point.getY() << std::endl;

        if (bsp(a, b, c, point)) {
            std::cout << "The point is inside the triangle." << std::endl;
        } else {
            std::cout << "The point is outside the triangle." << std::endl;
        }
    }
    {
        Point a(Fixed(0), Fixed(0));
        Point b(Fixed(0), Fixed(3));
        Point c(Fixed(3), Fixed(0));
        Point d(Fixed(3), Fixed(0));
        Point point(d);

        std::cout << "a: " << a.getX() << ", " << a.getY() << std::endl;
        std::cout << "b: " << b.getX() << ", " << b.getY() << std::endl;
        std::cout << "c: " << c.getX() << ", " << c.getY() << std::endl;
        std::cout << "point: " << point.getX() << ", " << point.getY() << std::endl;

        if (bsp(a, b, c, point)) {
            std::cout << "The point is inside the triangle." << std::endl;
        } else {
            std::cout << "The point is outside the triangle." << std::endl;
        }
    }

    return 0;
}
