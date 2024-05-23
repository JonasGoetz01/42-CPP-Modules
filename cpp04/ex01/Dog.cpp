#include "Dog.hpp"

Dog::Dog() : Animal()
{
    this->type = "Dog";
    this->brain = new Brain();
    std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    this->brain = new Brain(*other.brain);
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog::~Dog()
{
    delete this->brain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog assignation operator called" << std::endl;
    if (this != &other)
        type = other.type;
    delete this->brain;
    this->brain = new Brain(*other.brain);
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "Woof" << std::endl;
}
