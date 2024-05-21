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

void PhoneBook::search()
{
	int	i;

	if (this->contactCount == 0)
	{
		std::cout << "Phone book is empty." << std::endl;
		return ;
	}
	std::cout << "     index|first name| last name|  nickname" << std::endl;
	for (int i = 0; i < this->contactCount; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|";
		std::cout << std::setw(10) << this->contacts[i].getFirstName().substr(0,
			10) << "|";
		std::cout << std::setw(10) << this->contacts[i].getLastName().substr(0,
			10) << "|";
		std::cout << std::setw(10) << this->contacts[i].getNickname().substr(0,
			10) << std::endl;
	}
	std::string index;
	std::cout << "Enter an index: ";
	std::getline(std::cin, index);
	if (index.length() != 1 || index[0] < '1' || index[0] > '8')
	{
		std::cout << "Invalid index." << std::endl;
		return ;
	}
	i = index[0] - '1';
	std::cout << "First name: " << this->contacts[i].getFirstName() << std::endl;
	std::cout << "Last name: " << this->contacts[i].getLastName() << std::endl;
	std::cout << "Nickname: " << this->contacts[i].getNickname() << std::endl;
	std::cout << "Phone number: " << this->contacts[i].getPhoneNumber() << std::endl;
	std::cout << "Darkest secret: " << this->contacts[i].getDarkestSecret() << std::endl;
}

Contact::Contact()
{
	this->firstName = "";
	this->lastName = "";
	this->nickname = "";
	this->phoneNumber = "";
	this->darkestSecret = "";
}

Contact::~Contact()
{
}

void Contact::setFirstName(std::string firstName)
{
	this->firstName = firstName;
}

void Contact::setLastName(std::string lastName)
{
	this->lastName = lastName;
}

void Contact::setNickname(std::string nickname)
{
	this->nickname = nickname;
}

void Contact::setPhoneNumber(std::string phoneNumber)
{
	this->phoneNumber = phoneNumber;
}

void Contact::setDarkestSecret(std::string darkestSecret)
{
	this->darkestSecret = darkestSecret;
}

std::string Contact::getFirstName()
{
	return (this->firstName);
}

std::string Contact::getLastName()
{
	return (this->lastName);
}

std::string Contact::getNickname()
{
	return (this->nickname);
}

std::string Contact::getPhoneNumber()
{
	return (this->phoneNumber);
}

std::string Contact::getDarkestSecret()
{
	return (this->darkestSecret);
}
