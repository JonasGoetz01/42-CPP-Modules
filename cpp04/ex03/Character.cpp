#include "Character.hpp"

Character::~Character() {}

Character::Character(std::string const & name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

Character::Character(const Character& other) : _name(other._name)
{
    for (int i = 0; i < 4; i++)
        _materia[i] = other._materia[i];
}

Character& Character::operator=(const Character& other)
{
    if (this != &other)
    {
        _name = other._name;
        for (int i = 0; i < 4; i++)
            _materia[i] = other._materia[i];
    }
    return *this;
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (_materia[i] == NULL)
        {
            _materia[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx >= 0 && idx < 4)
        _materia[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx >= 0 && idx < 4 && _materia[idx] != NULL)
        _materia[idx]->use(target);
}
