#pragma once

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BOLDGREEN "\033[1m\033[32m"
#define BOLDRED "\033[1m\033[31m"

#include <iostream>
#include <cstdint>

class Data
{
private:
	int _data;
public:
	Data();
	Data(const int data);
	Data(const Data& other);
	Data& operator=(const Data& other);
	~Data();

	int	getData() const;
};

std::ostream&	operator<<(std::ostream& out, const Data& other);

