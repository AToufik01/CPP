/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 19:09:21 by ataoufik          #+#    #+#             */
/*   Updated: 2024/09/29 19:27:21 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie(std::string name)
{
    this->name = name;
    std :: cout << "Zombie object "<< this->name << " created"<< std :: endl;
}

Zombie :: Zombie(void)
{
    this->name = "null";
    std :: cout << "Zombie object "<< this->name << " created"<< std :: endl;
}

Zombie :: ~Zombie(void)
{
   std :: cout << "Zombie object destroyed"<< std :: endl;
}

void Zombie ::announce(void)
{
    std :: cout << this->name << " BraiiiiiiinnnzzzZ..."<< std :: endl;
}
void Zombie ::setname(std::string n)
{
    this->name = n;
}