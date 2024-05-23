#pragma once

#include "Materia.hpp"

class Character
{
    public:
        virtual ~Character() {}
        virtual std::string const & getName() const;
        virtual void equip(AMateria* m);
        virtual void unequip(int idx);
        virtual void use(int idx, ICharacter& target);
};
