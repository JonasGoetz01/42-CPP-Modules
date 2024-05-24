#pragma once

#include "Materia.hpp"

class Cure: public AMateria
{
    public:
        Cure();
        Cure(const Cure& other);
        virtual ~Cure();
        Cure& operator=(const Cure& other);
        virtual AMateria* clone() const;
        virtual void use(ICharacter& target);
};