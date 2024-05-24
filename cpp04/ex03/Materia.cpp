#include "Materia.hpp"

Materia::Materia()
{
}

Materia::Materia(const Materia& other)
{
    *this = other;
}

Materia::~Materia()
{
}

Materia& Materia::operator=(const Materia& other)
{
    (void)other;
    return *this;
}

const std::string& Materia::getType() const
{
    return _type;
}

void Materia::use(ICharacter& target)
{
    std::cout << "Materia used on " << target.getName() << std::endl;
}

Materia::Materia(const std::string& type)
{
    _type = type;
}

AMateria* Materia::clone() const
{
    return new Materia(_type);
}
