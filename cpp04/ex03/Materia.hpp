#pragma once

#include <iostream>
#include <string>

#include "Character.hpp"

class ICharacter;

class AMateria
{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria(std::string const & type);
        AMateria& operator=(const AMateria& other);
		virtual ~AMateria();
		AMateria(AMateria const & ref);
		virtual std::string const & getType() const;
		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
};
