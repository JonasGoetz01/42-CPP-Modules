/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgotz <jgotz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 16:03:46 by jgotz             #+#    #+#             */
/*   Updated: 2024/05/23 16:09:12 by jgotz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap c1 = ClapTrap("C1");
    ClapTrap c2 = ClapTrap("C2");
    ScavTrap s1 = ScavTrap("S1");

    c1.attack("C2");
    c2.takeDamage(5);
    c2.beRepaired(5);
    c1.attack("C2");
    c2.takeDamage(5);
    c2.beRepaired(5);
    c1.attack("C2");
    c2.takeDamage(10);
    c2.beRepaired(5);

    s1.attack("C1");
    s1.guardGate();
    s1.takeDamage(5);
    s1.takeDamage(5);
}