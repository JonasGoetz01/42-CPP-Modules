#include "Zombie.hpp"

int main(void)
{
    //create horde
    Zombie *horde = Zombie::zombieHorde(5, "Zombie");
    for (int i = 0; i < 5; i++)
    {
        horde[i].announce();
    }
    delete[] horde;
    return (0);
}