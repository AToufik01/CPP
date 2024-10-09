/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 13:30:20 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/09 19:36:10 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria :: AMateria()
{
    std::cout << "AMateria : Default Constructor called"<<std::endl;
}

AMateria :: ~AMateria()
{
    std::cout << "AMateria : Default Constructor called"<<std::endl;
}

AMateria :: AMateria(std::string const & type):_type(type)
{
    
}


std::string const & AMateria ::getType() const
{
    return (this->_type);
}


void AMateria :: use(ICharacter& target)
{
    (void)target;
    
}