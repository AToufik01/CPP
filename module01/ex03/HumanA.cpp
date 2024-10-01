/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 20:03:54 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/01 16:09:04 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
void    HumanA:: attack(void)
{
    std::cout <<this->name<<"attacks with their "<< this->weapon.getType()<< std::endl;
}

HumanA :: ~HumanA()
{
    std:: cout << "HumanA "<< this->name << "destroyed"<<std::endl;
}
HumanA :: HumanA(std::string name,Weapon &weapon): weapon(weapon)
{
    std:: cout << "HumanA " << name << " created with "<< this->weapon.getType()<<std:: endl; 
}
