#include "Zombie.hpp"

int main(void) {
    Zombie::randomChump("Zombie1");
    Zombie *zombie2 = new Zombie("Zombie2");
    zombie2->announce();
    delete zombie2;
    Zombie *zombie3 = Zombie::newZombie("Zombie3");
    zombie3->announce();
    delete zombie3;
    return (0);
}