#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
    Ice* ice = new Ice();
    Cure* cure = new Cure();
    Character* character = new Character("character");
 
    ice->use(*character);
    cure->use(*character);

    character->equip(ice);
    character->equip(cure);

    character->use(0, *character);
    character->use(1, *character);

    character->unequip(0);
    character->unequip(1);

    delete ice;
    delete cure;
    return 0;
}