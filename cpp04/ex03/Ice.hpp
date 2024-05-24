#pragma once

#include "Materia.hpp"

class Ice : public AMateria
{
    private:
		std::string _type;

	public:
		Ice();
		~Ice();
		Ice(Ice const & ref);
		Ice & operator=(Ice const & ref);
		std::string const & getType() const;
		Ice *clone() const;
		void use(ICharacter& target);
};
