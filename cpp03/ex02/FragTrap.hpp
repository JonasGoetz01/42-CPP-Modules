/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgotz <jgotz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:12:46 by jgotz             #+#    #+#             */
/*   Updated: 2024/05/23 16:39:31 by jgotz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FragTrap_HPP
#define FragTrap_HPP

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string name);
        ~FragTrap();
        void    attack(const std::string& target);
        void    takeDamage(unsigned int amount);
        void    beRepaired(unsigned int amount);
        void    highFivesGuys(void);
};

#endif