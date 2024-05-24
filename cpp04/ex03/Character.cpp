#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

Character::Character(Character const & ref)
{
    *this = ref;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
}

Character & Character::operator=(Character const & ref)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
        _inventory[i] = ref._inventory[i]->clone();
    }
    return *this;
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
        _inventory[idx] = NULL;
}

void Character::use(int idx, ICharacter & target)
{
    if (idx >= 0 && idx < 4 && _inventory[idx])
        _inventory[idx]->use(target);
}

AMateria *Character::getMateriaFromInventory(int idx)
{
    if (idx >= 0 && idx < 4)
        return _inventory[idx];
    return NULL;
}
