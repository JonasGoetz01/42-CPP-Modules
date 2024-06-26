#pragma once

#define RESET "\033[0m"
#define RED "\033[31m"
#define GREEN "\033[32m"
#define BOLDGREEN "\033[1m\033[32m"
#define BOLDYELLOW "\033[1m\033[33m"
#define BOLDRED "\033[1m\033[31m"

#include <iostream>

class Base
{
public:
	virtual ~Base() {};
};

Base*	generate(void);
void	identify(Base* p);
void	identify(Base& p);
