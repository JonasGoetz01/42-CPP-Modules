#include "Cat.hpp"
#include "Dog.hpp"

int main()
{

    // AAnimal test;
    {
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        i->makeSound();
        j->makeSound();
        delete j;
        delete i;
    }
    {
        // const AAnimal* meta = new AAnimal();
        const AAnimal* j = new Dog();
        const AAnimal* i = new Cat();
        std::cout << j->getType() << " " << std::endl;
        std::cout << i->getType() << " " << std::endl;
        i->makeSound();
        j->makeSound();
        delete j;
        delete i;
    }
    return 0;
}