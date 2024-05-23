/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgotz <jgotz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:03:38 by jgotz             #+#    #+#             */
/*   Updated: 2024/05/23 16:07:47 by jgotz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
    this->hit_points = 100;
    this->energy_points = 50;
    this->attack_damage = 20;
    std::cout << "ScavTrap " << this->name << " is created" << std::endl;
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap " << this->name << " is destroyed" << std::endl;
}

void ScavTrap::guardGate()
{
    std::cout << "ScavTrap " << this->name << " has entered in Gate keeper mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attack_damage << " points of damage!" << std::endl;
        this->energy_points -= 1;
    }
    else
        std::cout << "ScavTrap " << this->name << " cannot attack!" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    std::cout << "ScavTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
    this->hit_points -= amount;
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if(this->energy_points > 0 && this->hit_points > 0)
    {
        this->hit_points += amount;
        std::cout << "ScavTrap " << this->name << " is repaired by " << amount << " points!" << std::endl;
    }
    else
        std::cout << "ScavTrap " << this->name << " cannot be repaired!" << std::endl;
}

