#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap c1 = ClapTrap("C1");
    ClapTrap c2 = ClapTrap("C2");

    c1.attack("C2");
    c2.takeDamage(5);
    c2.beRepaired(5);
    c1.attack("C2");
    c2.takeDamage(5);
    c2.beRepaired(5);
    c1.attack("C2");
    c2.takeDamage(10);
    c2.beRepaired(5);
}