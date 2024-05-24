#include "Character.hpp"

Character::Character(std::string name) : _name(name)
{
    for (int i = 0; i < 4; i++)
        _materia[i] = NULL;
}

Character::Character(const Character& other)
{
    _name = other._name;
    for (int i = 0; i < 4; i++)
        _materia[i] = other._materia[i];
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (_materia[i])
            delete _materia[i];
}

Character& Character::operator=(const Character& other)
{
    _name = other._name;
    for (int i = 0; i < 4; i++)
        _materia[i] = other._materia[i];
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
        if (!_materia[i])
        {
            _materia[i] = m;
            return;
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
    if (idx >= 0 && idx < 4 && _materia[idx])
    {
        if (_materia[idx]->getType() == "ice")
            Ice().use(target);
        else if (_materia[idx]->getType() == "cure")
            Cure().use(target);
        else
            (this->_materia[idx])->use(target);
    }
}
