/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgotz <jgotz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:03:38 by jgotz             #+#    #+#             */
/*   Updated: 2024/05/23 18:14:15 by jgotz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name")
{
    this->hit_points = FragTrap::hit_points;
    this->energy_points = ScavTrap::energy_points;
    this->attack_damage = FragTrap::attack_damage;
    this->name = name;
    std::cout << "DiamondTrap " << this->name << " is created" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "DiamondTrap " << this->name << " is destroyed" << std::endl;
}

void DiamondTrap::whoAmI()
{
    std::cout << "DiamondTrap " << this->name << " and ClapTrap " << ClapTrap::name << "!" << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
    ScavTrap::attack(target);
}
