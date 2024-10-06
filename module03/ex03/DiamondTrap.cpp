/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 22:32:29 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/06 18:42:16 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"DiamondTrap.hpp"

// DiamondTrap :: DiamondTrap()
// {
//     std::cout << "DiamondTrap : Defaut constructor called" << std ::endl;
// }

DiamondTrap :: DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), ScavTrap(name), FragTrap(name),_Name(name)
{
    this->_HitPoints = FragTrap::_HitPoints;
    this->_EnergyPoints = ScavTrap::_EnergyPoints;
    this->_AttackDamage = FragTrap::_AttackDamage;
    std::cout << "ClapTrap : Constructor for the name "<<this->_Name<<" called" << std::endl;
}

DiamondTrap :: ~DiamondTrap()
{
    std::cout << "DiamondTrap : Defaut Destruction called" << std ::endl;
}

void DiamondTrap :: whoAmI()
{
    std::cout << "DiamondTrap name: " << _Name << std::endl;
    std::cout << "ClapTrap name: " << ClapTrap::_Name  << std::endl;
}

void DiamondTrap :: attack(const std::string& target)
{
    ScavTrap::attack(target);
}
