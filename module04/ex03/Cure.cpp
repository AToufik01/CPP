/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 12:22:21 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 14:24:20 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure :: Cure()
{
    std::cout << "Cure : Default Constructor called"<<std::endl;
}


Cure :: ~Cure()
{
    std::cout << "Cure : Default destructors called"<<std::endl;
}

AMateria* Cure :: clone() const 
{
    return new Cure(*this);
}

void Cure :: use(ICharacter& target)
{
    std::cout << "* heals "<<target.getName()<<"'s wounds *" <<std ::endl;
}