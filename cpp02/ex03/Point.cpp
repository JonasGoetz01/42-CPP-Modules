#include "Point.hpp"

Point::Point() : x(0), y(0) {}

Point::Point(const Fixed x, const Fixed y) : x(x), y(y) {}

Point::Point(const Point &point) : x(point.x), y(point.y) {}

Point &Point::operator=(const Point &point) {
    x = point.x;
    y = point.y;
    return *this;
}

Point::~Point() {}

float Point::getX() const {
    return x.toFloat();
}

float Point::getY() const {
    return y.toFloat();
}

void Point::setX(const Fixed x) {
    this->x = x;
}

void Point::setY(const Fixed y) {
    this->y = y;
}

