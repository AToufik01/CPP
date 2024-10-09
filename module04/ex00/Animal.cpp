/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ataoufik <ataoufik@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 19:38:49 by ataoufik          #+#    #+#             */
/*   Updated: 2024/10/07 15:37:35 by ataoufik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal :: Animal():type("unknown")
{
    std :: cout <<"Animal : Default constructors called"<<std :: endl;
}

Animal :: ~Animal()
{
    std :: cout <<"Animal :  Default destructors called"<<std :: endl;
}

void Animal :: makeSound()
{
    std::cout << "Some generic animal sound" << std::endl;
}


std::string Animal ::getType()
{
    return(type);
}