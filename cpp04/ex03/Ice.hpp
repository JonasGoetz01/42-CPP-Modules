#pragma once

#include "Materia.hpp"

class Ice: public AMateria
{
    public:
        Ice();
        Ice(const Ice& other);
        virtual ~Ice();
        Ice& operator=(const Ice& other);
        virtual AMateria* clone() const;
        void use(ICharacter& target);
};