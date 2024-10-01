/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 19:32:31 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/01 16:17:31 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"


Weapon :: Weapon()
{
    
}

Weapon :: Weapon(std::string type)
{
    this->type = type;
}
const std::string& Weapon:: getType(void)
{
    return type;
}

void Weapon :: setType(const std::string newType)
{
    this->type = newType;
}