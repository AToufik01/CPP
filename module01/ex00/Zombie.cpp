/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/29 18:08:58 by ataoufik          #+#    #+#             */
/*   Updated: 2024/09/29 19:13:20 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie :: Zombie(std::string name)
{
    this->name = name;
    std :: cout << "Zombie object "<< this->name << " created"<< std :: endl;
}

Zombie :: ~Zombie(void)
{
    std :: cout << "Zombie object "<< this->name << " destroyed"<< std :: endl;
}

void Zombie :: announce(void)
{
     std :: cout <<this->name << " BraiiiiiiinnnzzzZ..."<< std :: endl;
}