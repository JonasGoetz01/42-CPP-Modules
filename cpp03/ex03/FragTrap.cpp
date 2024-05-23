/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgotz <jgotz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:03:38 by jgotz             #+#    #+#             */
/*   Updated: 2024/05/23 17:08:24 by jgotz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("default_name")
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << this->name << " is created" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 100;
    this->attack_damage = 30;
    std::cout << "FragTrap " << this->name << " is created" << std::endl;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap " << this->name << " is destroyed" << std::endl;
}

void FragTrap::highFivesGuys()
{
    std::cout << "FragTrap " << this->name << " requests a high five!" << std::endl;
}

void FragTrap::attack(const std::string& target)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points -= 1;
    }
    else
        std::cout << "FragTrap " << this->name << " cannot attack!" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
    std::cout << "FragTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    this->hit_points -= amount;
}

void FragTrap::beRepaired(unsigned int amount)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        this->hit_points += amount;
        std::cout << "FragTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
    }
    else
        std::cout << "FragTrap " << this->name << " cannot be repaired!" << std::endl;
}

