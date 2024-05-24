#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice() : AMateria("Ice") {}

Ice::~Ice() {}

Ice::Ice(Ice const & ref) : AMateria(ref) {}

Ice & Ice::operator=(Ice const & ref)
{
    if (this != &ref)
        AMateria::operator=(ref);
    return *this;
}

Ice *Ice::clone() const
{
    return new Ice(*this);
}

void Ice::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << std::endl;
}

std::string const & Ice::getType() const
{
    return _type;
}
