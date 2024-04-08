#include "Data.hpp"

Data::Data() : _data(0) {}

Data::Data(const int data) : _data(data) {}

Data::Data(const Data& other) { *this = other; }

Data& Data::operator=(const Data& other)
{
	if (this != &other) {
		this->_data = other.getData();
		return (*this);
	}
	std::cout << RED << "Error assigning the same value" << RESET << std::endl;
	return (*this);
}

Data::~Data() {}

int	Data::getData() const { return (this->_data); }

std::ostream&	operator<<(std::ostream& out, const Data& other)
{
	out << "data: " << other.getData() << std::endl;
	return (out);
}
