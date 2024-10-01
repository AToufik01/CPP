/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 17:26:06 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/01 18:42:21 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB:: attack(void)
{
    std::cout <<this->name << " attacks with their "<< this->weapon->getType()<< std::endl;
}

HumanB:: HumanB(std:: string name)
{
    this->name = name;
    std::cout << "HumanB " <<name << " created with no weapon" <<std:: endl; 
}

HumanB :: ~HumanB()
{
    std :: cout<<"HumanB " << this->name << " destroyed"<<std::endl;
}

void HumanB :: setWeapon(Weapon &weapon)
{
    this->weapon = &weapon; // weapon == NULL
}