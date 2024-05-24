#pragma once

#include "Materia.hpp"
#include <iostream>

class Ice : public AMateria
{
	public:
		Ice();
		~Ice();
		Ice(Ice const & ref);
		Ice & operator=(Ice const & ref);
		std::string const & getType() const;
		Ice *clone() const;
		void use(ICharacter& target);
};
