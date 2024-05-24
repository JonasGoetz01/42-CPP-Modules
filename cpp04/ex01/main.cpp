#include "Cat.hpp"
#include "Dog.hpp"

int main()
{
    // const Animal* j = new Dog();
    // const Animal* i = new Cat();
    // i->makeSound();
    // j->makeSound();
    // delete j;
    // delete i;

    Dog basic;
    {
        Dog tmp = basic;
    }
    return 0;
}