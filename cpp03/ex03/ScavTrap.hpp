/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgotz <jgotz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:03:43 by jgotz             #+#    #+#             */
/*   Updated: 2024/05/23 16:42:08 by jgotz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScavTrap_HPP
#define ScavTrap_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ~ScavTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    guardGate();
};

#endif