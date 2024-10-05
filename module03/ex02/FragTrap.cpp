/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/05 21:32:32 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/05 21:41:18 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"FragTrap.hpp"


FragTrap :: FragTrap()
{
    std::cout << "FragTrap : Default Constructor called" << std::endl;
}

FragTrap :: ~FragTrap()
{
    std::cout << "FragTrap : Default destructor called" << std::endl;
}
FragTrap :: FragTrap(std::string name)
{
    _Name = name;
    _HitPoints = 100;
    _EnergyPoints = 100;
    _AttackDamage = 30;
}


void FragTrap ::  highFivesGuys(void)
{
    std::cout << "FragTrap " << _Name << " is asking for a high five!" << std::endl;
}
