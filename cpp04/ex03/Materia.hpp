#pragma once

#include <iostream>
#include <string>

#include "Character.hpp"

class ICharacter;

class AMateria
{
    protected:
        std::string _type;
    public:
        AMateria(std::string const & type);
        AMateria(const AMateria& other);
        virtual ~AMateria();
        AMateria& operator=(const AMateria& other);
        std::string const & getType() const;
        virtual AMateria* clone() const = 0;
        void use(ICharacter& target);
};
