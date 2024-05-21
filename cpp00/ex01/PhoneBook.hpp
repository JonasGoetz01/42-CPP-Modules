#include <iomanip>
#include <iostream>
#include <sstream>

class Contact
{
  public:
	Contact();
	~Contact();
	void setFirstName(std::string firstName);
	void setLastName(std::string lastName);
	void setNickname(std::string nickname);
	void setPhoneNumber(std::string phoneNumber);
	void setDarkestSecret(std::string darkestSecret);
	std::string getFirstName();
	std::string getLastName();
	std::string getNickname();
	std::string getPhoneNumber();
	std::string getDarkestSecret();

  private:
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;
};

class PhoneBook
{
  public:
	PhoneBook();
	~PhoneBook();
	void add();
	void search();

  private:
	int contactCount;
	int contactIndex;
	Contact contacts[8];
};
