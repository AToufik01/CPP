/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:50:19 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/05 21:44:11 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap :: ClapTrap() :_Name("unknown"), _HitPoints(10),_EnergyPoints(10),_AttackDamage(0)
{
    std::cout << "ClapTrap : Default Constructor called" << std::endl;
}

ClapTrap :: ClapTrap(std::string name)
{
    this->_Name = name;
    std::cout << "ClapTrap : Constructor for the name "<<this->_Name<<" called" << std::endl;

}
ClapTrap :: ~ClapTrap()
{
    std::cout << "ClapTrap : Default destructor called" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
    if (this->_EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
        this->_EnergyPoints--;
    }
    else
        std::cout << "ClapTrap " << this->_Name << " is out of energy and can't attack!" << std::endl;
}


void ClapTrap :: takeDamage(unsigned int amount)
{
    std::cout<<"ClapTrap "<<this->_Name << " takes damege "<< amount<<std::endl;
    if(amount >= (unsigned int)this->_HitPoints)
         this->_HitPoints = 0;
    else
        this->_HitPoints -= amount;
}

void ClapTrap :: beRepaired(unsigned int amount)
{
   if (this->_EnergyPoints > 0 && this->_HitPoints > 0)
   {
        std::cout <<"ClapTrap "<<this->_Name << " is repairing hit points."<<std:: endl;
        this->_HitPoints+= amount;
        this->_EnergyPoints--;
   }
   else
        std::cout <<"ClapTrap "<<this->_Name << " couldn't repair due to low energy."<<std:: endl;
}