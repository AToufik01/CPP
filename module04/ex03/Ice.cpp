/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:25:00 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 14:22:46 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Ice.hpp"

Ice :: Ice()
{
std::cout << "Cure : Default Constructor called"<<std::endl;
}

Ice :: ~Ice()
{
    std::cout << "Cure : Default destructors called"<<std::endl;
}

AMateria* Ice :: clone() const 
{
    return new Ice(*this);
}


void Ice :: use(ICharacter& target)
{
    std::cout  <<"* shoots an ice bolt at "<<target.getName()<<std::endl;
}