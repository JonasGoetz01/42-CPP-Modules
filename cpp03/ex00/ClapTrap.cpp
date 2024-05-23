#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
    this->name = name;
    std::cout << "ClapTrap " << this->name << " is created" << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap " << this->name << " is destroyed" << std::endl;
}

void    ClapTrap::attack(const std::string& target)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points -= 1;
    }
    else
        std::cout << "ClapTrap " << this->name << " cannot attack!" << std::endl;
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
}

void    ClapTrap::beRepaired(unsigned int amount)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        this->hit_points += amount;
        std::cout << "ClapTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
    }
    else
        std::cout << "ClapTrap " << this->name << " cannot be repaired!" << std::endl;
}