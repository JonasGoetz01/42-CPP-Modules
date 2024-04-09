#include "Fixed.hpp"

Fixed::Fixed() : value(0) {
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed) {
    // std::cout << "Copy constructor called" << std::endl;
    *this = fixed;
}

Fixed &Fixed::operator=(const Fixed &fixed) {
    // std::cout << "Copy assignation operator called" << std::endl;
    value = fixed.value;
    return *this;
}

Fixed::~Fixed() {
   // std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits() const {
    // std::cout << "getRawBits member function called" << std::endl;
    return value;
}

void Fixed::setRawBits(int const raw) {
    // std::cout << "setRawBits member function called" << std::endl;
    value = raw;
}

Fixed::Fixed(const int value) {
    // std::cout << "Int constructor called" << std::endl;
    this->value = value << fractionalBits;
}

Fixed::Fixed(const float value) {
    // std::cout << "Float constructor called" << std::endl;
    this->value = static_cast<int>(value * (1 << fractionalBits) + 0.5);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed) {
    out << fixed.toFloat();
    return out;
}

float Fixed::toFloat() const {
    return (float)value / (1 << fractionalBits);
}

int Fixed::toInt() const {
    return value >> fractionalBits;
}

bool Fixed::operator>(const Fixed &fixed) {
    return value > fixed.value;
}

bool Fixed::operator<(const Fixed &fixed) {
    return value < fixed.value;
}

bool Fixed::operator>=(const Fixed &fixed) {
    return value >= fixed.value;
}

bool Fixed::operator<=(const Fixed &fixed) {
    return value <= fixed.value;
}

bool Fixed::operator==(const Fixed &fixed) {
    return value == fixed.value;
}

bool Fixed::operator!=(const Fixed &fixed) {
    return value != fixed.value;
}

Fixed Fixed::operator+(const Fixed &fixed) {
    return Fixed(toFloat() + fixed.toFloat());
}

Fixed Fixed::operator-(const Fixed &fixed) {
    return Fixed(toFloat() - fixed.toFloat());
}

Fixed Fixed::operator*(const Fixed &fixed) {
    return Fixed(toFloat() * fixed.toFloat());
}

Fixed Fixed::operator/(const Fixed &fixed) {
    return Fixed(toFloat() / fixed.toFloat());
}

Fixed &Fixed::operator++() {
    value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed tmp(*this);
    operator++();
    return tmp;
}

Fixed &Fixed::operator--() {
    value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed tmp(*this);
    operator--();
    return tmp;
}

Fixed &Fixed::min(Fixed &a, Fixed &b) {
    return a < b ? a : b;
}

const Fixed &Fixed::min(const Fixed &a, const Fixed &b) {
    return (Fixed)a < (Fixed)b ? a : b;
}

Fixed &Fixed::max(Fixed &a, Fixed &b) {
    return a > b ? a : b;
}

const Fixed &Fixed::max(const Fixed &a, const Fixed &b) {
    return (Fixed)a > (Fixed)b ? a : b;
}

