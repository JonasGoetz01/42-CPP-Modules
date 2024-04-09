#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"

class Point {
private:
    Fixed x;
    Fixed y;

public:
    Point();
    Point(const Fixed x, const Fixed y);
    Point(const Point &point);
    Point &operator=(const Point &point);
    ~Point();

    float getX() const;
    float getY() const;
    void setX(const Fixed x);
    void setY(const Fixed y);
};

#endif