/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 14:50:19 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/05 15:38:05 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap :: ClapTrap()
{
    std::cout << "Default Constructor called" << std::endl;
}

ClapTrap :: ClapTrap(std::string name) :_Name(name), _HitPoints(10),_EnergyPoints(10),_AttackDamage(0)
{
    std::cout << "Constructor for the name "<<this->_Name<<" called" << std::endl;

}
ClapTrap :: ~ClapTrap()
{
    std::cout << "Default destructor called" << std::endl;
}
// int ClapTrap :: getval()
// {
//     return(this->_HitPoints);
// }

void ClapTrap::attack(const std::string& target)
{
    if (_EnergyPoints > 0)
    {
        std::cout << "ClapTrap " << this->_Name << " attacks " << target << ", causing " << this->_AttackDamage << " points of damage!" << std::endl;
        _EnergyPoints--;
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
   if (_EnergyPoints > 0)
   {
        if (_HitPoints== 10)
        {
            std::cout <<"ClapTrap "<<this->_Name <<" didn't repair because hit points are full." <<std:: endl;
            return ;
        }
        std::cout <<"ClapTrap "<<this->_Name << " is repairing hit points."<<std:: endl;
        _EnergyPoints--;
        _HitPoints+= amount;
        if(_HitPoints>10)
            _HitPoints = 10;
   }
   else
   {
        std::cout <<"ClapTrap "<<this->_Name << " couldn't repair due to low energy."<<std:: endl;
   }
}