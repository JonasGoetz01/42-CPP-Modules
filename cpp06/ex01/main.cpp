#include "Serializer.hpp"

int	main(void)
{
	Data obj(-43123458);
	Data* converted_obj;
	uintptr_t address = 0;

	std::cout << GREEN << "obj data before conversion: " << obj << RESET;
	std::cout << GREEN << "obj address before conversion: " << &obj << RESET << std::endl;
	std::cout << GREEN << "address before conversion: " << address << RESET << std::endl;

	address = Serializer::serialize(&obj);

	std::cout << GREEN << "address now stores the address of obj: " << &address << RESET << std::endl;

	converted_obj = Serializer::deserialize(address);

	std::cout << BOLDGREEN << "pointer after conversion: " << *converted_obj << RESET;
	std::cout << BOLDGREEN << "pointer address after conversion: " << converted_obj << RESET << std::endl;
    // Check if deserialization works correctly
    if (&obj == converted_obj) {
        std::cout << "Deserialization successful!" << std::endl;
    } else {
        std::cout << "Deserialization failed." << std::endl;
    }

	return (0);
}
