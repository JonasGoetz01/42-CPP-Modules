#include "Materia.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
}

AMateria::~AMateria()
{
}

AMateria& AMateria::operator=(const AMateria& other)
{
    if (this == &other)
        return (*this);
    _type = other._type;
    return (*this);
}

std::string const & AMateria::getType() const
{
    return (_type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "AMateria used on " << target.getName() << std::endl;
}
