#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::~Cure()
{
}

Cure::Cure(Cure const & ref) : AMateria(ref)
{
}

Cure & Cure::operator=(Cure const & ref)
{
    AMateria::operator=(ref);
    return *this;
}

std::string const & Cure::getType() const
{
    return _type;
}

Cure *Cure::clone() const
{
    return new Cure(*this);
}

void Cure::use(ICharacter& target)
{
    std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}

AMateria *Cure::clone() const
{
    return new Cure(*this);
}
