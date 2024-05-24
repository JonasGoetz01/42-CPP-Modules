#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

// int main()
// {
//     Ice* ice = new Ice();
//     Cure* cure = new Cure();
//     Character* character = new Character("character");
 
//     ice->use(*character);
//     cure->use(*character);

//     character->equip(ice);
//     character->equip(cure);

//     character->use(0, *character);
//     character->use(1, *character);

//     character->unequip(0);
//     character->unequip(1);

//     delete ice;
//     delete cure;
//     return 0;
// }

int main()
{
    IMateriaSource* src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    src->learnMateria(new Cure());
    ICharacter* me = new Character("me");
    AMateria* tmp;
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter* bob = new Character("bob");
    me->use(0, *bob);
    delete bob;
    delete me;
    delete src;
    return 0;
}