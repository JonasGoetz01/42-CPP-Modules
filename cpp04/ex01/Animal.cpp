#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
    std::cout << "Animal constructor called" << std::endl;
}

Animal::Animal(const Animal& other) : type(other.type)
{
    std::cout << "Animal copy constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal assignation operator called" << std::endl;
    if (this != &other)
        type = other.type;
    return *this;
}

void Animal::makeSound() const
{
    std::cout << "* SOME RANDOM ANIMAL NOISE *" << std::endl;
}

std::string Animal::getType() const
{
    return this->type;
}
