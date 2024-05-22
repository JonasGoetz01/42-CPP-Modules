#include <iostream>
#include <string>

int	main(void)
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	// Printing memory addresses
	std::cout << "Memory address with str var: " << &str << std::endl;
	std::cout << "Memory address with ptr: " << stringPTR << std::endl;
	std::cout << "Memory address with ref: " << &stringREF << std::endl;
	// Printing values
	std::cout << "Value of var: " << str << std::endl;
	std::cout << "Value from ptr: " << *stringPTR << std::endl;
	std::cout << "Value from ref: " << stringREF << std::endl;
	return (0);
}
