#include "Materia.hpp"
#include "ICharacter.hpp"

AMateria::AMateria() : _type("materia") {}

AMateria::AMateria(std::string const & type) : _type(type) {}

AMateria::AMateria(AMateria const & ref) : _type(ref._type) {}

AMateria & AMateria::operator=(const AMateria& ref)
{
    if (this != &ref)
        _type = ref._type;
    return *this;
}

AMateria::~AMateria() {}

std::string const & AMateria::getType() const
{
    return _type;
}

void AMateria::use(ICharacter& target)
{
    (void)target;
}
