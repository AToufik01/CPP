/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 16:18:58 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/05 20:53:31 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"ScavTrap.hpp"

ScavTrap :: ScavTrap(std::string name)
{
    _Name = name;
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
}
ScavTrap :: ~ScavTrap()
{
     std::cout << "ScavTrap :Default destructor called" << std::endl;
}

void ScavTrap :: guardGate()
{
     std::cout << "ScavTrap " << _Name << " is now in Gatekeeper mode!" << std::endl;
}


void ScavTrap::attack(const std::string& target)
{
    if (this->_EnergyPoints > 0)
    {
        std::cout << "ScavTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
        this->_EnergyPoints--;
    }
    else
        std::cout << "ScavTrap " << this->_Name << " is out of energy and can't attack!" << std::endl;
}