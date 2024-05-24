#include "Character.hpp"

Character::Character()
{
}

Character::Character(const Character& other)
{
    *this = other;
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i])
            delete _materias[i];
    }
}

Character& Character::operator=(const Character& other)
{
    _name = other._name;
    for (int i = 0; i < 4; i++)
    {
        if (_materias[i])
            delete _materias[i];
        _materias[i] = other._materias[i]->clone();
    }
    return *this;
}

Character::Character(const std::string& name)
{
    _name = name;
    for (int i = 0; i < 4; i++)
        _materias[i] = nullptr;
}

std::string const & Character::getName() const
{
    return _name;
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_materias[i])
        {
            _materias[i] = m;
            return;
        }
    }
}

void Character::unequip(int idx)
{
    if (idx < 0 || idx >= 4 || !_materias[idx])
        return;
    _materias[idx] = nullptr;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 0 || idx >= 4 || !_materias[idx])
        return;
    _materias[idx]->use(target);
}

AMateria* Character::getMateriaFromInventory(int idx)
{
    if (idx < 0 || idx >= 4)
        return nullptr;
    return _materias[idx];
}
