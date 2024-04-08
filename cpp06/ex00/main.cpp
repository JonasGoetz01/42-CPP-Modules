
#include "ScalarConverter.hpp"

int	main(int ac, char **av)
{
	if (ac != 2) {
		std::cout << RED << "Error: one number or char is required as an argument" << RESET << std::endl;
		return (EXIT_FAILURE);
	}
	ScalarConverter::convert(av[1]);
	return (EXIT_SUCCESS);
}
