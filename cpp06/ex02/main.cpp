#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

int	main(void)
{
	std::srand(std::time(0));
	Base* random;
	Base* derivedA = new A;
	Base* derivedB = new B;
	Base* derivedC = new C;
	Base* normal = new Base;

	std::cout << BOLDGREEN << "First pointer arg, then reference with base ptr" << RESET << std::endl;

	identify(normal);
	identify(*normal);

	random = generate();

	std::cout << BOLDGREEN << "First pointer arg, then reference with random ptr" << RESET << std::endl;

	identify(random);
	identify(*random);

	std::cout << BOLDGREEN << "First pointer arg, then reference with A ptr" << RESET << std::endl;

	identify(derivedA);
	identify(*derivedA);

	std::cout << BOLDGREEN << "First pointer arg, then reference with B ptr" << RESET << std::endl;

	identify(derivedB);
	identify(*derivedB);

	std::cout << BOLDGREEN << "First pointer arg, then reference with C ptr" << RESET << std::endl;

	identify(derivedC);
	identify(*derivedC);

	delete normal;
	delete random;
	delete derivedA;
	delete derivedB;
	delete derivedC;

	return (0);
}
