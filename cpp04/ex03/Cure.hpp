#pragma once

#include "Materia.hpp"
#include <iostream>

class Cure : public AMateria
{
	public:
		Cure();
		~Cure();
		Cure(Cure const & ref);
		Cure & operator=(Cure const & ref);
		std::string const & getType() const;
		Cure *clone() const;
		void use(ICharacter& target);
};
