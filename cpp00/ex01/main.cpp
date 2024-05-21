#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->contactCount = 0;
	this->contactIndex = 0;
}

PhoneBook::~PhoneBook()
{
}

void PhoneBook::add()
{
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
	std::cout << "Enter first name: ";
	std::getline(std::cin, firstName);
	std::cout << "Enter last name: ";
	std::getline(std::cin, lastName);
	std::cout << "Enter nickname: ";
	std::getline(std::cin, nickname);
	std::cout << "Enter phone number: ";
	std::getline(std::cin, phoneNumber);
	std::cout << "Enter darkest secret: ";
	std::getline(std::cin, darkestSecret);
	this->contacts[this->contactIndex].setFirstName(firstName);
	this->contacts[this->contactIndex].setLastName(lastName);
	this->contacts[this->contactIndex].setNickname(nickname);
	this->contacts[this->contactIndex].setPhoneNumber(phoneNumber);
	this->contacts[this->contactIndex].setDarkestSecret(darkestSecret);
	this->contactCount++;
	this->contactIndex++;
	if (this->contactIndex == 8)
	{
		this->contactIndex = 0;
	}
}
