#pragma once

#include "Animal.hpp"

class Dog : public Animal
{
    public:
        Dog();
        Dog(const Dog& other);
        virtual ~Dog();
        Dog& operator=(const Dog& other);
        void makeSound() const;
};