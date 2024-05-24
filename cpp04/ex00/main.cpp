#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    std::cout << meta->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();

    const WrongAnimal* meta2 = new WrongAnimal();
    WrongAnimal* j2 = new WrongCat();

    std::cout << j2->getType() << " " << std::endl;
    std::cout << meta2->getType() << " " << std::endl;

    j2->makeSound();
    meta2->makeSound();

    delete meta;
    delete meta2;
    delete j2;
    delete j;
    delete i;
    return 0;
}