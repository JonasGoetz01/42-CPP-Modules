#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal
{
    private:
        Brain* brain;
    public:
        Dog();
        Dog(const Dog& other);
        virtual ~Dog();
        Dog& operator=(const Dog& other);
        void makeSound() const;
};